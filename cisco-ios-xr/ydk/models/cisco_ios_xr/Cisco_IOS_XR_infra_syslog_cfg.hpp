#ifndef _CISCO_IOS_XR_INFRA_SYSLOG_CFG_
#define _CISCO_IOS_XR_INFRA_SYSLOG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_syslog_cfg {

class SyslogService : public ydk::Entity
{
    public:
        SyslogService();
        ~SyslogService();

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

        class Timestamps; //type: SyslogService::Timestamps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps> timestamps;
        
}; // SyslogService


class SyslogService::Timestamps : public ydk::Entity
{
    public:
        Timestamps();
        ~Timestamps();

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

        ydk::YLeaf enable; //type: empty
        class Log; //type: SyslogService::Timestamps::Log
        class Debug; //type: SyslogService::Timestamps::Debug

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log> log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug> debug;
        
}; // SyslogService::Timestamps


class SyslogService::Timestamps::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf log_uptime; //type: empty
        ydk::YLeaf log_timestamp_disable; //type: empty
        class LogDatetime; //type: SyslogService::Timestamps::Log::LogDatetime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log::LogDatetime> log_datetime;
        
}; // SyslogService::Timestamps::Log


class SyslogService::Timestamps::Log::LogDatetime : public ydk::Entity
{
    public:
        LogDatetime();
        ~LogDatetime();

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

        class LogDatetimeValue; //type: SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue> log_datetime_value;
        
}; // SyslogService::Timestamps::Log::LogDatetime


class SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue : public ydk::Entity
{
    public:
        LogDatetimeValue();
        ~LogDatetimeValue();

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

        ydk::YLeaf time_stamp_value; //type: TimeInfo
        ydk::YLeaf msec; //type: TimeInfo
        ydk::YLeaf time_zone; //type: TimeInfo
        ydk::YLeaf year; //type: TimeInfo

}; // SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue


class SyslogService::Timestamps::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

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

        ydk::YLeaf debug_timestamp_disable; //type: empty
        ydk::YLeaf debug_uptime; //type: empty
        class DebugDatetime; //type: SyslogService::Timestamps::Debug::DebugDatetime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug::DebugDatetime> debug_datetime;
        
}; // SyslogService::Timestamps::Debug


class SyslogService::Timestamps::Debug::DebugDatetime : public ydk::Entity
{
    public:
        DebugDatetime();
        ~DebugDatetime();

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

        class DatetimeValue; //type: SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue> datetime_value;
        
}; // SyslogService::Timestamps::Debug::DebugDatetime


class SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue : public ydk::Entity
{
    public:
        DatetimeValue();
        ~DatetimeValue();

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

        ydk::YLeaf time_stamp_value; //type: TimeInfo
        ydk::YLeaf msec; //type: TimeInfo
        ydk::YLeaf time_zone; //type: TimeInfo
        ydk::YLeaf year; //type: TimeInfo

}; // SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue

class Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

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

        ydk::YLeaf host_name_prefix; //type: string
        ydk::YLeaf local_log_file_size; //type: uint32
        ydk::YLeaf enable_console_logging; //type: boolean
        ydk::YLeaf suppress_duplicates; //type: empty
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::MonitorLogging> monitor_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HistoryLogging> history_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::LoggingFacilities> logging_facilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::TrapLogging> trap_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::BufferedLogging> buffered_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer> host_server;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::ConsoleLogging> console_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files> files;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Archive> archive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable> source_interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::AlarmLogger> alarm_logger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator> correlator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression> suppression;
        
}; // Syslog


class Syslog::MonitorLogging : public ydk::Entity
{
    public:
        MonitorLogging();
        ~MonitorLogging();

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

        ydk::YLeaf logging_level; //type: LoggingLevels
        class MonitorDiscriminator; //type: Syslog::MonitorLogging::MonitorDiscriminator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::MonitorLogging::MonitorDiscriminator> monitor_discriminator;
        
}; // Syslog::MonitorLogging


class Syslog::MonitorLogging::MonitorDiscriminator : public ydk::Entity
{
    public:
        MonitorDiscriminator();
        ~MonitorDiscriminator();

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

        ydk::YLeaf match2; //type: string
        ydk::YLeaf nomatch1; //type: string
        ydk::YLeaf match1; //type: string
        ydk::YLeaf nomatch3; //type: string
        ydk::YLeaf match3; //type: string
        ydk::YLeaf nomatch2; //type: string

}; // Syslog::MonitorLogging::MonitorDiscriminator


class Syslog::HistoryLogging : public ydk::Entity
{
    public:
        HistoryLogging();
        ~HistoryLogging();

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

        ydk::YLeaf history_size; //type: uint32
        ydk::YLeaf logging_level; //type: LoggingLevels

}; // Syslog::HistoryLogging


class Syslog::LoggingFacilities : public ydk::Entity
{
    public:
        LoggingFacilities();
        ~LoggingFacilities();

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

        ydk::YLeaf facility_level; //type: Facility

}; // Syslog::LoggingFacilities


class Syslog::TrapLogging : public ydk::Entity
{
    public:
        TrapLogging();
        ~TrapLogging();

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

        ydk::YLeaf logging_level; //type: LoggingLevels

}; // Syslog::TrapLogging


class Syslog::BufferedLogging : public ydk::Entity
{
    public:
        BufferedLogging();
        ~BufferedLogging();

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

        ydk::YLeaf logging_level; //type: LoggingLevels
        ydk::YLeaf buffer_size; //type: uint32
        class BufferedDiscriminator; //type: Syslog::BufferedLogging::BufferedDiscriminator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::BufferedLogging::BufferedDiscriminator> buffered_discriminator;
        
}; // Syslog::BufferedLogging


class Syslog::BufferedLogging::BufferedDiscriminator : public ydk::Entity
{
    public:
        BufferedDiscriminator();
        ~BufferedDiscriminator();

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

        ydk::YLeaf match2; //type: string
        ydk::YLeaf nomatch1; //type: string
        ydk::YLeaf match1; //type: string
        ydk::YLeaf nomatch3; //type: string
        ydk::YLeaf match3; //type: string
        ydk::YLeaf nomatch2; //type: string

}; // Syslog::BufferedLogging::BufferedDiscriminator


class Syslog::HostServer : public ydk::Entity
{
    public:
        HostServer();
        ~HostServer();

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

        class Vrfs; //type: Syslog::HostServer::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs> vrfs;
        
}; // Syslog::HostServer


class Syslog::HostServer::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: Syslog::HostServer::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Syslog::HostServer::Vrfs


class Syslog::HostServer::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        class Ipv6s; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6s
        class Hosts; //type: Syslog::HostServer::Vrfs::Vrf::Hosts
        class Ipv4s; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4s

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6s> ipv6s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts> hosts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4s> ipv4s;
        
}; // Syslog::HostServer::Vrfs::Vrf


class Syslog::HostServer::Vrfs::Vrf::Ipv6s : public ydk::Entity
{
    public:
        Ipv6s();
        ~Ipv6s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6

        ydk::YList ipv6;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv6s


class Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class Ipv6SeverityPort; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort
        class Ipv6SeverityLevels; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort> ipv6_severity_port; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels> ipv6_severity_levels;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6


class Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort : public ydk::Entity
{
    public:
        Ipv6SeverityPort();
        ~Ipv6SeverityPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: uint32
        ydk::YLeaf port; //type: uint32

}; // Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort


class Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels : public ydk::Entity
{
    public:
        Ipv6SeverityLevels();
        ~Ipv6SeverityLevels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6SeverityLevel; //type: Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel

        ydk::YList ipv6_severity_level;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels


class Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel : public ydk::Entity
{
    public:
        Ipv6SeverityLevel();
        ~Ipv6SeverityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: LogSeverity

}; // Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel


class Syslog::HostServer::Vrfs::Vrf::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host

        ydk::YList host;
        
}; // Syslog::HostServer::Vrfs::Vrf::Hosts


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_name; //type: string
        class HostNameSeverities; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities
        class HostSeverityPort; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities> host_name_severities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort> host_severity_port; // presence node
        
}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities : public ydk::Entity
{
    public:
        HostNameSeverities();
        ~HostNameSeverities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostNameSeverity; //type: Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity

        ydk::YList host_name_severity;
        
}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity : public ydk::Entity
{
    public:
        HostNameSeverity();
        ~HostNameSeverity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: LogSeverity

}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity


class Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort : public ydk::Entity
{
    public:
        HostSeverityPort();
        ~HostSeverityPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: uint32
        ydk::YLeaf port; //type: uint32

}; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort


class Syslog::HostServer::Vrfs::Vrf::Ipv4s : public ydk::Entity
{
    public:
        Ipv4s();
        ~Ipv4s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4

        ydk::YList ipv4;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv4s


class Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class Ipv4SeverityLevels; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels
        class Ipv4SeverityPort; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels> ipv4_severity_levels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort> ipv4_severity_port; // presence node
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4


class Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels : public ydk::Entity
{
    public:
        Ipv4SeverityLevels();
        ~Ipv4SeverityLevels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4SeverityLevel; //type: Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel

        ydk::YList ipv4_severity_level;
        
}; // Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels


class Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel : public ydk::Entity
{
    public:
        Ipv4SeverityLevel();
        ~Ipv4SeverityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: LogSeverity

}; // Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel


class Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort : public ydk::Entity
{
    public:
        Ipv4SeverityPort();
        ~Ipv4SeverityPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: uint32
        ydk::YLeaf port; //type: uint32

}; // Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort


class Syslog::ConsoleLogging : public ydk::Entity
{
    public:
        ConsoleLogging();
        ~ConsoleLogging();

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

        ydk::YLeaf logging_level; //type: LoggingLevels
        class ConsoleDiscriminator; //type: Syslog::ConsoleLogging::ConsoleDiscriminator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::ConsoleLogging::ConsoleDiscriminator> console_discriminator;
        
}; // Syslog::ConsoleLogging


class Syslog::ConsoleLogging::ConsoleDiscriminator : public ydk::Entity
{
    public:
        ConsoleDiscriminator();
        ~ConsoleDiscriminator();

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

        ydk::YLeaf match2; //type: string
        ydk::YLeaf nomatch1; //type: string
        ydk::YLeaf match1; //type: string
        ydk::YLeaf nomatch3; //type: string
        ydk::YLeaf match3; //type: string
        ydk::YLeaf nomatch2; //type: string

}; // Syslog::ConsoleLogging::ConsoleDiscriminator


class Syslog::Files : public ydk::Entity
{
    public:
        Files();
        ~Files();

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

        class File; //type: Syslog::Files::File

        ydk::YList file;
        
}; // Syslog::Files


class Syslog::Files::File : public ydk::Entity
{
    public:
        File();
        ~File();

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

        ydk::YLeaf file_name; //type: string
        class FileSpecification; //type: Syslog::Files::File::FileSpecification
        class FileLogDiscriminator; //type: Syslog::Files::File::FileLogDiscriminator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileSpecification> file_specification;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileLogDiscriminator> file_log_discriminator;
        
}; // Syslog::Files::File


class Syslog::Files::File::FileSpecification : public ydk::Entity
{
    public:
        FileSpecification();
        ~FileSpecification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string
        ydk::YLeaf max_file_size; //type: uint32
        ydk::YLeaf severity; //type: uint32

}; // Syslog::Files::File::FileSpecification


class Syslog::Files::File::FileLogDiscriminator : public ydk::Entity
{
    public:
        FileLogDiscriminator();
        ~FileLogDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nomatch2; //type: string
        ydk::YLeaf match3; //type: string
        ydk::YLeaf nomatch3; //type: string
        ydk::YLeaf match1; //type: string
        ydk::YLeaf nomatch1; //type: string
        ydk::YLeaf match2; //type: string

}; // Syslog::Files::File::FileLogDiscriminator


class Syslog::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class Dscp; //type: Syslog::Ipv4::Dscp
        class Tos; //type: Syslog::Ipv4::Tos
        class Precedence; //type: Syslog::Ipv4::Precedence

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Dscp> dscp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Tos> tos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Precedence> precedence; // presence node
        
}; // Syslog::Ipv4


class Syslog::Ipv4::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

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

        ydk::YLeaf type; //type: LoggingDscp
        ydk::YLeaf unused; //type: one of uint32, enumeration
        ydk::YLeaf value_; //type: one of uint32, enumeration

}; // Syslog::Ipv4::Dscp


class Syslog::Ipv4::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

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

        ydk::YLeaf type; //type: LoggingTos
        ydk::YLeaf precedence; //type: one of uint32, enumeration
        ydk::YLeaf dscp; //type: one of uint32, enumeration

}; // Syslog::Ipv4::Tos


class Syslog::Ipv4::Precedence : public ydk::Entity
{
    public:
        Precedence();
        ~Precedence();

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

        ydk::YLeaf type; //type: LoggingPrecedence
        ydk::YLeaf value_; //type: one of uint32, enumeration
        ydk::YLeaf unused; //type: one of uint32, enumeration

}; // Syslog::Ipv4::Precedence


class Syslog::Archive : public ydk::Entity
{
    public:
        Archive();
        ~Archive();

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

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf file_size; //type: uint32
        ydk::YLeaf device; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf frequency; //type: LogCollectFrequency
        ydk::YLeaf severity; //type: LogMessageSeverity
        ydk::YLeaf length; //type: uint32

}; // Syslog::Archive


class Syslog::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        class Dscp; //type: Syslog::Ipv6::Dscp
        class TrafficClass; //type: Syslog::Ipv6::TrafficClass
        class Precedence; //type: Syslog::Ipv6::Precedence

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::Dscp> dscp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::TrafficClass> traffic_class;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::Precedence> precedence; // presence node
        
}; // Syslog::Ipv6


class Syslog::Ipv6::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

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

        ydk::YLeaf type; //type: LoggingDscp
        ydk::YLeaf unused; //type: one of uint32, enumeration
        ydk::YLeaf value_; //type: one of uint32, enumeration

}; // Syslog::Ipv6::Dscp


class Syslog::Ipv6::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

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

        ydk::YLeaf type; //type: LoggingTos
        ydk::YLeaf precedence; //type: one of uint32, enumeration
        ydk::YLeaf dscp; //type: one of uint32, enumeration

}; // Syslog::Ipv6::TrafficClass


class Syslog::Ipv6::Precedence : public ydk::Entity
{
    public:
        Precedence();
        ~Precedence();

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

        ydk::YLeaf type; //type: LoggingPrecedence
        ydk::YLeaf value_; //type: one of uint32, enumeration
        ydk::YLeaf unused; //type: one of uint32, enumeration

}; // Syslog::Ipv6::Precedence


class Syslog::SourceInterfaceTable : public ydk::Entity
{
    public:
        SourceInterfaceTable();
        ~SourceInterfaceTable();

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

        class SourceInterfaceValues; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues> source_interface_values;
        
}; // Syslog::SourceInterfaceTable


class Syslog::SourceInterfaceTable::SourceInterfaceValues : public ydk::Entity
{
    public:
        SourceInterfaceValues();
        ~SourceInterfaceValues();

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

        class SourceInterfaceValue; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue

        ydk::YList source_interface_value;
        
}; // Syslog::SourceInterfaceTable::SourceInterfaceValues


class Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue : public ydk::Entity
{
    public:
        SourceInterfaceValue();
        ~SourceInterfaceValue();

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

        ydk::YLeaf src_interface_name_value; //type: string
        class SourceInterfaceVrfs; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs> source_interface_vrfs;
        
}; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue


class Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs : public ydk::Entity
{
    public:
        SourceInterfaceVrfs();
        ~SourceInterfaceVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceInterfaceVrf; //type: Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf

        ydk::YList source_interface_vrf;
        
}; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs


class Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf : public ydk::Entity
{
    public:
        SourceInterfaceVrf();
        ~SourceInterfaceVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string

}; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf


class Syslog::AlarmLogger : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pre_config_suppression; //type: empty
        ydk::YLeaf severity_level; //type: AlarmLoggerSeverityLevel
        ydk::YLeaf pre_config_suppression_timeout; //type: uint32
        ydk::YLeaf buffer_size; //type: uint32
        ydk::YLeaf source_location; //type: empty
        ydk::YLeaf threshold; //type: uint32
        class AlarmFilterStrings; //type: Syslog::AlarmLogger::AlarmFilterStrings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::AlarmLogger::AlarmFilterStrings> alarm_filter_strings;
        
}; // Syslog::AlarmLogger


class Syslog::AlarmLogger::AlarmFilterStrings : public ydk::Entity
{
    public:
        AlarmFilterStrings();
        ~AlarmFilterStrings();

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

        class AlarmFilterString; //type: Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString

        ydk::YList alarm_filter_string;
        
}; // Syslog::AlarmLogger::AlarmFilterStrings


class Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString : public ydk::Entity
{
    public:
        AlarmFilterString();
        ~AlarmFilterString();

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

        ydk::YLeaf filter_string; //type: string

}; // Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString


class Syslog::Correlator : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf buffer_size; //type: uint32
        class Rules; //type: Syslog::Correlator::Rules
        class RuleSets; //type: Syslog::Correlator::RuleSets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules> rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets> rule_sets;
        
}; // Syslog::Correlator


class Syslog::Correlator::Rules : public ydk::Entity
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

        class Rule; //type: Syslog::Correlator::Rules::Rule

        ydk::YList rule;
        
}; // Syslog::Correlator::Rules


class Syslog::Correlator::Rules::Rule : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Definition; //type: Syslog::Correlator::Rules::Rule::Definition
        class NonStateful; //type: Syslog::Correlator::Rules::Rule::NonStateful
        class Stateful; //type: Syslog::Correlator::Rules::Rule::Stateful
        class ApplyTo; //type: Syslog::Correlator::Rules::Rule::ApplyTo
        class AppliedTo; //type: Syslog::Correlator::Rules::Rule::AppliedTo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Definition> definition;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful> non_stateful;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful> stateful;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo> apply_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo> applied_to;
        
}; // Syslog::Correlator::Rules::Rule


class Syslog::Correlator::Rules::Rule::Definition : public ydk::Entity
{
    public:
        Definition();
        ~Definition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf category_name_entry1; //type: string
        ydk::YLeaf group_name_entry1; //type: string
        ydk::YLeaf message_code_entry1; //type: string
        ydk::YLeaf category_name_entry2; //type: string
        ydk::YLeaf group_name_entry2; //type: string
        ydk::YLeaf message_code_entry2; //type: string
        ydk::YLeaf category_name_entry3; //type: string
        ydk::YLeaf group_name_entry3; //type: string
        ydk::YLeaf message_code_entry3; //type: string
        ydk::YLeaf category_name_entry4; //type: string
        ydk::YLeaf group_name_entry4; //type: string
        ydk::YLeaf message_code_entry4; //type: string
        ydk::YLeaf category_name_entry5; //type: string
        ydk::YLeaf group_name_entry5; //type: string
        ydk::YLeaf message_code_entry5; //type: string
        ydk::YLeaf category_name_entry6; //type: string
        ydk::YLeaf group_name_entry6; //type: string
        ydk::YLeaf message_code_entry6; //type: string
        ydk::YLeaf category_name_entry7; //type: string
        ydk::YLeaf group_name_entry7; //type: string
        ydk::YLeaf message_code_entry7; //type: string
        ydk::YLeaf category_name_entry8; //type: string
        ydk::YLeaf group_name_entry8; //type: string
        ydk::YLeaf message_code_entry8; //type: string
        ydk::YLeaf category_name_entry9; //type: string
        ydk::YLeaf group_name_entry9; //type: string
        ydk::YLeaf message_code_entry9; //type: string
        ydk::YLeaf category_name_entry10; //type: string
        ydk::YLeaf group_name_entry10; //type: string
        ydk::YLeaf message_code_entry10; //type: string

}; // Syslog::Correlator::Rules::Rule::Definition


class Syslog::Correlator::Rules::Rule::NonStateful : public ydk::Entity
{
    public:
        NonStateful();
        ~NonStateful();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_correlation; //type: empty
        ydk::YLeaf timeout_root_cause; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        class NonRootCauses; //type: Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses
        class RootCause; //type: Syslog::Correlator::Rules::Rule::NonStateful::RootCause

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses> non_root_causes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::RootCause> root_cause;
        
}; // Syslog::Correlator::Rules::Rule::NonStateful


class Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses : public ydk::Entity
{
    public:
        NonRootCauses();
        ~NonRootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonRootCause; //type: Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause

        ydk::YList non_root_cause;
        
}; // Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses


class Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause : public ydk::Entity
{
    public:
        NonRootCause();
        ~NonRootCause();

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
        ydk::YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause


class Syslog::Correlator::Rules::Rule::NonStateful::RootCause : public ydk::Entity
{
    public:
        RootCause();
        ~RootCause();

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
        ydk::YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::NonStateful::RootCause


class Syslog::Correlator::Rules::Rule::Stateful : public ydk::Entity
{
    public:
        Stateful();
        ~Stateful();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reparent; //type: empty
        ydk::YLeaf reissue; //type: empty
        ydk::YLeaf context_correlation; //type: empty
        ydk::YLeaf timeout_root_cause; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        class NonRootCauses; //type: Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses
        class RootCause; //type: Syslog::Correlator::Rules::Rule::Stateful::RootCause

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses> non_root_causes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::RootCause> root_cause;
        
}; // Syslog::Correlator::Rules::Rule::Stateful


class Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses : public ydk::Entity
{
    public:
        NonRootCauses();
        ~NonRootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonRootCause; //type: Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause

        ydk::YList non_root_cause;
        
}; // Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses


class Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause : public ydk::Entity
{
    public:
        NonRootCause();
        ~NonRootCause();

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
        ydk::YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause


class Syslog::Correlator::Rules::Rule::Stateful::RootCause : public ydk::Entity
{
    public:
        RootCause();
        ~RootCause();

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
        ydk::YLeaf message_code; //type: string

}; // Syslog::Correlator::Rules::Rule::Stateful::RootCause


class Syslog::Correlator::Rules::Rule::ApplyTo : public ydk::Entity
{
    public:
        ApplyTo();
        ~ApplyTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_of_router; //type: empty
        class Contexts; //type: Syslog::Correlator::Rules::Rule::ApplyTo::Contexts
        class Locations; //type: Syslog::Correlator::Rules::Rule::ApplyTo::Locations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo::Contexts> contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo::Locations> locations;
        
}; // Syslog::Correlator::Rules::Rule::ApplyTo


class Syslog::Correlator::Rules::Rule::ApplyTo::Contexts : public ydk::Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList context; //type: list of  string

}; // Syslog::Correlator::Rules::Rule::ApplyTo::Contexts


class Syslog::Correlator::Rules::Rule::ApplyTo::Locations : public ydk::Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList location; //type: list of  string

}; // Syslog::Correlator::Rules::Rule::ApplyTo::Locations


class Syslog::Correlator::Rules::Rule::AppliedTo : public ydk::Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        class Contexts; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Contexts
        class Locations; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Locations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Contexts> contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Locations> locations;
        
}; // Syslog::Correlator::Rules::Rule::AppliedTo


class Syslog::Correlator::Rules::Rule::AppliedTo::Contexts : public ydk::Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Context; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context

        ydk::YList context;
        
}; // Syslog::Correlator::Rules::Rule::AppliedTo::Contexts


class Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context; //type: string

}; // Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context


class Syslog::Correlator::Rules::Rule::AppliedTo::Locations : public ydk::Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location

        ydk::YList location;
        
}; // Syslog::Correlator::Rules::Rule::AppliedTo::Locations


class Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string

}; // Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location


class Syslog::Correlator::RuleSets : public ydk::Entity
{
    public:
        RuleSets();
        ~RuleSets();

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

        class RuleSet; //type: Syslog::Correlator::RuleSets::RuleSet

        ydk::YList rule_set;
        
}; // Syslog::Correlator::RuleSets


class Syslog::Correlator::RuleSets::RuleSet : public ydk::Entity
{
    public:
        RuleSet();
        ~RuleSet();

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

        ydk::YLeaf name; //type: string
        class Rulenames; //type: Syslog::Correlator::RuleSets::RuleSet::Rulenames
        class AppliedTo; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::Rulenames> rulenames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo> applied_to;
        
}; // Syslog::Correlator::RuleSets::RuleSet


class Syslog::Correlator::RuleSets::RuleSet::Rulenames : public ydk::Entity
{
    public:
        Rulenames();
        ~Rulenames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rulename; //type: Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename

        ydk::YList rulename;
        
}; // Syslog::Correlator::RuleSets::RuleSet::Rulenames


class Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename : public ydk::Entity
{
    public:
        Rulename();
        ~Rulename();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rulename; //type: string

}; // Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo : public ydk::Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        class Contexts; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts
        class Locations; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts> contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations> locations;
        
}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts : public ydk::Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Context; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context

        ydk::YList context;
        
}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context; //type: string

}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations : public ydk::Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location

        ydk::YList location;
        
}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations


class Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string

}; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location


class Syslog::Suppression : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Rules; //type: Syslog::Suppression::Rules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules> rules;
        
}; // Syslog::Suppression


class Syslog::Suppression::Rules : public ydk::Entity
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

        class Rule; //type: Syslog::Suppression::Rules::Rule

        ydk::YList rule;
        
}; // Syslog::Suppression::Rules


class Syslog::Suppression::Rules::Rule : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf all_alarms; //type: empty
        class AppliedTo; //type: Syslog::Suppression::Rules::Rule::AppliedTo
        class AlarmCauses; //type: Syslog::Suppression::Rules::Rule::AlarmCauses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo> applied_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AlarmCauses> alarm_causes;
        
}; // Syslog::Suppression::Rules::Rule


class Syslog::Suppression::Rules::Rule::AppliedTo : public ydk::Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        class Sources; //type: Syslog::Suppression::Rules::Rule::AppliedTo::Sources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo::Sources> sources;
        
}; // Syslog::Suppression::Rules::Rule::AppliedTo


class Syslog::Suppression::Rules::Rule::AppliedTo::Sources : public ydk::Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source

        ydk::YList source;
        
}; // Syslog::Suppression::Rules::Rule::AppliedTo::Sources


class Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string

}; // Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source


class Syslog::Suppression::Rules::Rule::AlarmCauses : public ydk::Entity
{
    public:
        AlarmCauses();
        ~AlarmCauses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AlarmCause; //type: Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause

        ydk::YList alarm_cause;
        
}; // Syslog::Suppression::Rules::Rule::AlarmCauses


class Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause : public ydk::Entity
{
    public:
        AlarmCause();
        ~AlarmCause();

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

}; // Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause

class LogSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf debug;

};

class Facility : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf kern;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf mail;
        static const ydk::Enum::YLeaf daemon;
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf lpr;
        static const ydk::Enum::YLeaf news;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf cron;
        static const ydk::Enum::YLeaf authpriv;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf local0;
        static const ydk::Enum::YLeaf local1;
        static const ydk::Enum::YLeaf local2;
        static const ydk::Enum::YLeaf local3;
        static const ydk::Enum::YLeaf local4;
        static const ydk::Enum::YLeaf local5;
        static const ydk::Enum::YLeaf local6;
        static const ydk::Enum::YLeaf local7;
        static const ydk::Enum::YLeaf sys9;
        static const ydk::Enum::YLeaf sys10;
        static const ydk::Enum::YLeaf sys11;
        static const ydk::Enum::YLeaf sys12;
        static const ydk::Enum::YLeaf sys13;
        static const ydk::Enum::YLeaf sys14;

};

class LogCollectFrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf weekly;
        static const ydk::Enum::YLeaf daily;

};

class LoggingPrecedenceValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routine;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;

};

class LoggingTos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf dscp;

};

class LoggingLevels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;
        static const ydk::Enum::YLeaf disable;

};

class LoggingPrecedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf precedence;

};

class LoggingDscpValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf ef;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;

};

class LogMessageSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf debug;

};

class TimeInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class LoggingDscp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dscp;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SYSLOG_CFG_ */

