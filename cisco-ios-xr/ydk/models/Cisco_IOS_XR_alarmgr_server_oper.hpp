#ifndef _CISCO_IOS_XR_ALARMGR_SERVER_OPER_
#define _CISCO_IOS_XR_ALARMGR_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_alarmgr_server_oper {

class Alarms : public Entity
{
    public:
        Alarms();
        ~Alarms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Detail : public Entity
    {
        public:
            Detail();
            ~Detail();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class DetailSystem : public Entity
        {
            public:
                DetailSystem();
                ~DetailSystem();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AlarmInfo : public Entity
                {
                    public:
                        AlarmInfo();
                        ~AlarmInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value description; //type: string
                        Value location; //type: string
                        Value aid; //type: string
                        Value tag; //type: string
                        Value module; //type: string
                        Value eid; //type: string
                        Value reporting_agent_id; //type: uint32
                        Value pending_sync; //type: boolean
                        Value severity; //type: AlarmSeverityEnum
                        Value status; //type: AlarmStatusEnum
                        Value group; //type: AlarmGroupsEnum
                        Value set_time; //type: string
                        Value set_timestamp; //type: uint64
                        Value clear_time; //type: string
                        Value clear_timestamp; //type: uint64
                        Value service_affecting; //type: AlarmServiceAffectingEnum
                        Value type; //type: AlarmEventEnum
                        Value interface; //type: string
                        Value alarm_name; //type: string


                    class Otn : public Entity
                    {
                        public:
                            Otn();
                            ~Otn();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value direction; //type: AlarmDirectionEnum
                            Value notification_source; //type: AlarmNotificationSrcEnum


                            class AlarmDirectionEnum;
                            class AlarmNotificationSrcEnum;


                    }; // Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn


                    class Tca : public Entity
                    {
                        public:
                            Tca();
                            ~Tca();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value threshold_value; //type: string
                            Value current_value; //type: string
                            Value bucket_type; //type: TimingBucketEnum


                            class TimingBucketEnum;


                    }; // Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca


                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn> otn;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca> tca;
                        class AlarmGroupsEnum;
                        class AlarmServiceAffectingEnum;
                        class AlarmSeverityEnum;
                        class AlarmStatusEnum;
                        class AlarmEventEnum;


                }; // Alarms::Detail::DetailSystem::Active::AlarmInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo> > alarm_info;


            }; // Alarms::Detail::DetailSystem::Active


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


                class AlarmInfo : public Entity
                {
                    public:
                        AlarmInfo();
                        ~AlarmInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value description; //type: string
                        Value location; //type: string
                        Value aid; //type: string
                        Value tag; //type: string
                        Value module; //type: string
                        Value eid; //type: string
                        Value reporting_agent_id; //type: uint32
                        Value pending_sync; //type: boolean
                        Value severity; //type: AlarmSeverityEnum
                        Value status; //type: AlarmStatusEnum
                        Value group; //type: AlarmGroupsEnum
                        Value set_time; //type: string
                        Value set_timestamp; //type: uint64
                        Value clear_time; //type: string
                        Value clear_timestamp; //type: uint64
                        Value service_affecting; //type: AlarmServiceAffectingEnum
                        Value type; //type: AlarmEventEnum
                        Value interface; //type: string
                        Value alarm_name; //type: string


                    class Otn : public Entity
                    {
                        public:
                            Otn();
                            ~Otn();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value direction; //type: AlarmDirectionEnum
                            Value notification_source; //type: AlarmNotificationSrcEnum


                            class AlarmDirectionEnum;
                            class AlarmNotificationSrcEnum;


                    }; // Alarms::Detail::DetailSystem::History::AlarmInfo::Otn


                    class Tca : public Entity
                    {
                        public:
                            Tca();
                            ~Tca();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value threshold_value; //type: string
                            Value current_value; //type: string
                            Value bucket_type; //type: TimingBucketEnum


                            class TimingBucketEnum;


                    }; // Alarms::Detail::DetailSystem::History::AlarmInfo::Tca


                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo::Otn> otn;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo::Tca> tca;
                        class AlarmGroupsEnum;
                        class AlarmServiceAffectingEnum;
                        class AlarmSeverityEnum;
                        class AlarmStatusEnum;
                        class AlarmEventEnum;


                }; // Alarms::Detail::DetailSystem::History::AlarmInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo> > alarm_info;


            }; // Alarms::Detail::DetailSystem::History


            class Suppressed : public Entity
            {
                public:
                    Suppressed();
                    ~Suppressed();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SuppressedInfo : public Entity
                {
                    public:
                        SuppressedInfo();
                        ~SuppressedInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value description; //type: string
                        Value location; //type: string
                        Value aid; //type: string
                        Value tag; //type: string
                        Value module; //type: string
                        Value eid; //type: string
                        Value reporting_agent_id; //type: uint32
                        Value pending_sync; //type: boolean
                        Value severity; //type: AlarmSeverityEnum
                        Value status; //type: AlarmStatusEnum
                        Value group; //type: AlarmGroupsEnum
                        Value set_time; //type: string
                        Value set_timestamp; //type: uint64
                        Value suppressed_time; //type: string
                        Value suppressed_timestamp; //type: uint64
                        Value service_affecting; //type: AlarmServiceAffectingEnum
                        Value interface; //type: string
                        Value alarm_name; //type: string


                    class Otn : public Entity
                    {
                        public:
                            Otn();
                            ~Otn();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value direction; //type: AlarmDirectionEnum
                            Value notification_source; //type: AlarmNotificationSrcEnum


                            class AlarmDirectionEnum;
                            class AlarmNotificationSrcEnum;


                    }; // Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn


                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn> otn;
                        class AlarmGroupsEnum;
                        class AlarmServiceAffectingEnum;
                        class AlarmSeverityEnum;
                        class AlarmStatusEnum;


                }; // Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo> > suppressed_info;


            }; // Alarms::Detail::DetailSystem::Suppressed


            class Stats : public Entity
            {
                public:
                    Stats();
                    ~Stats();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reported; //type: uint64
                    Value dropped; //type: uint64
                    Value active; //type: uint64
                    Value history; //type: uint64
                    Value suppressed; //type: uint64
                    Value sysadmin_active; //type: uint64
                    Value sysadmin_history; //type: uint64
                    Value sysadmin_suppressed; //type: uint64
                    Value dropped_invalid_aid; //type: uint32
                    Value dropped_insuff_mem; //type: uint32
                    Value dropped_db_error; //type: uint32
                    Value dropped_clear_without_set; //type: uint32
                    Value dropped_duplicate; //type: uint32
                    Value cache_hit; //type: uint32
                    Value cache_miss; //type: uint32




            }; // Alarms::Detail::DetailSystem::Stats


            class Clients : public Entity
            {
                public:
                    Clients();
                    ~Clients();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ClientInfo : public Entity
                {
                    public:
                        ClientInfo();
                        ~ClientInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value id; //type: uint32
                        Value location; //type: string
                        Value handle; //type: string
                        Value state; //type: AlarmClientStateEnum
                        Value type; //type: AlarmClientEnum
                        Value filter_disp; //type: boolean
                        Value subscriber_id; //type: uint32
                        Value filter_severity; //type: AlarmSeverityEnum
                        Value filter_state; //type: AlarmStatusEnum
                        Value filter_group; //type: AlarmGroupsEnum
                        Value connect_count; //type: uint32
                        Value connect_timestamp; //type: string
                        Value get_count; //type: uint32
                        Value subscribe_count; //type: uint32
                        Value report_count; //type: uint32


                        class AlarmGroupsEnum;
                        class AlarmSeverityEnum;
                        class AlarmStatusEnum;
                        class AlarmClientStateEnum;
                        class AlarmClientEnum;


                }; // Alarms::Detail::DetailSystem::Clients::ClientInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Clients::ClientInfo> > client_info;


            }; // Alarms::Detail::DetailSystem::Clients


                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active> active;
                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Clients> clients;
                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History> history;
                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Stats> stats;
                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed> suppressed;


        }; // Alarms::Detail::DetailSystem


        class DetailCard : public Entity
        {
            public:
                DetailCard();
                ~DetailCard();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class DetailLocations : public Entity
            {
                public:
                    DetailLocations();
                    ~DetailLocations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DetailLocation : public Entity
                {
                    public:
                        DetailLocation();
                        ~DetailLocation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value node_id; //type: string


                    class Active : public Entity
                    {
                        public:
                            Active();
                            ~Active();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class AlarmInfo : public Entity
                        {
                            public:
                                AlarmInfo();
                                ~AlarmInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value description; //type: string
                                Value location; //type: string
                                Value aid; //type: string
                                Value tag; //type: string
                                Value module; //type: string
                                Value eid; //type: string
                                Value reporting_agent_id; //type: uint32
                                Value pending_sync; //type: boolean
                                Value severity; //type: AlarmSeverityEnum
                                Value status; //type: AlarmStatusEnum
                                Value group; //type: AlarmGroupsEnum
                                Value set_time; //type: string
                                Value set_timestamp; //type: uint64
                                Value clear_time; //type: string
                                Value clear_timestamp; //type: uint64
                                Value service_affecting; //type: AlarmServiceAffectingEnum
                                Value type; //type: AlarmEventEnum
                                Value interface; //type: string
                                Value alarm_name; //type: string


                            class Otn : public Entity
                            {
                                public:
                                    Otn();
                                    ~Otn();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value direction; //type: AlarmDirectionEnum
                                    Value notification_source; //type: AlarmNotificationSrcEnum


                                    class AlarmDirectionEnum;
                                    class AlarmNotificationSrcEnum;


                            }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn


                            class Tca : public Entity
                            {
                                public:
                                    Tca();
                                    ~Tca();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value threshold_value; //type: string
                                    Value current_value; //type: string
                                    Value bucket_type; //type: TimingBucketEnum


                                    class TimingBucketEnum;


                            }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca


                                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn> otn;
                                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca> tca;
                                class AlarmGroupsEnum;
                                class AlarmServiceAffectingEnum;
                                class AlarmSeverityEnum;
                                class AlarmStatusEnum;
                                class AlarmEventEnum;


                        }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo> > alarm_info;


                    }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active


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


                        class AlarmInfo : public Entity
                        {
                            public:
                                AlarmInfo();
                                ~AlarmInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value description; //type: string
                                Value location; //type: string
                                Value aid; //type: string
                                Value tag; //type: string
                                Value module; //type: string
                                Value eid; //type: string
                                Value reporting_agent_id; //type: uint32
                                Value pending_sync; //type: boolean
                                Value severity; //type: AlarmSeverityEnum
                                Value status; //type: AlarmStatusEnum
                                Value group; //type: AlarmGroupsEnum
                                Value set_time; //type: string
                                Value set_timestamp; //type: uint64
                                Value clear_time; //type: string
                                Value clear_timestamp; //type: uint64
                                Value service_affecting; //type: AlarmServiceAffectingEnum
                                Value type; //type: AlarmEventEnum
                                Value interface; //type: string
                                Value alarm_name; //type: string


                            class Otn : public Entity
                            {
                                public:
                                    Otn();
                                    ~Otn();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value direction; //type: AlarmDirectionEnum
                                    Value notification_source; //type: AlarmNotificationSrcEnum


                                    class AlarmDirectionEnum;
                                    class AlarmNotificationSrcEnum;


                            }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn


                            class Tca : public Entity
                            {
                                public:
                                    Tca();
                                    ~Tca();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value threshold_value; //type: string
                                    Value current_value; //type: string
                                    Value bucket_type; //type: TimingBucketEnum


                                    class TimingBucketEnum;


                            }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca


                                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn> otn;
                                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca> tca;
                                class AlarmGroupsEnum;
                                class AlarmServiceAffectingEnum;
                                class AlarmSeverityEnum;
                                class AlarmStatusEnum;
                                class AlarmEventEnum;


                        }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo> > alarm_info;


                    }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History


                    class Suppressed : public Entity
                    {
                        public:
                            Suppressed();
                            ~Suppressed();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class SuppressedInfo : public Entity
                        {
                            public:
                                SuppressedInfo();
                                ~SuppressedInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value description; //type: string
                                Value location; //type: string
                                Value aid; //type: string
                                Value tag; //type: string
                                Value module; //type: string
                                Value eid; //type: string
                                Value reporting_agent_id; //type: uint32
                                Value pending_sync; //type: boolean
                                Value severity; //type: AlarmSeverityEnum
                                Value status; //type: AlarmStatusEnum
                                Value group; //type: AlarmGroupsEnum
                                Value set_time; //type: string
                                Value set_timestamp; //type: uint64
                                Value suppressed_time; //type: string
                                Value suppressed_timestamp; //type: uint64
                                Value service_affecting; //type: AlarmServiceAffectingEnum
                                Value interface; //type: string
                                Value alarm_name; //type: string


                            class Otn : public Entity
                            {
                                public:
                                    Otn();
                                    ~Otn();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value direction; //type: AlarmDirectionEnum
                                    Value notification_source; //type: AlarmNotificationSrcEnum


                                    class AlarmDirectionEnum;
                                    class AlarmNotificationSrcEnum;


                            }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn


                                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn> otn;
                                class AlarmGroupsEnum;
                                class AlarmServiceAffectingEnum;
                                class AlarmSeverityEnum;
                                class AlarmStatusEnum;


                        }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo> > suppressed_info;


                    }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed


                    class Stats : public Entity
                    {
                        public:
                            Stats();
                            ~Stats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reported; //type: uint64
                            Value dropped; //type: uint64
                            Value active; //type: uint64
                            Value history; //type: uint64
                            Value suppressed; //type: uint64
                            Value sysadmin_active; //type: uint64
                            Value sysadmin_history; //type: uint64
                            Value sysadmin_suppressed; //type: uint64
                            Value dropped_invalid_aid; //type: uint32
                            Value dropped_insuff_mem; //type: uint32
                            Value dropped_db_error; //type: uint32
                            Value dropped_clear_without_set; //type: uint32
                            Value dropped_duplicate; //type: uint32
                            Value cache_hit; //type: uint32
                            Value cache_miss; //type: uint32




                    }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats


                    class Clients : public Entity
                    {
                        public:
                            Clients();
                            ~Clients();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class ClientInfo : public Entity
                        {
                            public:
                                ClientInfo();
                                ~ClientInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value name; //type: string
                                Value id; //type: uint32
                                Value location; //type: string
                                Value handle; //type: string
                                Value state; //type: AlarmClientStateEnum
                                Value type; //type: AlarmClientEnum
                                Value filter_disp; //type: boolean
                                Value subscriber_id; //type: uint32
                                Value filter_severity; //type: AlarmSeverityEnum
                                Value filter_state; //type: AlarmStatusEnum
                                Value filter_group; //type: AlarmGroupsEnum
                                Value connect_count; //type: uint32
                                Value connect_timestamp; //type: string
                                Value get_count; //type: uint32
                                Value subscribe_count; //type: uint32
                                Value report_count; //type: uint32


                                class AlarmGroupsEnum;
                                class AlarmSeverityEnum;
                                class AlarmStatusEnum;
                                class AlarmClientStateEnum;
                                class AlarmClientEnum;


                        }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo> > client_info;


                    }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients


                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active> active;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients> clients;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History> history;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats> stats;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed> suppressed;


                }; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation> > detail_location;


            }; // Alarms::Detail::DetailCard::DetailLocations


                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations> detail_locations;


        }; // Alarms::Detail::DetailCard


            std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard> detail_card;
            std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem> detail_system;


    }; // Alarms::Detail


    class Brief : public Entity
    {
        public:
            Brief();
            ~Brief();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class BriefCard : public Entity
        {
            public:
                BriefCard();
                ~BriefCard();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BriefLocations : public Entity
            {
                public:
                    BriefLocations();
                    ~BriefLocations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BriefLocation : public Entity
                {
                    public:
                        BriefLocation();
                        ~BriefLocation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value node_id; //type: string


                    class Active : public Entity
                    {
                        public:
                            Active();
                            ~Active();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class AlarmInfo : public Entity
                        {
                            public:
                                AlarmInfo();
                                ~AlarmInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value location; //type: string
                                Value severity; //type: AlarmSeverityEnum
                                Value group; //type: AlarmGroupsEnum
                                Value set_time; //type: string
                                Value set_timestamp; //type: uint64
                                Value clear_time; //type: string
                                Value clear_timestamp; //type: uint64
                                Value description; //type: string


                                class AlarmGroupsEnum;
                                class AlarmSeverityEnum;


                        }; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo> > alarm_info;


                    }; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active


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


                        class AlarmInfo : public Entity
                        {
                            public:
                                AlarmInfo();
                                ~AlarmInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value location; //type: string
                                Value severity; //type: AlarmSeverityEnum
                                Value group; //type: AlarmGroupsEnum
                                Value set_time; //type: string
                                Value set_timestamp; //type: uint64
                                Value clear_time; //type: string
                                Value clear_timestamp; //type: uint64
                                Value description; //type: string


                                class AlarmGroupsEnum;
                                class AlarmSeverityEnum;


                        }; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo> > alarm_info;


                    }; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History


                    class Suppressed : public Entity
                    {
                        public:
                            Suppressed();
                            ~Suppressed();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class SuppressedInfo : public Entity
                        {
                            public:
                                SuppressedInfo();
                                ~SuppressedInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value location; //type: string
                                Value severity; //type: AlarmSeverityEnum
                                Value group; //type: AlarmGroupsEnum
                                Value set_time; //type: string
                                Value set_timestamp; //type: uint64
                                Value suppressed_time; //type: string
                                Value suppressed_timestamp; //type: uint64
                                Value description; //type: string


                                class AlarmGroupsEnum;
                                class AlarmSeverityEnum;


                        }; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo> > suppressed_info;


                    }; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed


                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active> active;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History> history;
                        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed> suppressed;


                }; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation> > brief_location;


            }; // Alarms::Brief::BriefCard::BriefLocations


                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations> brief_locations;


        }; // Alarms::Brief::BriefCard


        class BriefSystem : public Entity
        {
            public:
                BriefSystem();
                ~BriefSystem();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AlarmInfo : public Entity
                {
                    public:
                        AlarmInfo();
                        ~AlarmInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value location; //type: string
                        Value severity; //type: AlarmSeverityEnum
                        Value group; //type: AlarmGroupsEnum
                        Value set_time; //type: string
                        Value set_timestamp; //type: uint64
                        Value clear_time; //type: string
                        Value clear_timestamp; //type: uint64
                        Value description; //type: string


                        class AlarmGroupsEnum;
                        class AlarmSeverityEnum;


                }; // Alarms::Brief::BriefSystem::Active::AlarmInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Active::AlarmInfo> > alarm_info;


            }; // Alarms::Brief::BriefSystem::Active


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


                class AlarmInfo : public Entity
                {
                    public:
                        AlarmInfo();
                        ~AlarmInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value location; //type: string
                        Value severity; //type: AlarmSeverityEnum
                        Value group; //type: AlarmGroupsEnum
                        Value set_time; //type: string
                        Value set_timestamp; //type: uint64
                        Value clear_time; //type: string
                        Value clear_timestamp; //type: uint64
                        Value description; //type: string


                        class AlarmGroupsEnum;
                        class AlarmSeverityEnum;


                }; // Alarms::Brief::BriefSystem::History::AlarmInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::History::AlarmInfo> > alarm_info;


            }; // Alarms::Brief::BriefSystem::History


            class Suppressed : public Entity
            {
                public:
                    Suppressed();
                    ~Suppressed();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SuppressedInfo : public Entity
                {
                    public:
                        SuppressedInfo();
                        ~SuppressedInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value location; //type: string
                        Value severity; //type: AlarmSeverityEnum
                        Value group; //type: AlarmGroupsEnum
                        Value set_time; //type: string
                        Value set_timestamp; //type: uint64
                        Value suppressed_time; //type: string
                        Value suppressed_timestamp; //type: uint64
                        Value description; //type: string


                        class AlarmGroupsEnum;
                        class AlarmSeverityEnum;


                }; // Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo> > suppressed_info;


            }; // Alarms::Brief::BriefSystem::Suppressed


                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Active> active;
                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::History> history;
                std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Suppressed> suppressed;


        }; // Alarms::Brief::BriefSystem


            std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard> brief_card;
            std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem> brief_system;


    }; // Alarms::Brief


        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief> brief;
        std::unique_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail> detail;


}; // Alarms


class TimingBucketEnum : public Enum
{
    public:
        static const Enum::Value not_specified;
        static const Enum::Value fifteen_min;
        static const Enum::Value one_day;

};

class AlarmSeverityEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value not_reported;
        static const Enum::Value not_alarmed;
        static const Enum::Value minor;
        static const Enum::Value major;
        static const Enum::Value critical;
        static const Enum::Value severity_last;

};

class AlarmDirectionEnum : public Enum
{
    public:
        static const Enum::Value not_specified;
        static const Enum::Value send;
        static const Enum::Value receive;
        static const Enum::Value send_receive;

};

class AlarmStatusEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value set;
        static const Enum::Value clear;
        static const Enum::Value suppress;
        static const Enum::Value last;

};

class AlarmServiceAffectingEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value not_service_affecting;
        static const Enum::Value service_affecting;

};

class AlarmNotificationSrcEnum : public Enum
{
    public:
        static const Enum::Value not_specified;
        static const Enum::Value near_end;
        static const Enum::Value far_end;

};

class AlarmEventEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value notification;
        static const Enum::Value last;

};

class AlarmClientEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value producer;
        static const Enum::Value consumer;
        static const Enum::Value subscriber;
        static const Enum::Value client_last;

};

class AlarmClientStateEnum : public Enum
{
    public:
        static const Enum::Value start;
        static const Enum::Value init;
        static const Enum::Value connecting;
        static const Enum::Value connected;
        static const Enum::Value registered;
        static const Enum::Value disconnected;
        static const Enum::Value ready;

};

class AlarmGroupsEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value environ;
        static const Enum::Value ethernet;
        static const Enum::Value fabric;
        static const Enum::Value power;
        static const Enum::Value software;
        static const Enum::Value slice;
        static const Enum::Value cpu;
        static const Enum::Value controller;
        static const Enum::Value sonet;
        static const Enum::Value otn;
        static const Enum::Value sdh_controller;
        static const Enum::Value asic;
        static const Enum::Value fpd_infra;
        static const Enum::Value shelf;
        static const Enum::Value mpa;
        static const Enum::Value ots;
        static const Enum::Value last;

};


}
}

#endif /* _CISCO_IOS_XR_ALARMGR_SERVER_OPER_ */

