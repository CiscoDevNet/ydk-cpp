#ifndef _CISCO_IOS_XR_INFRA_RCMD_OPER_2_
#define _CISCO_IOS_XR_INFRA_RCMD_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_rcmd_oper_0.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode : public ydk::Entity
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

}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs : public ydk::Entity
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

}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs


class Rcmd::Intf : public ydk::Entity
{
    public:
        Intf();
        ~Intf();

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

        class Events; //type: Rcmd::Intf::Events

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf::Events> events;
        
}; // Rcmd::Intf


class Rcmd::Intf::Events : public ydk::Entity
{
    public:
        Events();
        ~Events();

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

        class Event; //type: Rcmd::Intf::Events::Event

        ydk::YList event;
        
}; // Rcmd::Intf::Events


class Rcmd::Intf::Events::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

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

        ydk::YLeaf event_no; //type: uint32
        ydk::YLeaf sequence_no; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf component; //type: RcmdShowCompId
        ydk::YLeaf event_type; //type: RcmdShowIntfEvent
        ydk::YLeaf event_time; //type: string
        ydk::YLeaf primary_address; //type: string

}; // Rcmd::Intf::Events::Event


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp> ldp;
        
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

        ydk::YList process;
        
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

        ydk::YList instance_name;
        
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

        ydk::YList instance;
        
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


class Rcmd::Process::Ospf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Process_; //type: Rcmd::Process::Ospf::Process_

        ydk::YList process;
        
}; // Rcmd::Process::Ospf


class Rcmd::Process::Ospf::Process_ : public ydk::Entity
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
        class InstanceName; //type: Rcmd::Process::Ospf::Process_::InstanceName

        ydk::YList instance_name;
        
}; // Rcmd::Process::Ospf::Process_


class Rcmd::Process::Ospf::Process_::InstanceName : public ydk::Entity
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
        class Instance; //type: Rcmd::Process::Ospf::Process_::InstanceName::Instance

        ydk::YList instance;
        
}; // Rcmd::Process::Ospf::Process_::InstanceName


class Rcmd::Process::Ospf::Process_::InstanceName::Instance : public ydk::Entity
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

}; // Rcmd::Process::Ospf::Process_::InstanceName::Instance


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

        ydk::YList process;
        
}; // Rcmd::Process::Ldp


class Rcmd::Process::Ldp::Process_ : public ydk::Entity
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
        class InstanceName; //type: Rcmd::Process::Ldp::Process_::InstanceName

        ydk::YList instance_name;
        
}; // Rcmd::Process::Ldp::Process_


class Rcmd::Process::Ldp::Process_::InstanceName : public ydk::Entity
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
        class Instance; //type: Rcmd::Process::Ldp::Process_::InstanceName::Instance

        ydk::YList instance;
        
}; // Rcmd::Process::Ldp::Process_::InstanceName


class Rcmd::Process::Ldp::Process_::InstanceName::Instance : public ydk::Entity
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

}; // Rcmd::Process::Ldp::Process_::InstanceName::Instance


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_2_ */

