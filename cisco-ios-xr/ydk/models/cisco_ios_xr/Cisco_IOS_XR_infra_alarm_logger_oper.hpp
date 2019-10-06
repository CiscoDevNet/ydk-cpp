#ifndef _CISCO_IOS_XR_INFRA_ALARM_LOGGER_OPER_
#define _CISCO_IOS_XR_INFRA_ALARM_LOGGER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_alarm_logger_oper {

class AlarmLogger : public ydk::Entity
{
    public:
        AlarmLogger();
        ~AlarmLogger();

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

        class BufferStatus; //type: AlarmLogger::BufferStatus
        class Alarms; //type: AlarmLogger::Alarms

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::BufferStatus> buffer_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger::Alarms> alarms;
        
}; // AlarmLogger


class AlarmLogger::BufferStatus : public ydk::Entity
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

        ydk::YLeaf log_buffer_size; //type: uint32
        ydk::YLeaf max_log_buffer_size; //type: uint32
        ydk::YLeaf record_count; //type: uint32
        ydk::YLeaf capacity_threshold; //type: uint32
        ydk::YLeaf severity_filter; //type: AlAlarmSeverity

}; // AlarmLogger::BufferStatus


class AlarmLogger::Alarms : public ydk::Entity
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

        class Alarm; //type: AlarmLogger::Alarms::Alarm

        ydk::YList alarm;
        
}; // AlarmLogger::Alarms


class AlarmLogger::Alarms::Alarm : public ydk::Entity
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

        ydk::YLeaf event_id; //type: uint32
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

}; // AlarmLogger::Alarms::Alarm

class AlAlarmBistate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_available;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf clear;

        static int get_enum_value(const std::string & name) {
            if (name == "not-available") return 0;
            if (name == "active") return 1;
            if (name == "clear") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return -1;
            if (name == "emergency") return 0;
            if (name == "alert") return 1;
            if (name == "critical") return 2;
            if (name == "error") return 3;
            if (name == "warning") return 4;
            if (name == "notice") return 5;
            if (name == "informational") return 6;
            if (name == "debugging") return 7;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_ALARM_LOGGER_OPER_ */

