#ifndef _CISCO_IOS_XR_INFRA_SYSLOG_OPER_
#define _CISCO_IOS_XR_INFRA_SYSLOG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_syslog_oper {

class Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class History; //type: Logging::History

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Logging::History> history;


}; // Logging


class Logging::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf properties; //type: string
        YLeaf message; //type: string



}; // Logging::History

class Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class LoggingFiles; //type: Syslog::LoggingFiles
        class AnRemoteServers; //type: Syslog::AnRemoteServers
        class Messages; //type: Syslog::Messages
        class LoggingStatistics; //type: Syslog::LoggingStatistics

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::AnRemoteServers> an_remote_servers;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingFiles> logging_files;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics> logging_statistics;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::Messages> messages;


}; // Syslog


class Syslog::LoggingFiles : public Entity
{
    public:
        LoggingFiles();
        ~LoggingFiles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FileLogDetail; //type: Syslog::LoggingFiles::FileLogDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingFiles::FileLogDetail> > file_log_detail;


}; // Syslog::LoggingFiles


class Syslog::LoggingFiles::FileLogDetail : public Entity
{
    public:
        FileLogDetail();
        ~FileLogDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf file_path; //type: string
        YLeaf file_name; //type: string



}; // Syslog::LoggingFiles::FileLogDetail


class Syslog::AnRemoteServers : public Entity
{
    public:
        AnRemoteServers();
        ~AnRemoteServers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AnRemoteLogServer; //type: Syslog::AnRemoteServers::AnRemoteLogServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::AnRemoteServers::AnRemoteLogServer> > an_remote_log_server;


}; // Syslog::AnRemoteServers


class Syslog::AnRemoteServers::AnRemoteLogServer : public Entity
{
    public:
        AnRemoteLogServer();
        ~AnRemoteLogServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_address; //type: string
        YLeaf vrf_name; //type: string
        YLeaf vrf_severity; //type: string
        YLeaf rh_discriminator; //type: string



}; // Syslog::AnRemoteServers::AnRemoteLogServer


class Syslog::Messages : public Entity
{
    public:
        Messages();
        ~Messages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Message; //type: Syslog::Messages::Message

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::Messages::Message> > message;


}; // Syslog::Messages


class Syslog::Messages::Message : public Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf message_id; //type: int32
        YLeaf card_type; //type: string
        YLeaf node_name; //type: string
        YLeaf time_stamp; //type: uint64
        YLeaf time_of_day; //type: string
        YLeaf time_zone; //type: string
        YLeaf process_name; //type: string
        YLeaf category; //type: string
        YLeaf group; //type: string
        YLeaf message_name; //type: string
        YLeaf severity; //type: SystemMessageSeverityEnum
        YLeaf text; //type: string



}; // Syslog::Messages::Message


class Syslog::LoggingStatistics : public Entity
{
    public:
        LoggingStatistics();
        ~LoggingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LoggingStats; //type: Syslog::LoggingStatistics::LoggingStats
        class ConsoleLoggingStats; //type: Syslog::LoggingStatistics::ConsoleLoggingStats
        class MonitorLoggingStats; //type: Syslog::LoggingStatistics::MonitorLoggingStats
        class TrapLoggingStats; //type: Syslog::LoggingStatistics::TrapLoggingStats
        class BufferLoggingStats; //type: Syslog::LoggingStatistics::BufferLoggingStats
        class RemoteLoggingStat; //type: Syslog::LoggingStatistics::RemoteLoggingStat
        class TlsRemoteLoggingStat; //type: Syslog::LoggingStatistics::TlsRemoteLoggingStat
        class FileLoggingStat; //type: Syslog::LoggingStatistics::FileLoggingStat

        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::BufferLoggingStats> buffer_logging_stats;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::ConsoleLoggingStats> console_logging_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::FileLoggingStat> > file_logging_stat;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::LoggingStats> logging_stats;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::MonitorLoggingStats> monitor_logging_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::RemoteLoggingStat> > remote_logging_stat;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::TlsRemoteLoggingStat> > tls_remote_logging_stat;
        std::shared_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::TrapLoggingStats> trap_logging_stats;


}; // Syslog::LoggingStatistics


class Syslog::LoggingStatistics::LoggingStats : public Entity
{
    public:
        LoggingStats();
        ~LoggingStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_log_enabled; //type: boolean
        YLeaf drop_count; //type: uint32
        YLeaf flush_count; //type: uint32
        YLeaf overrun_count; //type: uint32



}; // Syslog::LoggingStatistics::LoggingStats


class Syslog::LoggingStatistics::ConsoleLoggingStats : public Entity
{
    public:
        ConsoleLoggingStats();
        ~ConsoleLoggingStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_log_enabled; //type: boolean
        YLeaf severity; //type: SystemMessageSeverityEnum
        YLeaf message_count; //type: uint32
        YLeaf buffer_size; //type: uint32



}; // Syslog::LoggingStatistics::ConsoleLoggingStats


class Syslog::LoggingStatistics::MonitorLoggingStats : public Entity
{
    public:
        MonitorLoggingStats();
        ~MonitorLoggingStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_log_enabled; //type: boolean
        YLeaf severity; //type: SystemMessageSeverityEnum
        YLeaf message_count; //type: uint32
        YLeaf buffer_size; //type: uint32



}; // Syslog::LoggingStatistics::MonitorLoggingStats


class Syslog::LoggingStatistics::TrapLoggingStats : public Entity
{
    public:
        TrapLoggingStats();
        ~TrapLoggingStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_log_enabled; //type: boolean
        YLeaf severity; //type: SystemMessageSeverityEnum
        YLeaf message_count; //type: uint32
        YLeaf buffer_size; //type: uint32



}; // Syslog::LoggingStatistics::TrapLoggingStats


class Syslog::LoggingStatistics::BufferLoggingStats : public Entity
{
    public:
        BufferLoggingStats();
        ~BufferLoggingStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_log_enabled; //type: boolean
        YLeaf severity; //type: SystemMessageSeverityEnum
        YLeaf message_count; //type: uint32
        YLeaf buffer_size; //type: uint32



}; // Syslog::LoggingStatistics::BufferLoggingStats


class Syslog::LoggingStatistics::RemoteLoggingStat : public Entity
{
    public:
        RemoteLoggingStat();
        ~RemoteLoggingStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_host_name; //type: string
        YLeaf message_count; //type: uint32



}; // Syslog::LoggingStatistics::RemoteLoggingStat


class Syslog::LoggingStatistics::TlsRemoteLoggingStat : public Entity
{
    public:
        TlsRemoteLoggingStat();
        ~TlsRemoteLoggingStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_host_name; //type: string
        YLeaf message_count; //type: uint32



}; // Syslog::LoggingStatistics::TlsRemoteLoggingStat


class Syslog::LoggingStatistics::FileLoggingStat : public Entity
{
    public:
        FileLoggingStat();
        ~FileLoggingStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf file_name; //type: string
        YLeaf message_count; //type: uint32



}; // Syslog::LoggingStatistics::FileLoggingStat

class SystemMessageSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf message_severity_unknown;
        static const Enum::YLeaf message_severity_emergency;
        static const Enum::YLeaf message_severity_alert;
        static const Enum::YLeaf message_severity_critical;
        static const Enum::YLeaf message_severity_error;
        static const Enum::YLeaf message_severity_warning;
        static const Enum::YLeaf message_severity_notice;
        static const Enum::YLeaf message_severity_informational;
        static const Enum::YLeaf message_severity_debug;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SYSLOG_OPER_ */

