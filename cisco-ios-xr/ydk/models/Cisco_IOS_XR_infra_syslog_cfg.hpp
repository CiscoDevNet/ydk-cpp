#ifndef _CISCO_IOS_XR_INFRA_SYSLOG_CFG_
#define _CISCO_IOS_XR_INFRA_SYSLOG_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_infra_alarm_logger_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_syslog_cfg {

class SyslogService : public Entity
{
    public:
        SyslogService();
        ~SyslogService();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Timestamps : public Entity
    {
        public:
            Timestamps();
            ~Timestamps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value enable; //type: empty


        class Log : public Entity
        {
            public:
                Log();
                ~Log();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value log_uptime; //type: empty
                Value log_timestamp_disable; //type: empty


            class LogDatetime : public Entity
            {
                public:
                    LogDatetime();
                    ~LogDatetime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LogDatetimeValue : public Entity
                {
                    public:
                        LogDatetimeValue();
                        ~LogDatetimeValue();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value time_stamp_value; //type: TimeInfoEnum
                        Value msec; //type: TimeInfoEnum
                        Value time_zone; //type: TimeInfoEnum
                        Value year; //type: TimeInfoEnum


                        class TimeInfoEnum;
                        class TimeInfoEnum;
                        class TimeInfoEnum;
                        class TimeInfoEnum;


                }; // SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue


                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue> log_datetime_value;


            }; // SyslogService::Timestamps::Log::LogDatetime


                std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log::LogDatetime> log_datetime;


        }; // SyslogService::Timestamps::Log


        class Debug : public Entity
        {
            public:
                Debug();
                ~Debug();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value debug_timestamp_disable; //type: empty
                Value debug_uptime; //type: empty


            class DebugDatetime : public Entity
            {
                public:
                    DebugDatetime();
                    ~DebugDatetime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DatetimeValue : public Entity
                {
                    public:
                        DatetimeValue();
                        ~DatetimeValue();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value time_stamp_value; //type: TimeInfoEnum
                        Value msec; //type: TimeInfoEnum
                        Value time_zone; //type: TimeInfoEnum
                        Value year; //type: TimeInfoEnum


                        class TimeInfoEnum;
                        class TimeInfoEnum;
                        class TimeInfoEnum;
                        class TimeInfoEnum;


                }; // SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue


                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue> datetime_value;


            }; // SyslogService::Timestamps::Debug::DebugDatetime


                std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug::DebugDatetime> debug_datetime;


        }; // SyslogService::Timestamps::Debug


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Debug> debug;
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps::Log> log;


    }; // SyslogService::Timestamps


        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::SyslogService::Timestamps> timestamps;


}; // SyslogService

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
        Value host_name_prefix; //type: string
        Value local_log_file_size; //type: uint32
        Value enable_console_logging; //type: boolean
        Value suppress_duplicates; //type: empty


    class MonitorLogging : public Entity
    {
        public:
            MonitorLogging();
            ~MonitorLogging();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value logging_level; //type: LoggingLevelsEnum


        class MonitorDiscriminator : public Entity
        {
            public:
                MonitorDiscriminator();
                ~MonitorDiscriminator();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value match2; //type: string
                Value nomatch1; //type: string
                Value match1; //type: string
                Value nomatch3; //type: string
                Value match3; //type: string
                Value nomatch2; //type: string




        }; // Syslog::MonitorLogging::MonitorDiscriminator


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::MonitorLogging::MonitorDiscriminator> monitor_discriminator;
            class LoggingLevelsEnum;


    }; // Syslog::MonitorLogging


    class HistoryLogging : public Entity
    {
        public:
            HistoryLogging();
            ~HistoryLogging();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value history_size; //type: uint32
            Value logging_level; //type: LoggingLevelsEnum


            class LoggingLevelsEnum;


    }; // Syslog::HistoryLogging


    class LoggingFacilities : public Entity
    {
        public:
            LoggingFacilities();
            ~LoggingFacilities();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value facility_level; //type: FacilityEnum


            class FacilityEnum;


    }; // Syslog::LoggingFacilities


    class TrapLogging : public Entity
    {
        public:
            TrapLogging();
            ~TrapLogging();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value logging_level; //type: LoggingLevelsEnum


            class LoggingLevelsEnum;


    }; // Syslog::TrapLogging


    class BufferedLogging : public Entity
    {
        public:
            BufferedLogging();
            ~BufferedLogging();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value logging_level; //type: LoggingLevelsEnum
            Value buffer_size; //type: uint32


        class BufferedDiscriminator : public Entity
        {
            public:
                BufferedDiscriminator();
                ~BufferedDiscriminator();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value match2; //type: string
                Value nomatch1; //type: string
                Value match1; //type: string
                Value nomatch3; //type: string
                Value match3; //type: string
                Value nomatch2; //type: string




        }; // Syslog::BufferedLogging::BufferedDiscriminator


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::BufferedLogging::BufferedDiscriminator> buffered_discriminator;
            class LoggingLevelsEnum;


    }; // Syslog::BufferedLogging


    class HostServer : public Entity
    {
        public:
            HostServer();
            ~HostServer();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrfs : public Entity
        {
            public:
                Vrfs();
                ~Vrfs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Vrf : public Entity
            {
                public:
                    Vrf();
                    ~Vrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value vrf_name; //type: string


                class Ipv6S : public Entity
                {
                    public:
                        Ipv6S();
                        ~Ipv6S();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Ipv6 : public Entity
                    {
                        public:
                            Ipv6();
                            ~Ipv6();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string


                        class Ipv6SeverityPort : public Entity
                        {
                            public:
                                Ipv6SeverityPort();
                                ~Ipv6SeverityPort();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value severity; //type: int32
                                Value port; //type: int32




                        }; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort


                        class Ipv6Discriminator : public Entity
                        {
                            public:
                                Ipv6Discriminator();
                                ~Ipv6Discriminator();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value nomatch2; //type: string
                                Value match3; //type: string
                                Value nomatch3; //type: string
                                Value match1; //type: string
                                Value nomatch1; //type: string
                                Value match2; //type: string




                        }; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator


                        class Ipv6SeverityLevels : public Entity
                        {
                            public:
                                Ipv6SeverityLevels();
                                ~Ipv6SeverityLevels();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Ipv6SeverityLevel : public Entity
                            {
                                public:
                                    Ipv6SeverityLevel();
                                    ~Ipv6SeverityLevel();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value severity; //type: LogSeverityEnum


                                    class LogSeverityEnum;


                            }; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel> > ipv6_severity_level;


                        }; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels


                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6Discriminator> ipv6_discriminator;
                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityLevels> ipv6_severity_levels;
                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6::Ipv6SeverityPort> ipv6_severity_port;


                    }; // Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S::Ipv6> > ipv6;


                }; // Syslog::HostServer::Vrfs::Vrf::Ipv6S


                class Hosts : public Entity
                {
                    public:
                        Hosts();
                        ~Hosts();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Host : public Entity
                    {
                        public:
                            Host();
                            ~Host();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value host_name; //type: string


                        class HostNameSeverities : public Entity
                        {
                            public:
                                HostNameSeverities();
                                ~HostNameSeverities();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class HostNameSeverity : public Entity
                            {
                                public:
                                    HostNameSeverity();
                                    ~HostNameSeverity();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value severity; //type: LogSeverityEnum


                                    class LogSeverityEnum;


                            }; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity> > host_name_severity;


                        }; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities


                        class HostNameDiscriminator : public Entity
                        {
                            public:
                                HostNameDiscriminator();
                                ~HostNameDiscriminator();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value nomatch2; //type: string
                                Value match3; //type: string
                                Value nomatch3; //type: string
                                Value match1; //type: string
                                Value nomatch1; //type: string
                                Value match2; //type: string




                        }; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator


                        class HostSeverityPort : public Entity
                        {
                            public:
                                HostSeverityPort();
                                ~HostSeverityPort();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value severity; //type: int32
                                Value port; //type: int32




                        }; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort


                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameDiscriminator> host_name_discriminator;
                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities> host_name_severities;
                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort> host_severity_port;


                    }; // Syslog::HostServer::Vrfs::Vrf::Hosts::Host


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts::Host> > host;


                }; // Syslog::HostServer::Vrfs::Vrf::Hosts


                class Ipv4S : public Entity
                {
                    public:
                        Ipv4S();
                        ~Ipv4S();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Ipv4 : public Entity
                    {
                        public:
                            Ipv4();
                            ~Ipv4();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string


                        class Ipv4SeverityLevels : public Entity
                        {
                            public:
                                Ipv4SeverityLevels();
                                ~Ipv4SeverityLevels();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Ipv4SeverityLevel : public Entity
                            {
                                public:
                                    Ipv4SeverityLevel();
                                    ~Ipv4SeverityLevel();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value severity; //type: LogSeverityEnum


                                    class LogSeverityEnum;


                            }; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel> > ipv4_severity_level;


                        }; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels


                        class Ipv4SeverityPort : public Entity
                        {
                            public:
                                Ipv4SeverityPort();
                                ~Ipv4SeverityPort();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value severity; //type: int32
                                Value port; //type: int32




                        }; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort


                        class Ipv4Discriminator : public Entity
                        {
                            public:
                                Ipv4Discriminator();
                                ~Ipv4Discriminator();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value nomatch2; //type: string
                                Value match3; //type: string
                                Value nomatch3; //type: string
                                Value match1; //type: string
                                Value nomatch1; //type: string
                                Value match2; //type: string




                        }; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator


                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4Discriminator> ipv4_discriminator;
                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityLevels> ipv4_severity_levels;
                            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4::Ipv4SeverityPort> ipv4_severity_port;


                    }; // Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S::Ipv4> > ipv4;


                }; // Syslog::HostServer::Vrfs::Vrf::Ipv4S


                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Hosts> hosts;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv4S> ipv4s;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf::Ipv6S> ipv6s;


            }; // Syslog::HostServer::Vrfs::Vrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs::Vrf> > vrf;


        }; // Syslog::HostServer::Vrfs


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer::Vrfs> vrfs;


    }; // Syslog::HostServer


    class ConsoleLogging : public Entity
    {
        public:
            ConsoleLogging();
            ~ConsoleLogging();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value logging_level; //type: LoggingLevelsEnum


        class ConsoleDiscriminator : public Entity
        {
            public:
                ConsoleDiscriminator();
                ~ConsoleDiscriminator();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value match2; //type: string
                Value nomatch1; //type: string
                Value match1; //type: string
                Value nomatch3; //type: string
                Value match3; //type: string
                Value nomatch2; //type: string




        }; // Syslog::ConsoleLogging::ConsoleDiscriminator


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::ConsoleLogging::ConsoleDiscriminator> console_discriminator;
            class LoggingLevelsEnum;


    }; // Syslog::ConsoleLogging


    class Files : public Entity
    {
        public:
            Files();
            ~Files();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class File : public Entity
        {
            public:
                File();
                ~File();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value file_name; //type: string


            class FileSpecification : public Entity
            {
                public:
                    FileSpecification();
                    ~FileSpecification();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: string
                    Value max_file_size; //type: int32
                    Value severity; //type: int32




            }; // Syslog::Files::File::FileSpecification


            class FileLogAttributes : public Entity
            {
                public:
                    FileLogAttributes();
                    ~FileLogAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value max_file_size; //type: int32
                    Value severity; //type: int32




            }; // Syslog::Files::File::FileLogAttributes


            class FileLogDiscriminator : public Entity
            {
                public:
                    FileLogDiscriminator();
                    ~FileLogDiscriminator();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value nomatch2; //type: string
                    Value match3; //type: string
                    Value nomatch3; //type: string
                    Value match1; //type: string
                    Value nomatch1; //type: string
                    Value match2; //type: string




            }; // Syslog::Files::File::FileLogDiscriminator


                std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileLogAttributes> file_log_attributes;
                std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileLogDiscriminator> file_log_discriminator;
                std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File::FileSpecification> file_specification;


        }; // Syslog::Files::File


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files::File> > file;


    }; // Syslog::Files


    class Ipv4 : public Entity
    {
        public:
            Ipv4();
            ~Ipv4();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Dscp : public Entity
        {
            public:
                Dscp();
                ~Dscp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: LoggingDscpEnum
                Value unused; //type: one of uint32, enumeration
                Value value_; //type: one of uint32, enumeration


                class LoggingDscpEnum;
                class LoggingPrecedenceValueEnum;
                class LoggingDscpValueEnum;


        }; // Syslog::Ipv4::Dscp


        class Tos : public Entity
        {
            public:
                Tos();
                ~Tos();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: LoggingTosEnum
                Value precedence; //type: one of uint32, enumeration
                Value dscp; //type: one of uint32, enumeration


                class LoggingDscpValueEnum;
                class LoggingPrecedenceValueEnum;
                class LoggingTosEnum;


        }; // Syslog::Ipv4::Tos


        class Precedence : public Entity
        {
            public:
                Precedence();
                ~Precedence();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: LoggingPrecedenceEnum
                Value value_; //type: one of uint32, enumeration
                Value unused; //type: one of uint32, enumeration


                class LoggingPrecedenceEnum;
                class LoggingDscpValueEnum;
                class LoggingPrecedenceValueEnum;


        }; // Syslog::Ipv4::Precedence


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Dscp> dscp; // presence node
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Precedence> precedence; // presence node
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4::Tos> tos;


    }; // Syslog::Ipv4


    class Archive : public Entity
    {
        public:
            Archive();
            ~Archive();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value size; //type: uint32
            Value file_size; //type: uint32
            Value device; //type: string
            Value threshold; //type: uint32
            Value frequency; //type: LogCollectFrequencyEnum
            Value severity; //type: LogMessageSeverityEnum
            Value length; //type: uint32


            class LogCollectFrequencyEnum;
            class LogMessageSeverityEnum;


    }; // Syslog::Archive


    class Ipv6 : public Entity
    {
        public:
            Ipv6();
            ~Ipv6();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Dscp : public Entity
        {
            public:
                Dscp();
                ~Dscp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: LoggingDscpEnum
                Value unused; //type: one of uint32, enumeration
                Value value_; //type: one of uint32, enumeration


                class LoggingDscpEnum;
                class LoggingPrecedenceValueEnum;
                class LoggingDscpValueEnum;


        }; // Syslog::Ipv6::Dscp


        class TrafficClass : public Entity
        {
            public:
                TrafficClass();
                ~TrafficClass();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: LoggingTosEnum
                Value precedence; //type: one of uint32, enumeration
                Value dscp; //type: one of uint32, enumeration


                class LoggingDscpValueEnum;
                class LoggingPrecedenceValueEnum;
                class LoggingTosEnum;


        }; // Syslog::Ipv6::TrafficClass


        class Precedence : public Entity
        {
            public:
                Precedence();
                ~Precedence();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: LoggingPrecedenceEnum
                Value value_; //type: one of uint32, enumeration
                Value unused; //type: one of uint32, enumeration


                class LoggingPrecedenceEnum;
                class LoggingDscpValueEnum;
                class LoggingPrecedenceValueEnum;


        }; // Syslog::Ipv6::Precedence


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::Dscp> dscp; // presence node
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::Precedence> precedence; // presence node
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6::TrafficClass> traffic_class;


    }; // Syslog::Ipv6


    class SourceInterfaceTable : public Entity
    {
        public:
            SourceInterfaceTable();
            ~SourceInterfaceTable();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SourceInterfaceValues : public Entity
        {
            public:
                SourceInterfaceValues();
                ~SourceInterfaceValues();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class SourceInterfaceValue : public Entity
            {
                public:
                    SourceInterfaceValue();
                    ~SourceInterfaceValue();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value src_interface_name_value; //type: string


                class SourceInterfaceVrfs : public Entity
                {
                    public:
                        SourceInterfaceVrfs();
                        ~SourceInterfaceVrfs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SourceInterfaceVrf : public Entity
                    {
                        public:
                            SourceInterfaceVrf();
                            ~SourceInterfaceVrf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value vrf_name; //type: string




                    }; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf> > source_interface_vrf;


                }; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs


                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs> source_interface_vrfs;


            }; // Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue> > source_interface_value;


        }; // Syslog::SourceInterfaceTable::SourceInterfaceValues


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable::SourceInterfaceValues> source_interface_values;


    }; // Syslog::SourceInterfaceTable


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
            Value severity_level; //type: AlarmLoggerSeverityLevelEnum
            Value buffer_size; //type: uint32
            Value source_location; //type: empty
            Value threshold; //type: uint32


            class AlarmLoggerSeverityLevelEnum;


    }; // Syslog::AlarmLogger


    class Correlator : public Entity
    {
        public:
            Correlator();
            ~Correlator();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value buffer_size; //type: uint32


        class Rules : public Entity
        {
            public:
                Rules();
                ~Rules();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Rule : public Entity
            {
                public:
                    Rule();
                    ~Rule();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class Definition : public Entity
                {
                    public:
                        Definition();
                        ~Definition();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value timeout; //type: uint32
                        Value category_name_entry1; //type: string
                        Value group_name_entry1; //type: string
                        Value message_code_entry1; //type: string
                        Value category_name_entry2; //type: string
                        Value group_name_entry2; //type: string
                        Value message_code_entry2; //type: string
                        Value category_name_entry3; //type: string
                        Value group_name_entry3; //type: string
                        Value message_code_entry3; //type: string
                        Value category_name_entry4; //type: string
                        Value group_name_entry4; //type: string
                        Value message_code_entry4; //type: string
                        Value category_name_entry5; //type: string
                        Value group_name_entry5; //type: string
                        Value message_code_entry5; //type: string
                        Value category_name_entry6; //type: string
                        Value group_name_entry6; //type: string
                        Value message_code_entry6; //type: string
                        Value category_name_entry7; //type: string
                        Value group_name_entry7; //type: string
                        Value message_code_entry7; //type: string
                        Value category_name_entry8; //type: string
                        Value group_name_entry8; //type: string
                        Value message_code_entry8; //type: string
                        Value category_name_entry9; //type: string
                        Value group_name_entry9; //type: string
                        Value message_code_entry9; //type: string
                        Value category_name_entry10; //type: string
                        Value group_name_entry10; //type: string
                        Value message_code_entry10; //type: string




                }; // Syslog::Correlator::Rules::Rule::Definition


                class NonStateful : public Entity
                {
                    public:
                        NonStateful();
                        ~NonStateful();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value context_correlation; //type: empty
                        Value timeout_root_cause; //type: uint32
                        Value timeout; //type: uint32


                    class NonRootCauses : public Entity
                    {
                        public:
                            NonRootCauses();
                            ~NonRootCauses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NonRootCause : public Entity
                        {
                            public:
                                NonRootCause();
                                ~NonRootCause();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value category; //type: string
                                Value group; //type: string
                                Value message_code; //type: string




                        }; // Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause> > non_root_cause;


                    }; // Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses


                    class RootCause : public Entity
                    {
                        public:
                            RootCause();
                            ~RootCause();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value category; //type: string
                            Value group; //type: string
                            Value message_code; //type: string




                    }; // Syslog::Correlator::Rules::Rule::NonStateful::RootCause


                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses> non_root_causes;
                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful::RootCause> root_cause;


                }; // Syslog::Correlator::Rules::Rule::NonStateful


                class Stateful : public Entity
                {
                    public:
                        Stateful();
                        ~Stateful();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value reparent; //type: empty
                        Value reissue; //type: empty
                        Value context_correlation; //type: empty
                        Value timeout_root_cause; //type: uint32
                        Value timeout; //type: uint32


                    class NonRootCauses : public Entity
                    {
                        public:
                            NonRootCauses();
                            ~NonRootCauses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NonRootCause : public Entity
                        {
                            public:
                                NonRootCause();
                                ~NonRootCause();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value category; //type: string
                                Value group; //type: string
                                Value message_code; //type: string




                        }; // Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause> > non_root_cause;


                    }; // Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses


                    class RootCause : public Entity
                    {
                        public:
                            RootCause();
                            ~RootCause();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value category; //type: string
                            Value group; //type: string
                            Value message_code; //type: string




                    }; // Syslog::Correlator::Rules::Rule::Stateful::RootCause


                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses> non_root_causes;
                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful::RootCause> root_cause;


                }; // Syslog::Correlator::Rules::Rule::Stateful


                class ApplyTo : public Entity
                {
                    public:
                        ApplyTo();
                        ~ApplyTo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value all_of_router; //type: empty


                    class Contexts : public Entity
                    {
                        public:
                            Contexts();
                            ~Contexts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList context; //type: list of  string




                    }; // Syslog::Correlator::Rules::Rule::ApplyTo::Contexts


                    class Locations : public Entity
                    {
                        public:
                            Locations();
                            ~Locations();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList location; //type: list of  string




                    }; // Syslog::Correlator::Rules::Rule::ApplyTo::Locations


                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo::Contexts> contexts;
                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo::Locations> locations;


                }; // Syslog::Correlator::Rules::Rule::ApplyTo


                class AppliedTo : public Entity
                {
                    public:
                        AppliedTo();
                        ~AppliedTo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value all; //type: empty


                    class Contexts : public Entity
                    {
                        public:
                            Contexts();
                            ~Contexts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Context : public Entity
                        {
                            public:
                                Context();
                                ~Context();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value context; //type: string




                        }; // Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context> > context;


                    }; // Syslog::Correlator::Rules::Rule::AppliedTo::Contexts


                    class Locations : public Entity
                    {
                        public:
                            Locations();
                            ~Locations();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Location : public Entity
                        {
                            public:
                                Location();
                                ~Location();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value location; //type: string




                        }; // Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location> > location;


                    }; // Syslog::Correlator::Rules::Rule::AppliedTo::Locations


                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Contexts> contexts;
                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo::Locations> locations;


                }; // Syslog::Correlator::Rules::Rule::AppliedTo


                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::AppliedTo> applied_to;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::ApplyTo> apply_to;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Definition> definition;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::NonStateful> non_stateful;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule::Stateful> stateful;


            }; // Syslog::Correlator::Rules::Rule


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules::Rule> > rule;


        }; // Syslog::Correlator::Rules


        class RuleSets : public Entity
        {
            public:
                RuleSets();
                ~RuleSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RuleSet : public Entity
            {
                public:
                    RuleSet();
                    ~RuleSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class Rulenames : public Entity
                {
                    public:
                        Rulenames();
                        ~Rulenames();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rulename : public Entity
                    {
                        public:
                            Rulename();
                            ~Rulename();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rulename; //type: string




                    }; // Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename> > rulename;


                }; // Syslog::Correlator::RuleSets::RuleSet::Rulenames


                class AppliedTo : public Entity
                {
                    public:
                        AppliedTo();
                        ~AppliedTo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value all; //type: empty


                    class Contexts : public Entity
                    {
                        public:
                            Contexts();
                            ~Contexts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Context : public Entity
                        {
                            public:
                                Context();
                                ~Context();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value context; //type: string




                        }; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context> > context;


                    }; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts


                    class Locations : public Entity
                    {
                        public:
                            Locations();
                            ~Locations();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Location : public Entity
                        {
                            public:
                                Location();
                                ~Location();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value location; //type: string




                        }; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location> > location;


                    }; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations


                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts> contexts;
                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations> locations;


                }; // Syslog::Correlator::RuleSets::RuleSet::AppliedTo


                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::AppliedTo> applied_to;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet::Rulenames> rulenames;


            }; // Syslog::Correlator::RuleSets::RuleSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets::RuleSet> > rule_set;


        }; // Syslog::Correlator::RuleSets


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::RuleSets> rule_sets;
            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator::Rules> rules;


    }; // Syslog::Correlator


    class Suppression : public Entity
    {
        public:
            Suppression();
            ~Suppression();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Rules : public Entity
        {
            public:
                Rules();
                ~Rules();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Rule : public Entity
            {
                public:
                    Rule();
                    ~Rule();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string
                    Value all_alarms; //type: empty


                class AppliedTo : public Entity
                {
                    public:
                        AppliedTo();
                        ~AppliedTo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value all; //type: empty


                    class Sources : public Entity
                    {
                        public:
                            Sources();
                            ~Sources();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Source : public Entity
                        {
                            public:
                                Source();
                                ~Source();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value source; //type: string




                        }; // Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source> > source;


                    }; // Syslog::Suppression::Rules::Rule::AppliedTo::Sources


                        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo::Sources> sources;


                }; // Syslog::Suppression::Rules::Rule::AppliedTo


                class AlarmCauses : public Entity
                {
                    public:
                        AlarmCauses();
                        ~AlarmCauses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class AlarmCause : public Entity
                    {
                        public:
                            AlarmCause();
                            ~AlarmCause();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value category; //type: string
                            Value group; //type: string
                            Value code; //type: string




                    }; // Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause> > alarm_cause;


                }; // Syslog::Suppression::Rules::Rule::AlarmCauses


                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AlarmCauses> alarm_causes;
                    std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule::AppliedTo> applied_to;


            }; // Syslog::Suppression::Rules::Rule


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules::Rule> > rule;


        }; // Syslog::Suppression::Rules


            std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression::Rules> rules;


    }; // Syslog::Suppression


        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::AlarmLogger> alarm_logger;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Archive> archive;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::BufferedLogging> buffered_logging;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::ConsoleLogging> console_logging;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Correlator> correlator;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Files> files;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HistoryLogging> history_logging;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::HostServer> host_server;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv4> ipv4;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Ipv6> ipv6;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::LoggingFacilities> logging_facilities;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::MonitorLogging> monitor_logging;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::SourceInterfaceTable> source_interface_table;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::Suppression> suppression;
        std::unique_ptr<Cisco_IOS_XR_infra_syslog_cfg::Syslog::TrapLogging> trap_logging;


}; // Syslog


class LogSeverityEnum : public Enum
{
    public:
        static const Enum::Value emergency;
        static const Enum::Value alert;
        static const Enum::Value critical;
        static const Enum::Value error;
        static const Enum::Value warning;
        static const Enum::Value notice;
        static const Enum::Value informational;
        static const Enum::Value debug;

};

class FacilityEnum : public Enum
{
    public:
        static const Enum::Value kern;
        static const Enum::Value user;
        static const Enum::Value mail;
        static const Enum::Value daemon;
        static const Enum::Value auth;
        static const Enum::Value syslog;
        static const Enum::Value lpr;
        static const Enum::Value news;
        static const Enum::Value uucp;
        static const Enum::Value cron;
        static const Enum::Value authpriv;
        static const Enum::Value ftp;
        static const Enum::Value local0;
        static const Enum::Value local1;
        static const Enum::Value local2;
        static const Enum::Value local3;
        static const Enum::Value local4;
        static const Enum::Value local5;
        static const Enum::Value local6;
        static const Enum::Value local7;
        static const Enum::Value sys9;
        static const Enum::Value sys10;
        static const Enum::Value sys11;
        static const Enum::Value sys12;
        static const Enum::Value sys13;
        static const Enum::Value sys14;

};

class LogCollectFrequencyEnum : public Enum
{
    public:
        static const Enum::Value weekly;
        static const Enum::Value daily;

};

class LoggingPrecedenceValueEnum : public Enum
{
    public:
        static const Enum::Value routine;
        static const Enum::Value priority;
        static const Enum::Value immediate;
        static const Enum::Value flash;
        static const Enum::Value flash_override;
        static const Enum::Value critical;
        static const Enum::Value internet;
        static const Enum::Value network;

};

class LoggingTosEnum : public Enum
{
    public:
        static const Enum::Value precedence;
        static const Enum::Value dscp;

};

class LoggingLevelsEnum : public Enum
{
    public:
        static const Enum::Value emergency;
        static const Enum::Value alert;
        static const Enum::Value critical;
        static const Enum::Value error;
        static const Enum::Value warning;
        static const Enum::Value notice;
        static const Enum::Value info;
        static const Enum::Value debug;
        static const Enum::Value disable;

};

class LoggingPrecedenceEnum : public Enum
{
    public:
        static const Enum::Value precedence;

};

class LoggingDscpValueEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value af11;
        static const Enum::Value af12;
        static const Enum::Value af13;
        static const Enum::Value af21;
        static const Enum::Value af22;
        static const Enum::Value af23;
        static const Enum::Value af31;
        static const Enum::Value af32;
        static const Enum::Value af33;
        static const Enum::Value af41;
        static const Enum::Value af42;
        static const Enum::Value af43;
        static const Enum::Value ef;
        static const Enum::Value cs1;
        static const Enum::Value cs2;
        static const Enum::Value cs3;
        static const Enum::Value cs4;
        static const Enum::Value cs5;
        static const Enum::Value cs6;
        static const Enum::Value cs7;

};

class LogMessageSeverityEnum : public Enum
{
    public:
        static const Enum::Value emergency;
        static const Enum::Value alert;
        static const Enum::Value critical;
        static const Enum::Value error;
        static const Enum::Value warning;
        static const Enum::Value notice;
        static const Enum::Value informational;
        static const Enum::Value debug;

};

class TimeInfoEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value enable;

};

class LoggingDscpEnum : public Enum
{
    public:
        static const Enum::Value dscp;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SYSLOG_CFG_ */

