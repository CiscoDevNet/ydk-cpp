#ifndef _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_
#define _CISCO_IOS_XR_INFRA_CORRELATOR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_correlator_oper {

class Suppression : public Entity
{
    public:
        Suppression();
        ~Suppression();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class RuleSummaries : public Entity
    {
        public:
            RuleSummaries();
            ~RuleSummaries();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RuleSummary : public Entity
        {
            public:
                RuleSummary();
                ~RuleSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rule_name; //type: string
                YLeaf rule_name_xr; //type: string
                YLeaf rule_state; //type: AcRuleStateEnum
                YLeaf suppressed_alarms_count; //type: uint32



        }; // Suppression::RuleSummaries::RuleSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleSummaries::RuleSummary> > rule_summary;


    }; // Suppression::RuleSummaries


    class RuleDetails : public Entity
    {
        public:
            RuleDetails();
            ~RuleDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RuleDetail : public Entity
        {
            public:
                RuleDetail();
                ~RuleDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rule_name; //type: string
                YLeaf all_alarms; //type: boolean
                YLeaf alarm_severity; //type: AlAlarmSeverityEnum
                YLeafList apply_source; //type: list of  string

            class RuleSummary : public Entity
            {
                public:
                    RuleSummary();
                    ~RuleSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf rule_name_xr; //type: string
                    YLeaf rule_state; //type: AcRuleStateEnum
                    YLeaf suppressed_alarms_count; //type: uint32



            }; // Suppression::RuleDetails::RuleDetail::RuleSummary


            class Codes : public Entity
            {
                public:
                    Codes();
                    ~Codes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf category; //type: string
                    YLeaf group; //type: string
                    YLeaf code; //type: string



            }; // Suppression::RuleDetails::RuleDetail::Codes


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail::Codes> > codes;
                std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail::RuleSummary> rule_summary;


        }; // Suppression::RuleDetails::RuleDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails::RuleDetail> > rule_detail;


    }; // Suppression::RuleDetails


        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleDetails> rule_details;
        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Suppression::RuleSummaries> rule_summaries;


}; // Suppression

class Correlator : public Entity
{
    public:
        Correlator();
        ~Correlator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Rules : public Entity
    {
        public:
            Rules();
            ~Rules();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Rule : public Entity
        {
            public:
                Rule();
                ~Rule();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rule_name; //type: string
                YLeaf rule_name_xr; //type: string
                YLeaf timeout; //type: uint32
                YLeaf rule_state; //type: AcRuleStateEnum
                YLeafList apply_location; //type: list of  string
                YLeafList apply_context; //type: list of  string

            class Codes : public Entity
            {
                public:
                    Codes();
                    ~Codes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf category; //type: string
                    YLeaf group; //type: string
                    YLeaf code; //type: string



            }; // Correlator::Rules::Rule::Codes


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules::Rule::Codes> > codes;


        }; // Correlator::Rules::Rule


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules::Rule> > rule;


    }; // Correlator::Rules


    class BufferStatus : public Entity
    {
        public:
            BufferStatus();
            ~BufferStatus();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf current_size; //type: uint32
            YLeaf configured_size; //type: uint32



    }; // Correlator::BufferStatus


    class Alarms : public Entity
    {
        public:
            Alarms();
            ~Alarms();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Alarm : public Entity
        {
            public:
                Alarm();
                ~Alarm();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf alarm_id; //type: int32
                YLeaf rule_name; //type: string
                YLeaf context; //type: string

            class AlarmInfo : public Entity
            {
                public:
                    AlarmInfo();
                    ~AlarmInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


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


                std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms::Alarm::AlarmInfo> alarm_info;


        }; // Correlator::Alarms::Alarm


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms::Alarm> > alarm;


    }; // Correlator::Alarms


    class RuleSetSummaries : public Entity
    {
        public:
            RuleSetSummaries();
            ~RuleSetSummaries();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RuleSetSummary : public Entity
        {
            public:
                RuleSetSummary();
                ~RuleSetSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rule_set_name; //type: string
                YLeaf rule_set_name_xr; //type: string



        }; // Correlator::RuleSetSummaries::RuleSetSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetSummaries::RuleSetSummary> > rule_set_summary;


    }; // Correlator::RuleSetSummaries


    class RuleSetDetails : public Entity
    {
        public:
            RuleSetDetails();
            ~RuleSetDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RuleSetDetail : public Entity
        {
            public:
                RuleSetDetail();
                ~RuleSetDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rule_set_name; //type: string
                YLeaf rule_set_name_xr; //type: string

            class Rules : public Entity
            {
                public:
                    Rules();
                    ~Rules();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf rule_name_xr; //type: string
                    YLeaf stateful; //type: boolean
                    YLeaf rule_state; //type: AcRuleStateEnum
                    YLeaf buffered_alarms_count; //type: uint32



            }; // Correlator::RuleSetDetails::RuleSetDetail::Rules


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails::RuleSetDetail::Rules> > rules;


        }; // Correlator::RuleSetDetails::RuleSetDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails::RuleSetDetail> > rule_set_detail;


    }; // Correlator::RuleSetDetails


    class RuleDetails : public Entity
    {
        public:
            RuleDetails();
            ~RuleDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RuleDetail : public Entity
        {
            public:
                RuleDetail();
                ~RuleDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rule_name; //type: string
                YLeaf timeout; //type: uint32
                YLeaf root_cause_timeout; //type: uint32
                YLeaf internal; //type: boolean
                YLeaf reissue_non_bistate; //type: boolean
                YLeaf reparent; //type: boolean
                YLeaf context_correlation; //type: boolean
                YLeafList apply_location; //type: list of  string
                YLeafList apply_context; //type: list of  string

            class RuleSummary : public Entity
            {
                public:
                    RuleSummary();
                    ~RuleSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf rule_name_xr; //type: string
                    YLeaf stateful; //type: boolean
                    YLeaf rule_state; //type: AcRuleStateEnum
                    YLeaf buffered_alarms_count; //type: uint32



            }; // Correlator::RuleDetails::RuleDetail::RuleSummary


            class Codes : public Entity
            {
                public:
                    Codes();
                    ~Codes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf category; //type: string
                    YLeaf group; //type: string
                    YLeaf code; //type: string



            }; // Correlator::RuleDetails::RuleDetail::Codes


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail::Codes> > codes;
                std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail::RuleSummary> rule_summary;


        }; // Correlator::RuleDetails::RuleDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails::RuleDetail> > rule_detail;


    }; // Correlator::RuleDetails


    class RuleSummaries : public Entity
    {
        public:
            RuleSummaries();
            ~RuleSummaries();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RuleSummary : public Entity
        {
            public:
                RuleSummary();
                ~RuleSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rule_name; //type: string
                YLeaf rule_name_xr; //type: string
                YLeaf stateful; //type: boolean
                YLeaf rule_state; //type: AcRuleStateEnum
                YLeaf buffered_alarms_count; //type: uint32



        }; // Correlator::RuleSummaries::RuleSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSummaries::RuleSummary> > rule_summary;


    }; // Correlator::RuleSummaries


        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Alarms> alarms;
        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::BufferStatus> buffer_status;
        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleDetails> rule_details;
        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetDetails> rule_set_details;
        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSetSummaries> rule_set_summaries;
        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::RuleSummaries> rule_summaries;
        std::unique_ptr<Cisco_IOS_XR_infra_correlator_oper::Correlator::Rules> rules;


}; // Correlator


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

