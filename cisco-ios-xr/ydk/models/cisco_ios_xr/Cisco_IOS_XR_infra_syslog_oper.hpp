#ifndef _CISCO_IOS_XR_INFRA_SYSLOG_OPER_
#define _CISCO_IOS_XR_INFRA_SYSLOG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_syslog_oper {

class Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        class History; //type: Logging::History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Logging::History> history;
        
}; // Logging


class Logging::History : public ydk::Entity
{
    public:
        History();
        ~History();

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

        ydk::YLeaf properties; //type: string
        ydk::YLeaf message; //type: string

}; // Logging::History

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

        class LoggingFiles; //type: Syslog::LoggingFiles
        class AnRemoteServers; //type: Syslog::AnRemoteServers
        class Messages; //type: Syslog::Messages
        class LoggingStatistics; //type: Syslog::LoggingStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingFiles> logging_files;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::AnRemoteServers> an_remote_servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::Messages> messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics> logging_statistics;
        
}; // Syslog


class Syslog::LoggingFiles : public ydk::Entity
{
    public:
        LoggingFiles();
        ~LoggingFiles();

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

        class FileLogDetail; //type: Syslog::LoggingFiles::FileLogDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingFiles::FileLogDetail> > file_log_detail;
        
}; // Syslog::LoggingFiles


class Syslog::LoggingFiles::FileLogDetail : public ydk::Entity
{
    public:
        FileLogDetail();
        ~FileLogDetail();

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

        ydk::YLeaf file_path; //type: string
        ydk::YLeaf file_name; //type: string

}; // Syslog::LoggingFiles::FileLogDetail


class Syslog::AnRemoteServers : public ydk::Entity
{
    public:
        AnRemoteServers();
        ~AnRemoteServers();

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

        class AnRemoteLogServer; //type: Syslog::AnRemoteServers::AnRemoteLogServer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::AnRemoteServers::AnRemoteLogServer> > an_remote_log_server;
        
}; // Syslog::AnRemoteServers


class Syslog::AnRemoteServers::AnRemoteLogServer : public ydk::Entity
{
    public:
        AnRemoteLogServer();
        ~AnRemoteLogServer();

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

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_severity; //type: string
        ydk::YLeaf rh_discriminator; //type: string

}; // Syslog::AnRemoteServers::AnRemoteLogServer


class Syslog::Messages : public ydk::Entity
{
    public:
        Messages();
        ~Messages();

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

        class Message; //type: Syslog::Messages::Message

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::Messages::Message> > message;
        
}; // Syslog::Messages


class Syslog::Messages::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

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

        ydk::YLeaf message_id; //type: int32
        ydk::YLeaf card_type; //type: string
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf time_stamp; //type: uint64
        ydk::YLeaf time_of_day; //type: string
        ydk::YLeaf time_zone; //type: string
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf category; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf message_name; //type: string
        ydk::YLeaf severity; //type: SystemMessageSeverity
        ydk::YLeaf text; //type: string

}; // Syslog::Messages::Message


class Syslog::LoggingStatistics : public ydk::Entity
{
    public:
        LoggingStatistics();
        ~LoggingStatistics();

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

        class LoggingStats; //type: Syslog::LoggingStatistics::LoggingStats
        class ConsoleLoggingStats; //type: Syslog::LoggingStatistics::ConsoleLoggingStats
        class MonitorLoggingStats; //type: Syslog::LoggingStatistics::MonitorLoggingStats
        class TrapLoggingStats; //type: Syslog::LoggingStatistics::TrapLoggingStats
        class BufferLoggingStats; //type: Syslog::LoggingStatistics::BufferLoggingStats
        class RemoteLoggingStat; //type: Syslog::LoggingStatistics::RemoteLoggingStat
        class TlsRemoteLoggingStat; //type: Syslog::LoggingStatistics::TlsRemoteLoggingStat
        class FileLoggingStat; //type: Syslog::LoggingStatistics::FileLoggingStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::LoggingStats> logging_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::ConsoleLoggingStats> console_logging_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::MonitorLoggingStats> monitor_logging_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::TrapLoggingStats> trap_logging_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::BufferLoggingStats> buffer_logging_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::RemoteLoggingStat> > remote_logging_stat;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::TlsRemoteLoggingStat> > tls_remote_logging_stat;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::FileLoggingStat> > file_logging_stat;
        
}; // Syslog::LoggingStatistics


class Syslog::LoggingStatistics::LoggingStats : public ydk::Entity
{
    public:
        LoggingStats();
        ~LoggingStats();

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

        ydk::YLeaf is_log_enabled; //type: boolean
        ydk::YLeaf drop_count; //type: uint32
        ydk::YLeaf flush_count; //type: uint32
        ydk::YLeaf overrun_count; //type: uint32

}; // Syslog::LoggingStatistics::LoggingStats


class Syslog::LoggingStatistics::ConsoleLoggingStats : public ydk::Entity
{
    public:
        ConsoleLoggingStats();
        ~ConsoleLoggingStats();

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

        ydk::YLeaf is_log_enabled; //type: boolean
        ydk::YLeaf severity; //type: SystemMessageSeverity
        ydk::YLeaf message_count; //type: uint32
        ydk::YLeaf buffer_size; //type: uint32

}; // Syslog::LoggingStatistics::ConsoleLoggingStats


class Syslog::LoggingStatistics::MonitorLoggingStats : public ydk::Entity
{
    public:
        MonitorLoggingStats();
        ~MonitorLoggingStats();

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

        ydk::YLeaf is_log_enabled; //type: boolean
        ydk::YLeaf severity; //type: SystemMessageSeverity
        ydk::YLeaf message_count; //type: uint32
        ydk::YLeaf buffer_size; //type: uint32

}; // Syslog::LoggingStatistics::MonitorLoggingStats


class Syslog::LoggingStatistics::TrapLoggingStats : public ydk::Entity
{
    public:
        TrapLoggingStats();
        ~TrapLoggingStats();

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

        ydk::YLeaf is_log_enabled; //type: boolean
        ydk::YLeaf severity; //type: SystemMessageSeverity
        ydk::YLeaf message_count; //type: uint32
        ydk::YLeaf buffer_size; //type: uint32

}; // Syslog::LoggingStatistics::TrapLoggingStats


class Syslog::LoggingStatistics::BufferLoggingStats : public ydk::Entity
{
    public:
        BufferLoggingStats();
        ~BufferLoggingStats();

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

        ydk::YLeaf is_log_enabled; //type: boolean
        ydk::YLeaf severity; //type: SystemMessageSeverity
        ydk::YLeaf message_count; //type: uint32
        ydk::YLeaf buffer_size; //type: uint32

}; // Syslog::LoggingStatistics::BufferLoggingStats


class Syslog::LoggingStatistics::RemoteLoggingStat : public ydk::Entity
{
    public:
        RemoteLoggingStat();
        ~RemoteLoggingStat();

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

        ydk::YLeaf remote_host_name; //type: string
        ydk::YLeaf message_count; //type: uint32

}; // Syslog::LoggingStatistics::RemoteLoggingStat


class Syslog::LoggingStatistics::TlsRemoteLoggingStat : public ydk::Entity
{
    public:
        TlsRemoteLoggingStat();
        ~TlsRemoteLoggingStat();

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

        ydk::YLeaf remote_host_name; //type: string
        ydk::YLeaf message_count; //type: uint32

}; // Syslog::LoggingStatistics::TlsRemoteLoggingStat


class Syslog::LoggingStatistics::FileLoggingStat : public ydk::Entity
{
    public:
        FileLoggingStat();
        ~FileLoggingStat();

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
        ydk::YLeaf message_count; //type: uint32

}; // Syslog::LoggingStatistics::FileLoggingStat

class SystemMessageSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf message_severity_unknown;
        static const ydk::Enum::YLeaf message_severity_emergency;
        static const ydk::Enum::YLeaf message_severity_alert;
        static const ydk::Enum::YLeaf message_severity_critical;
        static const ydk::Enum::YLeaf message_severity_error;
        static const ydk::Enum::YLeaf message_severity_warning;
        static const ydk::Enum::YLeaf message_severity_notice;
        static const ydk::Enum::YLeaf message_severity_informational;
        static const ydk::Enum::YLeaf message_severity_debug;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SYSLOG_OPER_ */

