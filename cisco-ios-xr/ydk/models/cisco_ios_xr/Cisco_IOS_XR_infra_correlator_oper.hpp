#ifndef _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_
#define _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_correlator_oper {

class Correlator : public ydk::Entity
{
    public:
        Correlator();
        ~Correlator();

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

        class Rules; //type: Correlator::Rules
        class BufferStatus; //type: Correlator::BufferStatus
        class Alarms; //type: Correlator::Alarms
        class RuleSetSummaries; //type: Correlator::RuleSetSummaries
        class RuleSetDetails; //type: Correlator::RuleSetDetails
        class RuleDetails; //type: Correlator::RuleDetails
        class RuleSummaries; //type: Correlator::RuleSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms> alarms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::BufferStatus> buffer_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails> rule_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails> rule_set_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetSummaries> rule_set_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSummaries> rule_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules> rules;
        
}; // Correlator


class Correlator::Alarms : public ydk::Entity
{
    public:
        Alarms();
        ~Alarms();

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

        class Alarm; //type: Correlator::Alarms::Alarm

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms::Alarm> > alarm;
        
}; // Correlator::Alarms


class Correlator::Alarms::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

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

        ydk::YLeaf alarm_id; //type: int32
        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf context; //type: string
        class AlarmInfo; //type: Correlator::Alarms::Alarm::AlarmInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms::Alarm::AlarmInfo> alarm_info;
        
}; // Correlator::Alarms::Alarm


class Correlator::Alarms::Alarm::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_id; //type: string
        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf category; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf code; //type: string
        ydk::YLeaf severity; //type: AlAlarmSeverity
        ydk::YLeaf state; //type: AlAlarmBistate
        ydk::YLeaf correlation_id; //type: uint32
        ydk::YLeaf is_admin; //type: boolean
        ydk::YLeaf additional_text; //type: string

}; // Correlator::Alarms::Alarm::AlarmInfo


class Correlator::BufferStatus : public ydk::Entity
{
    public:
        BufferStatus();
        ~BufferStatus();

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

        ydk::YLeaf current_size; //type: uint32
        ydk::YLeaf configured_size; //type: uint32

}; // Correlator::BufferStatus


class Correlator::RuleDetails : public ydk::Entity
{
    public:
        RuleDetails();
        ~RuleDetails();

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

        class RuleDetail; //type: Correlator::RuleDetails::RuleDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail> > rule_detail;
        
}; // Correlator::RuleDetails


class Correlator::RuleDetails::RuleDetail : public ydk::Entity
{
    public:
        RuleDetail();
        ~RuleDetail();

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

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf root_cause_timeout; //type: uint32
        ydk::YLeaf internal; //type: boolean
        ydk::YLeaf reissue_non_bistate; //type: boolean
        ydk::YLeaf reparent; //type: boolean
        ydk::YLeaf context_correlation; //type: boolean
        ydk::YLeafList apply_location; //type: list of  string
        ydk::YLeafList apply_context; //type: list of  string
        class RuleSummary; //type: Correlator::RuleDetails::RuleDetail::RuleSummary
        class Codes; //type: Correlator::RuleDetails::RuleDetail::Codes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail::Codes> > codes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail::RuleSummary> rule_summary;
        
}; // Correlator::RuleDetails::RuleDetail


class Correlator::RuleDetails::RuleDetail::Codes : public ydk::Entity
{
    public:
        Codes();
        ~Codes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf code; //type: string

}; // Correlator::RuleDetails::RuleDetail::Codes


class Correlator::RuleDetails::RuleDetail::RuleSummary : public ydk::Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rule_name_xr; //type: string
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf rule_state; //type: AcRuleState
        ydk::YLeaf buffered_alarms_count; //type: uint32

}; // Correlator::RuleDetails::RuleDetail::RuleSummary


class Correlator::RuleSetDetails : public ydk::Entity
{
    public:
        RuleSetDetails();
        ~RuleSetDetails();

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

        class RuleSetDetail; //type: Correlator::RuleSetDetails::RuleSetDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails::RuleSetDetail> > rule_set_detail;
        
}; // Correlator::RuleSetDetails


class Correlator::RuleSetDetails::RuleSetDetail : public ydk::Entity
{
    public:
        RuleSetDetail();
        ~RuleSetDetail();

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

        ydk::YLeaf rule_set_name; //type: string
        ydk::YLeaf rule_set_name_xr; //type: string
        class Rules; //type: Correlator::RuleSetDetails::RuleSetDetail::Rules

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails::RuleSetDetail::Rules> > rules;
        
}; // Correlator::RuleSetDetails::RuleSetDetail


class Correlator::RuleSetDetails::RuleSetDetail::Rules : public ydk::Entity
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

        ydk::YLeaf rule_name_xr; //type: string
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf rule_state; //type: AcRuleState
        ydk::YLeaf buffered_alarms_count; //type: uint32

}; // Correlator::RuleSetDetails::RuleSetDetail::Rules


class Correlator::RuleSetSummaries : public ydk::Entity
{
    public:
        RuleSetSummaries();
        ~RuleSetSummaries();

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

        class RuleSetSummary; //type: Correlator::RuleSetSummaries::RuleSetSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetSummaries::RuleSetSummary> > rule_set_summary;
        
}; // Correlator::RuleSetSummaries


class Correlator::RuleSetSummaries::RuleSetSummary : public ydk::Entity
{
    public:
        RuleSetSummary();
        ~RuleSetSummary();

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

        ydk::YLeaf rule_set_name; //type: string
        ydk::YLeaf rule_set_name_xr; //type: string

}; // Correlator::RuleSetSummaries::RuleSetSummary


class Correlator::RuleSummaries : public ydk::Entity
{
    public:
        RuleSummaries();
        ~RuleSummaries();

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

        class RuleSummary; //type: Correlator::RuleSummaries::RuleSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSummaries::RuleSummary> > rule_summary;
        
}; // Correlator::RuleSummaries


class Correlator::RuleSummaries::RuleSummary : public ydk::Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

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

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf rule_name_xr; //type: string
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf rule_state; //type: AcRuleState
        ydk::YLeaf buffered_alarms_count; //type: uint32

}; // Correlator::RuleSummaries::RuleSummary


class Correlator::Rules : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Rule; //type: Correlator::Rules::Rule

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules::Rule> > rule;
        
}; // Correlator::Rules


class Correlator::Rules::Rule : public ydk::Entity
{
    public:
        Rule();
        ~Rule();

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

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf rule_name_xr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf rule_state; //type: AcRuleState
        ydk::YLeafList apply_location; //type: list of  string
        ydk::YLeafList apply_context; //type: list of  string
        class Codes; //type: Correlator::Rules::Rule::Codes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules::Rule::Codes> > codes;
        
}; // Correlator::Rules::Rule


class Correlator::Rules::Rule::Codes : public ydk::Entity
{
    public:
        Codes();
        ~Codes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf code; //type: string

}; // Correlator::Rules::Rule::Codes

class Suppression : public ydk::Entity
{
    public:
        Suppression();
        ~Suppression();

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

        class RuleSummaries; //type: Suppression::RuleSummaries
        class RuleDetails; //type: Suppression::RuleDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails> rule_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleSummaries> rule_summaries;
        
}; // Suppression


class Suppression::RuleDetails : public ydk::Entity
{
    public:
        RuleDetails();
        ~RuleDetails();

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

        class RuleDetail; //type: Suppression::RuleDetails::RuleDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail> > rule_detail;
        
}; // Suppression::RuleDetails


class Suppression::RuleDetails::RuleDetail : public ydk::Entity
{
    public:
        RuleDetail();
        ~RuleDetail();

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

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf all_alarms; //type: boolean
        ydk::YLeaf alarm_severity; //type: AlAlarmSeverity
        ydk::YLeafList apply_source; //type: list of  string
        class RuleSummary; //type: Suppression::RuleDetails::RuleDetail::RuleSummary
        class Codes; //type: Suppression::RuleDetails::RuleDetail::Codes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail::Codes> > codes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail::RuleSummary> rule_summary;
        
}; // Suppression::RuleDetails::RuleDetail


class Suppression::RuleDetails::RuleDetail::Codes : public ydk::Entity
{
    public:
        Codes();
        ~Codes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf code; //type: string

}; // Suppression::RuleDetails::RuleDetail::Codes


class Suppression::RuleDetails::RuleDetail::RuleSummary : public ydk::Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rule_name_xr; //type: string
        ydk::YLeaf rule_state; //type: AcRuleState
        ydk::YLeaf suppressed_alarms_count; //type: uint32

}; // Suppression::RuleDetails::RuleDetail::RuleSummary


class Suppression::RuleSummaries : public ydk::Entity
{
    public:
        RuleSummaries();
        ~RuleSummaries();

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

        class RuleSummary; //type: Suppression::RuleSummaries::RuleSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleSummaries::RuleSummary> > rule_summary;
        
}; // Suppression::RuleSummaries


class Suppression::RuleSummaries::RuleSummary : public ydk::Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

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

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf rule_name_xr; //type: string
        ydk::YLeaf rule_state; //type: AcRuleState
        ydk::YLeaf suppressed_alarms_count; //type: uint32

}; // Suppression::RuleSummaries::RuleSummary

class AlAlarmBistate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_available;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf clear;

};

class AlAlarmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf debugging;

};

class AcRuleState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rule_unapplied;
        static const ydk::Enum::YLeaf rule_applied;
        static const ydk::Enum::YLeaf rule_applied_all;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_ */

