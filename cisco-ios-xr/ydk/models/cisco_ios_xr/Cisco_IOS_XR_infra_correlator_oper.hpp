#ifndef _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_
#define _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_correlator_oper {

class Suppression : public Entity
{
    public:
        Suppression();
        ~Suppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class RuleSummaries; //type: Suppression::RuleSummaries
        class RuleDetails; //type: Suppression::RuleDetails

        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails> rule_details;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleSummaries> rule_summaries;
        
}; // Suppression


class Suppression::RuleSummaries : public Entity
{
    public:
        RuleSummaries();
        ~RuleSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleSummary; //type: Suppression::RuleSummaries::RuleSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleSummaries::RuleSummary> > rule_summary;
        
}; // Suppression::RuleSummaries


class Suppression::RuleSummaries::RuleSummary : public Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name; //type: string
        YLeaf rule_name_xr; //type: string
        YLeaf rule_state; //type: AcRuleStateEnum
        YLeaf suppressed_alarms_count; //type: uint32

}; // Suppression::RuleSummaries::RuleSummary


class Suppression::RuleDetails : public Entity
{
    public:
        RuleDetails();
        ~RuleDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleDetail; //type: Suppression::RuleDetails::RuleDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail> > rule_detail;
        
}; // Suppression::RuleDetails


class Suppression::RuleDetails::RuleDetail : public Entity
{
    public:
        RuleDetail();
        ~RuleDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name; //type: string
        YLeaf all_alarms; //type: boolean
        YLeaf alarm_severity; //type: AlAlarmSeverityEnum
        YLeafList apply_source; //type: list of  string
        class RuleSummary; //type: Suppression::RuleDetails::RuleDetail::RuleSummary
        class Codes; //type: Suppression::RuleDetails::RuleDetail::Codes

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail::Codes> > codes;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail::RuleSummary> rule_summary;
        
}; // Suppression::RuleDetails::RuleDetail


class Suppression::RuleDetails::RuleDetail::RuleSummary : public Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name_xr; //type: string
        YLeaf rule_state; //type: AcRuleStateEnum
        YLeaf suppressed_alarms_count; //type: uint32

}; // Suppression::RuleDetails::RuleDetail::RuleSummary


class Suppression::RuleDetails::RuleDetail::Codes : public Entity
{
    public:
        Codes();
        ~Codes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf code; //type: string

}; // Suppression::RuleDetails::RuleDetail::Codes

class Correlator : public Entity
{
    public:
        Correlator();
        ~Correlator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Rules; //type: Correlator::Rules
        class BufferStatus; //type: Correlator::BufferStatus
        class Alarms; //type: Correlator::Alarms
        class RuleSetSummaries; //type: Correlator::RuleSetSummaries
        class RuleSetDetails; //type: Correlator::RuleSetDetails
        class RuleDetails; //type: Correlator::RuleDetails
        class RuleSummaries; //type: Correlator::RuleSummaries

        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms> alarms;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::BufferStatus> buffer_status;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails> rule_details;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails> rule_set_details;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetSummaries> rule_set_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSummaries> rule_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules> rules;
        
}; // Correlator


class Correlator::Rules : public Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rule; //type: Correlator::Rules::Rule

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules::Rule> > rule;
        
}; // Correlator::Rules


class Correlator::Rules::Rule : public Entity
{
    public:
        Rule();
        ~Rule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name; //type: string
        YLeaf rule_name_xr; //type: string
        YLeaf timeout; //type: uint32
        YLeaf rule_state; //type: AcRuleStateEnum
        YLeafList apply_location; //type: list of  string
        YLeafList apply_context; //type: list of  string
        class Codes; //type: Correlator::Rules::Rule::Codes

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules::Rule::Codes> > codes;
        
}; // Correlator::Rules::Rule


class Correlator::Rules::Rule::Codes : public Entity
{
    public:
        Codes();
        ~Codes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf code; //type: string

}; // Correlator::Rules::Rule::Codes


class Correlator::BufferStatus : public Entity
{
    public:
        BufferStatus();
        ~BufferStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf current_size; //type: uint32
        YLeaf configured_size; //type: uint32

}; // Correlator::BufferStatus


class Correlator::Alarms : public Entity
{
    public:
        Alarms();
        ~Alarms();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Alarm; //type: Correlator::Alarms::Alarm

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms::Alarm> > alarm;
        
}; // Correlator::Alarms


class Correlator::Alarms::Alarm : public Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alarm_id; //type: int32
        YLeaf rule_name; //type: string
        YLeaf context; //type: string
        class AlarmInfo; //type: Correlator::Alarms::Alarm::AlarmInfo

        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms::Alarm::AlarmInfo> alarm_info;
        
}; // Correlator::Alarms::Alarm


class Correlator::Alarms::Alarm::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_id; //type: string
        YLeaf timestamp; //type: uint64
        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf code; //type: string
        YLeaf severity; //type: AlAlarmSeverityEnum
        YLeaf state; //type: AlAlarmBistateEnum
        YLeaf correlation_id; //type: uint32
        YLeaf is_admin; //type: boolean
        YLeaf additional_text; //type: string

}; // Correlator::Alarms::Alarm::AlarmInfo


class Correlator::RuleSetSummaries : public Entity
{
    public:
        RuleSetSummaries();
        ~RuleSetSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleSetSummary; //type: Correlator::RuleSetSummaries::RuleSetSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetSummaries::RuleSetSummary> > rule_set_summary;
        
}; // Correlator::RuleSetSummaries


class Correlator::RuleSetSummaries::RuleSetSummary : public Entity
{
    public:
        RuleSetSummary();
        ~RuleSetSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_set_name; //type: string
        YLeaf rule_set_name_xr; //type: string

}; // Correlator::RuleSetSummaries::RuleSetSummary


class Correlator::RuleSetDetails : public Entity
{
    public:
        RuleSetDetails();
        ~RuleSetDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleSetDetail; //type: Correlator::RuleSetDetails::RuleSetDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails::RuleSetDetail> > rule_set_detail;
        
}; // Correlator::RuleSetDetails


class Correlator::RuleSetDetails::RuleSetDetail : public Entity
{
    public:
        RuleSetDetail();
        ~RuleSetDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_set_name; //type: string
        YLeaf rule_set_name_xr; //type: string
        class Rules; //type: Correlator::RuleSetDetails::RuleSetDetail::Rules

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails::RuleSetDetail::Rules> > rules;
        
}; // Correlator::RuleSetDetails::RuleSetDetail


class Correlator::RuleSetDetails::RuleSetDetail::Rules : public Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name_xr; //type: string
        YLeaf stateful; //type: boolean
        YLeaf rule_state; //type: AcRuleStateEnum
        YLeaf buffered_alarms_count; //type: uint32

}; // Correlator::RuleSetDetails::RuleSetDetail::Rules


class Correlator::RuleDetails : public Entity
{
    public:
        RuleDetails();
        ~RuleDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleDetail; //type: Correlator::RuleDetails::RuleDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail> > rule_detail;
        
}; // Correlator::RuleDetails


class Correlator::RuleDetails::RuleDetail : public Entity
{
    public:
        RuleDetail();
        ~RuleDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name; //type: string
        YLeaf timeout; //type: uint32
        YLeaf root_cause_timeout; //type: uint32
        YLeaf internal; //type: boolean
        YLeaf reissue_non_bistate; //type: boolean
        YLeaf reparent; //type: boolean
        YLeaf context_correlation; //type: boolean
        YLeafList apply_location; //type: list of  string
        YLeafList apply_context; //type: list of  string
        class RuleSummary; //type: Correlator::RuleDetails::RuleDetail::RuleSummary
        class Codes; //type: Correlator::RuleDetails::RuleDetail::Codes

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail::Codes> > codes;
        std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail::RuleSummary> rule_summary;
        
}; // Correlator::RuleDetails::RuleDetail


class Correlator::RuleDetails::RuleDetail::RuleSummary : public Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name_xr; //type: string
        YLeaf stateful; //type: boolean
        YLeaf rule_state; //type: AcRuleStateEnum
        YLeaf buffered_alarms_count; //type: uint32

}; // Correlator::RuleDetails::RuleDetail::RuleSummary


class Correlator::RuleDetails::RuleDetail::Codes : public Entity
{
    public:
        Codes();
        ~Codes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf code; //type: string

}; // Correlator::RuleDetails::RuleDetail::Codes


class Correlator::RuleSummaries : public Entity
{
    public:
        RuleSummaries();
        ~RuleSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleSummary; //type: Correlator::RuleSummaries::RuleSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSummaries::RuleSummary> > rule_summary;
        
}; // Correlator::RuleSummaries


class Correlator::RuleSummaries::RuleSummary : public Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name; //type: string
        YLeaf rule_name_xr; //type: string
        YLeaf stateful; //type: boolean
        YLeaf rule_state; //type: AcRuleStateEnum
        YLeaf buffered_alarms_count; //type: uint32

}; // Correlator::RuleSummaries::RuleSummary

class AlAlarmBistateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_available;
        static const Enum::YLeaf active;
        static const Enum::YLeaf clear;

};

class AlAlarmSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf debugging;

};

class AcRuleStateEnum : public Enum
{
    public:
        static const Enum::YLeaf rule_unapplied;
        static const Enum::YLeaf rule_applied;
        static const Enum::YLeaf rule_applied_all;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_ */

