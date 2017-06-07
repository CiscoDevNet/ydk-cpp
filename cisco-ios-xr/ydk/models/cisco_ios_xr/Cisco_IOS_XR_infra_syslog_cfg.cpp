
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_syslog_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_syslog_cfg {

SyslogService::SyslogService()
    :
    timestamps(std::make_shared<SyslogService::Timestamps>())
{
    timestamps->parent = this;

    yang_name = "syslog-service"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-cfg";
}

SyslogService::~SyslogService()
{
}

bool SyslogService::has_data() const
{
    return (timestamps !=  nullptr && timestamps->has_data());
}

bool SyslogService::has_operation() const
{
    return is_set(operation)
	|| (timestamps !=  nullptr && timestamps->has_operation());
}

std::string SyslogService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service";

    return path_buffer.str();

}

const EntityPath SyslogService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamps")
    {
        if(timestamps == nullptr)
        {
            timestamps = std::make_shared<SyslogService::Timestamps>();
        }
        return timestamps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamps != nullptr)
    {
        children["timestamps"] = timestamps;
    }

    return children;
}

void SyslogService::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SyslogService::clone_ptr() const
{
    return std::make_shared<SyslogService>();
}

std::string SyslogService::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SyslogService::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SyslogService::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SyslogService::Timestamps::Timestamps()
    :
    enable{YType::empty, "enable"}
    	,
    debug(std::make_shared<SyslogService::Timestamps::Debug>())
	,log(std::make_shared<SyslogService::Timestamps::Log>())
{
    debug->parent = this;

    log->parent = this;

    yang_name = "timestamps"; yang_parent_name = "syslog-service";
}

SyslogService::Timestamps::~Timestamps()
{
}

bool SyslogService::Timestamps::has_data() const
{
    return enable.is_set
	|| (debug !=  nullptr && debug->has_data())
	|| (log !=  nullptr && log->has_data());
}

bool SyslogService::Timestamps::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (debug !=  nullptr && debug->has_operation())
	|| (log !=  nullptr && log->has_operation());
}

std::string SyslogService::Timestamps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamps";

    return path_buffer.str();

}

const EntityPath SyslogService::Timestamps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::Timestamps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<SyslogService::Timestamps::Debug>();
        }
        return debug;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<SyslogService::Timestamps::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::Timestamps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void SyslogService::Timestamps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

SyslogService::Timestamps::Log::Log()
    :
    log_timestamp_disable{YType::empty, "log-timestamp-disable"},
    log_uptime{YType::empty, "log-uptime"}
    	,
    log_datetime(std::make_shared<SyslogService::Timestamps::Log::LogDatetime>())
{
    log_datetime->parent = this;

    yang_name = "log"; yang_parent_name = "timestamps";
}

SyslogService::Timestamps::Log::~Log()
{
}

bool SyslogService::Timestamps::Log::has_data() const
{
    return log_timestamp_disable.is_set
	|| log_uptime.is_set
	|| (log_datetime !=  nullptr && log_datetime->has_data());
}

bool SyslogService::Timestamps::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(log_timestamp_disable.operation)
	|| is_set(log_uptime.operation)
	|| (log_datetime !=  nullptr && log_datetime->has_operation());
}

std::string SyslogService::Timestamps::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";

    return path_buffer.str();

}

const EntityPath SyslogService::Timestamps::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_timestamp_disable.is_set || is_set(log_timestamp_disable.operation)) leaf_name_data.push_back(log_timestamp_disable.get_name_leafdata());
    if (log_uptime.is_set || is_set(log_uptime.operation)) leaf_name_data.push_back(log_uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::Timestamps::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-datetime")
    {
        if(log_datetime == nullptr)
        {
            log_datetime = std::make_shared<SyslogService::Timestamps::Log::LogDatetime>();
        }
        return log_datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::Timestamps::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log_datetime != nullptr)
    {
        children["log-datetime"] = log_datetime;
    }

    return children;
}

void SyslogService::Timestamps::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-timestamp-disable")
    {
        log_timestamp_disable = value;
    }
    if(value_path == "log-uptime")
    {
        log_uptime = value;
    }
}

SyslogService::Timestamps::Log::LogDatetime::LogDatetime()
    :
    log_datetime_value(std::make_shared<SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue>())
{
    log_datetime_value->parent = this;

    yang_name = "log-datetime"; yang_parent_name = "log";
}

SyslogService::Timestamps::Log::LogDatetime::~LogDatetime()
{
}

bool SyslogService::Timestamps::Log::LogDatetime::has_data() const
{
    return (log_datetime_value !=  nullptr && log_datetime_value->has_data());
}

bool SyslogService::Timestamps::Log::LogDatetime::has_operation() const
{
    return is_set(operation)
	|| (log_datetime_value !=  nullptr && log_datetime_value->has_operation());
}

std::string SyslogService::Timestamps::Log::LogDatetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-datetime";

    return path_buffer.str();

}

const EntityPath SyslogService::Timestamps::Log::LogDatetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/log/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::Timestamps::Log::LogDatetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-datetime-value")
    {
        if(log_datetime_value == nullptr)
        {
            log_datetime_value = std::make_shared<SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue>();
        }
        return log_datetime_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::Timestamps::Log::LogDatetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log_datetime_value != nullptr)
    {
        children["log-datetime-value"] = log_datetime_value;
    }

    return children;
}

void SyslogService::Timestamps::Log::LogDatetime::set_value(const std::string & value_path, std::string value)
{
}

SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::LogDatetimeValue()
    :
    msec{YType::enumeration, "msec"},
    time_stamp_value{YType::enumeration, "time-stamp-value"},
    time_zone{YType::enumeration, "time-zone"},
    year{YType::enumeration, "year"}
{
    yang_name = "log-datetime-value"; yang_parent_name = "log-datetime";
}

SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::~LogDatetimeValue()
{
}

bool SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::has_data() const
{
    return msec.is_set
	|| time_stamp_value.is_set
	|| time_zone.is_set
	|| year.is_set;
}

bool SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(time_stamp_value.operation)
	|| is_set(time_zone.operation)
	|| is_set(year.operation);
}

std::string SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-datetime-value";

    return path_buffer.str();

}

const EntityPath SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/log/log-datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (time_stamp_value.is_set || is_set(time_stamp_value.operation)) leaf_name_data.push_back(time_stamp_value.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.operation)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "time-stamp-value")
    {
        time_stamp_value = value;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

SyslogService::Timestamps::Debug::Debug()
    :
    debug_timestamp_disable{YType::empty, "debug-timestamp-disable"},
    debug_uptime{YType::empty, "debug-uptime"}
    	,
    debug_datetime(std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime>())
{
    debug_datetime->parent = this;

    yang_name = "debug"; yang_parent_name = "timestamps";
}

SyslogService::Timestamps::Debug::~Debug()
{
}

bool SyslogService::Timestamps::Debug::has_data() const
{
    return debug_timestamp_disable.is_set
	|| debug_uptime.is_set
	|| (debug_datetime !=  nullptr && debug_datetime->has_data());
}

bool SyslogService::Timestamps::Debug::has_operation() const
{
    return is_set(operation)
	|| is_set(debug_timestamp_disable.operation)
	|| is_set(debug_uptime.operation)
	|| (debug_datetime !=  nullptr && debug_datetime->has_operation());
}

std::string SyslogService::Timestamps::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";

    return path_buffer.str();

}

const EntityPath SyslogService::Timestamps::Debug::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug_timestamp_disable.is_set || is_set(debug_timestamp_disable.operation)) leaf_name_data.push_back(debug_timestamp_disable.get_name_leafdata());
    if (debug_uptime.is_set || is_set(debug_uptime.operation)) leaf_name_data.push_back(debug_uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::Timestamps::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug-datetime")
    {
        if(debug_datetime == nullptr)
        {
            debug_datetime = std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime>();
        }
        return debug_datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::Timestamps::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(debug_datetime != nullptr)
    {
        children["debug-datetime"] = debug_datetime;
    }

    return children;
}

void SyslogService::Timestamps::Debug::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug-timestamp-disable")
    {
        debug_timestamp_disable = value;
    }
    if(value_path == "debug-uptime")
    {
        debug_uptime = value;
    }
}

SyslogService::Timestamps::Debug::DebugDatetime::DebugDatetime()
    :
    datetime_value(std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue>())
{
    datetime_value->parent = this;

    yang_name = "debug-datetime"; yang_parent_name = "debug";
}

SyslogService::Timestamps::Debug::DebugDatetime::~DebugDatetime()
{
}

bool SyslogService::Timestamps::Debug::DebugDatetime::has_data() const
{
    return (datetime_value !=  nullptr && datetime_value->has_data());
}

bool SyslogService::Timestamps::Debug::DebugDatetime::has_operation() const
{
    return is_set(operation)
	|| (datetime_value !=  nullptr && datetime_value->has_operation());
}

std::string SyslogService::Timestamps::Debug::DebugDatetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug-datetime";

    return path_buffer.str();

}

const EntityPath SyslogService::Timestamps::Debug::DebugDatetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/debug/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::Timestamps::Debug::DebugDatetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datetime-value")
    {
        if(datetime_value == nullptr)
        {
            datetime_value = std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue>();
        }
        return datetime_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::Timestamps::Debug::DebugDatetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(datetime_value != nullptr)
    {
        children["datetime-value"] = datetime_value;
    }

    return children;
}

void SyslogService::Timestamps::Debug::DebugDatetime::set_value(const std::string & value_path, std::string value)
{
}

SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::DatetimeValue()
    :
    msec{YType::enumeration, "msec"},
    time_stamp_value{YType::enumeration, "time-stamp-value"},
    time_zone{YType::enumeration, "time-zone"},
    year{YType::enumeration, "year"}
{
    yang_name = "datetime-value"; yang_parent_name = "debug-datetime";
}

SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::~DatetimeValue()
{
}

bool SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::has_data() const
{
    return msec.is_set
	|| time_stamp_value.is_set
	|| time_zone.is_set
	|| year.is_set;
}

bool SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(time_stamp_value.operation)
	|| is_set(time_zone.operation)
	|| is_set(year.operation);
}

std::string SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime-value";

    return path_buffer.str();

}

const EntityPath SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/debug/debug-datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (time_stamp_value.is_set || is_set(time_stamp_value.operation)) leaf_name_data.push_back(time_stamp_value.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.operation)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "time-stamp-value")
    {
        time_stamp_value = value;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Syslog::Syslog()
    :
    enable_console_logging{YType::boolean, "enable-console-logging"},
    host_name_prefix{YType::str, "host-name-prefix"},
    local_log_file_size{YType::uint32, "local-log-file-size"},
    suppress_duplicates{YType::empty, "suppress-duplicates"}
    	,
    alarm_logger(std::make_shared<Syslog::AlarmLogger>())
	,archive(std::make_shared<Syslog::Archive>())
	,buffered_logging(std::make_shared<Syslog::BufferedLogging>())
	,console_logging(std::make_shared<Syslog::ConsoleLogging>())
	,correlator(std::make_shared<Syslog::Correlator>())
	,files(std::make_shared<Syslog::Files>())
	,history_logging(std::make_shared<Syslog::HistoryLogging>())
	,host_server(std::make_shared<Syslog::HostServer>())
	,ipv4(std::make_shared<Syslog::Ipv4>())
	,ipv6(std::make_shared<Syslog::Ipv6>())
	,logging_facilities(std::make_shared<Syslog::LoggingFacilities>())
	,monitor_logging(std::make_shared<Syslog::MonitorLogging>())
	,source_interface_table(std::make_shared<Syslog::SourceInterfaceTable>())
	,suppression(std::make_shared<Syslog::Suppression>())
	,trap_logging(std::make_shared<Syslog::TrapLogging>())
{
    alarm_logger->parent = this;

    archive->parent = this;

    buffered_logging->parent = this;

    console_logging->parent = this;

    correlator->parent = this;

    files->parent = this;

    history_logging->parent = this;

    host_server->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    logging_facilities->parent = this;

    monitor_logging->parent = this;

    source_interface_table->parent = this;

    suppression->parent = this;

    trap_logging->parent = this;

    yang_name = "syslog"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-cfg";
}

Syslog::~Syslog()
{
}

bool Syslog::has_data() const
{
    return enable_console_logging.is_set
	|| host_name_prefix.is_set
	|| local_log_file_size.is_set
	|| suppress_duplicates.is_set
	|| (alarm_logger !=  nullptr && alarm_logger->has_data())
	|| (archive !=  nullptr && archive->has_data())
	|| (buffered_logging !=  nullptr && buffered_logging->has_data())
	|| (console_logging !=  nullptr && console_logging->has_data())
	|| (correlator !=  nullptr && correlator->has_data())
	|| (files !=  nullptr && files->has_data())
	|| (history_logging !=  nullptr && history_logging->has_data())
	|| (host_server !=  nullptr && host_server->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging_facilities !=  nullptr && logging_facilities->has_data())
	|| (monitor_logging !=  nullptr && monitor_logging->has_data())
	|| (source_interface_table !=  nullptr && source_interface_table->has_data())
	|| (suppression !=  nullptr && suppression->has_data())
	|| (trap_logging !=  nullptr && trap_logging->has_data());
}

bool Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_console_logging.operation)
	|| is_set(host_name_prefix.operation)
	|| is_set(local_log_file_size.operation)
	|| is_set(suppress_duplicates.operation)
	|| (alarm_logger !=  nullptr && alarm_logger->has_operation())
	|| (archive !=  nullptr && archive->has_operation())
	|| (buffered_logging !=  nullptr && buffered_logging->has_operation())
	|| (console_logging !=  nullptr && console_logging->has_operation())
	|| (correlator !=  nullptr && correlator->has_operation())
	|| (files !=  nullptr && files->has_operation())
	|| (history_logging !=  nullptr && history_logging->has_operation())
	|| (host_server !=  nullptr && host_server->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging_facilities !=  nullptr && logging_facilities->has_operation())
	|| (monitor_logging !=  nullptr && monitor_logging->has_operation())
	|| (source_interface_table !=  nullptr && source_interface_table->has_operation())
	|| (suppression !=  nullptr && suppression->has_operation())
	|| (trap_logging !=  nullptr && trap_logging->has_operation());
}

std::string Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog";

    return path_buffer.str();

}

const EntityPath Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_console_logging.is_set || is_set(enable_console_logging.operation)) leaf_name_data.push_back(enable_console_logging.get_name_leafdata());
    if (host_name_prefix.is_set || is_set(host_name_prefix.operation)) leaf_name_data.push_back(host_name_prefix.get_name_leafdata());
    if (local_log_file_size.is_set || is_set(local_log_file_size.operation)) leaf_name_data.push_back(local_log_file_size.get_name_leafdata());
    if (suppress_duplicates.is_set || is_set(suppress_duplicates.operation)) leaf_name_data.push_back(suppress_duplicates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-logger")
    {
        if(alarm_logger == nullptr)
        {
            alarm_logger = std::make_shared<Syslog::AlarmLogger>();
        }
        return alarm_logger;
    }

    if(child_yang_name == "archive")
    {
        if(archive == nullptr)
        {
            archive = std::make_shared<Syslog::Archive>();
        }
        return archive;
    }

    if(child_yang_name == "buffered-logging")
    {
        if(buffered_logging == nullptr)
        {
            buffered_logging = std::make_shared<Syslog::BufferedLogging>();
        }
        return buffered_logging;
    }

    if(child_yang_name == "console-logging")
    {
        if(console_logging == nullptr)
        {
            console_logging = std::make_shared<Syslog::ConsoleLogging>();
        }
        return console_logging;
    }

    if(child_yang_name == "correlator")
    {
        if(correlator == nullptr)
        {
            correlator = std::make_shared<Syslog::Correlator>();
        }
        return correlator;
    }

    if(child_yang_name == "files")
    {
        if(files == nullptr)
        {
            files = std::make_shared<Syslog::Files>();
        }
        return files;
    }

    if(child_yang_name == "history-logging")
    {
        if(history_logging == nullptr)
        {
            history_logging = std::make_shared<Syslog::HistoryLogging>();
        }
        return history_logging;
    }

    if(child_yang_name == "host-server")
    {
        if(host_server == nullptr)
        {
            host_server = std::make_shared<Syslog::HostServer>();
        }
        return host_server;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Syslog::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Syslog::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging-facilities")
    {
        if(logging_facilities == nullptr)
        {
            logging_facilities = std::make_shared<Syslog::LoggingFacilities>();
        }
        return logging_facilities;
    }

    if(child_yang_name == "monitor-logging")
    {
        if(monitor_logging == nullptr)
        {
            monitor_logging = std::make_shared<Syslog::MonitorLogging>();
        }
        return monitor_logging;
    }

    if(child_yang_name == "source-interface-table")
    {
        if(source_interface_table == nullptr)
        {
            source_interface_table = std::make_shared<Syslog::SourceInterfaceTable>();
        }
        return source_interface_table;
    }

    if(child_yang_name == "suppression")
    {
        if(suppression == nullptr)
        {
            suppression = std::make_shared<Syslog::Suppression>();
        }
        return suppression;
    }

    if(child_yang_name == "trap-logging")
    {
        if(trap_logging == nullptr)
        {
            trap_logging = std::make_shared<Syslog::TrapLogging>();
        }
        return trap_logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarm_logger != nullptr)
    {
        children["alarm-logger"] = alarm_logger;
    }

    if(archive != nullptr)
    {
        children["archive"] = archive;
    }

    if(buffered_logging != nullptr)
    {
        children["buffered-logging"] = buffered_logging;
    }

    if(console_logging != nullptr)
    {
        children["console-logging"] = console_logging;
    }

    if(correlator != nullptr)
    {
        children["correlator"] = correlator;
    }

    if(files != nullptr)
    {
        children["files"] = files;
    }

    if(history_logging != nullptr)
    {
        children["history-logging"] = history_logging;
    }

    if(host_server != nullptr)
    {
        children["host-server"] = host_server;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging_facilities != nullptr)
    {
        children["logging-facilities"] = logging_facilities;
    }

    if(monitor_logging != nullptr)
    {
        children["monitor-logging"] = monitor_logging;
    }

    if(source_interface_table != nullptr)
    {
        children["source-interface-table"] = source_interface_table;
    }

    if(suppression != nullptr)
    {
        children["suppression"] = suppression;
    }

    if(trap_logging != nullptr)
    {
        children["trap-logging"] = trap_logging;
    }

    return children;
}

void Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-console-logging")
    {
        enable_console_logging = value;
    }
    if(value_path == "host-name-prefix")
    {
        host_name_prefix = value;
    }
    if(value_path == "local-log-file-size")
    {
        local_log_file_size = value;
    }
    if(value_path == "suppress-duplicates")
    {
        suppress_duplicates = value;
    }
}

std::shared_ptr<Entity> Syslog::clone_ptr() const
{
    return std::make_shared<Syslog>();
}

std::string Syslog::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Syslog::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Syslog::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Syslog::MonitorLogging::MonitorLogging()
    :
    logging_level{YType::enumeration, "logging-level"}
    	,
    monitor_discriminator(std::make_shared<Syslog::MonitorLogging::MonitorDiscriminator>())
{
    monitor_discriminator->parent = this;

    yang_name = "monitor-logging"; yang_parent_name = "syslog";
}

Syslog::MonitorLogging::~MonitorLogging()
{
}

bool Syslog::MonitorLogging::has_data() const
{
    return logging_level.is_set
	|| (monitor_discriminator !=  nullptr && monitor_discriminator->has_data());
}

bool Syslog::MonitorLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(logging_level.operation)
	|| (monitor_discriminator !=  nullptr && monitor_discriminator->has_operation());
}

std::string Syslog::MonitorLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-logging";

    return path_buffer.str();

}

const EntityPath Syslog::MonitorLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_level.is_set || is_set(logging_level.operation)) leaf_name_data.push_back(logging_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::MonitorLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor-discriminator")
    {
        if(monitor_discriminator == nullptr)
        {
            monitor_discriminator = std::make_shared<Syslog::MonitorLogging::MonitorDiscriminator>();
        }
        return monitor_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::MonitorLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor_discriminator != nullptr)
    {
        children["monitor-discriminator"] = monitor_discriminator;
    }

    return children;
}

void Syslog::MonitorLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logging-level")
    {
        logging_level = value;
    }
}

Syslog::MonitorLogging::MonitorDiscriminator::MonitorDiscriminator()
    :
    match1{YType::str, "match1"},
    match2{YType::str, "match2"},
    match3{YType::str, "match3"},
    nomatch1{YType::str, "nomatch1"},
    nomatch2{YType::str, "nomatch2"},
    nomatch3{YType::str, "nomatch3"}
{
    yang_name = "monitor-discriminator"; yang_parent_name = "monitor-logging";
}

Syslog::MonitorLogging::MonitorDiscriminator::~MonitorDiscriminator()
{
}

bool Syslog::MonitorLogging::MonitorDiscriminator::has_data() const
{
    return match1.is_set
	|| match2.is_set
	|| match3.is_set
	|| nomatch1.is_set
	|| nomatch2.is_set
	|| nomatch3.is_set;
}

bool Syslog::MonitorLogging::MonitorDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(match1.operation)
	|| is_set(match2.operation)
	|| is_set(match3.operation)
	|| is_set(nomatch1.operation)
	|| is_set(nomatch2.operation)
	|| is_set(nomatch3.operation);
}

std::string Syslog::MonitorLogging::MonitorDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-discriminator";

    return path_buffer.str();

}

const EntityPath Syslog::MonitorLogging::MonitorDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/monitor-logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match1.is_set || is_set(match1.operation)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (match2.is_set || is_set(match2.operation)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (match3.is_set || is_set(match3.operation)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.operation)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.operation)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.operation)) leaf_name_data.push_back(nomatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::MonitorLogging::MonitorDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::MonitorLogging::MonitorDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::MonitorLogging::MonitorDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match1")
    {
        match1 = value;
    }
    if(value_path == "match2")
    {
        match2 = value;
    }
    if(value_path == "match3")
    {
        match3 = value;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
    }
}

Syslog::HistoryLogging::HistoryLogging()
    :
    history_size{YType::uint32, "history-size"},
    logging_level{YType::enumeration, "logging-level"}
{
    yang_name = "history-logging"; yang_parent_name = "syslog";
}

Syslog::HistoryLogging::~HistoryLogging()
{
}

bool Syslog::HistoryLogging::has_data() const
{
    return history_size.is_set
	|| logging_level.is_set;
}

bool Syslog::HistoryLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(history_size.operation)
	|| is_set(logging_level.operation);
}

std::string Syslog::HistoryLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-logging";

    return path_buffer.str();

}

const EntityPath Syslog::HistoryLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.operation)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (logging_level.is_set || is_set(logging_level.operation)) leaf_name_data.push_back(logging_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HistoryLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HistoryLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HistoryLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "history-size")
    {
        history_size = value;
    }
    if(value_path == "logging-level")
    {
        logging_level = value;
    }
}

Syslog::LoggingFacilities::LoggingFacilities()
    :
    facility_level{YType::enumeration, "facility-level"}
{
    yang_name = "logging-facilities"; yang_parent_name = "syslog";
}

Syslog::LoggingFacilities::~LoggingFacilities()
{
}

bool Syslog::LoggingFacilities::has_data() const
{
    return facility_level.is_set;
}

bool Syslog::LoggingFacilities::has_operation() const
{
    return is_set(operation)
	|| is_set(facility_level.operation);
}

std::string Syslog::LoggingFacilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-facilities";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingFacilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility_level.is_set || is_set(facility_level.operation)) leaf_name_data.push_back(facility_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingFacilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingFacilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingFacilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "facility-level")
    {
        facility_level = value;
    }
}

Syslog::TrapLogging::TrapLogging()
    :
    logging_level{YType::enumeration, "logging-level"}
{
    yang_name = "trap-logging"; yang_parent_name = "syslog";
}

Syslog::TrapLogging::~TrapLogging()
{
}

bool Syslog::TrapLogging::has_data() const
{
    return logging_level.is_set;
}

bool Syslog::TrapLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(logging_level.operation);
}

std::string Syslog::TrapLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-logging";

    return path_buffer.str();

}

const EntityPath Syslog::TrapLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_level.is_set || is_set(logging_level.operation)) leaf_name_data.push_back(logging_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::TrapLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::TrapLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::TrapLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logging-level")
    {
        logging_level = value;
    }
}

Syslog::BufferedLogging::BufferedLogging()
    :
    buffer_size{YType::uint32, "buffer-size"},
    logging_level{YType::enumeration, "logging-level"}
    	,
    buffered_discriminator(std::make_shared<Syslog::BufferedLogging::BufferedDiscriminator>())
{
    buffered_discriminator->parent = this;

    yang_name = "buffered-logging"; yang_parent_name = "syslog";
}

Syslog::BufferedLogging::~BufferedLogging()
{
}

bool Syslog::BufferedLogging::has_data() const
{
    return buffer_size.is_set
	|| logging_level.is_set
	|| (buffered_discriminator !=  nullptr && buffered_discriminator->has_data());
}

bool Syslog::BufferedLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| is_set(logging_level.operation)
	|| (buffered_discriminator !=  nullptr && buffered_discriminator->has_operation());
}

std::string Syslog::BufferedLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffered-logging";

    return path_buffer.str();

}

const EntityPath Syslog::BufferedLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (logging_level.is_set || is_set(logging_level.operation)) leaf_name_data.push_back(logging_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::BufferedLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffered-discriminator")
    {
        if(buffered_discriminator == nullptr)
        {
            buffered_discriminator = std::make_shared<Syslog::BufferedLogging::BufferedDiscriminator>();
        }
        return buffered_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::BufferedLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffered_discriminator != nullptr)
    {
        children["buffered-discriminator"] = buffered_discriminator;
    }

    return children;
}

void Syslog::BufferedLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
    if(value_path == "logging-level")
    {
        logging_level = value;
    }
}

Syslog::BufferedLogging::BufferedDiscriminator::BufferedDiscriminator()
    :
    match1{YType::str, "match1"},
    match2{YType::str, "match2"},
    match3{YType::str, "match3"},
    nomatch1{YType::str, "nomatch1"},
    nomatch2{YType::str, "nomatch2"},
    nomatch3{YType::str, "nomatch3"}
{
    yang_name = "buffered-discriminator"; yang_parent_name = "buffered-logging";
}

Syslog::BufferedLogging::BufferedDiscriminator::~BufferedDiscriminator()
{
}

bool Syslog::BufferedLogging::BufferedDiscriminator::has_data() const
{
    return match1.is_set
	|| match2.is_set
	|| match3.is_set
	|| nomatch1.is_set
	|| nomatch2.is_set
	|| nomatch3.is_set;
}

bool Syslog::BufferedLogging::BufferedDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(match1.operation)
	|| is_set(match2.operation)
	|| is_set(match3.operation)
	|| is_set(nomatch1.operation)
	|| is_set(nomatch2.operation)
	|| is_set(nomatch3.operation);
}

std::string Syslog::BufferedLogging::BufferedDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffered-discriminator";

    return path_buffer.str();

}

const EntityPath Syslog::BufferedLogging::BufferedDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/buffered-logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match1.is_set || is_set(match1.operation)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (match2.is_set || is_set(match2.operation)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (match3.is_set || is_set(match3.operation)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.operation)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.operation)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.operation)) leaf_name_data.push_back(nomatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::BufferedLogging::BufferedDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::BufferedLogging::BufferedDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::BufferedLogging::BufferedDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match1")
    {
        match1 = value;
    }
    if(value_path == "match2")
    {
        match2 = value;
    }
    if(value_path == "match3")
    {
        match3 = value;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
    }
}

Syslog::HostServer::HostServer()
    :
    vrfs(std::make_shared<Syslog::HostServer::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "host-server"; yang_parent_name = "syslog";
}

Syslog::HostServer::~HostServer()
{
}

bool Syslog::HostServer::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool Syslog::HostServer::has_operation() const
{
    return is_set(operation)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Syslog::HostServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-server";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Syslog::HostServer::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Syslog::HostServer::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "host-server";
}

Syslog::HostServer::Vrfs::~Vrfs()
{
}

bool Syslog::HostServer::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::HostServer::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/host-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::HostServer::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::HostServer::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    hosts(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts>())
	,ipv4s(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S>())
	,ipv6s(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S>())
{
    hosts->parent = this;

    ipv4s->parent = this;

    ipv6s->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Syslog::HostServer::Vrfs::Vrf::~Vrf()
{
}

bool Syslog::HostServer::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (hosts !=  nullptr && hosts->has_data())
	|| (ipv4s !=  nullptr && ipv4s->has_data())
	|| (ipv6s !=  nullptr && ipv6s->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (ipv4s !=  nullptr && ipv4s->has_operation())
	|| (ipv6s !=  nullptr && ipv6s->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/host-server/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts>();
        }
        return hosts;
    }

    if(child_yang_name == "ipv4s")
    {
        if(ipv4s == nullptr)
        {
            ipv4s = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S>();
        }
        return ipv4s;
    }

    if(child_yang_name == "ipv6s")
    {
        if(ipv6s == nullptr)
        {
            ipv6s = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S>();
        }
        return ipv6s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    if(ipv4s != nullptr)
    {
        children["ipv4s"] = ipv4s;
    }

    if(ipv6s != nullptr)
    {
        children["ipv6s"] = ipv6s;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6S()
{
    yang_name = "ipv6s"; yang_parent_name = "vrf";
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::~Ipv6S()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::has_data() const
{
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::has_operation() const
{
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6s";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv6S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6S' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6S::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
    	,
    ipv6_discriminator(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator>())
	,ipv6_severity_levels(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels>())
	,ipv6_severity_port(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort>())
{
    ipv6_discriminator->parent = this;

    ipv6_severity_levels->parent = this;

    ipv6_severity_port->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ipv6s";
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::~Ipv6()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::has_data() const
{
    return address.is_set
	|| (ipv6_discriminator !=  nullptr && ipv6_discriminator->has_data())
	|| (ipv6_severity_levels !=  nullptr && ipv6_severity_levels->has_data())
	|| (ipv6_severity_port !=  nullptr && ipv6_severity_port->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (ipv6_discriminator !=  nullptr && ipv6_discriminator->has_operation())
	|| (ipv6_severity_levels !=  nullptr && ipv6_severity_levels->has_operation())
	|| (ipv6_severity_port !=  nullptr && ipv6_severity_port->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-discriminator")
    {
        if(ipv6_discriminator == nullptr)
        {
            ipv6_discriminator = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator>();
        }
        return ipv6_discriminator;
    }

    if(child_yang_name == "ipv6-severity-levels")
    {
        if(ipv6_severity_levels == nullptr)
        {
            ipv6_severity_levels = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels>();
        }
        return ipv6_severity_levels;
    }

    if(child_yang_name == "ipv6-severity-port")
    {
        if(ipv6_severity_port == nullptr)
        {
            ipv6_severity_port = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort>();
        }
        return ipv6_severity_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_discriminator != nullptr)
    {
        children["ipv6-discriminator"] = ipv6_discriminator;
    }

    if(ipv6_severity_levels != nullptr)
    {
        children["ipv6-severity-levels"] = ipv6_severity_levels;
    }

    if(ipv6_severity_port != nullptr)
    {
        children["ipv6-severity-port"] = ipv6_severity_port;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::Ipv6SeverityPort()
    :
    port{YType::int32, "port"},
    severity{YType::int32, "severity"}
{
    yang_name = "ipv6-severity-port"; yang_parent_name = "ipv6";
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::~Ipv6SeverityPort()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::has_data() const
{
    return port.is_set
	|| severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation)
	|| is_set(severity.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-severity-port";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SeverityPort' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::Ipv6Discriminator()
    :
    match1{YType::str, "match1"},
    match2{YType::str, "match2"},
    match3{YType::str, "match3"},
    nomatch1{YType::str, "nomatch1"},
    nomatch2{YType::str, "nomatch2"},
    nomatch3{YType::str, "nomatch3"}
{
    yang_name = "ipv6-discriminator"; yang_parent_name = "ipv6";
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::~Ipv6Discriminator()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::has_data() const
{
    return match1.is_set
	|| match2.is_set
	|| match3.is_set
	|| nomatch1.is_set
	|| nomatch2.is_set
	|| nomatch3.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(match1.operation)
	|| is_set(match2.operation)
	|| is_set(match3.operation)
	|| is_set(nomatch1.operation)
	|| is_set(nomatch2.operation)
	|| is_set(nomatch3.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-discriminator";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Discriminator' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match1.is_set || is_set(match1.operation)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (match2.is_set || is_set(match2.operation)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (match3.is_set || is_set(match3.operation)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.operation)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.operation)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.operation)) leaf_name_data.push_back(nomatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match1")
    {
        match1 = value;
    }
    if(value_path == "match2")
    {
        match2 = value;
    }
    if(value_path == "match3")
    {
        match3 = value;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevels()
{
    yang_name = "ipv6-severity-levels"; yang_parent_name = "ipv6";
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::~Ipv6SeverityLevels()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::has_data() const
{
    for (std::size_t index=0; index<ipv6_severity_level.size(); index++)
    {
        if(ipv6_severity_level[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::has_operation() const
{
    for (std::size_t index=0; index<ipv6_severity_level.size(); index++)
    {
        if(ipv6_severity_level[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-severity-levels";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SeverityLevels' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-severity-level")
    {
        for(auto const & c : ipv6_severity_level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel>();
        c->parent = this;
        ipv6_severity_level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_severity_level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::Ipv6SeverityLevel()
    :
    severity{YType::enumeration, "severity"}
{
    yang_name = "ipv6-severity-level"; yang_parent_name = "ipv6-severity-levels";
}

Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::~Ipv6SeverityLevel()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::has_data() const
{
    return severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-severity-level" <<"[severity='" <<severity <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SeverityLevel' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "vrf";
}

Syslog::HostServer::Vrfs::Vrf::Hosts::~Hosts()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hosts' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::Host()
    :
    host_name{YType::str, "host-name"}
    	,
    host_name_discriminator(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator>())
	,host_name_severities(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities>())
	,host_severity_port(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort>())
{
    host_name_discriminator->parent = this;

    host_name_severities->parent = this;

    host_severity_port->parent = this;

    yang_name = "host"; yang_parent_name = "hosts";
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::~Host()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::has_data() const
{
    return host_name.is_set
	|| (host_name_discriminator !=  nullptr && host_name_discriminator->has_data())
	|| (host_name_severities !=  nullptr && host_name_severities->has_data())
	|| (host_severity_port !=  nullptr && host_severity_port->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| (host_name_discriminator !=  nullptr && host_name_discriminator->has_operation())
	|| (host_name_severities !=  nullptr && host_name_severities->has_operation())
	|| (host_severity_port !=  nullptr && host_severity_port->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name-discriminator")
    {
        if(host_name_discriminator == nullptr)
        {
            host_name_discriminator = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator>();
        }
        return host_name_discriminator;
    }

    if(child_yang_name == "host-name-severities")
    {
        if(host_name_severities == nullptr)
        {
            host_name_severities = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities>();
        }
        return host_name_severities;
    }

    if(child_yang_name == "host-severity-port")
    {
        if(host_severity_port == nullptr)
        {
            host_severity_port = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort>();
        }
        return host_severity_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_name_discriminator != nullptr)
    {
        children["host-name-discriminator"] = host_name_discriminator;
    }

    if(host_name_severities != nullptr)
    {
        children["host-name-severities"] = host_name_severities;
    }

    if(host_severity_port != nullptr)
    {
        children["host-severity-port"] = host_severity_port;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverities()
{
    yang_name = "host-name-severities"; yang_parent_name = "host";
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::~HostNameSeverities()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::has_data() const
{
    for (std::size_t index=0; index<host_name_severity.size(); index++)
    {
        if(host_name_severity[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::has_operation() const
{
    for (std::size_t index=0; index<host_name_severity.size(); index++)
    {
        if(host_name_severity[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name-severities";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostNameSeverities' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name-severity")
    {
        for(auto const & c : host_name_severity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity>();
        c->parent = this;
        host_name_severity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host_name_severity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::HostNameSeverity()
    :
    severity{YType::enumeration, "severity"}
{
    yang_name = "host-name-severity"; yang_parent_name = "host-name-severities";
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::~HostNameSeverity()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::has_data() const
{
    return severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name-severity" <<"[severity='" <<severity <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostNameSeverity' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::HostNameDiscriminator()
    :
    match1{YType::str, "match1"},
    match2{YType::str, "match2"},
    match3{YType::str, "match3"},
    nomatch1{YType::str, "nomatch1"},
    nomatch2{YType::str, "nomatch2"},
    nomatch3{YType::str, "nomatch3"}
{
    yang_name = "host-name-discriminator"; yang_parent_name = "host";
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::~HostNameDiscriminator()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::has_data() const
{
    return match1.is_set
	|| match2.is_set
	|| match3.is_set
	|| nomatch1.is_set
	|| nomatch2.is_set
	|| nomatch3.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(match1.operation)
	|| is_set(match2.operation)
	|| is_set(match3.operation)
	|| is_set(nomatch1.operation)
	|| is_set(nomatch2.operation)
	|| is_set(nomatch3.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name-discriminator";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostNameDiscriminator' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match1.is_set || is_set(match1.operation)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (match2.is_set || is_set(match2.operation)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (match3.is_set || is_set(match3.operation)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.operation)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.operation)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.operation)) leaf_name_data.push_back(nomatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match1")
    {
        match1 = value;
    }
    if(value_path == "match2")
    {
        match2 = value;
    }
    if(value_path == "match3")
    {
        match3 = value;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::HostSeverityPort()
    :
    port{YType::int32, "port"},
    severity{YType::int32, "severity"}
{
    yang_name = "host-severity-port"; yang_parent_name = "host";
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::~HostSeverityPort()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::has_data() const
{
    return port.is_set
	|| severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation)
	|| is_set(severity.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-severity-port";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostSeverityPort' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4S()
{
    yang_name = "ipv4s"; yang_parent_name = "vrf";
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::~Ipv4S()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4s";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv4S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4S' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4S::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4()
    :
    address{YType::str, "address"}
    	,
    ipv4_discriminator(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator>())
	,ipv4_severity_levels(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels>())
	,ipv4_severity_port(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort>())
{
    ipv4_discriminator->parent = this;

    ipv4_severity_levels->parent = this;

    ipv4_severity_port->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ipv4s";
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::~Ipv4()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::has_data() const
{
    return address.is_set
	|| (ipv4_discriminator !=  nullptr && ipv4_discriminator->has_data())
	|| (ipv4_severity_levels !=  nullptr && ipv4_severity_levels->has_data())
	|| (ipv4_severity_port !=  nullptr && ipv4_severity_port->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (ipv4_discriminator !=  nullptr && ipv4_discriminator->has_operation())
	|| (ipv4_severity_levels !=  nullptr && ipv4_severity_levels->has_operation())
	|| (ipv4_severity_port !=  nullptr && ipv4_severity_port->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-discriminator")
    {
        if(ipv4_discriminator == nullptr)
        {
            ipv4_discriminator = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator>();
        }
        return ipv4_discriminator;
    }

    if(child_yang_name == "ipv4-severity-levels")
    {
        if(ipv4_severity_levels == nullptr)
        {
            ipv4_severity_levels = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels>();
        }
        return ipv4_severity_levels;
    }

    if(child_yang_name == "ipv4-severity-port")
    {
        if(ipv4_severity_port == nullptr)
        {
            ipv4_severity_port = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort>();
        }
        return ipv4_severity_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_discriminator != nullptr)
    {
        children["ipv4-discriminator"] = ipv4_discriminator;
    }

    if(ipv4_severity_levels != nullptr)
    {
        children["ipv4-severity-levels"] = ipv4_severity_levels;
    }

    if(ipv4_severity_port != nullptr)
    {
        children["ipv4-severity-port"] = ipv4_severity_port;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevels()
{
    yang_name = "ipv4-severity-levels"; yang_parent_name = "ipv4";
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::~Ipv4SeverityLevels()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::has_data() const
{
    for (std::size_t index=0; index<ipv4_severity_level.size(); index++)
    {
        if(ipv4_severity_level[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::has_operation() const
{
    for (std::size_t index=0; index<ipv4_severity_level.size(); index++)
    {
        if(ipv4_severity_level[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-severity-levels";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SeverityLevels' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-severity-level")
    {
        for(auto const & c : ipv4_severity_level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel>();
        c->parent = this;
        ipv4_severity_level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_severity_level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::set_value(const std::string & value_path, std::string value)
{
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::Ipv4SeverityLevel()
    :
    severity{YType::enumeration, "severity"}
{
    yang_name = "ipv4-severity-level"; yang_parent_name = "ipv4-severity-levels";
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::~Ipv4SeverityLevel()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::has_data() const
{
    return severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-severity-level" <<"[severity='" <<severity <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SeverityLevel' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::Ipv4SeverityPort()
    :
    port{YType::int32, "port"},
    severity{YType::int32, "severity"}
{
    yang_name = "ipv4-severity-port"; yang_parent_name = "ipv4";
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::~Ipv4SeverityPort()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::has_data() const
{
    return port.is_set
	|| severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation)
	|| is_set(severity.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-severity-port";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SeverityPort' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::Ipv4Discriminator()
    :
    match1{YType::str, "match1"},
    match2{YType::str, "match2"},
    match3{YType::str, "match3"},
    nomatch1{YType::str, "nomatch1"},
    nomatch2{YType::str, "nomatch2"},
    nomatch3{YType::str, "nomatch3"}
{
    yang_name = "ipv4-discriminator"; yang_parent_name = "ipv4";
}

Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::~Ipv4Discriminator()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::has_data() const
{
    return match1.is_set
	|| match2.is_set
	|| match3.is_set
	|| nomatch1.is_set
	|| nomatch2.is_set
	|| nomatch3.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(match1.operation)
	|| is_set(match2.operation)
	|| is_set(match3.operation)
	|| is_set(nomatch1.operation)
	|| is_set(nomatch2.operation)
	|| is_set(nomatch3.operation);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-discriminator";

    return path_buffer.str();

}

const EntityPath Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Discriminator' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match1.is_set || is_set(match1.operation)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (match2.is_set || is_set(match2.operation)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (match3.is_set || is_set(match3.operation)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.operation)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.operation)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.operation)) leaf_name_data.push_back(nomatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match1")
    {
        match1 = value;
    }
    if(value_path == "match2")
    {
        match2 = value;
    }
    if(value_path == "match3")
    {
        match3 = value;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
    }
}

Syslog::ConsoleLogging::ConsoleLogging()
    :
    logging_level{YType::enumeration, "logging-level"}
    	,
    console_discriminator(std::make_shared<Syslog::ConsoleLogging::ConsoleDiscriminator>())
{
    console_discriminator->parent = this;

    yang_name = "console-logging"; yang_parent_name = "syslog";
}

Syslog::ConsoleLogging::~ConsoleLogging()
{
}

bool Syslog::ConsoleLogging::has_data() const
{
    return logging_level.is_set
	|| (console_discriminator !=  nullptr && console_discriminator->has_data());
}

bool Syslog::ConsoleLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(logging_level.operation)
	|| (console_discriminator !=  nullptr && console_discriminator->has_operation());
}

std::string Syslog::ConsoleLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-logging";

    return path_buffer.str();

}

const EntityPath Syslog::ConsoleLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_level.is_set || is_set(logging_level.operation)) leaf_name_data.push_back(logging_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::ConsoleLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console-discriminator")
    {
        if(console_discriminator == nullptr)
        {
            console_discriminator = std::make_shared<Syslog::ConsoleLogging::ConsoleDiscriminator>();
        }
        return console_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::ConsoleLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(console_discriminator != nullptr)
    {
        children["console-discriminator"] = console_discriminator;
    }

    return children;
}

void Syslog::ConsoleLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logging-level")
    {
        logging_level = value;
    }
}

Syslog::ConsoleLogging::ConsoleDiscriminator::ConsoleDiscriminator()
    :
    match1{YType::str, "match1"},
    match2{YType::str, "match2"},
    match3{YType::str, "match3"},
    nomatch1{YType::str, "nomatch1"},
    nomatch2{YType::str, "nomatch2"},
    nomatch3{YType::str, "nomatch3"}
{
    yang_name = "console-discriminator"; yang_parent_name = "console-logging";
}

Syslog::ConsoleLogging::ConsoleDiscriminator::~ConsoleDiscriminator()
{
}

bool Syslog::ConsoleLogging::ConsoleDiscriminator::has_data() const
{
    return match1.is_set
	|| match2.is_set
	|| match3.is_set
	|| nomatch1.is_set
	|| nomatch2.is_set
	|| nomatch3.is_set;
}

bool Syslog::ConsoleLogging::ConsoleDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(match1.operation)
	|| is_set(match2.operation)
	|| is_set(match3.operation)
	|| is_set(nomatch1.operation)
	|| is_set(nomatch2.operation)
	|| is_set(nomatch3.operation);
}

std::string Syslog::ConsoleLogging::ConsoleDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-discriminator";

    return path_buffer.str();

}

const EntityPath Syslog::ConsoleLogging::ConsoleDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/console-logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match1.is_set || is_set(match1.operation)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (match2.is_set || is_set(match2.operation)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (match3.is_set || is_set(match3.operation)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.operation)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.operation)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.operation)) leaf_name_data.push_back(nomatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::ConsoleLogging::ConsoleDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::ConsoleLogging::ConsoleDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::ConsoleLogging::ConsoleDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match1")
    {
        match1 = value;
    }
    if(value_path == "match2")
    {
        match2 = value;
    }
    if(value_path == "match3")
    {
        match3 = value;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
    }
}

Syslog::Files::Files()
{
    yang_name = "files"; yang_parent_name = "syslog";
}

Syslog::Files::~Files()
{
}

bool Syslog::Files::has_data() const
{
    for (std::size_t index=0; index<file.size(); index++)
    {
        if(file[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Files::has_operation() const
{
    for (std::size_t index=0; index<file.size(); index++)
    {
        if(file[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Files::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "files";

    return path_buffer.str();

}

const EntityPath Syslog::Files::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Files::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        for(auto const & c : file)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Files::File>();
        c->parent = this;
        file.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Files::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : file)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Files::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Files::File::File()
    :
    file_name{YType::str, "file-name"}
    	,
    file_log_attributes(std::make_shared<Syslog::Files::File::FileLogAttributes>())
	,file_log_discriminator(std::make_shared<Syslog::Files::File::FileLogDiscriminator>())
	,file_specification(std::make_shared<Syslog::Files::File::FileSpecification>())
{
    file_log_attributes->parent = this;

    file_log_discriminator->parent = this;

    file_specification->parent = this;

    yang_name = "file"; yang_parent_name = "files";
}

Syslog::Files::File::~File()
{
}

bool Syslog::Files::File::has_data() const
{
    return file_name.is_set
	|| (file_log_attributes !=  nullptr && file_log_attributes->has_data())
	|| (file_log_discriminator !=  nullptr && file_log_discriminator->has_data())
	|| (file_specification !=  nullptr && file_specification->has_data());
}

bool Syslog::Files::File::has_operation() const
{
    return is_set(operation)
	|| is_set(file_name.operation)
	|| (file_log_attributes !=  nullptr && file_log_attributes->has_operation())
	|| (file_log_discriminator !=  nullptr && file_log_discriminator->has_operation())
	|| (file_specification !=  nullptr && file_specification->has_operation());
}

std::string Syslog::Files::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file" <<"[file-name='" <<file_name <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Files::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/files/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.operation)) leaf_name_data.push_back(file_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Files::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file-log-attributes")
    {
        if(file_log_attributes == nullptr)
        {
            file_log_attributes = std::make_shared<Syslog::Files::File::FileLogAttributes>();
        }
        return file_log_attributes;
    }

    if(child_yang_name == "file-log-discriminator")
    {
        if(file_log_discriminator == nullptr)
        {
            file_log_discriminator = std::make_shared<Syslog::Files::File::FileLogDiscriminator>();
        }
        return file_log_discriminator;
    }

    if(child_yang_name == "file-specification")
    {
        if(file_specification == nullptr)
        {
            file_specification = std::make_shared<Syslog::Files::File::FileSpecification>();
        }
        return file_specification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Files::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file_log_attributes != nullptr)
    {
        children["file-log-attributes"] = file_log_attributes;
    }

    if(file_log_discriminator != nullptr)
    {
        children["file-log-discriminator"] = file_log_discriminator;
    }

    if(file_specification != nullptr)
    {
        children["file-specification"] = file_specification;
    }

    return children;
}

void Syslog::Files::File::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-name")
    {
        file_name = value;
    }
}

Syslog::Files::File::FileSpecification::FileSpecification()
    :
    max_file_size{YType::int32, "max-file-size"},
    path{YType::str, "path"},
    severity{YType::int32, "severity"}
{
    yang_name = "file-specification"; yang_parent_name = "file";
}

Syslog::Files::File::FileSpecification::~FileSpecification()
{
}

bool Syslog::Files::File::FileSpecification::has_data() const
{
    return max_file_size.is_set
	|| path.is_set
	|| severity.is_set;
}

bool Syslog::Files::File::FileSpecification::has_operation() const
{
    return is_set(operation)
	|| is_set(max_file_size.operation)
	|| is_set(path.operation)
	|| is_set(severity.operation);
}

std::string Syslog::Files::File::FileSpecification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-specification";

    return path_buffer.str();

}

const EntityPath Syslog::Files::File::FileSpecification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FileSpecification' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_file_size.is_set || is_set(max_file_size.operation)) leaf_name_data.push_back(max_file_size.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Files::File::FileSpecification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Files::File::FileSpecification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Files::File::FileSpecification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-file-size")
    {
        max_file_size = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::Files::File::FileLogAttributes::FileLogAttributes()
    :
    max_file_size{YType::int32, "max-file-size"},
    severity{YType::int32, "severity"}
{
    yang_name = "file-log-attributes"; yang_parent_name = "file";
}

Syslog::Files::File::FileLogAttributes::~FileLogAttributes()
{
}

bool Syslog::Files::File::FileLogAttributes::has_data() const
{
    return max_file_size.is_set
	|| severity.is_set;
}

bool Syslog::Files::File::FileLogAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(max_file_size.operation)
	|| is_set(severity.operation);
}

std::string Syslog::Files::File::FileLogAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-log-attributes";

    return path_buffer.str();

}

const EntityPath Syslog::Files::File::FileLogAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FileLogAttributes' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_file_size.is_set || is_set(max_file_size.operation)) leaf_name_data.push_back(max_file_size.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Files::File::FileLogAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Files::File::FileLogAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Files::File::FileLogAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-file-size")
    {
        max_file_size = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::Files::File::FileLogDiscriminator::FileLogDiscriminator()
    :
    match1{YType::str, "match1"},
    match2{YType::str, "match2"},
    match3{YType::str, "match3"},
    nomatch1{YType::str, "nomatch1"},
    nomatch2{YType::str, "nomatch2"},
    nomatch3{YType::str, "nomatch3"}
{
    yang_name = "file-log-discriminator"; yang_parent_name = "file";
}

Syslog::Files::File::FileLogDiscriminator::~FileLogDiscriminator()
{
}

bool Syslog::Files::File::FileLogDiscriminator::has_data() const
{
    return match1.is_set
	|| match2.is_set
	|| match3.is_set
	|| nomatch1.is_set
	|| nomatch2.is_set
	|| nomatch3.is_set;
}

bool Syslog::Files::File::FileLogDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(match1.operation)
	|| is_set(match2.operation)
	|| is_set(match3.operation)
	|| is_set(nomatch1.operation)
	|| is_set(nomatch2.operation)
	|| is_set(nomatch3.operation);
}

std::string Syslog::Files::File::FileLogDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-log-discriminator";

    return path_buffer.str();

}

const EntityPath Syslog::Files::File::FileLogDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FileLogDiscriminator' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match1.is_set || is_set(match1.operation)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (match2.is_set || is_set(match2.operation)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (match3.is_set || is_set(match3.operation)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.operation)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.operation)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.operation)) leaf_name_data.push_back(nomatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Files::File::FileLogDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Files::File::FileLogDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Files::File::FileLogDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match1")
    {
        match1 = value;
    }
    if(value_path == "match2")
    {
        match2 = value;
    }
    if(value_path == "match3")
    {
        match3 = value;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
    }
}

Syslog::Ipv4::Ipv4()
    :
    dscp(nullptr) // presence node
	,precedence(nullptr) // presence node
	,tos(std::make_shared<Syslog::Ipv4::Tos>())
{
    tos->parent = this;

    yang_name = "ipv4"; yang_parent_name = "syslog";
}

Syslog::Ipv4::~Ipv4()
{
}

bool Syslog::Ipv4::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Syslog::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Syslog::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Syslog::Ipv4::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Syslog::Ipv4::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Syslog::Ipv4::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Syslog::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Ipv4::Dscp::Dscp()
    :
    type{YType::enumeration, "type"},
    unused{YType::str, "unused"},
    value_{YType::str, "value"}
{
    yang_name = "dscp"; yang_parent_name = "ipv4";
}

Syslog::Ipv4::Dscp::~Dscp()
{
}

bool Syslog::Ipv4::Dscp::has_data() const
{
    return type.is_set
	|| unused.is_set
	|| value_.is_set;
}

bool Syslog::Ipv4::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(unused.operation)
	|| is_set(value_.operation);
}

std::string Syslog::Ipv4::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv4::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv4::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv4::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Ipv4::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "unused")
    {
        unused = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Syslog::Ipv4::Tos::Tos()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"},
    type{YType::enumeration, "type"}
{
    yang_name = "tos"; yang_parent_name = "ipv4";
}

Syslog::Ipv4::Tos::~Tos()
{
}

bool Syslog::Ipv4::Tos::has_data() const
{
    return dscp.is_set
	|| precedence.is_set
	|| type.is_set;
}

bool Syslog::Ipv4::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation)
	|| is_set(type.operation);
}

std::string Syslog::Ipv4::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv4::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv4::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv4::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Ipv4::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Syslog::Ipv4::Precedence::Precedence()
    :
    type{YType::enumeration, "type"},
    unused{YType::str, "unused"},
    value_{YType::str, "value"}
{
    yang_name = "precedence"; yang_parent_name = "ipv4";
}

Syslog::Ipv4::Precedence::~Precedence()
{
}

bool Syslog::Ipv4::Precedence::has_data() const
{
    return type.is_set
	|| unused.is_set
	|| value_.is_set;
}

bool Syslog::Ipv4::Precedence::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(unused.operation)
	|| is_set(value_.operation);
}

std::string Syslog::Ipv4::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv4::Precedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv4::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv4::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Ipv4::Precedence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "unused")
    {
        unused = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Syslog::Archive::Archive()
    :
    device{YType::str, "device"},
    file_size{YType::uint32, "file-size"},
    frequency{YType::enumeration, "frequency"},
    length{YType::uint32, "length"},
    severity{YType::enumeration, "severity"},
    size{YType::uint32, "size"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "archive"; yang_parent_name = "syslog";
}

Syslog::Archive::~Archive()
{
}

bool Syslog::Archive::has_data() const
{
    return device.is_set
	|| file_size.is_set
	|| frequency.is_set
	|| length.is_set
	|| severity.is_set
	|| size.is_set
	|| threshold.is_set;
}

bool Syslog::Archive::has_operation() const
{
    return is_set(operation)
	|| is_set(device.operation)
	|| is_set(file_size.operation)
	|| is_set(frequency.operation)
	|| is_set(length.operation)
	|| is_set(severity.operation)
	|| is_set(size.operation)
	|| is_set(threshold.operation);
}

std::string Syslog::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive";

    return path_buffer.str();

}

const EntityPath Syslog::Archive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.operation)) leaf_name_data.push_back(device.get_name_leafdata());
    if (file_size.is_set || is_set(file_size.operation)) leaf_name_data.push_back(file_size.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Archive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device")
    {
        device = value;
    }
    if(value_path == "file-size")
    {
        file_size = value;
    }
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Syslog::Ipv6::Ipv6()
    :
    dscp(nullptr) // presence node
	,precedence(nullptr) // presence node
	,traffic_class(std::make_shared<Syslog::Ipv6::TrafficClass>())
{
    traffic_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "syslog";
}

Syslog::Ipv6::~Ipv6()
{
}

bool Syslog::Ipv6::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Syslog::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Syslog::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Syslog::Ipv6::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Syslog::Ipv6::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Syslog::Ipv6::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Syslog::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Ipv6::Dscp::Dscp()
    :
    type{YType::enumeration, "type"},
    unused{YType::str, "unused"},
    value_{YType::str, "value"}
{
    yang_name = "dscp"; yang_parent_name = "ipv6";
}

Syslog::Ipv6::Dscp::~Dscp()
{
}

bool Syslog::Ipv6::Dscp::has_data() const
{
    return type.is_set
	|| unused.is_set
	|| value_.is_set;
}

bool Syslog::Ipv6::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(unused.operation)
	|| is_set(value_.operation);
}

std::string Syslog::Ipv6::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv6::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv6::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv6::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Ipv6::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "unused")
    {
        unused = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Syslog::Ipv6::TrafficClass::TrafficClass()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"},
    type{YType::enumeration, "type"}
{
    yang_name = "traffic-class"; yang_parent_name = "ipv6";
}

Syslog::Ipv6::TrafficClass::~TrafficClass()
{
}

bool Syslog::Ipv6::TrafficClass::has_data() const
{
    return dscp.is_set
	|| precedence.is_set
	|| type.is_set;
}

bool Syslog::Ipv6::TrafficClass::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation)
	|| is_set(type.operation);
}

std::string Syslog::Ipv6::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv6::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv6::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv6::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Ipv6::TrafficClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Syslog::Ipv6::Precedence::Precedence()
    :
    type{YType::enumeration, "type"},
    unused{YType::str, "unused"},
    value_{YType::str, "value"}
{
    yang_name = "precedence"; yang_parent_name = "ipv6";
}

Syslog::Ipv6::Precedence::~Precedence()
{
}

bool Syslog::Ipv6::Precedence::has_data() const
{
    return type.is_set
	|| unused.is_set
	|| value_.is_set;
}

bool Syslog::Ipv6::Precedence::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(unused.operation)
	|| is_set(value_.operation);
}

std::string Syslog::Ipv6::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";

    return path_buffer.str();

}

const EntityPath Syslog::Ipv6::Precedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Ipv6::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Ipv6::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Ipv6::Precedence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "unused")
    {
        unused = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Syslog::SourceInterfaceTable::SourceInterfaceTable()
    :
    source_interface_values(std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues>())
{
    source_interface_values->parent = this;

    yang_name = "source-interface-table"; yang_parent_name = "syslog";
}

Syslog::SourceInterfaceTable::~SourceInterfaceTable()
{
}

bool Syslog::SourceInterfaceTable::has_data() const
{
    return (source_interface_values !=  nullptr && source_interface_values->has_data());
}

bool Syslog::SourceInterfaceTable::has_operation() const
{
    return is_set(operation)
	|| (source_interface_values !=  nullptr && source_interface_values->has_operation());
}

std::string Syslog::SourceInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-table";

    return path_buffer.str();

}

const EntityPath Syslog::SourceInterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::SourceInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-values")
    {
        if(source_interface_values == nullptr)
        {
            source_interface_values = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues>();
        }
        return source_interface_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::SourceInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface_values != nullptr)
    {
        children["source-interface-values"] = source_interface_values;
    }

    return children;
}

void Syslog::SourceInterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValues()
{
    yang_name = "source-interface-values"; yang_parent_name = "source-interface-table";
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::~SourceInterfaceValues()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::has_data() const
{
    for (std::size_t index=0; index<source_interface_value.size(); index++)
    {
        if(source_interface_value[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::has_operation() const
{
    for (std::size_t index=0; index<source_interface_value.size(); index++)
    {
        if(source_interface_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-values";

    return path_buffer.str();

}

const EntityPath Syslog::SourceInterfaceTable::SourceInterfaceValues::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/source-interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-value")
    {
        for(auto const & c : source_interface_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue>();
        c->parent = this;
        source_interface_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : source_interface_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::set_value(const std::string & value_path, std::string value)
{
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceValue()
    :
    src_interface_name_value{YType::str, "src-interface-name-value"}
    	,
    source_interface_vrfs(std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs>())
{
    source_interface_vrfs->parent = this;

    yang_name = "source-interface-value"; yang_parent_name = "source-interface-values";
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::~SourceInterfaceValue()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::has_data() const
{
    return src_interface_name_value.is_set
	|| (source_interface_vrfs !=  nullptr && source_interface_vrfs->has_data());
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::has_operation() const
{
    return is_set(operation)
	|| is_set(src_interface_name_value.operation)
	|| (source_interface_vrfs !=  nullptr && source_interface_vrfs->has_operation());
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-value" <<"[src-interface-name-value='" <<src_interface_name_value <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/source-interface-table/source-interface-values/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_interface_name_value.is_set || is_set(src_interface_name_value.operation)) leaf_name_data.push_back(src_interface_name_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-vrfs")
    {
        if(source_interface_vrfs == nullptr)
        {
            source_interface_vrfs = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs>();
        }
        return source_interface_vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface_vrfs != nullptr)
    {
        children["source-interface-vrfs"] = source_interface_vrfs;
    }

    return children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "src-interface-name-value")
    {
        src_interface_name_value = value;
    }
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrfs()
{
    yang_name = "source-interface-vrfs"; yang_parent_name = "source-interface-value";
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::~SourceInterfaceVrfs()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::has_data() const
{
    for (std::size_t index=0; index<source_interface_vrf.size(); index++)
    {
        if(source_interface_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::has_operation() const
{
    for (std::size_t index=0; index<source_interface_vrf.size(); index++)
    {
        if(source_interface_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-vrfs";

    return path_buffer.str();

}

const EntityPath Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceInterfaceVrfs' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-vrf")
    {
        for(auto const & c : source_interface_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf>();
        c->parent = this;
        source_interface_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : source_interface_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::set_value(const std::string & value_path, std::string value)
{
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::SourceInterfaceVrf()
    :
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "source-interface-vrf"; yang_parent_name = "source-interface-vrfs";
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::~SourceInterfaceVrf()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::has_data() const
{
    return vrf_name.is_set;
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceInterfaceVrf' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Syslog::AlarmLogger::AlarmLogger()
    :
    buffer_size{YType::uint32, "buffer-size"},
    severity_level{YType::enumeration, "severity-level"},
    source_location{YType::empty, "source-location"},
    threshold{YType::uint32, "threshold"}
    	,
    alarm_filter_strings(std::make_shared<Syslog::AlarmLogger::AlarmFilterStrings>())
{
    alarm_filter_strings->parent = this;

    yang_name = "alarm-logger"; yang_parent_name = "syslog";
}

Syslog::AlarmLogger::~AlarmLogger()
{
}

bool Syslog::AlarmLogger::has_data() const
{
    return buffer_size.is_set
	|| severity_level.is_set
	|| source_location.is_set
	|| threshold.is_set
	|| (alarm_filter_strings !=  nullptr && alarm_filter_strings->has_data());
}

bool Syslog::AlarmLogger::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| is_set(severity_level.operation)
	|| is_set(source_location.operation)
	|| is_set(threshold.operation)
	|| (alarm_filter_strings !=  nullptr && alarm_filter_strings->has_operation());
}

std::string Syslog::AlarmLogger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger";

    return path_buffer.str();

}

const EntityPath Syslog::AlarmLogger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (severity_level.is_set || is_set(severity_level.operation)) leaf_name_data.push_back(severity_level.get_name_leafdata());
    if (source_location.is_set || is_set(source_location.operation)) leaf_name_data.push_back(source_location.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::AlarmLogger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-filter-strings")
    {
        if(alarm_filter_strings == nullptr)
        {
            alarm_filter_strings = std::make_shared<Syslog::AlarmLogger::AlarmFilterStrings>();
        }
        return alarm_filter_strings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::AlarmLogger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarm_filter_strings != nullptr)
    {
        children["alarm-filter-strings"] = alarm_filter_strings;
    }

    return children;
}

void Syslog::AlarmLogger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
    if(value_path == "severity-level")
    {
        severity_level = value;
    }
    if(value_path == "source-location")
    {
        source_location = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterStrings()
{
    yang_name = "alarm-filter-strings"; yang_parent_name = "alarm-logger";
}

Syslog::AlarmLogger::AlarmFilterStrings::~AlarmFilterStrings()
{
}

bool Syslog::AlarmLogger::AlarmFilterStrings::has_data() const
{
    for (std::size_t index=0; index<alarm_filter_string.size(); index++)
    {
        if(alarm_filter_string[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::AlarmLogger::AlarmFilterStrings::has_operation() const
{
    for (std::size_t index=0; index<alarm_filter_string.size(); index++)
    {
        if(alarm_filter_string[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::AlarmLogger::AlarmFilterStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-filter-strings";

    return path_buffer.str();

}

const EntityPath Syslog::AlarmLogger::AlarmFilterStrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::AlarmLogger::AlarmFilterStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-filter-string")
    {
        for(auto const & c : alarm_filter_string)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString>();
        c->parent = this;
        alarm_filter_string.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::AlarmLogger::AlarmFilterStrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_filter_string)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::AlarmLogger::AlarmFilterStrings::set_value(const std::string & value_path, std::string value)
{
}

Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::AlarmFilterString()
    :
    filter_string{YType::str, "filter-string"}
{
    yang_name = "alarm-filter-string"; yang_parent_name = "alarm-filter-strings";
}

Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::~AlarmFilterString()
{
}

bool Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::has_data() const
{
    return filter_string.is_set;
}

bool Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_string.operation);
}

std::string Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-filter-string" <<"[filter-string='" <<filter_string <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger/alarm-filter-strings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_string.is_set || is_set(filter_string.operation)) leaf_name_data.push_back(filter_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-string")
    {
        filter_string = value;
    }
}

Syslog::Correlator::Correlator()
    :
    buffer_size{YType::uint32, "buffer-size"}
    	,
    rule_sets(std::make_shared<Syslog::Correlator::RuleSets>())
	,rules(std::make_shared<Syslog::Correlator::Rules>())
{
    rule_sets->parent = this;

    rules->parent = this;

    yang_name = "correlator"; yang_parent_name = "syslog";
}

Syslog::Correlator::~Correlator()
{
}

bool Syslog::Correlator::has_data() const
{
    return buffer_size.is_set
	|| (rule_sets !=  nullptr && rule_sets->has_data())
	|| (rules !=  nullptr && rules->has_data());
}

bool Syslog::Correlator::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| (rule_sets !=  nullptr && rule_sets->has_operation())
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Syslog::Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-cfg:correlator";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-sets")
    {
        if(rule_sets == nullptr)
        {
            rule_sets = std::make_shared<Syslog::Correlator::RuleSets>();
        }
        return rule_sets;
    }

    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Syslog::Correlator::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rule_sets != nullptr)
    {
        children["rule-sets"] = rule_sets;
    }

    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Syslog::Correlator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
}

Syslog::Correlator::Rules::Rules()
{
    yang_name = "rules"; yang_parent_name = "correlator";
}

Syslog::Correlator::Rules::~Rules()
{
}

bool Syslog::Correlator::Rules::has_data() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        for(auto const & c : rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::Rules::Rule>();
        c->parent = this;
        rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::Rules::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::Rules::Rule::Rule()
    :
    name{YType::str, "name"}
    	,
    applied_to(std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo>())
	,apply_to(std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo>())
	,definition(std::make_shared<Syslog::Correlator::Rules::Rule::Definition>())
	,non_stateful(std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful>())
	,stateful(std::make_shared<Syslog::Correlator::Rules::Rule::Stateful>())
{
    applied_to->parent = this;

    apply_to->parent = this;

    definition->parent = this;

    non_stateful->parent = this;

    stateful->parent = this;

    yang_name = "rule"; yang_parent_name = "rules";
}

Syslog::Correlator::Rules::Rule::~Rule()
{
}

bool Syslog::Correlator::Rules::Rule::has_data() const
{
    return name.is_set
	|| (applied_to !=  nullptr && applied_to->has_data())
	|| (apply_to !=  nullptr && apply_to->has_data())
	|| (definition !=  nullptr && definition->has_data())
	|| (non_stateful !=  nullptr && non_stateful->has_data())
	|| (stateful !=  nullptr && stateful->has_data());
}

bool Syslog::Correlator::Rules::Rule::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (applied_to !=  nullptr && applied_to->has_operation())
	|| (apply_to !=  nullptr && apply_to->has_operation())
	|| (definition !=  nullptr && definition->has_operation())
	|| (non_stateful !=  nullptr && non_stateful->has_operation())
	|| (stateful !=  nullptr && stateful->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/rules/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo>();
        }
        return applied_to;
    }

    if(child_yang_name == "apply-to")
    {
        if(apply_to == nullptr)
        {
            apply_to = std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo>();
        }
        return apply_to;
    }

    if(child_yang_name == "definition")
    {
        if(definition == nullptr)
        {
            definition = std::make_shared<Syslog::Correlator::Rules::Rule::Definition>();
        }
        return definition;
    }

    if(child_yang_name == "non-stateful")
    {
        if(non_stateful == nullptr)
        {
            non_stateful = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful>();
        }
        return non_stateful;
    }

    if(child_yang_name == "stateful")
    {
        if(stateful == nullptr)
        {
            stateful = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful>();
        }
        return stateful;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(applied_to != nullptr)
    {
        children["applied-to"] = applied_to;
    }

    if(apply_to != nullptr)
    {
        children["apply-to"] = apply_to;
    }

    if(definition != nullptr)
    {
        children["definition"] = definition;
    }

    if(non_stateful != nullptr)
    {
        children["non-stateful"] = non_stateful;
    }

    if(stateful != nullptr)
    {
        children["stateful"] = stateful;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Syslog::Correlator::Rules::Rule::Definition::Definition()
    :
    category_name_entry1{YType::str, "category-name-entry1"},
    category_name_entry10{YType::str, "category-name-entry10"},
    category_name_entry2{YType::str, "category-name-entry2"},
    category_name_entry3{YType::str, "category-name-entry3"},
    category_name_entry4{YType::str, "category-name-entry4"},
    category_name_entry5{YType::str, "category-name-entry5"},
    category_name_entry6{YType::str, "category-name-entry6"},
    category_name_entry7{YType::str, "category-name-entry7"},
    category_name_entry8{YType::str, "category-name-entry8"},
    category_name_entry9{YType::str, "category-name-entry9"},
    group_name_entry1{YType::str, "group-name-entry1"},
    group_name_entry10{YType::str, "group-name-entry10"},
    group_name_entry2{YType::str, "group-name-entry2"},
    group_name_entry3{YType::str, "group-name-entry3"},
    group_name_entry4{YType::str, "group-name-entry4"},
    group_name_entry5{YType::str, "group-name-entry5"},
    group_name_entry6{YType::str, "group-name-entry6"},
    group_name_entry7{YType::str, "group-name-entry7"},
    group_name_entry8{YType::str, "group-name-entry8"},
    group_name_entry9{YType::str, "group-name-entry9"},
    message_code_entry1{YType::str, "message-code-entry1"},
    message_code_entry10{YType::str, "message-code-entry10"},
    message_code_entry2{YType::str, "message-code-entry2"},
    message_code_entry3{YType::str, "message-code-entry3"},
    message_code_entry4{YType::str, "message-code-entry4"},
    message_code_entry5{YType::str, "message-code-entry5"},
    message_code_entry6{YType::str, "message-code-entry6"},
    message_code_entry7{YType::str, "message-code-entry7"},
    message_code_entry8{YType::str, "message-code-entry8"},
    message_code_entry9{YType::str, "message-code-entry9"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "definition"; yang_parent_name = "rule";
}

Syslog::Correlator::Rules::Rule::Definition::~Definition()
{
}

bool Syslog::Correlator::Rules::Rule::Definition::has_data() const
{
    return category_name_entry1.is_set
	|| category_name_entry10.is_set
	|| category_name_entry2.is_set
	|| category_name_entry3.is_set
	|| category_name_entry4.is_set
	|| category_name_entry5.is_set
	|| category_name_entry6.is_set
	|| category_name_entry7.is_set
	|| category_name_entry8.is_set
	|| category_name_entry9.is_set
	|| group_name_entry1.is_set
	|| group_name_entry10.is_set
	|| group_name_entry2.is_set
	|| group_name_entry3.is_set
	|| group_name_entry4.is_set
	|| group_name_entry5.is_set
	|| group_name_entry6.is_set
	|| group_name_entry7.is_set
	|| group_name_entry8.is_set
	|| group_name_entry9.is_set
	|| message_code_entry1.is_set
	|| message_code_entry10.is_set
	|| message_code_entry2.is_set
	|| message_code_entry3.is_set
	|| message_code_entry4.is_set
	|| message_code_entry5.is_set
	|| message_code_entry6.is_set
	|| message_code_entry7.is_set
	|| message_code_entry8.is_set
	|| message_code_entry9.is_set
	|| timeout.is_set;
}

bool Syslog::Correlator::Rules::Rule::Definition::has_operation() const
{
    return is_set(operation)
	|| is_set(category_name_entry1.operation)
	|| is_set(category_name_entry10.operation)
	|| is_set(category_name_entry2.operation)
	|| is_set(category_name_entry3.operation)
	|| is_set(category_name_entry4.operation)
	|| is_set(category_name_entry5.operation)
	|| is_set(category_name_entry6.operation)
	|| is_set(category_name_entry7.operation)
	|| is_set(category_name_entry8.operation)
	|| is_set(category_name_entry9.operation)
	|| is_set(group_name_entry1.operation)
	|| is_set(group_name_entry10.operation)
	|| is_set(group_name_entry2.operation)
	|| is_set(group_name_entry3.operation)
	|| is_set(group_name_entry4.operation)
	|| is_set(group_name_entry5.operation)
	|| is_set(group_name_entry6.operation)
	|| is_set(group_name_entry7.operation)
	|| is_set(group_name_entry8.operation)
	|| is_set(group_name_entry9.operation)
	|| is_set(message_code_entry1.operation)
	|| is_set(message_code_entry10.operation)
	|| is_set(message_code_entry2.operation)
	|| is_set(message_code_entry3.operation)
	|| is_set(message_code_entry4.operation)
	|| is_set(message_code_entry5.operation)
	|| is_set(message_code_entry6.operation)
	|| is_set(message_code_entry7.operation)
	|| is_set(message_code_entry8.operation)
	|| is_set(message_code_entry9.operation)
	|| is_set(timeout.operation);
}

std::string Syslog::Correlator::Rules::Rule::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::Definition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Definition' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category_name_entry1.is_set || is_set(category_name_entry1.operation)) leaf_name_data.push_back(category_name_entry1.get_name_leafdata());
    if (category_name_entry10.is_set || is_set(category_name_entry10.operation)) leaf_name_data.push_back(category_name_entry10.get_name_leafdata());
    if (category_name_entry2.is_set || is_set(category_name_entry2.operation)) leaf_name_data.push_back(category_name_entry2.get_name_leafdata());
    if (category_name_entry3.is_set || is_set(category_name_entry3.operation)) leaf_name_data.push_back(category_name_entry3.get_name_leafdata());
    if (category_name_entry4.is_set || is_set(category_name_entry4.operation)) leaf_name_data.push_back(category_name_entry4.get_name_leafdata());
    if (category_name_entry5.is_set || is_set(category_name_entry5.operation)) leaf_name_data.push_back(category_name_entry5.get_name_leafdata());
    if (category_name_entry6.is_set || is_set(category_name_entry6.operation)) leaf_name_data.push_back(category_name_entry6.get_name_leafdata());
    if (category_name_entry7.is_set || is_set(category_name_entry7.operation)) leaf_name_data.push_back(category_name_entry7.get_name_leafdata());
    if (category_name_entry8.is_set || is_set(category_name_entry8.operation)) leaf_name_data.push_back(category_name_entry8.get_name_leafdata());
    if (category_name_entry9.is_set || is_set(category_name_entry9.operation)) leaf_name_data.push_back(category_name_entry9.get_name_leafdata());
    if (group_name_entry1.is_set || is_set(group_name_entry1.operation)) leaf_name_data.push_back(group_name_entry1.get_name_leafdata());
    if (group_name_entry10.is_set || is_set(group_name_entry10.operation)) leaf_name_data.push_back(group_name_entry10.get_name_leafdata());
    if (group_name_entry2.is_set || is_set(group_name_entry2.operation)) leaf_name_data.push_back(group_name_entry2.get_name_leafdata());
    if (group_name_entry3.is_set || is_set(group_name_entry3.operation)) leaf_name_data.push_back(group_name_entry3.get_name_leafdata());
    if (group_name_entry4.is_set || is_set(group_name_entry4.operation)) leaf_name_data.push_back(group_name_entry4.get_name_leafdata());
    if (group_name_entry5.is_set || is_set(group_name_entry5.operation)) leaf_name_data.push_back(group_name_entry5.get_name_leafdata());
    if (group_name_entry6.is_set || is_set(group_name_entry6.operation)) leaf_name_data.push_back(group_name_entry6.get_name_leafdata());
    if (group_name_entry7.is_set || is_set(group_name_entry7.operation)) leaf_name_data.push_back(group_name_entry7.get_name_leafdata());
    if (group_name_entry8.is_set || is_set(group_name_entry8.operation)) leaf_name_data.push_back(group_name_entry8.get_name_leafdata());
    if (group_name_entry9.is_set || is_set(group_name_entry9.operation)) leaf_name_data.push_back(group_name_entry9.get_name_leafdata());
    if (message_code_entry1.is_set || is_set(message_code_entry1.operation)) leaf_name_data.push_back(message_code_entry1.get_name_leafdata());
    if (message_code_entry10.is_set || is_set(message_code_entry10.operation)) leaf_name_data.push_back(message_code_entry10.get_name_leafdata());
    if (message_code_entry2.is_set || is_set(message_code_entry2.operation)) leaf_name_data.push_back(message_code_entry2.get_name_leafdata());
    if (message_code_entry3.is_set || is_set(message_code_entry3.operation)) leaf_name_data.push_back(message_code_entry3.get_name_leafdata());
    if (message_code_entry4.is_set || is_set(message_code_entry4.operation)) leaf_name_data.push_back(message_code_entry4.get_name_leafdata());
    if (message_code_entry5.is_set || is_set(message_code_entry5.operation)) leaf_name_data.push_back(message_code_entry5.get_name_leafdata());
    if (message_code_entry6.is_set || is_set(message_code_entry6.operation)) leaf_name_data.push_back(message_code_entry6.get_name_leafdata());
    if (message_code_entry7.is_set || is_set(message_code_entry7.operation)) leaf_name_data.push_back(message_code_entry7.get_name_leafdata());
    if (message_code_entry8.is_set || is_set(message_code_entry8.operation)) leaf_name_data.push_back(message_code_entry8.get_name_leafdata());
    if (message_code_entry9.is_set || is_set(message_code_entry9.operation)) leaf_name_data.push_back(message_code_entry9.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::Definition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category-name-entry1")
    {
        category_name_entry1 = value;
    }
    if(value_path == "category-name-entry10")
    {
        category_name_entry10 = value;
    }
    if(value_path == "category-name-entry2")
    {
        category_name_entry2 = value;
    }
    if(value_path == "category-name-entry3")
    {
        category_name_entry3 = value;
    }
    if(value_path == "category-name-entry4")
    {
        category_name_entry4 = value;
    }
    if(value_path == "category-name-entry5")
    {
        category_name_entry5 = value;
    }
    if(value_path == "category-name-entry6")
    {
        category_name_entry6 = value;
    }
    if(value_path == "category-name-entry7")
    {
        category_name_entry7 = value;
    }
    if(value_path == "category-name-entry8")
    {
        category_name_entry8 = value;
    }
    if(value_path == "category-name-entry9")
    {
        category_name_entry9 = value;
    }
    if(value_path == "group-name-entry1")
    {
        group_name_entry1 = value;
    }
    if(value_path == "group-name-entry10")
    {
        group_name_entry10 = value;
    }
    if(value_path == "group-name-entry2")
    {
        group_name_entry2 = value;
    }
    if(value_path == "group-name-entry3")
    {
        group_name_entry3 = value;
    }
    if(value_path == "group-name-entry4")
    {
        group_name_entry4 = value;
    }
    if(value_path == "group-name-entry5")
    {
        group_name_entry5 = value;
    }
    if(value_path == "group-name-entry6")
    {
        group_name_entry6 = value;
    }
    if(value_path == "group-name-entry7")
    {
        group_name_entry7 = value;
    }
    if(value_path == "group-name-entry8")
    {
        group_name_entry8 = value;
    }
    if(value_path == "group-name-entry9")
    {
        group_name_entry9 = value;
    }
    if(value_path == "message-code-entry1")
    {
        message_code_entry1 = value;
    }
    if(value_path == "message-code-entry10")
    {
        message_code_entry10 = value;
    }
    if(value_path == "message-code-entry2")
    {
        message_code_entry2 = value;
    }
    if(value_path == "message-code-entry3")
    {
        message_code_entry3 = value;
    }
    if(value_path == "message-code-entry4")
    {
        message_code_entry4 = value;
    }
    if(value_path == "message-code-entry5")
    {
        message_code_entry5 = value;
    }
    if(value_path == "message-code-entry6")
    {
        message_code_entry6 = value;
    }
    if(value_path == "message-code-entry7")
    {
        message_code_entry7 = value;
    }
    if(value_path == "message-code-entry8")
    {
        message_code_entry8 = value;
    }
    if(value_path == "message-code-entry9")
    {
        message_code_entry9 = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Syslog::Correlator::Rules::Rule::NonStateful::NonStateful()
    :
    context_correlation{YType::empty, "context-correlation"},
    timeout{YType::uint32, "timeout"},
    timeout_root_cause{YType::uint32, "timeout-root-cause"}
    	,
    non_root_causes(std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses>())
	,root_cause(std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::RootCause>())
{
    non_root_causes->parent = this;

    root_cause->parent = this;

    yang_name = "non-stateful"; yang_parent_name = "rule";
}

Syslog::Correlator::Rules::Rule::NonStateful::~NonStateful()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::has_data() const
{
    return context_correlation.is_set
	|| timeout.is_set
	|| timeout_root_cause.is_set
	|| (non_root_causes !=  nullptr && non_root_causes->has_data())
	|| (root_cause !=  nullptr && root_cause->has_data());
}

bool Syslog::Correlator::Rules::Rule::NonStateful::has_operation() const
{
    return is_set(operation)
	|| is_set(context_correlation.operation)
	|| is_set(timeout.operation)
	|| is_set(timeout_root_cause.operation)
	|| (non_root_causes !=  nullptr && non_root_causes->has_operation())
	|| (root_cause !=  nullptr && root_cause->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-stateful";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::NonStateful::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonStateful' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_correlation.is_set || is_set(context_correlation.operation)) leaf_name_data.push_back(context_correlation.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (timeout_root_cause.is_set || is_set(timeout_root_cause.operation)) leaf_name_data.push_back(timeout_root_cause.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::NonStateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-causes")
    {
        if(non_root_causes == nullptr)
        {
            non_root_causes = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses>();
        }
        return non_root_causes;
    }

    if(child_yang_name == "root-cause")
    {
        if(root_cause == nullptr)
        {
            root_cause = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::RootCause>();
        }
        return root_cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::NonStateful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_root_causes != nullptr)
    {
        children["non-root-causes"] = non_root_causes;
    }

    if(root_cause != nullptr)
    {
        children["root-cause"] = root_cause;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-correlation")
    {
        context_correlation = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "timeout-root-cause")
    {
        timeout_root_cause = value;
    }
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCauses()
{
    yang_name = "non-root-causes"; yang_parent_name = "non-stateful";
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::~NonRootCauses()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_data() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_operation() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-causes";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonRootCauses' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-cause")
    {
        for(auto const & c : non_root_cause)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause>();
        c->parent = this;
        non_root_cause.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_root_cause)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::NonRootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{
    yang_name = "non-root-cause"; yang_parent_name = "non-root-causes";
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::~NonRootCause()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_data() const
{
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(group.operation)
	|| is_set(message_code.operation);
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-cause" <<"[category='" <<category <<"']" <<"[group='" <<group <<"']" <<"[message-code='" <<message_code <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonRootCause' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.operation)) leaf_name_data.push_back(message_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "message-code")
    {
        message_code = value;
    }
}

Syslog::Correlator::Rules::Rule::NonStateful::RootCause::RootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{
    yang_name = "root-cause"; yang_parent_name = "non-stateful";
}

Syslog::Correlator::Rules::Rule::NonStateful::RootCause::~RootCause()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::RootCause::has_data() const
{
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::NonStateful::RootCause::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(group.operation)
	|| is_set(message_code.operation);
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RootCause' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.operation)) leaf_name_data.push_back(message_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::RootCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "message-code")
    {
        message_code = value;
    }
}

Syslog::Correlator::Rules::Rule::Stateful::Stateful()
    :
    context_correlation{YType::empty, "context-correlation"},
    reissue{YType::empty, "reissue"},
    reparent{YType::empty, "reparent"},
    timeout{YType::uint32, "timeout"},
    timeout_root_cause{YType::uint32, "timeout-root-cause"}
    	,
    non_root_causes(std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses>())
	,root_cause(std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::RootCause>())
{
    non_root_causes->parent = this;

    root_cause->parent = this;

    yang_name = "stateful"; yang_parent_name = "rule";
}

Syslog::Correlator::Rules::Rule::Stateful::~Stateful()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::has_data() const
{
    return context_correlation.is_set
	|| reissue.is_set
	|| reparent.is_set
	|| timeout.is_set
	|| timeout_root_cause.is_set
	|| (non_root_causes !=  nullptr && non_root_causes->has_data())
	|| (root_cause !=  nullptr && root_cause->has_data());
}

bool Syslog::Correlator::Rules::Rule::Stateful::has_operation() const
{
    return is_set(operation)
	|| is_set(context_correlation.operation)
	|| is_set(reissue.operation)
	|| is_set(reparent.operation)
	|| is_set(timeout.operation)
	|| is_set(timeout_root_cause.operation)
	|| (non_root_causes !=  nullptr && non_root_causes->has_operation())
	|| (root_cause !=  nullptr && root_cause->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::Stateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stateful";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::Stateful::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stateful' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_correlation.is_set || is_set(context_correlation.operation)) leaf_name_data.push_back(context_correlation.get_name_leafdata());
    if (reissue.is_set || is_set(reissue.operation)) leaf_name_data.push_back(reissue.get_name_leafdata());
    if (reparent.is_set || is_set(reparent.operation)) leaf_name_data.push_back(reparent.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (timeout_root_cause.is_set || is_set(timeout_root_cause.operation)) leaf_name_data.push_back(timeout_root_cause.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::Stateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-causes")
    {
        if(non_root_causes == nullptr)
        {
            non_root_causes = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses>();
        }
        return non_root_causes;
    }

    if(child_yang_name == "root-cause")
    {
        if(root_cause == nullptr)
        {
            root_cause = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::RootCause>();
        }
        return root_cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::Stateful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_root_causes != nullptr)
    {
        children["non-root-causes"] = non_root_causes;
    }

    if(root_cause != nullptr)
    {
        children["root-cause"] = root_cause;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::Stateful::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-correlation")
    {
        context_correlation = value;
    }
    if(value_path == "reissue")
    {
        reissue = value;
    }
    if(value_path == "reparent")
    {
        reparent = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "timeout-root-cause")
    {
        timeout_root_cause = value;
    }
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCauses()
{
    yang_name = "non-root-causes"; yang_parent_name = "stateful";
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::~NonRootCauses()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::has_data() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::has_operation() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-causes";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonRootCauses' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-cause")
    {
        for(auto const & c : non_root_cause)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause>();
        c->parent = this;
        non_root_cause.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_root_cause)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::NonRootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{
    yang_name = "non-root-cause"; yang_parent_name = "non-root-causes";
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::~NonRootCause()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::has_data() const
{
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(group.operation)
	|| is_set(message_code.operation);
}

std::string Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-cause" <<"[category='" <<category <<"']" <<"[group='" <<group <<"']" <<"[message-code='" <<message_code <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonRootCause' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.operation)) leaf_name_data.push_back(message_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "message-code")
    {
        message_code = value;
    }
}

Syslog::Correlator::Rules::Rule::Stateful::RootCause::RootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{
    yang_name = "root-cause"; yang_parent_name = "stateful";
}

Syslog::Correlator::Rules::Rule::Stateful::RootCause::~RootCause()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::RootCause::has_data() const
{
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::Stateful::RootCause::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(group.operation)
	|| is_set(message_code.operation);
}

std::string Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RootCause' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.operation)) leaf_name_data.push_back(message_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::Stateful::RootCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "message-code")
    {
        message_code = value;
    }
}

Syslog::Correlator::Rules::Rule::ApplyTo::ApplyTo()
    :
    all_of_router{YType::empty, "all-of-router"}
    	,
    contexts(std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Contexts>())
	,locations(std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Locations>())
{
    contexts->parent = this;

    locations->parent = this;

    yang_name = "apply-to"; yang_parent_name = "rule";
}

Syslog::Correlator::Rules::Rule::ApplyTo::~ApplyTo()
{
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::has_data() const
{
    return all_of_router.is_set
	|| (contexts !=  nullptr && contexts->has_data())
	|| (locations !=  nullptr && locations->has_data());
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::has_operation() const
{
    return is_set(operation)
	|| is_set(all_of_router.operation)
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (locations !=  nullptr && locations->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::ApplyTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-to";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::ApplyTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplyTo' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_of_router.is_set || is_set(all_of_router.operation)) leaf_name_data.push_back(all_of_router.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::ApplyTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Locations>();
        }
        return locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::ApplyTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(contexts != nullptr)
    {
        children["contexts"] = contexts;
    }

    if(locations != nullptr)
    {
        children["locations"] = locations;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::ApplyTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-of-router")
    {
        all_of_router = value;
    }
}

Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::Contexts()
    :
    context{YType::str, "context"}
{
    yang_name = "contexts"; yang_parent_name = "apply-to";
}

Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::~Contexts()
{
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::has_data() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(context.operation);
}

std::string Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Contexts' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

Syslog::Correlator::Rules::Rule::ApplyTo::Locations::Locations()
    :
    location{YType::str, "location"}
{
    yang_name = "locations"; yang_parent_name = "apply-to";
}

Syslog::Correlator::Rules::Rule::ApplyTo::Locations::~Locations()
{
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Locations::has_data() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Locations::has_operation() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(location.operation);
}

std::string Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Locations' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto location_name_datas = location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), location_name_datas.begin(), location_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::ApplyTo::Locations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location.append(value);
    }
}

Syslog::Correlator::Rules::Rule::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
    	,
    contexts(std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Contexts>())
	,locations(std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Locations>())
{
    contexts->parent = this;

    locations->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule";
}

Syslog::Correlator::Rules::Rule::AppliedTo::~AppliedTo()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::has_data() const
{
    return all.is_set
	|| (contexts !=  nullptr && contexts->has_data())
	|| (locations !=  nullptr && locations->has_data());
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (locations !=  nullptr && locations->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::AppliedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AppliedTo' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Locations>();
        }
        return locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(contexts != nullptr)
    {
        children["contexts"] = contexts;
    }

    if(locations != nullptr)
    {
        children["locations"] = locations;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Contexts()
{
    yang_name = "contexts"; yang_parent_name = "applied-to";
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::~Contexts()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Contexts' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::Context()
    :
    context{YType::str, "context"}
{
    yang_name = "context"; yang_parent_name = "contexts";
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::~Context()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::has_data() const
{
    return context.is_set;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[context='" <<context <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Locations()
{
    yang_name = "locations"; yang_parent_name = "applied-to";
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::~Locations()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Locations' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        for(auto const & c : location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Locations::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::Location()
    :
    location{YType::str, "location"}
{
    yang_name = "location"; yang_parent_name = "locations";
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::~Location()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::has_data() const
{
    return location.is_set;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Location' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

Syslog::Correlator::RuleSets::RuleSets()
{
    yang_name = "rule-sets"; yang_parent_name = "correlator";
}

Syslog::Correlator::RuleSets::~RuleSets()
{
}

bool Syslog::Correlator::RuleSets::has_data() const
{
    for (std::size_t index=0; index<rule_set.size(); index++)
    {
        if(rule_set[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::has_operation() const
{
    for (std::size_t index=0; index<rule_set.size(); index++)
    {
        if(rule_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::RuleSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-sets";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set")
    {
        for(auto const & c : rule_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::RuleSets::RuleSet>();
        c->parent = this;
        rule_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::RuleSets::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::RuleSets::RuleSet::RuleSet()
    :
    name{YType::str, "name"}
    	,
    applied_to(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo>())
	,rulenames(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::Rulenames>())
{
    applied_to->parent = this;

    rulenames->parent = this;

    yang_name = "rule-set"; yang_parent_name = "rule-sets";
}

Syslog::Correlator::RuleSets::RuleSet::~RuleSet()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::has_data() const
{
    return name.is_set
	|| (applied_to !=  nullptr && applied_to->has_data())
	|| (rulenames !=  nullptr && rulenames->has_data());
}

bool Syslog::Correlator::RuleSets::RuleSet::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (applied_to !=  nullptr && applied_to->has_operation())
	|| (rulenames !=  nullptr && rulenames->has_operation());
}

std::string Syslog::Correlator::RuleSets::RuleSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/rule-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo>();
        }
        return applied_to;
    }

    if(child_yang_name == "rulenames")
    {
        if(rulenames == nullptr)
        {
            rulenames = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::Rulenames>();
        }
        return rulenames;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(applied_to != nullptr)
    {
        children["applied-to"] = applied_to;
    }

    if(rulenames != nullptr)
    {
        children["rulenames"] = rulenames;
    }

    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulenames()
{
    yang_name = "rulenames"; yang_parent_name = "rule-set";
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::~Rulenames()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::has_data() const
{
    for (std::size_t index=0; index<rulename.size(); index++)
    {
        if(rulename[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::has_operation() const
{
    for (std::size_t index=0; index<rulename.size(); index++)
    {
        if(rulename[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulenames";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rulenames' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulename")
    {
        for(auto const & c : rulename)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename>();
        c->parent = this;
        rulename.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rulename)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::Rulenames::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::Rulename()
    :
    rulename{YType::str, "rulename"}
{
    yang_name = "rulename"; yang_parent_name = "rulenames";
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::~Rulename()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_data() const
{
    return rulename.is_set;
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_operation() const
{
    return is_set(operation)
	|| is_set(rulename.operation);
}

std::string Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulename" <<"[rulename='" <<rulename <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rulename' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rulename.is_set || is_set(rulename.operation)) leaf_name_data.push_back(rulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rulename")
    {
        rulename = value;
    }
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
    	,
    contexts(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts>())
	,locations(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations>())
{
    contexts->parent = this;

    locations->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule-set";
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::~AppliedTo()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::has_data() const
{
    return all.is_set
	|| (contexts !=  nullptr && contexts->has_data())
	|| (locations !=  nullptr && locations->has_data());
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (locations !=  nullptr && locations->has_operation());
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AppliedTo' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations>();
        }
        return locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(contexts != nullptr)
    {
        children["contexts"] = contexts;
    }

    if(locations != nullptr)
    {
        children["locations"] = locations;
    }

    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Contexts()
{
    yang_name = "contexts"; yang_parent_name = "applied-to";
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::~Contexts()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Contexts' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::Context()
    :
    context{YType::str, "context"}
{
    yang_name = "context"; yang_parent_name = "contexts";
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::~Context()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::has_data() const
{
    return context.is_set;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[context='" <<context <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Locations()
{
    yang_name = "locations"; yang_parent_name = "applied-to";
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::~Locations()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Locations' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        for(auto const & c : location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::Location()
    :
    location{YType::str, "location"}
{
    yang_name = "location"; yang_parent_name = "locations";
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::~Location()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::has_data() const
{
    return location.is_set;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Location' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

Syslog::Suppression::Suppression()
    :
    rules(std::make_shared<Syslog::Suppression::Rules>())
{
    rules->parent = this;

    yang_name = "suppression"; yang_parent_name = "syslog";
}

Syslog::Suppression::~Suppression()
{
}

bool Syslog::Suppression::has_data() const
{
    return (rules !=  nullptr && rules->has_data());
}

bool Syslog::Suppression::has_operation() const
{
    return is_set(operation)
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Syslog::Suppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-cfg:suppression";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Syslog::Suppression::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Syslog::Suppression::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Suppression::Rules::Rules()
{
    yang_name = "rules"; yang_parent_name = "suppression";
}

Syslog::Suppression::Rules::~Rules()
{
}

bool Syslog::Suppression::Rules::has_data() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Suppression::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Suppression::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:suppression/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        for(auto const & c : rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Suppression::Rules::Rule>();
        c->parent = this;
        rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Suppression::Rules::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Suppression::Rules::Rule::Rule()
    :
    name{YType::str, "name"},
    all_alarms{YType::empty, "all-alarms"}
    	,
    alarm_causes(std::make_shared<Syslog::Suppression::Rules::Rule::AlarmCauses>())
	,applied_to(std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo>())
{
    alarm_causes->parent = this;

    applied_to->parent = this;

    yang_name = "rule"; yang_parent_name = "rules";
}

Syslog::Suppression::Rules::Rule::~Rule()
{
}

bool Syslog::Suppression::Rules::Rule::has_data() const
{
    return name.is_set
	|| all_alarms.is_set
	|| (alarm_causes !=  nullptr && alarm_causes->has_data())
	|| (applied_to !=  nullptr && applied_to->has_data());
}

bool Syslog::Suppression::Rules::Rule::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(all_alarms.operation)
	|| (alarm_causes !=  nullptr && alarm_causes->has_operation())
	|| (applied_to !=  nullptr && applied_to->has_operation());
}

std::string Syslog::Suppression::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::Rules::Rule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:suppression/rules/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (all_alarms.is_set || is_set(all_alarms.operation)) leaf_name_data.push_back(all_alarms.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-causes")
    {
        if(alarm_causes == nullptr)
        {
            alarm_causes = std::make_shared<Syslog::Suppression::Rules::Rule::AlarmCauses>();
        }
        return alarm_causes;
    }

    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo>();
        }
        return applied_to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarm_causes != nullptr)
    {
        children["alarm-causes"] = alarm_causes;
    }

    if(applied_to != nullptr)
    {
        children["applied-to"] = applied_to;
    }

    return children;
}

void Syslog::Suppression::Rules::Rule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "all-alarms")
    {
        all_alarms = value;
    }
}

Syslog::Suppression::Rules::Rule::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
    	,
    sources(std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo::Sources>())
{
    sources->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule";
}

Syslog::Suppression::Rules::Rule::AppliedTo::~AppliedTo()
{
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::has_data() const
{
    return all.is_set
	|| (sources !=  nullptr && sources->has_data());
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (sources !=  nullptr && sources->has_operation());
}

std::string Syslog::Suppression::Rules::Rule::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::Rules::Rule::AppliedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AppliedTo' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::Rules::Rule::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sources")
    {
        if(sources == nullptr)
        {
            sources = std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo::Sources>();
        }
        return sources;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::Rules::Rule::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sources != nullptr)
    {
        children["sources"] = sources;
    }

    return children;
}

void Syslog::Suppression::Rules::Rule::AppliedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Sources()
{
    yang_name = "sources"; yang_parent_name = "applied-to";
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::~Sources()
{
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::has_data() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sources' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Suppression::Rules::Rule::AppliedTo::Sources::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::Source()
    :
    source{YType::str, "source"}
{
    yang_name = "source"; yang_parent_name = "sources";
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::~Source()
{
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::has_data() const
{
    return source.is_set;
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(source.operation);
}

std::string Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source" <<"[source='" <<source <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source")
    {
        source = value;
    }
}

Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCauses()
{
    yang_name = "alarm-causes"; yang_parent_name = "rule";
}

Syslog::Suppression::Rules::Rule::AlarmCauses::~AlarmCauses()
{
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::has_data() const
{
    for (std::size_t index=0; index<alarm_cause.size(); index++)
    {
        if(alarm_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::has_operation() const
{
    for (std::size_t index=0; index<alarm_cause.size(); index++)
    {
        if(alarm_cause[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Suppression::Rules::Rule::AlarmCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-causes";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::Rules::Rule::AlarmCauses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmCauses' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::Rules::Rule::AlarmCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-cause")
    {
        for(auto const & c : alarm_cause)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause>();
        c->parent = this;
        alarm_cause.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::Rules::Rule::AlarmCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_cause)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Suppression::Rules::Rule::AlarmCauses::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::AlarmCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    code{YType::str, "code"}
{
    yang_name = "alarm-cause"; yang_parent_name = "alarm-causes";
}

Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::~AlarmCause()
{
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::has_data() const
{
    return category.is_set
	|| group.is_set
	|| code.is_set;
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(group.operation)
	|| is_set(code.operation);
}

std::string Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-cause" <<"[category='" <<category <<"']" <<"[group='" <<group <<"']" <<"[code='" <<code <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmCause' in Cisco_IOS_XR_infra_syslog_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
}

const Enum::YLeaf LogSeverityEnum::emergency {0, "emergency"};
const Enum::YLeaf LogSeverityEnum::alert {1, "alert"};
const Enum::YLeaf LogSeverityEnum::critical {2, "critical"};
const Enum::YLeaf LogSeverityEnum::error {3, "error"};
const Enum::YLeaf LogSeverityEnum::warning {4, "warning"};
const Enum::YLeaf LogSeverityEnum::notice {5, "notice"};
const Enum::YLeaf LogSeverityEnum::informational {6, "informational"};
const Enum::YLeaf LogSeverityEnum::debug {7, "debug"};

const Enum::YLeaf FacilityEnum::kern {0, "kern"};
const Enum::YLeaf FacilityEnum::user {8, "user"};
const Enum::YLeaf FacilityEnum::mail {16, "mail"};
const Enum::YLeaf FacilityEnum::daemon {24, "daemon"};
const Enum::YLeaf FacilityEnum::auth {32, "auth"};
const Enum::YLeaf FacilityEnum::syslog {40, "syslog"};
const Enum::YLeaf FacilityEnum::lpr {48, "lpr"};
const Enum::YLeaf FacilityEnum::news {56, "news"};
const Enum::YLeaf FacilityEnum::uucp {64, "uucp"};
const Enum::YLeaf FacilityEnum::cron {72, "cron"};
const Enum::YLeaf FacilityEnum::authpriv {80, "authpriv"};
const Enum::YLeaf FacilityEnum::ftp {88, "ftp"};
const Enum::YLeaf FacilityEnum::local0 {128, "local0"};
const Enum::YLeaf FacilityEnum::local1 {136, "local1"};
const Enum::YLeaf FacilityEnum::local2 {144, "local2"};
const Enum::YLeaf FacilityEnum::local3 {152, "local3"};
const Enum::YLeaf FacilityEnum::local4 {160, "local4"};
const Enum::YLeaf FacilityEnum::local5 {168, "local5"};
const Enum::YLeaf FacilityEnum::local6 {176, "local6"};
const Enum::YLeaf FacilityEnum::local7 {184, "local7"};
const Enum::YLeaf FacilityEnum::sys9 {192, "sys9"};
const Enum::YLeaf FacilityEnum::sys10 {200, "sys10"};
const Enum::YLeaf FacilityEnum::sys11 {208, "sys11"};
const Enum::YLeaf FacilityEnum::sys12 {216, "sys12"};
const Enum::YLeaf FacilityEnum::sys13 {224, "sys13"};
const Enum::YLeaf FacilityEnum::sys14 {232, "sys14"};

const Enum::YLeaf LogCollectFrequencyEnum::weekly {1, "weekly"};
const Enum::YLeaf LogCollectFrequencyEnum::daily {2, "daily"};

const Enum::YLeaf LoggingPrecedenceValueEnum::routine {0, "routine"};
const Enum::YLeaf LoggingPrecedenceValueEnum::priority {1, "priority"};
const Enum::YLeaf LoggingPrecedenceValueEnum::immediate {2, "immediate"};
const Enum::YLeaf LoggingPrecedenceValueEnum::flash {3, "flash"};
const Enum::YLeaf LoggingPrecedenceValueEnum::flash_override {4, "flash-override"};
const Enum::YLeaf LoggingPrecedenceValueEnum::critical {5, "critical"};
const Enum::YLeaf LoggingPrecedenceValueEnum::internet {6, "internet"};
const Enum::YLeaf LoggingPrecedenceValueEnum::network {7, "network"};

const Enum::YLeaf LoggingTosEnum::precedence {0, "precedence"};
const Enum::YLeaf LoggingTosEnum::dscp {1, "dscp"};

const Enum::YLeaf LoggingLevelsEnum::emergency {0, "emergency"};
const Enum::YLeaf LoggingLevelsEnum::alert {1, "alert"};
const Enum::YLeaf LoggingLevelsEnum::critical {2, "critical"};
const Enum::YLeaf LoggingLevelsEnum::error {3, "error"};
const Enum::YLeaf LoggingLevelsEnum::warning {4, "warning"};
const Enum::YLeaf LoggingLevelsEnum::notice {5, "notice"};
const Enum::YLeaf LoggingLevelsEnum::info {6, "info"};
const Enum::YLeaf LoggingLevelsEnum::debug {7, "debug"};
const Enum::YLeaf LoggingLevelsEnum::disable {15, "disable"};

const Enum::YLeaf LoggingPrecedenceEnum::precedence {0, "precedence"};

const Enum::YLeaf LoggingDscpValueEnum::default_ {0, "default"};
const Enum::YLeaf LoggingDscpValueEnum::af11 {10, "af11"};
const Enum::YLeaf LoggingDscpValueEnum::af12 {12, "af12"};
const Enum::YLeaf LoggingDscpValueEnum::af13 {14, "af13"};
const Enum::YLeaf LoggingDscpValueEnum::af21 {18, "af21"};
const Enum::YLeaf LoggingDscpValueEnum::af22 {20, "af22"};
const Enum::YLeaf LoggingDscpValueEnum::af23 {22, "af23"};
const Enum::YLeaf LoggingDscpValueEnum::af31 {26, "af31"};
const Enum::YLeaf LoggingDscpValueEnum::af32 {28, "af32"};
const Enum::YLeaf LoggingDscpValueEnum::af33 {30, "af33"};
const Enum::YLeaf LoggingDscpValueEnum::af41 {34, "af41"};
const Enum::YLeaf LoggingDscpValueEnum::af42 {36, "af42"};
const Enum::YLeaf LoggingDscpValueEnum::af43 {38, "af43"};
const Enum::YLeaf LoggingDscpValueEnum::ef {46, "ef"};
const Enum::YLeaf LoggingDscpValueEnum::cs1 {8, "cs1"};
const Enum::YLeaf LoggingDscpValueEnum::cs2 {16, "cs2"};
const Enum::YLeaf LoggingDscpValueEnum::cs3 {24, "cs3"};
const Enum::YLeaf LoggingDscpValueEnum::cs4 {32, "cs4"};
const Enum::YLeaf LoggingDscpValueEnum::cs5 {40, "cs5"};
const Enum::YLeaf LoggingDscpValueEnum::cs6 {48, "cs6"};
const Enum::YLeaf LoggingDscpValueEnum::cs7 {56, "cs7"};

const Enum::YLeaf LogMessageSeverityEnum::emergency {0, "emergency"};
const Enum::YLeaf LogMessageSeverityEnum::alert {1, "alert"};
const Enum::YLeaf LogMessageSeverityEnum::critical {2, "critical"};
const Enum::YLeaf LogMessageSeverityEnum::error {3, "error"};
const Enum::YLeaf LogMessageSeverityEnum::warning {4, "warning"};
const Enum::YLeaf LogMessageSeverityEnum::notice {5, "notice"};
const Enum::YLeaf LogMessageSeverityEnum::informational {6, "informational"};
const Enum::YLeaf LogMessageSeverityEnum::debug {7, "debug"};

const Enum::YLeaf TimeInfoEnum::disable {0, "disable"};
const Enum::YLeaf TimeInfoEnum::enable {1, "enable"};

const Enum::YLeaf LoggingDscpEnum::dscp {1, "dscp"};


}
}

