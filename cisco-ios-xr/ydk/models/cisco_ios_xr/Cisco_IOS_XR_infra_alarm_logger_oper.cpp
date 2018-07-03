
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_alarm_logger_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_alarm_logger_oper {

AlarmLogger::AlarmLogger()
    :
    buffer_status(std::make_shared<AlarmLogger::BufferStatus>())
    , alarms(std::make_shared<AlarmLogger::Alarms>())
{
    buffer_status->parent = this;
    alarms->parent = this;

    yang_name = "alarm-logger"; yang_parent_name = "Cisco-IOS-XR-infra-alarm-logger-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

AlarmLogger::~AlarmLogger()
{
}

bool AlarmLogger::has_data() const
{
    if (is_presence_container) return true;
    return (buffer_status !=  nullptr && buffer_status->has_data())
	|| (alarms !=  nullptr && alarms->has_data());
}

bool AlarmLogger::has_operation() const
{
    return is_set(yfilter)
	|| (buffer_status !=  nullptr && buffer_status->has_operation())
	|| (alarms !=  nullptr && alarms->has_operation());
}

std::string AlarmLogger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmLogger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmLogger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-status")
    {
        if(buffer_status == nullptr)
        {
            buffer_status = std::make_shared<AlarmLogger::BufferStatus>();
        }
        return buffer_status;
    }

    if(child_yang_name == "alarms")
    {
        if(alarms == nullptr)
        {
            alarms = std::make_shared<AlarmLogger::Alarms>();
        }
        return alarms;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmLogger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(buffer_status != nullptr)
    {
        children["buffer-status"] = buffer_status;
    }

    if(alarms != nullptr)
    {
        children["alarms"] = alarms;
    }

    return children;
}

void AlarmLogger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmLogger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> AlarmLogger::clone_ptr() const
{
    return std::make_shared<AlarmLogger>();
}

std::string AlarmLogger::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AlarmLogger::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AlarmLogger::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AlarmLogger::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AlarmLogger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-status" || name == "alarms")
        return true;
    return false;
}

AlarmLogger::BufferStatus::BufferStatus()
    :
    log_buffer_size{YType::uint32, "log-buffer-size"},
    max_log_buffer_size{YType::uint32, "max-log-buffer-size"},
    record_count{YType::uint32, "record-count"},
    capacity_threshold{YType::uint32, "capacity-threshold"},
    severity_filter{YType::enumeration, "severity-filter"}
{

    yang_name = "buffer-status"; yang_parent_name = "alarm-logger"; is_top_level_class = false; has_list_ancestor = false; 
}

AlarmLogger::BufferStatus::~BufferStatus()
{
}

bool AlarmLogger::BufferStatus::has_data() const
{
    if (is_presence_container) return true;
    return log_buffer_size.is_set
	|| max_log_buffer_size.is_set
	|| record_count.is_set
	|| capacity_threshold.is_set
	|| severity_filter.is_set;
}

bool AlarmLogger::BufferStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_buffer_size.yfilter)
	|| ydk::is_set(max_log_buffer_size.yfilter)
	|| ydk::is_set(record_count.yfilter)
	|| ydk::is_set(capacity_threshold.yfilter)
	|| ydk::is_set(severity_filter.yfilter);
}

std::string AlarmLogger::BufferStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmLogger::BufferStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmLogger::BufferStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_buffer_size.is_set || is_set(log_buffer_size.yfilter)) leaf_name_data.push_back(log_buffer_size.get_name_leafdata());
    if (max_log_buffer_size.is_set || is_set(max_log_buffer_size.yfilter)) leaf_name_data.push_back(max_log_buffer_size.get_name_leafdata());
    if (record_count.is_set || is_set(record_count.yfilter)) leaf_name_data.push_back(record_count.get_name_leafdata());
    if (capacity_threshold.is_set || is_set(capacity_threshold.yfilter)) leaf_name_data.push_back(capacity_threshold.get_name_leafdata());
    if (severity_filter.is_set || is_set(severity_filter.yfilter)) leaf_name_data.push_back(severity_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmLogger::BufferStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmLogger::BufferStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmLogger::BufferStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-buffer-size")
    {
        log_buffer_size = value;
        log_buffer_size.value_namespace = name_space;
        log_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-log-buffer-size")
    {
        max_log_buffer_size = value;
        max_log_buffer_size.value_namespace = name_space;
        max_log_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-count")
    {
        record_count = value;
        record_count.value_namespace = name_space;
        record_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capacity-threshold")
    {
        capacity_threshold = value;
        capacity_threshold.value_namespace = name_space;
        capacity_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-filter")
    {
        severity_filter = value;
        severity_filter.value_namespace = name_space;
        severity_filter.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmLogger::BufferStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-buffer-size")
    {
        log_buffer_size.yfilter = yfilter;
    }
    if(value_path == "max-log-buffer-size")
    {
        max_log_buffer_size.yfilter = yfilter;
    }
    if(value_path == "record-count")
    {
        record_count.yfilter = yfilter;
    }
    if(value_path == "capacity-threshold")
    {
        capacity_threshold.yfilter = yfilter;
    }
    if(value_path == "severity-filter")
    {
        severity_filter.yfilter = yfilter;
    }
}

bool AlarmLogger::BufferStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-buffer-size" || name == "max-log-buffer-size" || name == "record-count" || name == "capacity-threshold" || name == "severity-filter")
        return true;
    return false;
}

AlarmLogger::Alarms::Alarms()
    :
    alarm(this, {"event_id"})
{

    yang_name = "alarms"; yang_parent_name = "alarm-logger"; is_top_level_class = false; has_list_ancestor = false; 
}

AlarmLogger::Alarms::~Alarms()
{
}

bool AlarmLogger::Alarms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm.len(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmLogger::Alarms::has_operation() const
{
    for (std::size_t index=0; index<alarm.len(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AlarmLogger::Alarms::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmLogger::Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmLogger::Alarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmLogger::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        auto c = std::make_shared<AlarmLogger::Alarms::Alarm>();
        c->parent = this;
        alarm.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmLogger::Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmLogger::Alarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmLogger::Alarms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmLogger::Alarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

AlarmLogger::Alarms::Alarm::Alarm()
    :
    event_id{YType::uint32, "event-id"},
    source_id{YType::str, "source-id"},
    timestamp{YType::uint64, "timestamp"},
    category{YType::str, "category"},
    group{YType::str, "group"},
    code{YType::str, "code"},
    severity{YType::enumeration, "severity"},
    state{YType::enumeration, "state"},
    correlation_id{YType::uint32, "correlation-id"},
    is_admin{YType::boolean, "is-admin"},
    additional_text{YType::str, "additional-text"}
{

    yang_name = "alarm"; yang_parent_name = "alarms"; is_top_level_class = false; has_list_ancestor = false; 
}

AlarmLogger::Alarms::Alarm::~Alarm()
{
}

bool AlarmLogger::Alarms::Alarm::has_data() const
{
    if (is_presence_container) return true;
    return event_id.is_set
	|| source_id.is_set
	|| timestamp.is_set
	|| category.is_set
	|| group.is_set
	|| code.is_set
	|| severity.is_set
	|| state.is_set
	|| correlation_id.is_set
	|| is_admin.is_set
	|| additional_text.is_set;
}

bool AlarmLogger::Alarms::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(source_id.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(correlation_id.yfilter)
	|| ydk::is_set(is_admin.yfilter)
	|| ydk::is_set(additional_text.yfilter);
}

std::string AlarmLogger::Alarms::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger/alarms/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmLogger::Alarms::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmLogger::Alarms::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (source_id.is_set || is_set(source_id.yfilter)) leaf_name_data.push_back(source_id.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (correlation_id.is_set || is_set(correlation_id.yfilter)) leaf_name_data.push_back(correlation_id.get_name_leafdata());
    if (is_admin.is_set || is_set(is_admin.yfilter)) leaf_name_data.push_back(is_admin.get_name_leafdata());
    if (additional_text.is_set || is_set(additional_text.yfilter)) leaf_name_data.push_back(additional_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmLogger::Alarms::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmLogger::Alarms::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmLogger::Alarms::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-id")
    {
        source_id = value;
        source_id.value_namespace = name_space;
        source_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "correlation-id")
    {
        correlation_id = value;
        correlation_id.value_namespace = name_space;
        correlation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin")
    {
        is_admin = value;
        is_admin.value_namespace = name_space;
        is_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-text")
    {
        additional_text = value;
        additional_text.value_namespace = name_space;
        additional_text.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmLogger::Alarms::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "source-id")
    {
        source_id.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "correlation-id")
    {
        correlation_id.yfilter = yfilter;
    }
    if(value_path == "is-admin")
    {
        is_admin.yfilter = yfilter;
    }
    if(value_path == "additional-text")
    {
        additional_text.yfilter = yfilter;
    }
}

bool AlarmLogger::Alarms::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-id" || name == "source-id" || name == "timestamp" || name == "category" || name == "group" || name == "code" || name == "severity" || name == "state" || name == "correlation-id" || name == "is-admin" || name == "additional-text")
        return true;
    return false;
}

const Enum::YLeaf AlAlarmBistate::not_available {0, "not-available"};
const Enum::YLeaf AlAlarmBistate::active {1, "active"};
const Enum::YLeaf AlAlarmBistate::clear {2, "clear"};

const Enum::YLeaf AlAlarmSeverity::unknown {-1, "unknown"};
const Enum::YLeaf AlAlarmSeverity::emergency {0, "emergency"};
const Enum::YLeaf AlAlarmSeverity::alert {1, "alert"};
const Enum::YLeaf AlAlarmSeverity::critical {2, "critical"};
const Enum::YLeaf AlAlarmSeverity::error {3, "error"};
const Enum::YLeaf AlAlarmSeverity::warning {4, "warning"};
const Enum::YLeaf AlAlarmSeverity::notice {5, "notice"};
const Enum::YLeaf AlAlarmSeverity::informational {6, "informational"};
const Enum::YLeaf AlAlarmSeverity::debugging {7, "debugging"};


}
}

