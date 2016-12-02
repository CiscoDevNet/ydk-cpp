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
            Value log_buffer_size; //type: uint32
            Value max_log_buffer_size; //type: uint32
            Value record_count; //type: uint32
            Value capacity_threshold; //type: uint32
            Value severity_filter; //type: AlAlarmSeverityEnum


            class AlAlarmSeverityEnum;


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
                Value event_id; //type: int32
                Value source_id; //type: string
                Value timestamp; //type: uint64
                Value category; //type: string
                Value group; //type: string
                Value code; //type: string
                Value severity; //type: AlAlarmSeverityEnum
                Value state; //type: AlAlarmBistateEnum
                Value correlation_id; //type: uint32
                Value is_admin; //type: boolean
                Value additional_text; //type: string


                class AlAlarmSeverityEnum;
                class AlAlarmBistateEnum;


        }; // AlarmLogger::Alarms::Alarm


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::Alarms::Alarm> > alarm;


    }; // AlarmLogger::Alarms


        std::unique_ptr<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::Alarms> alarms;
        std::unique_ptr<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::BufferStatus> buffer_status;


}; // AlarmLogger


class AlAlarmBistateEnum : public Enum
{
    public:
        static const Enum::Value not_available;
        static const Enum::Value active;
        static const Enum::Value clear;

};

class AlAlarmSeverityEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value emergency;
        static const Enum::Value alert;
        static const Enum::Value critical;
        static const Enum::Value error;
        static const Enum::Value warning;
        static const Enum::Value notice;
        static const Enum::Value informational;
        static const Enum::Value debugging;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_ALARM_LOGGER_OPER_ */

