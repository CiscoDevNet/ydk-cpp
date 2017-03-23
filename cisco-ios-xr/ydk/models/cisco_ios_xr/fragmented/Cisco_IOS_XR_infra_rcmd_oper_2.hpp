#ifndef _CISCO_IOS_XR_INFRA_RCMD_OPER_2_
#define _CISCO_IOS_XR_INFRA_RCMD_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_rcmd_oper_0.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rcmd_oper {


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


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_2_ */

