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


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines : public ydk::Entity
{
    public:
        PrefixEventOfflines();
        ~PrefixEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventOffline; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline> > prefix_event_offline;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline : public ydk::Entity
{
    public:
        PrefixEventOffline();
        ~PrefixEventOffline();

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
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path> > path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa> > trigger_lsa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine> > time_line;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed> > lsa_processed;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime : public ydk::Entity
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

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime : public ydk::Entity
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

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path : public ydk::Entity
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
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath> > lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath : public ydk::Entity
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

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


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


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine : public ydk::Entity
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
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls> > lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp : public ydk::Entity
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

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


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


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed : public ydk::Entity
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

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


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


class Rcmd::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Normal; //type: Rcmd::Server::Normal
        class Detail; //type: Rcmd::Server::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal> normal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail> detail;
        
}; // Rcmd::Server


class Rcmd::Server::Normal : public ydk::Entity
{
    public:
        Normal();
        ~Normal();

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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf status; //type: RcmdBagEnableDisable
        ydk::YLeaf max_events; //type: uint32
        ydk::YLeaf event_buffer_size; //type: uint32
        ydk::YLeaf monitoring_interval; //type: uint32
        ydk::YLeaf next_interval; //type: uint32
        ydk::YLeaf max_interface_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf node_rp_count; //type: uint32
        ydk::YLeaf node_lc_count; //type: uint32
        ydk::YLeaf diag_node_count; //type: uint32
        ydk::YLeaf disabled_node_count; //type: uint32
        ydk::YLeaf in_active_node_count; //type: uint32
        ydk::YLeaf last_process_start_time; //type: string
        ydk::YLeaf last_process_duration; //type: string
        ydk::YLeaf last_process_state; //type: RcmdShowPrcsState
        ydk::YLeaf process_count; //type: uint32
        ydk::YLeaf spf_process_count; //type: uint32
        ydk::YLeaf reports_archive_path; //type: string
        ydk::YLeaf reports_archive_node; //type: string
        ydk::YLeaf last_archival_status; //type: string
        ydk::YLeaf last_archival_error; //type: string
        ydk::YLeaf last_archival_error_time; //type: string
        ydk::YLeaf archive_count; //type: uint32
        ydk::YLeaf diagnostics_archive_path; //type: string
        ydk::YLeaf diagnostics_archive_node; //type: string
        class ProtocolConfig; //type: Rcmd::Server::Normal::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Normal::ServerDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig> > protocol_config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail> > server_detail;
        
}; // Rcmd::Server::Normal


class Rcmd::Server::Normal::ProtocolConfig : public ydk::Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

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

        ydk::YLeaf protocol_name; //type: string
        class Priority; //type: Rcmd::Server::Normal::ProtocolConfig::Priority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig::Priority> > priority;
        
}; // Rcmd::Server::Normal::ProtocolConfig


class Rcmd::Server::Normal::ProtocolConfig::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority_name; //type: RcmdPriorityLevel
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf disable; //type: RcmdBoolYesNo

}; // Rcmd::Server::Normal::ProtocolConfig::Priority


class Rcmd::Server::Normal::ServerDetail : public ydk::Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

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

        ydk::YLeaf overload_suspend; //type: uint32
        ydk::YLeaf memory_suspend; //type: uint32
        class TraceInformation; //type: Rcmd::Server::Normal::ServerDetail::TraceInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail::TraceInformation> > trace_information;
        
}; // Rcmd::Server::Normal::ServerDetail


class Rcmd::Server::Normal::ServerDetail::TraceInformation : public ydk::Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

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

        ydk::YLeaf trace_name; //type: string
        ydk::YLeaf total_stats; //type: uint32
        ydk::YLeaf last_run_stats; //type: uint32
        ydk::YLeaf error_stats; //type: uint32

}; // Rcmd::Server::Normal::ServerDetail::TraceInformation


class Rcmd::Server::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf status; //type: RcmdBagEnableDisable
        ydk::YLeaf max_events; //type: uint32
        ydk::YLeaf event_buffer_size; //type: uint32
        ydk::YLeaf monitoring_interval; //type: uint32
        ydk::YLeaf next_interval; //type: uint32
        ydk::YLeaf max_interface_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf node_rp_count; //type: uint32
        ydk::YLeaf node_lc_count; //type: uint32
        ydk::YLeaf diag_node_count; //type: uint32
        ydk::YLeaf disabled_node_count; //type: uint32
        ydk::YLeaf in_active_node_count; //type: uint32
        ydk::YLeaf last_process_start_time; //type: string
        ydk::YLeaf last_process_duration; //type: string
        ydk::YLeaf last_process_state; //type: RcmdShowPrcsState
        ydk::YLeaf process_count; //type: uint32
        ydk::YLeaf spf_process_count; //type: uint32
        ydk::YLeaf reports_archive_path; //type: string
        ydk::YLeaf reports_archive_node; //type: string
        ydk::YLeaf last_archival_status; //type: string
        ydk::YLeaf last_archival_error; //type: string
        ydk::YLeaf last_archival_error_time; //type: string
        ydk::YLeaf archive_count; //type: uint32
        ydk::YLeaf diagnostics_archive_path; //type: string
        ydk::YLeaf diagnostics_archive_node; //type: string
        class ProtocolConfig; //type: Rcmd::Server::Detail::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Detail::ServerDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig> > protocol_config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail> > server_detail;
        
}; // Rcmd::Server::Detail


class Rcmd::Server::Detail::ProtocolConfig : public ydk::Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

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

        ydk::YLeaf protocol_name; //type: string
        class Priority; //type: Rcmd::Server::Detail::ProtocolConfig::Priority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig::Priority> > priority;
        
}; // Rcmd::Server::Detail::ProtocolConfig


class Rcmd::Server::Detail::ProtocolConfig::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority_name; //type: RcmdPriorityLevel
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf disable; //type: RcmdBoolYesNo

}; // Rcmd::Server::Detail::ProtocolConfig::Priority


class Rcmd::Server::Detail::ServerDetail : public ydk::Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

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

        ydk::YLeaf overload_suspend; //type: uint32
        ydk::YLeaf memory_suspend; //type: uint32
        class TraceInformation; //type: Rcmd::Server::Detail::ServerDetail::TraceInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail::TraceInformation> > trace_information;
        
}; // Rcmd::Server::Detail::ServerDetail


class Rcmd::Server::Detail::ServerDetail::TraceInformation : public ydk::Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

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

        ydk::YLeaf trace_name; //type: string
        ydk::YLeaf total_stats; //type: uint32
        ydk::YLeaf last_run_stats; //type: uint32
        ydk::YLeaf error_stats; //type: uint32

}; // Rcmd::Server::Detail::ServerDetail::TraceInformation


class Rcmd::Node : public ydk::Entity
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

        class NodeInformation; //type: Rcmd::Node::NodeInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Node::NodeInformation> > node_information;
        
}; // Rcmd::Node


class Rcmd::Node::NodeInformation : public ydk::Entity
{
    public:
        NodeInformation();
        ~NodeInformation();

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

        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf rack_id; //type: uint32
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf node_type; //type: RcmdShowNode
        ydk::YLeaf software_state; //type: uint32
        ydk::YLeaf card_state; //type: uint32
        ydk::YLeaf node_state; //type: RcmdBoolYesNo
        ydk::YLeaf status; //type: RcmdBagEnblDsbl
        ydk::YLeaf diag_mode; //type: uint32
        ydk::YLeaf redundancy_state; //type: uint32

}; // Rcmd::Node::NodeInformation


class Rcmd::Isis : public ydk::Entity
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

        class Instances; //type: Rcmd::Isis::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances> instances;
        
}; // Rcmd::Isis


class Rcmd::Isis::Instances : public ydk::Entity
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

        class Instance; //type: Rcmd::Isis::Instances::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance> > instance;
        
}; // Rcmd::Isis::Instances


class Rcmd::Isis::Instances::Instance : public ydk::Entity
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
        class IpfrrEventSummaries; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries
        class PrefixEventStatistics; //type: Rcmd::Isis::Instances::Instance::PrefixEventStatistics
        class SpfRunSummaries; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries
        class IpfrrEventOfflines; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines
        class SpfRunOfflines; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines
        class PrefixEventSummaries; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries
        class PrefixEventOfflines; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines
        class LspRegenerateds; //type: Rcmd::Isis::Instances::Instance::LspRegenerateds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries> ipfrr_event_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventStatistics> prefix_event_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries> spf_run_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines> ipfrr_event_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines> spf_run_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries> prefix_event_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines> prefix_event_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::LspRegenerateds> lsp_regenerateds;
        
}; // Rcmd::Isis::Instances::Instance


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries : public ydk::Entity
{
    public:
        IpfrrEventSummaries();
        ~IpfrrEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpfrrEventSummary; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary> > ipfrr_event_summary;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary : public ydk::Entity
{
    public:
        IpfrrEventSummary();
        ~IpfrrEventSummary();

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
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf trigger_spf_run; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf start_time_offset; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf completed_spf_run; //type: uint32
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        class IpfrrStatistic; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic> > ipfrr_statistic;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode> > remote_node;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic : public ydk::Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        ydk::YLeaf local_lfa_coverage; //type: string
        ydk::YLeaf remote_lfa_coverage; //type: string
        ydk::YLeaf below_threshold; //type: boolean

}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf in_use_time; //type: string
        class PrimaryPath; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath> > primary_path;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

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

}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath


class Rcmd::Isis::Instances::Instance::PrefixEventStatistics : public ydk::Entity
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

        class PrefixEventStatistic; //type: Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic> > prefix_event_statistic;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics


class Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries : public ydk::Entity
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

        class SpfRunSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary> > spf_run_summary;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary : public ydk::Entity
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
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf reason; //type: string
        class SpfSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary
        class NodeStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics
        class TriggerLsp; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp
        class Priority; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority
        class LspProcessed; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed
        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics> node_statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp> > trigger_lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority> > priority;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed> > lsp_processed;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated> > lsp_regenerated;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary : public ydk::Entity
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

        ydk::YLeaf topology; //type: uint32
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf type; //type: RcmdIsisSpf
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_lsp_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary> > priority_summary;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary : public ydk::Entity
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
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics : public ydk::Entity
{
    public:
        NodeStatistics();
        ~NodeStatistics();

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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp : public ydk::Entity
{
    public:
        TriggerLsp();
        ~TriggerLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority : public ydk::Entity
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

        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary> priority_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary : public ydk::Entity
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
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline : public ydk::Entity
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
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
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
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
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed : public ydk::Entity
{
    public:
        LspProcessed();
        ~LspProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated : public ydk::Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_number_xr; //type: uint32
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf reception_time; //type: string
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf reason; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines : public ydk::Entity
{
    public:
        IpfrrEventOfflines();
        ~IpfrrEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpfrrEventOffline; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline> > ipfrr_event_offline;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline : public ydk::Entity
{
    public:
        IpfrrEventOffline();
        ~IpfrrEventOffline();

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
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf trigger_spf_run; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf start_time_offset; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf completed_spf_run; //type: uint32
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        class IpfrrStatistic; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic> > ipfrr_statistic;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode> > remote_node;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic : public ydk::Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        ydk::YLeaf local_lfa_coverage; //type: string
        ydk::YLeaf remote_lfa_coverage; //type: string
        ydk::YLeaf below_threshold; //type: boolean

}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf in_use_time; //type: string
        class PrimaryPath; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath> > primary_path;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

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

}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath


class Rcmd::Isis::Instances::Instance::SpfRunOfflines : public ydk::Entity
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

        class SpfRunOffline; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline> > spf_run_offline;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline : public ydk::Entity
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
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf reason; //type: string
        class SpfSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary
        class NodeStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics
        class TriggerLsp; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp
        class Priority; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority
        class LspProcessed; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed
        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics> node_statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp> > trigger_lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority> > priority;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed> > lsp_processed;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated> > lsp_regenerated;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary : public ydk::Entity
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

        ydk::YLeaf topology; //type: uint32
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf type; //type: RcmdIsisSpf
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_lsp_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary> > priority_summary;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary : public ydk::Entity
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
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics : public ydk::Entity
{
    public:
        NodeStatistics();
        ~NodeStatistics();

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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp : public ydk::Entity
{
    public:
        TriggerLsp();
        ~TriggerLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority : public ydk::Entity
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

        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary> priority_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary : public ydk::Entity
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
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline : public ydk::Entity
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
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
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
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
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed : public ydk::Entity
{
    public:
        LspProcessed();
        ~LspProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated : public ydk::Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_number_xr; //type: uint32
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf reception_time; //type: string
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf reason; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries : public ydk::Entity
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

        class PrefixEventSummary; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary> > prefix_event_summary;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary : public ydk::Entity
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
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path
        class TriggerLsa; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path> > path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa> > trigger_lsa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine> > time_line;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed> > lsa_processed;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path : public ydk::Entity
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
        class LfaPath; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath> > lfa_path;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine : public ydk::Entity
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
        class LcIp; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls> > lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines : public ydk::Entity
{
    public:
        PrefixEventOfflines();
        ~PrefixEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventOffline; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline> > prefix_event_offline;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline : public ydk::Entity
{
    public:
        PrefixEventOffline();
        ~PrefixEventOffline();

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
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path
        class TriggerLsa; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path> > path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa> > trigger_lsa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine> > time_line;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed> > lsa_processed;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path : public ydk::Entity
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
        class LfaPath; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath> > lfa_path;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine : public ydk::Entity
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
        class LcIp; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls> > lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed : public ydk::Entity
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

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


class Rcmd::Isis::Instances::Instance::LspRegenerateds : public ydk::Entity
{
    public:
        LspRegenerateds();
        ~LspRegenerateds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated> > lsp_regenerated;
        
}; // Rcmd::Isis::Instances::Instance::LspRegenerateds


class Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated : public ydk::Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_number; //type: uint32
        ydk::YLeaf serial_number_xr; //type: uint32
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf reception_time; //type: string
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf reason; //type: string

}; // Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated


class Rcmd::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

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

        class MemoryInfo; //type: Rcmd::Memory::MemoryInfo
        class EdmMemoryInfo; //type: Rcmd::Memory::EdmMemoryInfo
        class StringMemoryInfo; //type: Rcmd::Memory::StringMemoryInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::MemoryInfo> > memory_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::EdmMemoryInfo> > edm_memory_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::StringMemoryInfo> > string_memory_info;
        
}; // Rcmd::Memory


class Rcmd::Memory::MemoryInfo : public ydk::Entity
{
    public:
        MemoryInfo();
        ~MemoryInfo();

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

        ydk::YLeaf structure_name; //type: string
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf current_count; //type: uint32
        ydk::YLeaf alloc_fails; //type: uint32
        ydk::YLeaf alloc_count; //type: uint32
        ydk::YLeaf freed_count; //type: uint32
        ydk::YLeaf memory_type; //type: RcmdShowMem

}; // Rcmd::Memory::MemoryInfo


class Rcmd::Memory::EdmMemoryInfo : public ydk::Entity
{
    public:
        EdmMemoryInfo();
        ~EdmMemoryInfo();

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

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf success; //type: uint32
        ydk::YLeaf failure; //type: uint32

}; // Rcmd::Memory::EdmMemoryInfo


class Rcmd::Memory::StringMemoryInfo : public ydk::Entity
{
    public:
        StringMemoryInfo();
        ~StringMemoryInfo();

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

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf success; //type: uint32
        ydk::YLeaf failure; //type: uint32

}; // Rcmd::Memory::StringMemoryInfo


class Rcmd::Ldp : public ydk::Entity
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

        class Sessions; //type: Rcmd::Ldp::Sessions
        class RemoteLfaS; //type: Rcmd::Ldp::RemoteLfaS
        class RemoteLfaSummaries; //type: Rcmd::Ldp::RemoteLfaSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS> remote_lfa_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries> remote_lfa_summaries;
        
}; // Rcmd::Ldp


class Rcmd::Ldp::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: Rcmd::Ldp::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::Sessions::Session> > session;
        
}; // Rcmd::Ldp::Sessions


class Rcmd::Ldp::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf event_type; //type: RcmdLdpEvent
        ydk::YLeaf event_time; //type: string
        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: RcmdShowLdpNeighbourStatus

}; // Rcmd::Ldp::Sessions::Session


class Rcmd::Ldp::RemoteLfaS : public ydk::Entity
{
    public:
        RemoteLfaS();
        ~RemoteLfaS();

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

        class RemoteLfa; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa> > remote_lfa;
        
}; // Rcmd::Ldp::RemoteLfaS


class Rcmd::Ldp::RemoteLfaS::RemoteLfa : public ydk::Entity
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

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf end_of_calculation_time; //type: string
        ydk::YLeaf igp_protocol; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf below_threshold; //type: boolean
        class SessionStatistic; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic
        class RemoteNode; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode
        class Logs; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic> > session_statistic;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode> > remote_node;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs> > logs;
        
}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic : public ydk::Entity
{
    public:
        SessionStatistic();
        ~SessionStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_state; //type: RcmdShowLdpSessionState
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32
        ydk::YLeaf protected_route_count; //type: uint32
        ydk::YLeaf protected_path_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf transport_address; //type: string
        ydk::YLeaf in_use_time; //type: string
        ydk::YLeaf session_state; //type: RcmdShowLdpSessionState
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32
        ydk::YLeaf protected_route_count; //type: uint32
        ydk::YLeaf protected_path_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_time; //type: string
        ydk::YLeaf label_coverage_state; //type: RcmdShowLdpConvState
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs


class Rcmd::Ldp::RemoteLfaSummaries : public ydk::Entity
{
    public:
        RemoteLfaSummaries();
        ~RemoteLfaSummaries();

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

        class RemoteLfaSummary; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary> > remote_lfa_summary;
        
}; // Rcmd::Ldp::RemoteLfaSummaries


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary : public ydk::Entity
{
    public:
        RemoteLfaSummary();
        ~RemoteLfaSummary();

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

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf end_of_calculation_time; //type: string
        ydk::YLeaf igp_protocol; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf below_threshold; //type: boolean
        class SessionStatistic; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic
        class RemoteNode; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode
        class Logs; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic> > session_statistic;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode> > remote_node;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs> > logs;
        
}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic : public ydk::Entity
{
    public:
        SessionStatistic();
        ~SessionStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_state; //type: RcmdShowLdpSessionState
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32
        ydk::YLeaf protected_route_count; //type: uint32
        ydk::YLeaf protected_path_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_1_ */

