#ifndef _CISCO_IOS_XR_INFRA_ALARM_LOGGER_OPER_
#define _CISCO_IOS_XR_INFRA_ALARM_LOGGER_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_alarm_logger_oper {

class AlarmLogger : public Entity
{
    public:
        AlarmLogger();
        ~AlarmLogger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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


            YLeaf log_buffer_size; //type: uint32
            YLeaf max_log_buffer_size; //type: uint32
            YLeaf record_count; //type: uint32
            YLeaf capacity_threshold; //type: uint32
            YLeaf severity_filter; //type: AlAlarmSeverityEnum



    }; // AlarmLogger::BufferStatus


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


                YLeaf event_id; //type: int32
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



        }; // AlarmLogger::Alarms::Alarm


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::Alarms::Alarm> > alarm;


    }; // AlarmLogger::Alarms


        std::unique_ptr<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::Alarms> alarms;
        std::unique_ptr<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::BufferStatus> buffer_status;


}; // AlarmLogger


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


}
}

#endif /* _CISCO_IOS_XR_INFRA_ALARM_LOGGER_OPER_ */

