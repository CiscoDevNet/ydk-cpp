#ifndef _CISCO_IOS_XR_ALARMGR_SERVER_OPER_
#define _CISCO_IOS_XR_ALARMGR_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_alarmgr_server_oper {

class Alarms : public Entity
{
    public:
        Alarms();
        ~Alarms();

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

        class Detail; //type: Alarms::Detail
        class Brief; //type: Alarms::Brief

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail> detail;
        
}; // Alarms


class Alarms::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DetailSystem; //type: Alarms::Detail::DetailSystem
        class DetailCard; //type: Alarms::Detail::DetailCard

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard> detail_card;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem> detail_system;
        
}; // Alarms::Detail


class Alarms::Detail::DetailSystem : public Entity
{
    public:
        DetailSystem();
        ~DetailSystem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Active; //type: Alarms::Detail::DetailSystem::Active
        class History; //type: Alarms::Detail::DetailSystem::History
        class Suppressed; //type: Alarms::Detail::DetailSystem::Suppressed
        class Stats; //type: Alarms::Detail::DetailSystem::Stats
        class Clients; //type: Alarms::Detail::DetailSystem::Clients

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active> active;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History> history;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed> suppressed;
        
}; // Alarms::Detail::DetailSystem


class Alarms::Detail::DetailSystem::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Detail::DetailSystem::Active::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo> > alarm_info;
        
}; // Alarms::Detail::DetailSystem::Active


class Alarms::Detail::DetailSystem::Active::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf location; //type: string
        YLeaf aid; //type: string
        YLeaf tag; //type: string
        YLeaf module; //type: string
        YLeaf eid; //type: string
        YLeaf reporting_agent_id; //type: uint32
        YLeaf pending_sync; //type: boolean
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf status; //type: AlarmStatusEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf service_affecting; //type: AlarmServiceAffectingEnum
        YLeaf type; //type: AlarmEventEnum
        YLeaf interface; //type: string
        YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailSystem::Active::AlarmInfo


class Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: AlarmDirectionEnum
        YLeaf notification_source; //type: AlarmNotificationSrcEnum

}; // Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn


class Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca : public Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_value; //type: string
        YLeaf current_value; //type: string
        YLeaf bucket_type; //type: TimingBucketEnum

}; // Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca


class Alarms::Detail::DetailSystem::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Detail::DetailSystem::History::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo> > alarm_info;
        
}; // Alarms::Detail::DetailSystem::History


class Alarms::Detail::DetailSystem::History::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf location; //type: string
        YLeaf aid; //type: string
        YLeaf tag; //type: string
        YLeaf module; //type: string
        YLeaf eid; //type: string
        YLeaf reporting_agent_id; //type: uint32
        YLeaf pending_sync; //type: boolean
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf status; //type: AlarmStatusEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf service_affecting; //type: AlarmServiceAffectingEnum
        YLeaf type; //type: AlarmEventEnum
        YLeaf interface; //type: string
        YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailSystem::History::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailSystem::History::AlarmInfo::Tca

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailSystem::History::AlarmInfo


class Alarms::Detail::DetailSystem::History::AlarmInfo::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: AlarmDirectionEnum
        YLeaf notification_source; //type: AlarmNotificationSrcEnum

}; // Alarms::Detail::DetailSystem::History::AlarmInfo::Otn


class Alarms::Detail::DetailSystem::History::AlarmInfo::Tca : public Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_value; //type: string
        YLeaf current_value; //type: string
        YLeaf bucket_type; //type: TimingBucketEnum

}; // Alarms::Detail::DetailSystem::History::AlarmInfo::Tca


class Alarms::Detail::DetailSystem::Suppressed : public Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SuppressedInfo; //type: Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo> > suppressed_info;
        
}; // Alarms::Detail::DetailSystem::Suppressed


class Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo : public Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf location; //type: string
        YLeaf aid; //type: string
        YLeaf tag; //type: string
        YLeaf module; //type: string
        YLeaf eid; //type: string
        YLeaf reporting_agent_id; //type: uint32
        YLeaf pending_sync; //type: boolean
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf status; //type: AlarmStatusEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf suppressed_time; //type: string
        YLeaf suppressed_timestamp; //type: uint64
        YLeaf service_affecting; //type: AlarmServiceAffectingEnum
        YLeaf interface; //type: string
        YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn> otn;
        
}; // Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo


class Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: AlarmDirectionEnum
        YLeaf notification_source; //type: AlarmNotificationSrcEnum

}; // Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn


class Alarms::Detail::DetailSystem::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reported; //type: uint64
        YLeaf dropped; //type: uint64
        YLeaf active; //type: uint64
        YLeaf history; //type: uint64
        YLeaf suppressed; //type: uint64
        YLeaf sysadmin_active; //type: uint64
        YLeaf sysadmin_history; //type: uint64
        YLeaf sysadmin_suppressed; //type: uint64
        YLeaf dropped_invalid_aid; //type: uint32
        YLeaf dropped_insuff_mem; //type: uint32
        YLeaf dropped_db_error; //type: uint32
        YLeaf dropped_clear_without_set; //type: uint32
        YLeaf dropped_duplicate; //type: uint32
        YLeaf cache_hit; //type: uint32
        YLeaf cache_miss; //type: uint32

}; // Alarms::Detail::DetailSystem::Stats


class Alarms::Detail::DetailSystem::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientInfo; //type: Alarms::Detail::DetailSystem::Clients::ClientInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Clients::ClientInfo> > client_info;
        
}; // Alarms::Detail::DetailSystem::Clients


class Alarms::Detail::DetailSystem::Clients::ClientInfo : public Entity
{
    public:
        ClientInfo();
        ~ClientInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32
        YLeaf location; //type: string
        YLeaf handle; //type: string
        YLeaf state; //type: AlarmClientStateEnum
        YLeaf type; //type: AlarmClientEnum
        YLeaf filter_disp; //type: boolean
        YLeaf subscriber_id; //type: uint32
        YLeaf filter_severity; //type: AlarmSeverityEnum
        YLeaf filter_state; //type: AlarmStatusEnum
        YLeaf filter_group; //type: AlarmGroupsEnum
        YLeaf connect_count; //type: uint32
        YLeaf connect_timestamp; //type: string
        YLeaf get_count; //type: uint32
        YLeaf subscribe_count; //type: uint32
        YLeaf report_count; //type: uint32

}; // Alarms::Detail::DetailSystem::Clients::ClientInfo


class Alarms::Detail::DetailCard : public Entity
{
    public:
        DetailCard();
        ~DetailCard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DetailLocations; //type: Alarms::Detail::DetailCard::DetailLocations

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations> detail_locations;
        
}; // Alarms::Detail::DetailCard


class Alarms::Detail::DetailCard::DetailLocations : public Entity
{
    public:
        DetailLocations();
        ~DetailLocations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DetailLocation; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation> > detail_location;
        
}; // Alarms::Detail::DetailCard::DetailLocations


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation : public Entity
{
    public:
        DetailLocation();
        ~DetailLocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: string
        class Active; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active
        class History; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History
        class Suppressed; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed
        class Stats; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats
        class Clients; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active> active;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History> history;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed> suppressed;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo> > alarm_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf location; //type: string
        YLeaf aid; //type: string
        YLeaf tag; //type: string
        YLeaf module; //type: string
        YLeaf eid; //type: string
        YLeaf reporting_agent_id; //type: uint32
        YLeaf pending_sync; //type: boolean
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf status; //type: AlarmStatusEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf service_affecting; //type: AlarmServiceAffectingEnum
        YLeaf type; //type: AlarmEventEnum
        YLeaf interface; //type: string
        YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: AlarmDirectionEnum
        YLeaf notification_source; //type: AlarmNotificationSrcEnum

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca : public Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_value; //type: string
        YLeaf current_value; //type: string
        YLeaf bucket_type; //type: TimingBucketEnum

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo> > alarm_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf location; //type: string
        YLeaf aid; //type: string
        YLeaf tag; //type: string
        YLeaf module; //type: string
        YLeaf eid; //type: string
        YLeaf reporting_agent_id; //type: uint32
        YLeaf pending_sync; //type: boolean
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf status; //type: AlarmStatusEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf service_affecting; //type: AlarmServiceAffectingEnum
        YLeaf type; //type: AlarmEventEnum
        YLeaf interface; //type: string
        YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: AlarmDirectionEnum
        YLeaf notification_source; //type: AlarmNotificationSrcEnum

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca : public Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_value; //type: string
        YLeaf current_value; //type: string
        YLeaf bucket_type; //type: TimingBucketEnum

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed : public Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SuppressedInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo> > suppressed_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo : public Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf location; //type: string
        YLeaf aid; //type: string
        YLeaf tag; //type: string
        YLeaf module; //type: string
        YLeaf eid; //type: string
        YLeaf reporting_agent_id; //type: uint32
        YLeaf pending_sync; //type: boolean
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf status; //type: AlarmStatusEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf suppressed_time; //type: string
        YLeaf suppressed_timestamp; //type: uint64
        YLeaf service_affecting; //type: AlarmServiceAffectingEnum
        YLeaf interface; //type: string
        YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn> otn;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: AlarmDirectionEnum
        YLeaf notification_source; //type: AlarmNotificationSrcEnum

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reported; //type: uint64
        YLeaf dropped; //type: uint64
        YLeaf active; //type: uint64
        YLeaf history; //type: uint64
        YLeaf suppressed; //type: uint64
        YLeaf sysadmin_active; //type: uint64
        YLeaf sysadmin_history; //type: uint64
        YLeaf sysadmin_suppressed; //type: uint64
        YLeaf dropped_invalid_aid; //type: uint32
        YLeaf dropped_insuff_mem; //type: uint32
        YLeaf dropped_db_error; //type: uint32
        YLeaf dropped_clear_without_set; //type: uint32
        YLeaf dropped_duplicate; //type: uint32
        YLeaf cache_hit; //type: uint32
        YLeaf cache_miss; //type: uint32

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo> > client_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo : public Entity
{
    public:
        ClientInfo();
        ~ClientInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32
        YLeaf location; //type: string
        YLeaf handle; //type: string
        YLeaf state; //type: AlarmClientStateEnum
        YLeaf type; //type: AlarmClientEnum
        YLeaf filter_disp; //type: boolean
        YLeaf subscriber_id; //type: uint32
        YLeaf filter_severity; //type: AlarmSeverityEnum
        YLeaf filter_state; //type: AlarmStatusEnum
        YLeaf filter_group; //type: AlarmGroupsEnum
        YLeaf connect_count; //type: uint32
        YLeaf connect_timestamp; //type: string
        YLeaf get_count; //type: uint32
        YLeaf subscribe_count; //type: uint32
        YLeaf report_count; //type: uint32

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo


class Alarms::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BriefCard; //type: Alarms::Brief::BriefCard
        class BriefSystem; //type: Alarms::Brief::BriefSystem

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard> brief_card;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem> brief_system;
        
}; // Alarms::Brief


class Alarms::Brief::BriefCard : public Entity
{
    public:
        BriefCard();
        ~BriefCard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BriefLocations; //type: Alarms::Brief::BriefCard::BriefLocations

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations> brief_locations;
        
}; // Alarms::Brief::BriefCard


class Alarms::Brief::BriefCard::BriefLocations : public Entity
{
    public:
        BriefLocations();
        ~BriefLocations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BriefLocation; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation> > brief_location;
        
}; // Alarms::Brief::BriefCard::BriefLocations


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation : public Entity
{
    public:
        BriefLocation();
        ~BriefLocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: string
        class Active; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active
        class History; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History
        class Suppressed; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active> active;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History> history;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed> suppressed;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo> > alarm_info;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf description; //type: string

}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo> > alarm_info;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf description; //type: string

}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed : public Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SuppressedInfo; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo> > suppressed_info;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo : public Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf suppressed_time; //type: string
        YLeaf suppressed_timestamp; //type: uint64
        YLeaf description; //type: string

}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo


class Alarms::Brief::BriefSystem : public Entity
{
    public:
        BriefSystem();
        ~BriefSystem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Active; //type: Alarms::Brief::BriefSystem::Active
        class History; //type: Alarms::Brief::BriefSystem::History
        class Suppressed; //type: Alarms::Brief::BriefSystem::Suppressed

        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Active> active;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::History> history;
        std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Suppressed> suppressed;
        
}; // Alarms::Brief::BriefSystem


class Alarms::Brief::BriefSystem::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Brief::BriefSystem::Active::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Active::AlarmInfo> > alarm_info;
        
}; // Alarms::Brief::BriefSystem::Active


class Alarms::Brief::BriefSystem::Active::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf description; //type: string

}; // Alarms::Brief::BriefSystem::Active::AlarmInfo


class Alarms::Brief::BriefSystem::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AlarmInfo; //type: Alarms::Brief::BriefSystem::History::AlarmInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::History::AlarmInfo> > alarm_info;
        
}; // Alarms::Brief::BriefSystem::History


class Alarms::Brief::BriefSystem::History::AlarmInfo : public Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf clear_time; //type: string
        YLeaf clear_timestamp; //type: uint64
        YLeaf description; //type: string

}; // Alarms::Brief::BriefSystem::History::AlarmInfo


class Alarms::Brief::BriefSystem::Suppressed : public Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SuppressedInfo; //type: Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo> > suppressed_info;
        
}; // Alarms::Brief::BriefSystem::Suppressed


class Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo : public Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf severity; //type: AlarmSeverityEnum
        YLeaf group; //type: AlarmGroupsEnum
        YLeaf set_time; //type: string
        YLeaf set_timestamp; //type: uint64
        YLeaf suppressed_time; //type: string
        YLeaf suppressed_timestamp; //type: uint64
        YLeaf description; //type: string

}; // Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo

class TimingBucketEnum : public Enum
{
    public:
        static const Enum::YLeaf not_specified;
        static const Enum::YLeaf fifteen_min;
        static const Enum::YLeaf one_day;

};

class AlarmSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf not_reported;
        static const Enum::YLeaf not_alarmed;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf major;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf severity_last;

};

class AlarmDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_specified;
        static const Enum::YLeaf send;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf send_receive;

};

class AlarmStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf set;
        static const Enum::YLeaf clear;
        static const Enum::YLeaf suppress;
        static const Enum::YLeaf last;

};

class AlarmServiceAffectingEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf not_service_affecting;
        static const Enum::YLeaf service_affecting;

};

class AlarmNotificationSrcEnum : public Enum
{
    public:
        static const Enum::YLeaf not_specified;
        static const Enum::YLeaf near_end;
        static const Enum::YLeaf far_end;

};

class AlarmEventEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf notification;
        static const Enum::YLeaf last;

};

class AlarmClientEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf producer;
        static const Enum::YLeaf consumer;
        static const Enum::YLeaf subscriber;
        static const Enum::YLeaf client_last;

};

class AlarmClientStateEnum : public Enum
{
    public:
        static const Enum::YLeaf start;
        static const Enum::YLeaf init;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf registered;
        static const Enum::YLeaf disconnected;
        static const Enum::YLeaf ready;

};

class AlarmGroupsEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf environ;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf fabric;
        static const Enum::YLeaf power;
        static const Enum::YLeaf software;
        static const Enum::YLeaf slice;
        static const Enum::YLeaf cpu;
        static const Enum::YLeaf controller;
        static const Enum::YLeaf sonet;
        static const Enum::YLeaf otn;
        static const Enum::YLeaf sdh_controller;
        static const Enum::YLeaf asic;
        static const Enum::YLeaf fpd_infra;
        static const Enum::YLeaf shelf;
        static const Enum::YLeaf mpa;
        static const Enum::YLeaf ots;
        static const Enum::YLeaf last;

};


}
}

#endif /* _CISCO_IOS_XR_ALARMGR_SERVER_OPER_ */

