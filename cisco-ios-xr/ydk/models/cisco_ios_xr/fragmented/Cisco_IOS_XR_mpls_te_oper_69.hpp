#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_69_
#define _CISCO_IOS_XR_MPLS_TE_OPER_69_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_68.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::Tunnels::Summary::GmplsNniSummary : public ydk::Entity
{
    public:
        GmplsNniSummary();
        ~GmplsNniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf mids_up; //type: uint32
        ydk::YLeaf mids_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::GmplsNniSummary


class MplsTeStandby::Tunnels::Summary::GmplsUniSummary : public ydk::Entity
{
    public:
        GmplsUniSummary();
        ~GmplsUniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::GmplsUniSummary


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary : public ydk::Entity
{
    public:
        LastTunnelConvergenceSummary();
        ~LastTunnelConvergenceSummary();

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

        ydk::YLeaf tunnel_frr_active_count; //type: uint32
        ydk::YLeaf tunnel_frr_total_count; //type: uint32
        ydk::YLeaf tunnel_converged_count; //type: uint32
        ydk::YLeaf tunnel_total_convergence_complete_time; //type: uint64
        class TablePathOut; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        
}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger : public ydk::Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite : public ydk::Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut : public ydk::Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc : public ydk::Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn : public ydk::Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite : public ydk::Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite


class MplsTeStandby::Tunnels::TunnelAutoBandwidths : public ydk::Entity
{
    public:
        TunnelAutoBandwidths();
        ~TunnelAutoBandwidths();

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

        class TunnelAutoBandwidth; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth> > tunnel_auto_bandwidth;
        
}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths


class MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth : public ydk::Entity
{
    public:
        TunnelAutoBandwidth();
        ~TunnelAutoBandwidth();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf tunnel_requested_bandwidth; //type: uint32
        ydk::YLeaf signalled_bandwidth; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf last_sample_bandwidth; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        class AutoBandwidthStatus; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus> auto_bandwidth_status;
        
}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth


class MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus : public ydk::Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_enabled; //type: boolean
        ydk::YLeaf reactivation_time; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus


class MplsTeStandby::Tunnels::TunnelFlexLsps : public ydk::Entity
{
    public:
        TunnelFlexLsps();
        ~TunnelFlexLsps();

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

        class TunnelFlexLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp> > tunnel_flex_lsp;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp : public ydk::Entity
{
    public:
        TunnelFlexLsp();
        ~TunnelFlexLsp();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf tun_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        class WorkingLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp
        class ProtectLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp> protect_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp> working_lsp;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

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

        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class FlexInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection
        class ReverseLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop> > lsp_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp> reverse_lsp;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

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

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

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

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

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

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

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

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

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

        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class FlexInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection
        class ReverseLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop> > lsp_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp> reverse_lsp;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

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

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

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

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

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

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

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

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::Tunnels::TunnelPathProtections : public ydk::Entity
{
    public:
        TunnelPathProtections();
        ~TunnelPathProtections();

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

        class TunnelPathProtection; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection> > tunnel_path_protection;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection : public ydk::Entity
{
    public:
        TunnelPathProtection();
        ~TunnelPathProtection();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        class PathProtection; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection
        class CurrentLsp; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp
        class StandbyLsp; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp> current_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp> standby_lsp;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp : public ydk::Entity
{
    public:
        CurrentLsp();
        ~CurrentLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection : public ydk::Entity
{
    public:
        PathProtection();
        ~PathProtection();

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

        ydk::YLeaf time_of_switchover_sec; //type: uint32
        ydk::YLeaf switchover_total; //type: uint16
        ydk::YLeaf switchover_ready; //type: uint16
        ydk::YLeaf standby_reoptimized_number; //type: uint16
        ydk::YLeaf switchover_reason; //type: uint16
        ydk::YLeaf diversity_type; //type: TePpDiversity
        ydk::YLeaf is_path_protect_configured; //type: boolean
        ydk::YLeaf path_protection_protected_by_id; //type: uint32
        ydk::YLeaf valid_path_protection_path_option_exists; //type: boolean
        ydk::YLeaf is_path_protect_switch_over_underway; //type: boolean
        ydk::YLeaf reoptimization_time_remaining; //type: uint32
        class Switchover; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover> switchover;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover : public ydk::Entity
{
    public:
        Switchover();
        ~Switchover();

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

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp : public ydk::Entity
{
    public:
        StandbyLsp();
        ~StandbyLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo


class MplsTeStandby::WrapProtection : public ydk::Entity
{
    public:
        WrapProtection();
        ~WrapProtection();

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

        class ProtectedLsps; //type: MplsTeStandby::WrapProtection::ProtectedLsps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection::ProtectedLsps> protected_lsps;
        
}; // MplsTeStandby::WrapProtection


class MplsTeStandby::WrapProtection::ProtectedLsps : public ydk::Entity
{
    public:
        ProtectedLsps();
        ~ProtectedLsps();

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

        class ProtectedLsp; //type: MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp> > protected_lsp;
        
}; // MplsTeStandby::WrapProtection::ProtectedLsps


class MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp : public ydk::Entity
{
    public:
        ProtectedLsp();
        ~ProtectedLsp();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf session_type; //type: Ctype
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf tunnel_id_xr; //type: uint16
        ydk::YLeaf extended_tunnel_id_xr; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_instance; //type: uint32
        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState
        ydk::YLeaf sub_group_original_id; //type: string
        ydk::YLeaf sub_group_id_xr; //type: uint16
        ydk::YLeaf p2mp_id_xr; //type: uint32

}; // MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp

class MplsTp : public ydk::Entity
{
    public:
        MplsTp();
        ~MplsTp();

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

        class TpLinks; //type: MplsTp::TpLinks
        class TpTunnels; //type: MplsTp::TpTunnels
        class TpMidpoints; //type: MplsTp::TpMidpoints
        class TpGlobalParameters; //type: MplsTp::TpGlobalParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpGlobalParameters> tp_global_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks> tp_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints> tp_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels> tp_tunnels;
        
}; // MplsTp


class MplsTp::TpGlobalParameters : public ydk::Entity
{
    public:
        TpGlobalParameters();
        ~TpGlobalParameters();

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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf oam_refresh; //type: uint32
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_interval_in_micro_sec; //type: boolean
        ydk::YLeaf bfd_interval_standby; //type: uint32
        ydk::YLeaf bfd_interval_standby_in_micro_sec; //type: boolean
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf bfd_multiplier_standby; //type: uint32
        ydk::YLeaf wait_to_restore_interval; //type: uint32
        ydk::YLeaf alarm_suppression; //type: boolean
        ydk::YLeaf soak_time; //type: uint32
        class OamProtectionTriggers; //type: MplsTp::TpGlobalParameters::OamProtectionTriggers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpGlobalParameters::OamProtectionTriggers> oam_protection_triggers;
        
}; // MplsTp::TpGlobalParameters


class MplsTp::TpGlobalParameters::OamProtectionTriggers : public ydk::Entity
{
    public:
        OamProtectionTriggers();
        ~OamProtectionTriggers();

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

        ydk::YLeaf ais; //type: boolean
        ydk::YLeaf ldi; //type: boolean
        ydk::YLeaf lkr; //type: boolean

}; // MplsTp::TpGlobalParameters::OamProtectionTriggers


class MplsTp::TpLinks : public ydk::Entity
{
    public:
        TpLinks();
        ~TpLinks();

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

        class TpDetailLinks; //type: MplsTp::TpLinks::TpDetailLinks
        class TpLinkSummary; //type: MplsTp::TpLinks::TpLinkSummary
        class TpLinks_; //type: MplsTp::TpLinks::TpLinks_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpDetailLinks> tp_detail_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinkSummary> tp_link_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinks_> tp_links;
        
}; // MplsTp::TpLinks


class MplsTp::TpLinks::TpDetailLinks : public ydk::Entity
{
    public:
        TpDetailLinks();
        ~TpDetailLinks();

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

        class TpDetailLink; //type: MplsTp::TpLinks::TpDetailLinks::TpDetailLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpDetailLinks::TpDetailLink> > tp_detail_link;
        
}; // MplsTp::TpLinks::TpDetailLinks


class MplsTp::TpLinks::TpDetailLinks::TpDetailLink : public ydk::Entity
{
    public:
        TpDetailLink();
        ~TpDetailLink();

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

        ydk::YLeaf tp_link_id; //type: int32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf link_state; //type: TpLinkState
        ydk::YLeaf ls_ps; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint64
        ydk::YLeaf available_bandwidth; //type: uint64
        ydk::YLeaf unsupported_linecard; //type: boolean

}; // MplsTp::TpLinks::TpDetailLinks::TpDetailLink


class MplsTp::TpLinks::TpLinkSummary : public ydk::Entity
{
    public:
        TpLinkSummary();
        ~TpLinkSummary();

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

        ydk::YLeaf links; //type: uint32

}; // MplsTp::TpLinks::TpLinkSummary


class MplsTp::TpLinks::TpLinks_ : public ydk::Entity
{
    public:
        TpLinks_();
        ~TpLinks_();

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

        class TpLink; //type: MplsTp::TpLinks::TpLinks_::TpLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinks_::TpLink> > tp_link;
        
}; // MplsTp::TpLinks::TpLinks_


class MplsTp::TpLinks::TpLinks_::TpLink : public ydk::Entity
{
    public:
        TpLink();
        ~TpLink();

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

        ydk::YLeaf tp_link_id; //type: int32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf link_state; //type: TpLinkState
        ydk::YLeaf available_bandwidth; //type: uint64

}; // MplsTp::TpLinks::TpLinks_::TpLink


class MplsTp::TpMidpoints : public ydk::Entity
{
    public:
        TpMidpoints();
        ~TpMidpoints();

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

        class TpDetailMidpoints; //type: MplsTp::TpMidpoints::TpDetailMidpoints
        class TpMidpointSummary; //type: MplsTp::TpMidpoints::TpMidpointSummary
        class TpMidpoints_; //type: MplsTp::TpMidpoints::TpMidpoints_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints> tp_detail_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpointSummary> tp_midpoint_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpoints_> tp_midpoints;
        
}; // MplsTp::TpMidpoints


class MplsTp::TpMidpoints::TpDetailMidpoints : public ydk::Entity
{
    public:
        TpDetailMidpoints();
        ~TpDetailMidpoints();

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

        class TpDetailMidpoint; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint> > tp_detail_midpoint;
        
}; // MplsTp::TpMidpoints::TpDetailMidpoints


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint : public ydk::Entity
{
    public:
        TpDetailMidpoint();
        ~TpDetailMidpoint();

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

        ydk::YLeaf tp_midpoint_name; //type: string
        ydk::YLeaf forward_lsp_reserved_bandwidth; //type: uint32
        ydk::YLeaf reverse_lsp_reserved_bandwidth; //type: uint32
        class BriefLspInformation; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation
        class ForwardLsp; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp
        class ReverseLsp; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp> forward_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp> reverse_lsp;
        
}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf midpoint_name; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_tunnel_id; //type: uint32
        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf destination_node_id; //type: string
        ydk::YLeaf destination_global_id; //type: uint32
        ydk::YLeaf destination_tunnel_id; //type: uint32
        ydk::YLeaf forward_lsp_state; //type: TpMidLspStatus
        ydk::YLeaf reverse_lsp_state; //type: TpMidLspStatus

}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp : public ydk::Entity
{
    public:
        ForwardLsp();
        ~ForwardLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_link; //type: uint32
        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_link; //type: uint32
        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp


class MplsTp::TpMidpoints::TpMidpointSummary : public ydk::Entity
{
    public:
        TpMidpointSummary();
        ~TpMidpointSummary();

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

        ydk::YLeaf mid_points; //type: uint32
        ydk::YLeaf up_forward_ls_ps; //type: uint32
        ydk::YLeaf down_forward_ls_ps; //type: uint32
        ydk::YLeaf up_reverse_ls_ps; //type: uint32
        ydk::YLeaf down_reverse_ls_ps; //type: uint32

}; // MplsTp::TpMidpoints::TpMidpointSummary


class MplsTp::TpMidpoints::TpMidpoints_ : public ydk::Entity
{
    public:
        TpMidpoints_();
        ~TpMidpoints_();

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

        class TpMidpoint; //type: MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint> > tp_midpoint;
        
}; // MplsTp::TpMidpoints::TpMidpoints_


class MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint : public ydk::Entity
{
    public:
        TpMidpoint();
        ~TpMidpoint();

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

        ydk::YLeaf tp_midpoint_name; //type: string
        ydk::YLeaf midpoint_name; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_tunnel_id; //type: uint32
        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf destination_node_id; //type: string
        ydk::YLeaf destination_global_id; //type: uint32
        ydk::YLeaf destination_tunnel_id; //type: uint32
        ydk::YLeaf forward_lsp_state; //type: TpMidLspStatus
        ydk::YLeaf reverse_lsp_state; //type: TpMidLspStatus

}; // MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint


class MplsTp::TpTunnels : public ydk::Entity
{
    public:
        TpTunnels();
        ~TpTunnels();

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

        class TpTunnelSummary; //type: MplsTp::TpTunnels::TpTunnelSummary
        class TpDetailTunnels; //type: MplsTp::TpTunnels::TpDetailTunnels
        class TpTunnels_; //type: MplsTp::TpTunnels::TpTunnels_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels> tp_detail_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnelSummary> tp_tunnel_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_> tp_tunnels;
        
}; // MplsTp::TpTunnels


class MplsTp::TpTunnels::TpDetailTunnels : public ydk::Entity
{
    public:
        TpDetailTunnels();
        ~TpDetailTunnels();

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

        class TpDetailTunnel; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel> > tp_detail_tunnel;
        
}; // MplsTp::TpTunnels::TpDetailTunnels


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel : public ydk::Entity
{
    public:
        TpDetailTunnel();
        ~TpDetailTunnel();

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

        ydk::YLeaf tp_tunnel_name; //type: string
        ydk::YLeaf req_bandwidth; //type: uint32
        ydk::YLeaf oam_interval; //type: uint32
        ydk::YLeaf bfd_interval_active; //type: uint32
        ydk::YLeaf bfd_interval_active_in_micro_sec; //type: boolean
        ydk::YLeaf bfd_multiplier_active; //type: uint32
        ydk::YLeaf bfd_interval_standby; //type: uint32
        ydk::YLeaf bfd_interval_standby_in_micro_sec; //type: boolean
        ydk::YLeaf bfd_multiplier_standby; //type: uint32
        ydk::YLeaf tunnel_up_time; //type: uint32
        ydk::YLeaf switchover_trig; //type: MplsTpTunnelSwitchoverTrig
        ydk::YLeaf switch_over_time; //type: uint32
        class Tunnel; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel
        class WorkingLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp
        class OamProtectionTriggers; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers> oam_protection_triggers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp> working_lsp;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers : public ydk::Entity
{
    public:
        OamProtectionTriggers();
        ~OamProtectionTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais; //type: boolean
        ydk::YLeaf ldi; //type: boolean
        ydk::YLeaf lkr; //type: boolean

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf tp_out_label; //type: uint32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf out_interface_name; //type: string
        ydk::YLeaf out_next_hop; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint32
        class BriefInformation; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation> brief_information;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation : public ydk::Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf destination_node_id; //type: string
        ydk::YLeaf destination_global_id; //type: uint32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf admin_status; //type: MplsTpTunnelState
        ydk::YLeaf operation_status; //type: MplsTpTunnelState
        ydk::YLeaf active_lsp; //type: MplsTpTunnelActiveLsp
        class WorkingLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp> working_lsp;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf tp_out_label; //type: uint32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf out_interface_name; //type: string
        ydk::YLeaf out_next_hop; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint32
        class BriefInformation; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation> brief_information;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation : public ydk::Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation


class MplsTp::TpTunnels::TpTunnelSummary : public ydk::Entity
{
    public:
        TpTunnelSummary();
        ~TpTunnelSummary();

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

        ydk::YLeaf up_working_ls_ps; //type: uint32
        ydk::YLeaf active_working_ls_ps; //type: uint32
        ydk::YLeaf down_working_ls_ps; //type: uint32
        ydk::YLeaf locked_working_ls_ps; //type: uint32
        ydk::YLeaf up_protect_ls_ps; //type: uint32
        ydk::YLeaf active_protect_ls_ps; //type: uint32
        ydk::YLeaf down_protect_ls_ps; //type: uint32
        ydk::YLeaf locked_protect_ls_ps; //type: uint32
        ydk::YLeaf up_tunnels; //type: uint32
        ydk::YLeaf down_tunnels; //type: uint32
        ydk::YLeaf admin_down_tunnels; //type: uint32
        ydk::YLeaf complete_fec_working_ls_ps; //type: uint32
        ydk::YLeaf complete_fec_protect_ls_ps; //type: uint32
        ydk::YLeaf bfd_session_working_ls_ps; //type: uint32
        ydk::YLeaf bfd_session_protect_ls_ps; //type: uint32

}; // MplsTp::TpTunnels::TpTunnelSummary


class MplsTp::TpTunnels::TpTunnels_ : public ydk::Entity
{
    public:
        TpTunnels_();
        ~TpTunnels_();

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

        class TpTunnel; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel> > tp_tunnel;
        
}; // MplsTp::TpTunnels::TpTunnels_


class MplsTp::TpTunnels::TpTunnels_::TpTunnel : public ydk::Entity
{
    public:
        TpTunnel();
        ~TpTunnel();

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

        ydk::YLeaf tp_tunnel_name; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf destination_node_id; //type: string
        ydk::YLeaf destination_global_id; //type: uint32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf admin_status; //type: MplsTpTunnelState
        ydk::YLeaf operation_status; //type: MplsTpTunnelState
        ydk::YLeaf active_lsp; //type: MplsTpTunnelActiveLsp
        class WorkingLsp; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp> working_lsp;
        
}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel


class MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp


class MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_69_ */

