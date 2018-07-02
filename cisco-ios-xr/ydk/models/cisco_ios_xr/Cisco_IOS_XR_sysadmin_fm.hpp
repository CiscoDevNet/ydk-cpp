#ifndef _CISCO_IOS_XR_SYSADMIN_FM_
#define _CISCO_IOS_XR_SYSADMIN_FM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_fm {

class Fm : public ydk::Entity
{
    public:
        Fm();
        ~Fm();

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

        class Agents; //type: Fm::Agents

        ydk::YList agents;
        
}; // Fm


class Fm::Agents : public ydk::Entity
{
    public:
        Agents();
        ~Agents();

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

        ydk::YLeaf location; //type: string
        ydk::YLeaf process; //type: string
        ydk::YLeaf subsystem; //type: string
        ydk::YLeaf agent; //type: string
        class FmInitials; //type: Fm::Agents::FmInitials
        class FmTable; //type: Fm::Agents::FmTable
        class FmInternals; //type: Fm::Agents::FmInternals
        class FmAlarmMapping; //type: Fm::Agents::FmAlarmMapping
        class FmStatistics; //type: Fm::Agents::FmStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmInitials> fm_initials;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmTable> fm_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmInternals> fm_internals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmAlarmMapping> fm_alarm_mapping;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmStatistics> fm_statistics;
        
}; // Fm::Agents


class Fm::Agents::FmInitials : public ydk::Entity
{
    public:
        FmInitials();
        ~FmInitials();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levm; //type: uint64
        ydk::YLeaf comp_id; //type: uint32
        ydk::YLeaf process; //type: string
        ydk::YLeaf default_rule_cb; //type: uint64
        ydk::YLeaf default_action_cb; //type: uint64
        ydk::YLeaf default_notif_cb; //type: uint64
        ydk::YLeaf default_error_cb; //type: uint64
        ydk::YLeaf replica_cb; //type: uint64

}; // Fm::Agents::FmInitials


class Fm::Agents::FmTable : public ydk::Entity
{
    public:
        FmTable();
        ~FmTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Brief; //type: Fm::Agents::FmTable::Brief
        class Entry; //type: Fm::Agents::FmTable::Entry

        ydk::YList brief;
        ydk::YList entry;
        
}; // Fm::Agents::FmTable


class Fm::Agents::FmTable::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf name; //type: string

}; // Fm::Agents::FmTable::Brief


class Fm::Agents::FmTable::Entry : public ydk::Entity
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

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        class Detail; //type: Fm::Agents::FmTable::Entry::Detail
        class CausalList; //type: Fm::Agents::FmTable::Entry::CausalList
        class DependencyList; //type: Fm::Agents::FmTable::Entry::DependencyList
        class PropagationList; //type: Fm::Agents::FmTable::Entry::PropagationList
        class NotificationList; //type: Fm::Agents::FmTable::Entry::NotificationList
        class EscalationList; //type: Fm::Agents::FmTable::Entry::EscalationList
        class Faults; //type: Fm::Agents::FmTable::Entry::Faults
        class WaitingList; //type: Fm::Agents::FmTable::Entry::WaitingList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmTable::Entry::Detail> detail;
        ydk::YList causal_list;
        ydk::YList dependency_list;
        ydk::YList propagation_list;
        ydk::YList notification_list;
        ydk::YList escalation_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmTable::Entry::Faults> faults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmTable::Entry::WaitingList> waiting_list;
        
}; // Fm::Agents::FmTable::Entry


class Fm::Agents::FmTable::Entry::Detail : public ydk::Entity
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

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf detection_logic; //type: string
        ydk::YLeaf corr_obj_qualifier; //type: FmCorrelationObjQualifierT

}; // Fm::Agents::FmTable::Entry::Detail


class Fm::Agents::FmTable::Entry::CausalList : public ydk::Entity
{
    public:
        CausalList();
        ~CausalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string

}; // Fm::Agents::FmTable::Entry::CausalList


class Fm::Agents::FmTable::Entry::DependencyList : public ydk::Entity
{
    public:
        DependencyList();
        ~DependencyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string

}; // Fm::Agents::FmTable::Entry::DependencyList


class Fm::Agents::FmTable::Entry::PropagationList : public ydk::Entity
{
    public:
        PropagationList();
        ~PropagationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf remote_agent_id; //type: string

}; // Fm::Agents::FmTable::Entry::PropagationList


class Fm::Agents::FmTable::Entry::NotificationList : public ydk::Entity
{
    public:
        NotificationList();
        ~NotificationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf remote_agent_id; //type: string

}; // Fm::Agents::FmTable::Entry::NotificationList


class Fm::Agents::FmTable::Entry::EscalationList : public ydk::Entity
{
    public:
        EscalationList();
        ~EscalationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf remote_agent_id; //type: string

}; // Fm::Agents::FmTable::Entry::EscalationList


class Fm::Agents::FmTable::Entry::Faults : public ydk::Entity
{
    public:
        Faults();
        ~Faults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Active; //type: Fm::Agents::FmTable::Entry::Faults::Active
        class History; //type: Fm::Agents::FmTable::Entry::Faults::History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmTable::Entry::Faults::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_fm::Fm::Agents::FmTable::Entry::Faults::History> history;
        
}; // Fm::Agents::FmTable::Entry::Faults


class Fm::Agents::FmTable::Entry::Faults::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Brief; //type: Fm::Agents::FmTable::Entry::Faults::Active::Brief
        class Detail; //type: Fm::Agents::FmTable::Entry::Faults::Active::Detail

        ydk::YList brief;
        ydk::YList detail;
        
}; // Fm::Agents::FmTable::Entry::Faults::Active


class Fm::Agents::FmTable::Entry::Faults::Active::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_id; //type: string
        ydk::YLeaf fault_timestamp; //type: string

}; // Fm::Agents::FmTable::Entry::Faults::Active::Brief


class Fm::Agents::FmTable::Entry::Faults::Active::Detail : public ydk::Entity
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

        ydk::YLeaf object_id; //type: string
        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf fault_severity; //type: uint16
        ydk::YLeaf fault_state; //type: FmFaultStateT
        ydk::YLeaf fault_agent_id; //type: string
        ydk::YLeaf fault_timestamp; //type: string
        ydk::YLeaf fault_timer_state; //type: boolean
        ydk::YLeaf fault_processed; //type: boolean
        ydk::YLeaf mitigation_result; //type: FmActionResultT
        ydk::YLeaf recovery_result; //type: FmActionResultT
        ydk::YLeaf correlation_result; //type: FmActionResultT
        ydk::YLeaf alarm_result; //type: FmActionResultT
        ydk::YLeaf default_result; //type: FmActionResultT
        ydk::YLeaf opaque_data_len; //type: uint16
        ydk::YLeaf occurrence_count; //type: uint64
        ydk::YLeaf history_state; //type: FmHistoryStateT

}; // Fm::Agents::FmTable::Entry::Faults::Active::Detail


class Fm::Agents::FmTable::Entry::Faults::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Brief; //type: Fm::Agents::FmTable::Entry::Faults::History::Brief
        class Detail; //type: Fm::Agents::FmTable::Entry::Faults::History::Detail

        ydk::YList brief;
        ydk::YList detail;
        
}; // Fm::Agents::FmTable::Entry::Faults::History


class Fm::Agents::FmTable::Entry::Faults::History::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_id; //type: string
        ydk::YLeaf fault_timestamp; //type: string

}; // Fm::Agents::FmTable::Entry::Faults::History::Brief


class Fm::Agents::FmTable::Entry::Faults::History::Detail : public ydk::Entity
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

        ydk::YLeaf object_id; //type: string
        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf fault_severity; //type: uint16
        ydk::YLeaf fault_state; //type: FmFaultStateT
        ydk::YLeaf fault_agent_id; //type: string
        ydk::YLeaf fault_timestamp; //type: string
        ydk::YLeaf fault_timer_state; //type: boolean
        ydk::YLeaf fault_processed; //type: boolean
        ydk::YLeaf mitigation_result; //type: FmActionResultT
        ydk::YLeaf recovery_result; //type: FmActionResultT
        ydk::YLeaf correlation_result; //type: FmActionResultT
        ydk::YLeaf alarm_result; //type: FmActionResultT
        ydk::YLeaf default_result; //type: FmActionResultT
        ydk::YLeaf opaque_data_len; //type: uint16
        ydk::YLeaf occurrence_count; //type: uint64
        ydk::YLeaf history_state; //type: FmHistoryStateT

}; // Fm::Agents::FmTable::Entry::Faults::History::Detail


class Fm::Agents::FmTable::Entry::WaitingList : public ydk::Entity
{
    public:
        WaitingList();
        ~WaitingList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Brief; //type: Fm::Agents::FmTable::Entry::WaitingList::Brief
        class Entry_; //type: Fm::Agents::FmTable::Entry::WaitingList::Entry_

        ydk::YList brief;
        ydk::YList entry;
        
}; // Fm::Agents::FmTable::Entry::WaitingList


class Fm::Agents::FmTable::Entry::WaitingList::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf object_id; //type: string
        ydk::YLeaf fault_timestamp; //type: string
        ydk::YLeaf fault_state; //type: FmFaultStateT
        ydk::YLeaf fault_count; //type: uint64
        ydk::YLeaf fault_flag; //type: uint64

}; // Fm::Agents::FmTable::Entry::WaitingList::Brief


class Fm::Agents::FmTable::Entry::WaitingList::Entry_ : public ydk::Entity
{
    public:
        Entry_();
        ~Entry_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf object_id; //type: string
        ydk::YLeaf fault_timestamp; //type: string
        ydk::YLeaf fault_state; //type: FmFaultStateT
        ydk::YLeaf fault_count; //type: uint64
        ydk::YLeaf fault_flag; //type: uint64

}; // Fm::Agents::FmTable::Entry::WaitingList::Entry_


class Fm::Agents::FmInternals : public ydk::Entity
{
    public:
        FmInternals();
        ~FmInternals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: Fm::Agents::FmInternals::Detail

        ydk::YList detail;
        
}; // Fm::Agents::FmInternals


class Fm::Agents::FmInternals::Detail : public ydk::Entity
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

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf common_action; //type: uint16
        ydk::YLeaf opaque_action; //type: uint16
        ydk::YLeaf mitigation_cb; //type: uint64
        ydk::YLeaf recovery_cb; //type: uint64
        ydk::YLeaf alarm_severity_dirty; //type: boolean
        ydk::YLeaf disable_action; //type: boolean
        ydk::YLeaf repeat_action; //type: boolean
        ydk::YLeaf has_causal_list; //type: boolean
        ydk::YLeaf parser_tag; //type: uint64
        ydk::YLeaf parser_tag_string; //type: string
        class Rules; //type: Fm::Agents::FmInternals::Detail::Rules

        ydk::YList rules;
        
}; // Fm::Agents::FmInternals::Detail


class Fm::Agents::FmInternals::Detail::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fault_location; //type: string
        ydk::YLeaf rule_cb; //type: uint64

}; // Fm::Agents::FmInternals::Detail::Rules


class Fm::Agents::FmAlarmMapping : public ydk::Entity
{
    public:
        FmAlarmMapping();
        ~FmAlarmMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: Fm::Agents::FmAlarmMapping::Detail

        ydk::YList detail;
        
}; // Fm::Agents::FmAlarmMapping


class Fm::Agents::FmAlarmMapping::Detail : public ydk::Entity
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

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf alarm_group; //type: uint16
        ydk::YLeaf alarm_severity; //type: uint16

}; // Fm::Agents::FmAlarmMapping::Detail


class Fm::Agents::FmStatistics : public ydk::Entity
{
    public:
        FmStatistics();
        ~FmStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: Fm::Agents::FmStatistics::Detail

        ydk::YList detail;
        
}; // Fm::Agents::FmStatistics


class Fm::Agents::FmStatistics::Detail : public ydk::Entity
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

        ydk::YLeaf fm_subsystem_id; //type: string
        ydk::YLeaf fm_fault_type; //type: string
        ydk::YLeaf fm_fault_tag; //type: string
        ydk::YLeaf threshold_count; //type: uint32
        ydk::YLeaf all_object_occur_count; //type: uint32
        ydk::YLeaf declared_count; //type: uint32
        ydk::YLeaf cleared_count; //type: uint32
        ydk::YLeaf info_count; //type: uint32
        ydk::YLeaf hold_time; //type: uint32

}; // Fm::Agents::FmStatistics::Detail

class FmActionT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ISOLATION;
        static const ydk::Enum::YLeaf MITIGATION;
        static const ydk::Enum::YLeaf RECOVERY;
        static const ydk::Enum::YLeaf CORRELATION;
        static const ydk::Enum::YLeaf ALARM;
        static const ydk::Enum::YLeaf REPORT;

};

class FmHistoryStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf FM_HISTORY_STATE_ACTIVE;
        static const ydk::Enum::YLeaf FM_HISTORY_STATE_CLEARED;
        static const ydk::Enum::YLeaf FM_HISTORY_STATE_INVALID;

};

class FmServiceScopeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf FM_SERVICE_NODE_SCOPE;
        static const ydk::Enum::YLeaf FM_SERVICE_RACK_SCOPE;
        static const ydk::Enum::YLeaf FM_SERVICE_SYSTEM_SCOPE;

};

class FmActionResultT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SUCCESS;
        static const ydk::Enum::YLeaf FAILURE;
        static const ydk::Enum::YLeaf NO_OP;

};

class GenericHaRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_ha_role;
        static const ydk::Enum::YLeaf Active;
        static const ydk::Enum::YLeaf Standby;

};

class FmFaultStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SET;
        static const ydk::Enum::YLeaf CLEAR;
        static const ydk::Enum::YLeaf INFO;
        static const ydk::Enum::YLeaf INVALID;
        static const ydk::Enum::YLeaf PARTIALLY_QUALIFIED;
        static const ydk::Enum::YLeaf SOAKING_BEFORE_SET;
        static const ydk::Enum::YLeaf SOAKING_BEFORE_CLEAR;
        static const ydk::Enum::YLeaf SUPPRESSED;
        static const ydk::Enum::YLeaf UPDATE;

};

class FmFaultSeverityT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CRITICAL;
        static const ydk::Enum::YLeaf MAJOR;
        static const ydk::Enum::YLeaf MINOR;
        static const ydk::Enum::YLeaf NR;

};

class FmRuleEvalResultT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SUCCESS;
        static const ydk::Enum::YLeaf FAILURE;

};

class FmCorrelationObjQualifierT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf QUALIFIER_IGNORED;
        static const ydk::Enum::YLeaf QUALIFIER_RACK;
        static const ydk::Enum::YLeaf QUALIFIER_SLOT;
        static const ydk::Enum::YLeaf QUALIFIER_OBJECT;

};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_FM_ */

