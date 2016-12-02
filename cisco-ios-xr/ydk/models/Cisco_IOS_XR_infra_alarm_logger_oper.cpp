
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_alarm_logger_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_alarm_logger_oper {

AlarmLogger::BufferStatus::BufferStatus()
    :
    	capacity_threshold{YType::uint32, "capacity-threshold"},
	 log_buffer_size{YType::uint32, "log-buffer-size"},
	 max_log_buffer_size{YType::uint32, "max-log-buffer-size"},
	 record_count{YType::uint32, "record-count"},
	 severity_filter{YType::enumeration, "severity-filter"}
{
    yang_name = "buffer-status"; yang_parent_name = "alarm-logger";
}

AlarmLogger::BufferStatus::~BufferStatus()
{
}

bool AlarmLogger::BufferStatus::has_data() const
{
    return capacity_threshold.is_set
	|| log_buffer_size.is_set
	|| max_log_buffer_size.is_set
	|| record_count.is_set
	|| severity_filter.is_set;
}

bool AlarmLogger::BufferStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(capacity_threshold.operation)
	|| is_set(log_buffer_size.operation)
	|| is_set(max_log_buffer_size.operation)
	|| is_set(record_count.operation)
	|| is_set(severity_filter.operation);
}

std::string AlarmLogger::BufferStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-status";

    return path_buffer.str();

}

EntityPath AlarmLogger::BufferStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capacity_threshold.is_set || is_set(capacity_threshold.operation)) leaf_name_data.push_back(capacity_threshold.get_name_leafdata());
    if (log_buffer_size.is_set || is_set(log_buffer_size.operation)) leaf_name_data.push_back(log_buffer_size.get_name_leafdata());
    if (max_log_buffer_size.is_set || is_set(max_log_buffer_size.operation)) leaf_name_data.push_back(max_log_buffer_size.get_name_leafdata());
    if (record_count.is_set || is_set(record_count.operation)) leaf_name_data.push_back(record_count.get_name_leafdata());
    if (severity_filter.is_set || is_set(severity_filter.operation)) leaf_name_data.push_back(severity_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AlarmLogger::BufferStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AlarmLogger::BufferStatus::get_children()
{
    return children;
}

void AlarmLogger::BufferStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capacity-threshold")
    {
        capacity_threshold = value;
    }
    if(value_path == "log-buffer-size")
    {
        log_buffer_size = value;
    }
    if(value_path == "max-log-buffer-size")
    {
        max_log_buffer_size = value;
    }
    if(value_path == "record-count")
    {
        record_count = value;
    }
    if(value_path == "severity-filter")
    {
        severity_filter = value;
    }
}

AlarmLogger::Alarms::Alarm::Alarm()
    :
    	event_id{YType::int32, "event-id"},
	 additional_text{YType::str, "additional-text"},
	 category{YType::str, "category"},
	 code{YType::str, "code"},
	 correlation_id{YType::uint32, "correlation-id"},
	 group{YType::str, "group"},
	 is_admin{YType::boolean, "is-admin"},
	 severity{YType::enumeration, "severity"},
	 source_id{YType::str, "source-id"},
	 state{YType::enumeration, "state"},
	 timestamp{YType::uint64, "timestamp"}
{
    yang_name = "alarm"; yang_parent_name = "alarms";
}

AlarmLogger::Alarms::Alarm::~Alarm()
{
}

bool AlarmLogger::Alarms::Alarm::has_data() const
{
    return event_id.is_set
	|| additional_text.is_set
	|| category.is_set
	|| code.is_set
	|| correlation_id.is_set
	|| group.is_set
	|| is_admin.is_set
	|| severity.is_set
	|| source_id.is_set
	|| state.is_set
	|| timestamp.is_set;
}

bool AlarmLogger::Alarms::Alarm::has_operation() const
{
    return is_set(operation)
	|| is_set(event_id.operation)
	|| is_set(additional_text.operation)
	|| is_set(category.operation)
	|| is_set(code.operation)
	|| is_set(correlation_id.operation)
	|| is_set(group.operation)
	|| is_set(is_admin.operation)
	|| is_set(severity.operation)
	|| is_set(source_id.operation)
	|| is_set(state.operation)
	|| is_set(timestamp.operation);
}

std::string AlarmLogger::Alarms::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm" <<"[event-id='" <<event_id.get() <<"']";

    return path_buffer.str();

}

EntityPath AlarmLogger::Alarms::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger/alarms/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.operation)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (additional_text.is_set || is_set(additional_text.operation)) leaf_name_data.push_back(additional_text.get_name_leafdata());
    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (correlation_id.is_set || is_set(correlation_id.operation)) leaf_name_data.push_back(correlation_id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (is_admin.is_set || is_set(is_admin.operation)) leaf_name_data.push_back(is_admin.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (source_id.is_set || is_set(source_id.operation)) leaf_name_data.push_back(source_id.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AlarmLogger::Alarms::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AlarmLogger::Alarms::Alarm::get_children()
{
    return children;
}

void AlarmLogger::Alarms::Alarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-id")
    {
        event_id = value;
    }
    if(value_path == "additional-text")
    {
        additional_text = value;
    }
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "correlation-id")
    {
        correlation_id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "is-admin")
    {
        is_admin = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "source-id")
    {
        source_id = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

AlarmLogger::Alarms::Alarms()
{
    yang_name = "alarms"; yang_parent_name = "alarm-logger";
}

AlarmLogger::Alarms::~Alarms()
{
}

bool AlarmLogger::Alarms::has_data() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmLogger::Alarms::has_operation() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AlarmLogger::Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarms";

    return path_buffer.str();

}

EntityPath AlarmLogger::Alarms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AlarmLogger::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alarm")
    {
        for(auto const & c : alarm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AlarmLogger::Alarms::Alarm>();
        c->parent = this;
        alarm.push_back(std::move(c));
        children[segment_path] = alarm.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AlarmLogger::Alarms::get_children()
{
    for (auto const & c : alarm)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void AlarmLogger::Alarms::set_value(const std::string & value_path, std::string value)
{
}

AlarmLogger::AlarmLogger()
    :
    alarms(std::make_unique<AlarmLogger::Alarms>())
	,buffer_status(std::make_unique<AlarmLogger::BufferStatus>())
{
    alarms->parent = this;
    children["alarms"] = alarms.get();

    buffer_status->parent = this;
    children["buffer-status"] = buffer_status.get();

    yang_name = "alarm-logger"; yang_parent_name = "Cisco-IOS-XR-infra-alarm-logger-oper";
}

AlarmLogger::~AlarmLogger()
{
}

bool AlarmLogger::has_data() const
{
    return (alarms !=  nullptr && alarms->has_data())
	|| (buffer_status !=  nullptr && buffer_status->has_data());
}

bool AlarmLogger::has_operation() const
{
    return is_set(operation)
	|| (alarms !=  nullptr && is_set(alarms->operation))
	|| (buffer_status !=  nullptr && is_set(buffer_status->operation));
}

std::string AlarmLogger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger";

    return path_buffer.str();

}

EntityPath AlarmLogger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AlarmLogger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alarms")
    {
        if(alarms != nullptr)
        {
            children["alarms"] = alarms.get();
        }
        else
        {
            alarms = std::make_unique<AlarmLogger::Alarms>();
            alarms->parent = this;
            children["alarms"] = alarms.get();
        }
        return children.at("alarms");
    }

    if(child_yang_name == "buffer-status")
    {
        if(buffer_status != nullptr)
        {
            children["buffer-status"] = buffer_status.get();
        }
        else
        {
            buffer_status = std::make_unique<AlarmLogger::BufferStatus>();
            buffer_status->parent = this;
            children["buffer-status"] = buffer_status.get();
        }
        return children.at("buffer-status");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AlarmLogger::get_children()
{
    if(children.find("alarms") == children.end())
    {
        if(alarms != nullptr)
        {
            children["alarms"] = alarms.get();
        }
    }

    if(children.find("buffer-status") == children.end())
    {
        if(buffer_status != nullptr)
        {
            children["buffer-status"] = buffer_status.get();
        }
    }

    return children;
}

void AlarmLogger::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> AlarmLogger::clone_ptr()
{
    return std::make_unique<AlarmLogger>();
}

const Enum::Value AlAlarmBistateEnum::not_available {0, "not-available"};
const Enum::Value AlAlarmBistateEnum::active {1, "active"};
const Enum::Value AlAlarmBistateEnum::clear {2, "clear"};

const Enum::Value AlAlarmSeverityEnum::unknown {-1, "unknown"};
const Enum::Value AlAlarmSeverityEnum::emergency {0, "emergency"};
const Enum::Value AlAlarmSeverityEnum::alert {1, "alert"};
const Enum::Value AlAlarmSeverityEnum::critical {2, "critical"};
const Enum::Value AlAlarmSeverityEnum::error {3, "error"};
const Enum::Value AlAlarmSeverityEnum::warning {4, "warning"};
const Enum::Value AlAlarmSeverityEnum::notice {5, "notice"};
const Enum::Value AlAlarmSeverityEnum::informational {6, "informational"};
const Enum::Value AlAlarmSeverityEnum::debugging {7, "debugging"};


}
}

