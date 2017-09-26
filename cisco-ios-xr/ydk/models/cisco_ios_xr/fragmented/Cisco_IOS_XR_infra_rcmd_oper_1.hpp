#ifndef _CISCO_IOS_XR_INFRA_RCMD_OPER_1_
#define _CISCO_IOS_XR_INFRA_RCMD_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_rcmd_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


class Rcmd::Ospf::Instances::Instance::PrefixEventStatistics : public ydk::Entity
{
    public:
        PrefixEventStatistics();
        ~PrefixEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventStatistic; //type: Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic> > prefix_event_statistic;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics


class Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic : public ydk::Entity
{
    public:
        PrefixEventStatistic();
        ~PrefixEventStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_info; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf last_event_time; //type: string
        ydk::YLeaf last_priority; //type: RcmdPriorityLevel
        ydk::YLeaf last_route_type; //type: RcmdShowRoute
        ydk::YLeaf last_change_type; //type: RcmdChange
        ydk::YLeaf last_cost; //type: uint32
        ydk::YLeaf critical_priority; //type: uint32
        ydk::YLeaf high_priority; //type: uint32
        ydk::YLeaf medium_priority; //type: uint32
        ydk::YLeaf low_priority; //type: uint32
        ydk::YLeaf add_count; //type: uint32
        ydk::YLeaf modify_count; //type: uint32
        ydk::YLeaf delete_count; //type: uint32
        ydk::YLeaf threshold_exceed_count; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries : public ydk::Entity
{
    public:
        PrefixEventSummaries();
        ~PrefixEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventSummary; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary> > prefix_event_summary;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary : public ydk::Entity
{
    public:
        PrefixEventSummary();
        ~PrefixEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed> > lsa_processed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path> > path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine> > time_line;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa> > trigger_lsa;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath> > lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls> > lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines : public ydk::Entity
{
    public:
        SpfRunOfflines();
        ~SpfRunOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfRunOffline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline> > spf_run_offline;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline : public ydk::Entity
{
    public:
        SpfRunOffline();
        ~SpfRunOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_run_number; //type: uint32
        class SpfSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary
        class DijkstraRun; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun
        class InterAreaAndExternal; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun> > dijkstra_run;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal> > inter_area_and_external;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun : public ydk::Entity
{
    public:
        DijkstraRun();
        ~DijkstraRun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra_run_number; //type: uint32
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf duration; //type: string
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa
        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed> > lsa_processed;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority> > priority;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa> > trigger_lsa;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority : public ydk::Entity
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

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary> priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal : public ydk::Entity
{
    public:
        InterAreaAndExternal();
        ~InterAreaAndExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority> > priority;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority : public ydk::Entity
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

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf type3ls_as; //type: uint32
        ydk::YLeaf type4ls_as; //type: uint32
        ydk::YLeaf type57ls_as; //type: uint32
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary : public ydk::Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_dijkstra_runs; //type: uint16
        ydk::YLeaf total_inter_area_and_external_batches; //type: uint16
        ydk::YLeaf total_type12lsa_changes; //type: uint16
        ydk::YLeaf total_type357lsa_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary> > priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries : public ydk::Entity
{
    public:
        SpfRunSummaries();
        ~SpfRunSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfRunSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary> > spf_run_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary : public ydk::Entity
{
    public:
        SpfRunSummary();
        ~SpfRunSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_run_number; //type: uint32
        class SpfSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary
        class DijkstraRun; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun
        class InterAreaAndExternal; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun> > dijkstra_run;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal> > inter_area_and_external;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun : public ydk::Entity
{
    public:
        DijkstraRun();
        ~DijkstraRun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra_run_number; //type: uint32
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf duration; //type: string
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa
        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed> > lsa_processed;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority> > priority;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa> > trigger_lsa;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority : public ydk::Entity
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

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary> priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal : public ydk::Entity
{
    public:
        InterAreaAndExternal();
        ~InterAreaAndExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority> > priority;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority : public ydk::Entity
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

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf type3ls_as; //type: uint32
        ydk::YLeaf type4ls_as; //type: uint32
        ydk::YLeaf type57ls_as; //type: uint32
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary : public ydk::Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_dijkstra_runs; //type: uint16
        ydk::YLeaf total_inter_area_and_external_batches; //type: uint16
        ydk::YLeaf total_type12lsa_changes; //type: uint16
        ydk::YLeaf total_type357lsa_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary> > priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines : public ydk::Entity
{
    public:
        SummaryExternalEventOfflines();
        ~SummaryExternalEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryExternalEventOffline; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline> > summary_external_event_offline;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline : public ydk::Entity
{
    public:
        SummaryExternalEventOffline();
        ~SummaryExternalEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed> > lsa_processed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path> > path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine> > time_line;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa> > trigger_lsa;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath> > lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls> > lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics : public ydk::Entity
{
    public:
        SummaryExternalEventStatistics();
        ~SummaryExternalEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inter_area_routes; //type: uint32
        ydk::YLeaf inter_area_added; //type: uint32
        ydk::YLeaf inter_area_modified; //type: uint32
        ydk::YLeaf inter_area_deleted; //type: uint32
        ydk::YLeaf inter_area_critical; //type: uint32
        ydk::YLeaf inter_area_high; //type: uint32
        ydk::YLeaf inter_area_medium; //type: uint32
        ydk::YLeaf inter_area_low; //type: uint32
        ydk::YLeaf external_routes; //type: uint32
        ydk::YLeaf external_added; //type: uint32
        ydk::YLeaf external_modified; //type: uint32
        ydk::YLeaf external_deleted; //type: uint32
        ydk::YLeaf external_critical; //type: uint32
        ydk::YLeaf external_high; //type: uint32
        ydk::YLeaf external_medium; //type: uint32
        ydk::YLeaf external_low; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries : public ydk::Entity
{
    public:
        SummaryExternalEventSummaries();
        ~SummaryExternalEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryExternalEventSummary; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary> > summary_external_event_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary : public ydk::Entity
{
    public:
        SummaryExternalEventSummary();
        ~SummaryExternalEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed> > lsa_processed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path> > path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine> > time_line;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa> > trigger_lsa;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath> > lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls> > lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa


class Rcmd::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

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

        class Isis; //type: Rcmd::Process::Isis
        class Ospf; //type: Rcmd::Process::Ospf
        class Ldp; //type: Rcmd::Process::Ldp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp> ldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf> ospf;
        
}; // Rcmd::Process


class Rcmd::Process::Isis : public ydk::Entity
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

        class Process_; //type: Rcmd::Process::Isis::Process_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_> > process;
        
}; // Rcmd::Process::Isis


class Rcmd::Process::Isis::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

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

        ydk::YLeaf protocol_id; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        class InstanceName; //type: Rcmd::Process::Isis::Process_::InstanceName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_::InstanceName> > instance_name;
        
}; // Rcmd::Process::Isis::Process_


class Rcmd::Process::Isis::Process_::InstanceName : public ydk::Entity
{
    public:
        InstanceName();
        ~InstanceName();

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
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf lsp_regeneration_count; //type: uint32
        ydk::YLeaf lsp_regeneration_serial; //type: uint32
        ydk::YLeaf arch_spf_event; //type: uint32
        ydk::YLeaf arch_lsp_regeneration; //type: uint32
        class Instance; //type: Rcmd::Process::Isis::Process_::InstanceName::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_::InstanceName::Instance> > instance;
        
}; // Rcmd::Process::Isis::Process_::InstanceName


class Rcmd::Process::Isis::Process_::InstanceName::Instance : public ydk::Entity
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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: RcmdShowInstState
        ydk::YLeaf instance_deleted; //type: RcmdBoolYesNo
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf spf_offset; //type: uint32
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf arch_spf_run; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf total_spt_nos; //type: uint32

}; // Rcmd::Process::Isis::Process_::InstanceName::Instance


class Rcmd::Process::Ldp : public ydk::Entity
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

        class Process_; //type: Rcmd::Process::Ldp::Process_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_> > process;
        
}; // Rcmd::Process::Ldp


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_1_ */

