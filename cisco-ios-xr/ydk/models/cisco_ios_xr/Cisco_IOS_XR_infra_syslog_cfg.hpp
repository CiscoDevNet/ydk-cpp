#ifndef _CISCO_IOS_XR_INFRA_SYSLOG_CFG_
#define _CISCO_IOS_XR_INFRA_SYSLOG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_infra_syslog_cfg {

class SyslogService : public Entity
{
    public:
        SyslogService();
        ~SyslogService();

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

        class Timestamps; //type: SyslogService::Timestamps

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps> timestamps;
        
}; // SyslogService


class SyslogService::Timestamps : public Entity
{
    public:
        Timestamps();
        ~Timestamps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class Log; //type: SyslogService::Timestamps::Log
        class Debug; //type: SyslogService::Timestamps::Debug

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug> debug;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log> log;
        
}; // SyslogService::Timestamps


class SyslogService::Timestamps::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log_uptime; //type: empty
        YLeaf log_timestamp_disable; //type: empty
        class LogDatetime; //type: SyslogService::Timestamps::Log::LogDatetime

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log::LogDatetime> log_datetime;
        
}; // SyslogService::Timestamps::Log


class SyslogService::Timestamps::Log::LogDatetime : public Entity
{
    public:
        LogDatetime();
        ~LogDatetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogDatetimeValue; //type: SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue> log_datetime_value;
        
}; // SyslogService::Timestamps::Log::LogDatetime


class SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue : public Entity
{
    public:
        LogDatetimeValue();
        ~LogDatetimeValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_stamp_value; //type: TimeInfoEnum
        YLeaf msec; //type: TimeInfoEnum
        YLeaf time_zone; //type: TimeInfoEnum
        YLeaf year; //type: TimeInfoEnum

}; // SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue


class SyslogService::Timestamps::Debug : public Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf debug_timestamp_disable; //type: empty
        YLeaf debug_uptime; //type: empty
        class DebugDatetime; //type: SyslogService::Timestamps::Debug::DebugDatetime

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug::DebugDatetime> debug_datetime;
        
}; // SyslogService::Timestamps::Debug


class SyslogService::Timestamps::Debug::DebugDatetime : public Entity
{
    public:
        DebugDatetime();
        ~DebugDatetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DatetimeValue; //type: SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue> datetime_value;
        
}; // SyslogService::Timestamps::Debug::DebugDatetime


class SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue : public Entity
{
    public:
        DatetimeValue();
        ~DatetimeValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_stamp_value; //type: TimeInfoEnum
        YLeaf msec; //type: TimeInfoEnum
        YLeaf time_zone; //type: TimeInfoEnum
        YLeaf year; //type: TimeInfoEnum

}; // SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue

class Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

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

        YLeaf host_name_prefix; //type: string
        YLeaf local_log_file_size; //type: uint32
        YLeaf enable_console_logging; //type: boolean
        YLeaf suppress_duplicates; //type: empty
        class MonitorLogging; //type: Syslog::MonitorLogging
        class HistoryLogging; //type: Syslog::HistoryLogging
        class LoggingFacilities; //type: Syslog::LoggingFacilities
        class TrapLogging; //type: Syslog::TrapLogging
        class BufferedLogging; //type: Syslog::BufferedLogging
        class HostServer; //type: Syslog::HostServer
        class ConsoleLogging; //type: Syslog::ConsoleLogging
        class Files; //type: Syslog::Files
        class Ipv4; //type: Syslog::Ipv4
        class Archive; //type: Syslog::Archive
        class Ipv6; //type: Syslog::Ipv6
        class SourceInterfaceTable; //type: Syslog::SourceInterfaceTable
        class AlarmLogger; //type: Syslog::AlarmLogger
        class Correlator; //type: Syslog::Correlator
        class Suppression; //type: Syslog::Suppression

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::AlarmLogger> alarm_logger;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Archive> archive;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::BufferedLogging> buffered_logging;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::ConsoleLogging> console_logging;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator> correlator;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files> files;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HistoryLogging> history_logging;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer> host_server;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::LoggingFacilities> logging_facilities;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::MonitorLogging> monitor_logging;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable> source_interface_table;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression> suppression;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::TrapLogging> trap_logging;
        
}; // Syslog


class Syslog::MonitorLogging : public Entity
{
    public:
        MonitorLogging();
        ~MonitorLogging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging_level; //type: LoggingLevelsEnum
        class MonitorDiscriminator; //type: Syslog::MonitorLogging::MonitorDiscriminator

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::MonitorLogging::MonitorDiscriminator> monitor_discriminator;
        
}; // Syslog::MonitorLogging


class Syslog::MonitorLogging::MonitorDiscriminator : public Entity
{
    public:
        MonitorDiscriminator();
        ~MonitorDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf match2; //type: string
        YLeaf nomatch1; //type: string
        YLeaf match1; //type: string
        YLeaf nomatch3; //type: string
        YLeaf match3; //type: string
        YLeaf nomatch2; //type: string

}; // Syslog::MonitorLogging::MonitorDiscriminator


class Syslog::HistoryLogging : public Entity
{
    public:
        HistoryLogging();
        ~HistoryLogging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf history_size; //type: uint32
        YLeaf logging_level; //type: LoggingLevelsEnum

}; // Syslog::HistoryLogging


class Syslog::LoggingFacilities : public Entity
{
    public:
        LoggingFacilities();
        ~LoggingFacilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf facility_level; //type: FacilityEnum

}; // Syslog::LoggingFacilities


class Syslog::TrapLogging : public Entity
{
    public:
        TrapLogging();
        ~TrapLogging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging_level; //type: LoggingLevelsEnum

}; // Syslog::TrapLogging


class Syslog::BufferedLogging : public Entity
{
    public:
        BufferedLogging();
        ~BufferedLogging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging_level; //type: LoggingLevelsEnum
        YLeaf buffer_size; //type: uint32
        class BufferedDiscriminator; //type: Syslog::BufferedLogging::BufferedDiscriminator

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::BufferedLogging::BufferedDiscriminator> buffered_discriminator;
        
}; // Syslog::BufferedLogging


class Syslog::BufferedLogging::BufferedDiscriminator : public Entity
{
    public:
        BufferedDiscriminator();
        ~BufferedDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf match2; //type: string
        YLeaf nomatch1; //type: string
        YLeaf match1; //type: string
        YLeaf nomatch3; //type: string
        YLeaf match3; //type: string
        YLeaf nomatch2; //type: string

}; // Syslog::BufferedLogging::BufferedDiscriminator


class Syslog::HostServer : public Entity
{
    public:
        HostServer();
        ~HostServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Syslog::HostServer::Vrfs

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs> vrfs;
        
}; // Syslog::HostServer


class Syslog::HostServer::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Syslog::HostServer::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf> > vrf;
        
}; // Syslog::HostServer::Vrfs


class Syslog::HostServer::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Ipv6S; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6S
        class Hosts; //type: Syslog::HostServer::Vrfs::Vrf::Hosts
        class Ipv4S; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4S

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S> ipv4s;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S> ipv6s;
        
}; // Syslog::HostServer::Vrfs::Vrf


class Syslog::HostServer::Vrfs::Vrf::Ipv6S : public Entity
{
    public:
        Ipv6S();
        ~Ipv6S();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6> > ipv6;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv6S


class Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        class Ipv6SeverityPort; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort
        class Ipv6Discriminator; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator
        class Ipv6SeverityLevels; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator> ipv6_discriminator;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels> ipv6_severity_levels;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort> ipv6_severity_port;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6


class Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort : public Entity
{
    public:
        Ipv6SeverityPort();
        ~Ipv6SeverityPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: int32
        YLeaf port; //type: int32

}; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort


class Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator : public Entity
{
    public:
        Ipv6Discriminator();
        ~Ipv6Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nomatch2; //type: string
        YLeaf match3; //type: string
        YLeaf nomatch3; //type: string
        YLeaf match1; //type: string
        YLeaf nomatch1; //type: string
        YLeaf match2; //type: string

}; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator


class Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels : public Entity
{
    public:
        Ipv6SeverityLevels();
        ~Ipv6SeverityLevels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6SeverityLevel; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel> > ipv6_severity_level;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels


class Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel : public Entity
{
    public:
        Ipv6SeverityLevel();
        ~Ipv6SeverityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: LogSeverityEnum

}; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel


class Syslog::HostServer::Vrfs::Vrf::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host> > host;
        
}; // Syslog::HostServer::Vrfs::Vrf::Hosts


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        class HostNameSeverities; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities
        class HostNameDiscriminator; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator
        class HostSeverityPort; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator> host_name_discriminator;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities> host_name_severities;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort> host_severity_port;
        
}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities : public Entity
{
    public:
        HostNameSeverities();
        ~HostNameSeverities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HostNameSeverity; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity> > host_name_severity;
        
}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity : public Entity
{
    public:
        HostNameSeverity();
        ~HostNameSeverity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: LogSeverityEnum

}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator : public Entity
{
    public:
        HostNameDiscriminator();
        ~HostNameDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nomatch2; //type: string
        YLeaf match3; //type: string
        YLeaf nomatch3; //type: string
        YLeaf match1; //type: string
        YLeaf nomatch1; //type: string
        YLeaf match2; //type: string

}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort : public Entity
{
    public:
        HostSeverityPort();
        ~HostSeverityPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: int32
        YLeaf port; //type: int32

}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort


class Syslog::HostServer::Vrfs::Vrf::Ipv4S : public Entity
{
    public:
        Ipv4S();
        ~Ipv4S();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4> > ipv4;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv4S


class Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        class Ipv4SeverityLevels; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels
        class Ipv4SeverityPort; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort
        class Ipv4Discriminator; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator> ipv4_discriminator;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels> ipv4_severity_levels;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort> ipv4_severity_port;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4


class Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels : public Entity
{
    public:
        Ipv4SeverityLevels();
        ~Ipv4SeverityLevels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4SeverityLevel; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel> > ipv4_severity_level;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels


class Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel : public Entity
{
    public:
        Ipv4SeverityLevel();
        ~Ipv4SeverityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: LogSeverityEnum

}; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel


class Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort : public Entity
{
    public:
        Ipv4SeverityPort();
        ~Ipv4SeverityPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: int32
        YLeaf port; //type: int32

}; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort


class Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator : public Entity
{
    public:
        Ipv4Discriminator();
        ~Ipv4Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nomatch2; //type: string
        YLeaf match3; //type: string
        YLeaf nomatch3; //type: string
        YLeaf match1; //type: string
        YLeaf nomatch1; //type: string
        YLeaf match2; //type: string

}; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator


class Syslog::ConsoleLogging : public Entity
{
    public:
        ConsoleLogging();
        ~ConsoleLogging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging_level; //type: LoggingLevelsEnum
        class ConsoleDiscriminator; //type: Syslog::ConsoleLogging::ConsoleDiscriminator

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::ConsoleLogging::ConsoleDiscriminator> console_discriminator;
        
}; // Syslog::ConsoleLogging


class Syslog::ConsoleLogging::ConsoleDiscriminator : public Entity
{
    public:
        ConsoleDiscriminator();
        ~ConsoleDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf match2; //type: string
        YLeaf nomatch1; //type: string
        YLeaf match1; //type: string
        YLeaf nomatch3; //type: string
        YLeaf match3; //type: string
        YLeaf nomatch2; //type: string

}; // Syslog::ConsoleLogging::ConsoleDiscriminator


class Syslog::Files : public Entity
{
    public:
        Files();
        ~Files();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class File; //type: Syslog::Files::File

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File> > file;
        
}; // Syslog::Files


class Syslog::Files::File : public Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_name; //type: string
        class FileSpecification; //type: Syslog::Files::File::FileSpecification
        class FileLogAttributes; //type: Syslog::Files::File::FileLogAttributes
        class FileLogDiscriminator; //type: Syslog::Files::File::FileLogDiscriminator

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileLogAttributes> file_log_attributes;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileLogDiscriminator> file_log_discriminator;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileSpecification> file_specification;
        
}; // Syslog::Files::File


class Syslog::Files::File::FileSpecification : public Entity
{
    public:
        FileSpecification();
        ~FileSpecification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path; //type: string
        YLeaf max_file_size; //type: int32
        YLeaf severity; //type: int32

}; // Syslog::Files::File::FileSpecification


class Syslog::Files::File::FileLogAttributes : public Entity
{
    public:
        FileLogAttributes();
        ~FileLogAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_file_size; //type: int32
        YLeaf severity; //type: int32

}; // Syslog::Files::File::FileLogAttributes


class Syslog::Files::File::FileLogDiscriminator : public Entity
{
    public:
        FileLogDiscriminator();
        ~FileLogDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nomatch2; //type: string
        YLeaf match3; //type: string
        YLeaf nomatch3; //type: string
        YLeaf match1; //type: string
        YLeaf nomatch1; //type: string
        YLeaf match2; //type: string

}; // Syslog::Files::File::FileLogDiscriminator


class Syslog::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dscp; //type: Syslog::Ipv4::Dscp
        class Tos; //type: Syslog::Ipv4::Tos
        class Precedence; //type: Syslog::Ipv4::Precedence

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Dscp> dscp; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Precedence> precedence; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Tos> tos;
        
}; // Syslog::Ipv4


class Syslog::Ipv4::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoggingDscpEnum
        YLeaf unused; //type: one of uint32, enumeration
        YLeaf value_; //type: one of uint32, enumeration

}; // Syslog::Ipv4::Dscp


class Syslog::Ipv4::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoggingTosEnum
        YLeaf precedence; //type: one of uint32, enumeration
        YLeaf dscp; //type: one of uint32, enumeration

}; // Syslog::Ipv4::Tos


class Syslog::Ipv4::Precedence : public Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoggingPrecedenceEnum
        YLeaf value_; //type: one of uint32, enumeration
        YLeaf unused; //type: one of uint32, enumeration

}; // Syslog::Ipv4::Precedence


class Syslog::Archive : public Entity
{
    public:
        Archive();
        ~Archive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint32
        YLeaf file_size; //type: uint32
        YLeaf device; //type: string
        YLeaf threshold; //type: uint32
        YLeaf frequency; //type: LogCollectFrequencyEnum
        YLeaf severity; //type: LogMessageSeverityEnum
        YLeaf length; //type: uint32

}; // Syslog::Archive


class Syslog::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dscp; //type: Syslog::Ipv6::Dscp
        class TrafficClass; //type: Syslog::Ipv6::TrafficClass
        class Precedence; //type: Syslog::Ipv6::Precedence

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::Dscp> dscp; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::Precedence> precedence; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::TrafficClass> traffic_class;
        
}; // Syslog::Ipv6


class Syslog::Ipv6::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoggingDscpEnum
        YLeaf unused; //type: one of uint32, enumeration
        YLeaf value_; //type: one of uint32, enumeration

}; // Syslog::Ipv6::Dscp


class Syslog::Ipv6::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoggingTosEnum
        YLeaf precedence; //type: one of uint32, enumeration
        YLeaf dscp; //type: one of uint32, enumeration

}; // Syslog::Ipv6::TrafficClass


class Syslog::Ipv6::Precedence : public Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoggingPrecedenceEnum
        YLeaf value_; //type: one of uint32, enumeration
        YLeaf unused; //type: one of uint32, enumeration

}; // Syslog::Ipv6::Precedence


class Syslog::SourceInterfaceTable : public Entity
{
    public:
        SourceInterfaceTable();
        ~SourceInterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SourceInterfaceValues; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues> source_interface_values;
        
}; // Syslog::SourceInterfaceTable


class Syslog::SourceInterfaceTable::SourceInterfaceValues : public Entity
{
    public:
        SourceInterfaceValues();
        ~SourceInterfaceValues();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SourceInterfaceValue; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue> > source_interface_value;
        
}; // Syslog::SourceInterfaceTable::SourceInterfaceValues


class Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue : public Entity
{
    public:
        SourceInterfaceValue();
        ~SourceInterfaceValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_interface_name_value; //type: string
        class SourceInterfaceVrfs; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs> source_interface_vrfs;
        
}; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue


class Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs : public Entity
{
    public:
        SourceInterfaceVrfs();
        ~SourceInterfaceVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SourceInterfaceVrf; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf> > source_interface_vrf;
        
}; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs


class Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf : public Entity
{
    public:
        SourceInterfaceVrf();
        ~SourceInterfaceVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string

}; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf


class Syslog::AlarmLogger : public Entity
{
    public:
        AlarmLogger();
        ~AlarmLogger();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity_level; //type: AlarmLoggerSeverityLevelEnum
        YLeaf buffer_size; //type: uint32
        YLeaf source_location; //type: empty
        YLeaf threshold; //type: uint32
        class AlarmFilterStrings; //type: Syslog::AlarmLogger::AlarmFilterStrings

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::AlarmLogger::AlarmFilterStrings> alarm_filter_strings;
        
}; // Syslog::AlarmLogger


class Syslog::AlarmLogger::AlarmFilterStrings : public Entity
{
    public:
        AlarmFilterStrings();
        ~AlarmFilterStrings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmFilterString; //type: Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString> > alarm_filter_string;
        
}; // Syslog::AlarmLogger::AlarmFilterStrings


class Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString : public Entity
{
    public:
        AlarmFilterString();
        ~AlarmFilterString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filter_string; //type: string

}; // Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString


class Syslog::Correlator : public Entity
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

        YLeaf buffer_size; //type: uint32
        class Rules; //type: Syslog::Correlator::Rules
        class RuleSets; //type: Syslog::Correlator::RuleSets

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets> rule_sets;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules> rules;
        
}; // Syslog::Correlator


class Syslog::Correlator::Rules : public Entity
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

        class Rule; //type: Syslog::Correlator::Rules::Rule

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule> > rule;
        
}; // Syslog::Correlator::Rules


class Syslog::Correlator::Rules::Rule : public Entity
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

        YLeaf name; //type: string
        class Definition; //type: Syslog::Correlator::Rules::Rule::Definition
        class NonStateful; //type: Syslog::Correlator::Rules::Rule::NonStateful
        class Stateful; //type: Syslog::Correlator::Rules::Rule::Stateful
        class ApplyTo; //type: Syslog::Correlator::Rules::Rule::ApplyTo
        class AppliedTo; //type: Syslog::Correlator::Rules::Rule::AppliedTo

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo> applied_to;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo> apply_to;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Definition> definition;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful> non_stateful;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful> stateful;
        
}; // Syslog::Correlator::Rules::Rule


class Syslog::Correlator::Rules::Rule::Definition : public Entity
{
    public:
        Definition();
        ~Definition();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32
        YLeaf category_name_entry1; //type: string
        YLeaf group_name_entry1; //type: string
        YLeaf message_code_entry1; //type: string
        YLeaf category_name_entry2; //type: string
        YLeaf group_name_entry2; //type: string
        YLeaf message_code_entry2; //type: string
        YLeaf category_name_entry3; //type: string
        YLeaf group_name_entry3; //type: string
        YLeaf message_code_entry3; //type: string
        YLeaf category_name_entry4; //type: string
        YLeaf group_name_entry4; //type: string
        YLeaf message_code_entry4; //type: string
        YLeaf category_name_entry5; //type: string
        YLeaf group_name_entry5; //type: string
        YLeaf message_code_entry5; //type: string
        YLeaf category_name_entry6; //type: string
        YLeaf group_name_entry6; //type: string
        YLeaf message_code_entry6; //type: string
        YLeaf category_name_entry7; //type: string
        YLeaf group_name_entry7; //type: string
        YLeaf message_code_entry7; //type: string
        YLeaf category_name_entry8; //type: string
        YLeaf group_name_entry8; //type: string
        YLeaf message_code_entry8; //type: string
        YLeaf category_name_entry9; //type: string
        YLeaf group_name_entry9; //type: string
        YLeaf message_code_entry9; //type: string
        YLeaf category_name_entry10; //type: string
        YLeaf group_name_entry10; //type: string
        YLeaf message_code_entry10; //type: string

}; // Syslog::Correlator::Rules::Rule::Definition


class Syslog::Correlator::Rules::Rule::NonStateful : public Entity
{
    public:
        NonStateful();
        ~NonStateful();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_correlation; //type: empty
        YLeaf timeout_root_cause; //type: uint32
        YLeaf timeout; //type: uint32
        class NonRootCauses; //type: Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses
        class RootCause; //type: Syslog::Correlator::Rules::Rule::NonStateful::RootCause

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses> non_root_causes;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::RootCause> root_cause;
        
}; // Syslog::Correlator::Rules::Rule::NonStateful


class Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses : public Entity
{
    public:
        NonRootCauses();
        ~NonRootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonRootCause; //type: Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause> > non_root_cause;
        
}; // Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses


class Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause : public Entity
{
    public:
        NonRootCause();
        ~NonRootCause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause


class Syslog::Correlator::Rules::Rule::NonStateful::RootCause : public Entity
{
    public:
        RootCause();
        ~RootCause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::NonStateful::RootCause


class Syslog::Correlator::Rules::Rule::Stateful : public Entity
{
    public:
        Stateful();
        ~Stateful();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reparent; //type: empty
        YLeaf reissue; //type: empty
        YLeaf context_correlation; //type: empty
        YLeaf timeout_root_cause; //type: uint32
        YLeaf timeout; //type: uint32
        class NonRootCauses; //type: Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses
        class RootCause; //type: Syslog::Correlator::Rules::Rule::Stateful::RootCause

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses> non_root_causes;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::RootCause> root_cause;
        
}; // Syslog::Correlator::Rules::Rule::Stateful


class Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses : public Entity
{
    public:
        NonRootCauses();
        ~NonRootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonRootCause; //type: Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause> > non_root_cause;
        
}; // Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses


class Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause : public Entity
{
    public:
        NonRootCause();
        ~NonRootCause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause


class Syslog::Correlator::Rules::Rule::Stateful::RootCause : public Entity
{
    public:
        RootCause();
        ~RootCause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::Stateful::RootCause


class Syslog::Correlator::Rules::Rule::ApplyTo : public Entity
{
    public:
        ApplyTo();
        ~ApplyTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_of_router; //type: empty
        class Contexts; //type: Syslog::Correlator::Rules::Rule::ApplyTo::Contexts
        class Locations; //type: Syslog::Correlator::Rules::Rule::ApplyTo::Locations

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo::Contexts> contexts;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo::Locations> locations;
        
}; // Syslog::Correlator::Rules::Rule::ApplyTo


class Syslog::Correlator::Rules::Rule::ApplyTo::Contexts : public Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList context; //type: list of  string

}; // Syslog::Correlator::Rules::Rule::ApplyTo::Contexts


class Syslog::Correlator::Rules::Rule::ApplyTo::Locations : public Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList location; //type: list of  string

}; // Syslog::Correlator::Rules::Rule::ApplyTo::Locations


class Syslog::Correlator::Rules::Rule::AppliedTo : public Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Contexts; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Contexts
        class Locations; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Locations

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Contexts> contexts;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Locations> locations;
        
}; // Syslog::Correlator::Rules::Rule::AppliedTo


class Syslog::Correlator::Rules::Rule::AppliedTo::Contexts : public Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context> > context;
        
}; // Syslog::Correlator::Rules::Rule::AppliedTo::Contexts


class Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context; //type: string

}; // Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context


class Syslog::Correlator::Rules::Rule::AppliedTo::Locations : public Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Location; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location> > location;
        
}; // Syslog::Correlator::Rules::Rule::AppliedTo::Locations


class Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string

}; // Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location


class Syslog::Correlator::RuleSets : public Entity
{
    public:
        RuleSets();
        ~RuleSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleSet; //type: Syslog::Correlator::RuleSets::RuleSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet> > rule_set;
        
}; // Syslog::Correlator::RuleSets


class Syslog::Correlator::RuleSets::RuleSet : public Entity
{
    public:
        RuleSet();
        ~RuleSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Rulenames; //type: Syslog::Correlator::RuleSets::RuleSet::Rulenames
        class AppliedTo; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo> applied_to;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::Rulenames> rulenames;
        
}; // Syslog::Correlator::RuleSets::RuleSet


class Syslog::Correlator::RuleSets::RuleSet::Rulenames : public Entity
{
    public:
        Rulenames();
        ~Rulenames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rulename; //type: Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename> > rulename;
        
}; // Syslog::Correlator::RuleSets::RuleSet::Rulenames


class Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename : public Entity
{
    public:
        Rulename();
        ~Rulename();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rulename; //type: string

}; // Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo : public Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Contexts; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts
        class Locations; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts> contexts;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations> locations;
        
}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts : public Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context> > context;
        
}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context; //type: string

}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations : public Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Location; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location> > location;
        
}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string

}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location


class Syslog::Suppression : public Entity
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

        class Rules; //type: Syslog::Suppression::Rules

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules> rules;
        
}; // Syslog::Suppression


class Syslog::Suppression::Rules : public Entity
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

        class Rule; //type: Syslog::Suppression::Rules::Rule

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule> > rule;
        
}; // Syslog::Suppression::Rules


class Syslog::Suppression::Rules::Rule : public Entity
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

        YLeaf name; //type: string
        YLeaf all_alarms; //type: empty
        class AppliedTo; //type: Syslog::Suppression::Rules::Rule::AppliedTo
        class AlarmCauses; //type: Syslog::Suppression::Rules::Rule::AlarmCauses

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AlarmCauses> alarm_causes;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo> applied_to;
        
}; // Syslog::Suppression::Rules::Rule


class Syslog::Suppression::Rules::Rule::AppliedTo : public Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Sources; //type: Syslog::Suppression::Rules::Rule::AppliedTo::Sources

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo::Sources> sources;
        
}; // Syslog::Suppression::Rules::Rule::AppliedTo


class Syslog::Suppression::Rules::Rule::AppliedTo::Sources : public Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source> > source;
        
}; // Syslog::Suppression::Rules::Rule::AppliedTo::Sources


class Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string

}; // Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source


class Syslog::Suppression::Rules::Rule::AlarmCauses : public Entity
{
    public:
        AlarmCauses();
        ~AlarmCauses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmCause; //type: Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause> > alarm_cause;
        
}; // Syslog::Suppression::Rules::Rule::AlarmCauses


class Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause : public Entity
{
    public:
        AlarmCause();
        ~AlarmCause();

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

}; // Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause

class LogSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf debug;

};

class FacilityEnum : public Enum
{
    public:
        static const Enum::YLeaf kern;
        static const Enum::YLeaf user;
        static const Enum::YLeaf mail;
        static const Enum::YLeaf daemon;
        static const Enum::YLeaf auth;
        static const Enum::YLeaf syslog;
        static const Enum::YLeaf lpr;
        static const Enum::YLeaf news;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf cron;
        static const Enum::YLeaf authpriv;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf local0;
        static const Enum::YLeaf local1;
        static const Enum::YLeaf local2;
        static const Enum::YLeaf local3;
        static const Enum::YLeaf local4;
        static const Enum::YLeaf local5;
        static const Enum::YLeaf local6;
        static const Enum::YLeaf local7;
        static const Enum::YLeaf sys9;
        static const Enum::YLeaf sys10;
        static const Enum::YLeaf sys11;
        static const Enum::YLeaf sys12;
        static const Enum::YLeaf sys13;
        static const Enum::YLeaf sys14;

};

class LogCollectFrequencyEnum : public Enum
{
    public:
        static const Enum::YLeaf weekly;
        static const Enum::YLeaf daily;

};

class LoggingPrecedenceValueEnum : public Enum
{
    public:
        static const Enum::YLeaf routine;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;

};

class LoggingTosEnum : public Enum
{
    public:
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf dscp;

};

class LoggingLevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf info;
        static const Enum::YLeaf debug;
        static const Enum::YLeaf disable;

};

class LoggingPrecedenceEnum : public Enum
{
    public:
        static const Enum::YLeaf precedence;

};

class LoggingDscpValueEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf af11;
        static const Enum::YLeaf af12;
        static const Enum::YLeaf af13;
        static const Enum::YLeaf af21;
        static const Enum::YLeaf af22;
        static const Enum::YLeaf af23;
        static const Enum::YLeaf af31;
        static const Enum::YLeaf af32;
        static const Enum::YLeaf af33;
        static const Enum::YLeaf af41;
        static const Enum::YLeaf af42;
        static const Enum::YLeaf af43;
        static const Enum::YLeaf ef;
        static const Enum::YLeaf cs1;
        static const Enum::YLeaf cs2;
        static const Enum::YLeaf cs3;
        static const Enum::YLeaf cs4;
        static const Enum::YLeaf cs5;
        static const Enum::YLeaf cs6;
        static const Enum::YLeaf cs7;

};

class LogMessageSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf debug;

};

class TimeInfoEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class LoggingDscpEnum : public Enum
{
    public:
        static const Enum::YLeaf dscp;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SYSLOG_CFG_ */

