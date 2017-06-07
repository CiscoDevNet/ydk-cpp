#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_5_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_lsd_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_oper {


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf owner_application_type; //type: MgmtLsdAppEnum
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData


class MplsLsd::RewriteSummary : public Entity
{
    public:
        RewriteSummary();
        ~RewriteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_label_fpi; //type: uint32
        YLeaf num_tefpi; //type: uint32
        YLeaf num_ipv4fpi; //type: uint32
        YLeaf num_ipv6fpi; //type: uint32
        YLeaf num_pw_list_tefpi; //type: uint32
        YLeaf num_dmtctefpi; //type: uint32
        YLeaf num_rewrite; //type: uint32
        YLeaf total_forward_update; //type: uint32
        YLeaf total_forwad_update_message; //type: uint32
        YLeaf total_paths; //type: uint32
        YLeaf total_t_ev4_paths; //type: uint32
        YLeaf total_te_head_paths; //type: uint32
        YLeaf total_pw_paths; //type: uint32
        YLeaf total_ip_sub_paths; //type: uint32
        YLeaf total_ipv4rpf_neighbors; //type: uint32
        YLeaf total_ipv6rpf_neighbors; //type: uint32
        YLeaf num_rewrite_rpf_neighbors; //type: uint32
        YLeaf total_dmtc_intf; //type: uint32
        YLeaf vrf_name_xr; //type: string
        class Ipv4Paths; //type: MplsLsd::RewriteSummary::Ipv4Paths
        class Ipv6Paths; //type: MplsLsd::RewriteSummary::Ipv6Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary::Ipv4Paths> ipv4_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary::Ipv6Paths> ipv6_paths;
        
}; // MplsLsd::RewriteSummary


class MplsLsd::RewriteSummary::Ipv4Paths : public Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummary::Ipv4Paths


class MplsLsd::RewriteSummary::Ipv6Paths : public Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummary::Ipv6Paths


class MplsLsd::Applications : public Entity
{
    public:
        Applications();
        ~Applications();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: MplsLsd::Applications::Application

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application> > application;
        
}; // MplsLsd::Applications


class MplsLsd::Applications::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_name_xr; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf app_reg_time; //type: uint64
        YLeaf app_disconnect_time; //type: uint64
        YLeaf app_flow_controlled; //type: int32
        YLeaf flow_ctrl_time; //type: uint64
        YLeaf flow_ctrl_clr_time; //type: uint64
        YLeaf go_act_ts; //type: uint64
        YLeaf application_state; //type: MgmtLsdAppStateEnum
        YLeaf recovery_time_remaining_seconds; //type: uint32
        YLeaf recovery_time_elapsed_seconds; //type: uint32
        YLeaf recovery_time_register_seconds; //type: uint32
        YLeaf node_id; //type: string
        class ApplicationStatistics; //type: MplsLsd::Applications::Application::ApplicationStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics> application_statistics;
        
}; // MplsLsd::Applications::Application


class MplsLsd::Applications::Application::ApplicationStatistics : public Entity
{
    public:
        ApplicationStatistics();
        ~ApplicationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_enable; //type: uint32
        YLeaf interface_enable_pending; //type: uint32
        YLeaf connect_count; //type: uint32
        YLeafList label_context_count; //type: list of  uint32
        YLeafList label_context_pending_count; //type: list of  uint32
        class Connected; //type: MplsLsd::Applications::Application::ApplicationStatistics::Connected

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics::Connected> connected;
        
}; // MplsLsd::Applications::Application::ApplicationStatistics


class MplsLsd::Applications::Application::ApplicationStatistics::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rt_set_msg_count; //type: uint32
        YLeaf operation_msg_count; //type: uint32
        YLeaf oor_label_count; //type: uint32
        YLeaf error_msg_count; //type: uint32

}; // MplsLsd::Applications::Application::ApplicationStatistics::Connected


class MplsLsd::LabelSummaryVrfs : public Entity
{
    public:
        LabelSummaryVrfs();
        ~LabelSummaryVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelSummaryVrf; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs::LabelSummaryVrf> > label_summary_vrf;
        
}; // MplsLsd::LabelSummaryVrfs


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf : public Entity
{
    public:
        LabelSummaryVrf();
        ~LabelSummaryVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf vrf_name_xr; //type: string
        YLeaf total_labels; //type: uint32
        YLeaf rsi_connected; //type: int32
        class OwnerCount; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount> > owner_count;
        
}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount : public Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_name; //type: string
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf number_of_labels; //type: uint32

}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount


class MplsLsd::LabelRange : public Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_dynamic_label_value; //type: uint32
        YLeaf max_dynamic_label_value; //type: uint32
        YLeaf min_static_label_value; //type: uint32
        YLeaf max_static_label_value; //type: uint32

}; // MplsLsd::LabelRange


class MplsLsd::RewriteSummaryVrfs : public Entity
{
    public:
        RewriteSummaryVrfs();
        ~RewriteSummaryVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RewriteSummaryVrf; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf> > rewrite_summary_vrf;
        
}; // MplsLsd::RewriteSummaryVrfs


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf : public Entity
{
    public:
        RewriteSummaryVrf();
        ~RewriteSummaryVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf num_label_fpi; //type: uint32
        YLeaf num_tefpi; //type: uint32
        YLeaf num_ipv4fpi; //type: uint32
        YLeaf num_ipv6fpi; //type: uint32
        YLeaf num_pw_list_tefpi; //type: uint32
        YLeaf num_dmtctefpi; //type: uint32
        YLeaf num_rewrite; //type: uint32
        YLeaf total_forward_update; //type: uint32
        YLeaf total_forwad_update_message; //type: uint32
        YLeaf total_paths; //type: uint32
        YLeaf total_t_ev4_paths; //type: uint32
        YLeaf total_te_head_paths; //type: uint32
        YLeaf total_pw_paths; //type: uint32
        YLeaf total_ip_sub_paths; //type: uint32
        YLeaf total_ipv4rpf_neighbors; //type: uint32
        YLeaf total_ipv6rpf_neighbors; //type: uint32
        YLeaf num_rewrite_rpf_neighbors; //type: uint32
        YLeaf total_dmtc_intf; //type: uint32
        YLeaf vrf_name_xr; //type: string
        class Ipv4Paths; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths
        class Ipv6Paths; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths> ipv4_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths> ipv6_paths;
        
}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths : public Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths : public Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths


class MplsLsd::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: MplsLsd::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces::Interface> > interface;
        
}; // MplsLsd::Interfaces


class MplsLsd::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf interface_state; //type: MgmtLsdIntfStateEnum
        class ApplicationOwner; //type: MplsLsd::Interfaces::Interface::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces::Interface::ApplicationOwner> > application_owner;
        
}; // MplsLsd::Interfaces::Interface


class MplsLsd::Interfaces::Interface::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum

}; // MplsLsd::Interfaces::Interface::ApplicationOwner


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_5_ */

