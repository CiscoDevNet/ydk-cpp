#ifndef _CISCO_IOS_XR_INFRA_SYSLOG_OPER_
#define _CISCO_IOS_XR_INFRA_SYSLOG_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class History : public Entity
    {
        public:
            History();
            ~History();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf properties; //type: string
            YLeaf message; //type: string



    }; // Logging::History


        std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Logging::History> history;


}; // Logging

class Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class LoggingFiles : public Entity
    {
        public:
            LoggingFiles();
            ~LoggingFiles();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class FileLogDetail : public Entity
        {
            public:
                FileLogDetail();
                ~FileLogDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf file_path; //type: string
                YLeaf file_name; //type: string



        }; // Syslog::LoggingFiles::FileLogDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingFiles::FileLogDetail> > file_log_detail;


    }; // Syslog::LoggingFiles


    class AnRemoteServers : public Entity
    {
        public:
            AnRemoteServers();
            ~AnRemoteServers();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class AnRemoteLogServer : public Entity
        {
            public:
                AnRemoteLogServer();
                ~AnRemoteLogServer();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf ip_address; //type: string
                YLeaf vrf_name; //type: string
                YLeaf vrf_severity; //type: string
                YLeaf rh_discriminator; //type: string



        }; // Syslog::AnRemoteServers::AnRemoteLogServer


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::AnRemoteServers::AnRemoteLogServer> > an_remote_log_server;


    }; // Syslog::AnRemoteServers


    class Messages : public Entity
    {
        public:
            Messages();
            ~Messages();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Message : public Entity
        {
            public:
                Message();
                ~Message();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


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


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::Messages::Message> > message;


    }; // Syslog::Messages


    class LoggingStatistics : public Entity
    {
        public:
            LoggingStatistics();
            ~LoggingStatistics();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class LoggingStats : public Entity
        {
            public:
                LoggingStats();
                ~LoggingStats();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf is_log_enabled; //type: boolean
                YLeaf drop_count; //type: uint32
                YLeaf flush_count; //type: uint32
                YLeaf overrun_count; //type: uint32



        }; // Syslog::LoggingStatistics::LoggingStats


        class ConsoleLoggingStats : public Entity
        {
            public:
                ConsoleLoggingStats();
                ~ConsoleLoggingStats();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf is_log_enabled; //type: boolean
                YLeaf severity; //type: SystemMessageSeverityEnum
                YLeaf message_count; //type: uint32
                YLeaf buffer_size; //type: uint32



        }; // Syslog::LoggingStatistics::ConsoleLoggingStats


        class MonitorLoggingStats : public Entity
        {
            public:
                MonitorLoggingStats();
                ~MonitorLoggingStats();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf is_log_enabled; //type: boolean
                YLeaf severity; //type: SystemMessageSeverityEnum
                YLeaf message_count; //type: uint32
                YLeaf buffer_size; //type: uint32



        }; // Syslog::LoggingStatistics::MonitorLoggingStats


        class TrapLoggingStats : public Entity
        {
            public:
                TrapLoggingStats();
                ~TrapLoggingStats();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf is_log_enabled; //type: boolean
                YLeaf severity; //type: SystemMessageSeverityEnum
                YLeaf message_count; //type: uint32
                YLeaf buffer_size; //type: uint32



        }; // Syslog::LoggingStatistics::TrapLoggingStats


        class BufferLoggingStats : public Entity
        {
            public:
                BufferLoggingStats();
                ~BufferLoggingStats();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf is_log_enabled; //type: boolean
                YLeaf severity; //type: SystemMessageSeverityEnum
                YLeaf message_count; //type: uint32
                YLeaf buffer_size; //type: uint32



        }; // Syslog::LoggingStatistics::BufferLoggingStats


        class RemoteLoggingStat : public Entity
        {
            public:
                RemoteLoggingStat();
                ~RemoteLoggingStat();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf remote_host_name; //type: string
                YLeaf message_count; //type: uint32



        }; // Syslog::LoggingStatistics::RemoteLoggingStat


        class FileLoggingStat : public Entity
        {
            public:
                FileLoggingStat();
                ~FileLoggingStat();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf file_name; //type: string
                YLeaf message_count; //type: uint32



        }; // Syslog::LoggingStatistics::FileLoggingStat


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::BufferLoggingStats> buffer_logging_stats;
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::ConsoleLoggingStats> console_logging_stats;
            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::FileLoggingStat> > file_logging_stat;
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::LoggingStats> logging_stats;
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::MonitorLoggingStats> monitor_logging_stats;
            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::RemoteLoggingStat> > remote_logging_stat;
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics::TrapLoggingStats> trap_logging_stats;


    }; // Syslog::LoggingStatistics


        std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::AnRemoteServers> an_remote_servers;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingFiles> logging_files;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::LoggingStatistics> logging_statistics;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_oper::Syslog::Messages> messages;


}; // Syslog


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

