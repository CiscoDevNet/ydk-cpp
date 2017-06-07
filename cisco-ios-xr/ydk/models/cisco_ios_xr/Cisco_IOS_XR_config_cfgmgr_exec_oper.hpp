#ifndef _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_
#define _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_config_cfgmgr_exec_oper {

class CfgHistGl : public Entity
{
    public:
        CfgHistGl();
        ~CfgHistGl();

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

        class RecordType; //type: CfgHistGl::RecordType

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType> > record_type;
        
}; // CfgHistGl


class CfgHistGl::RecordType : public Entity
{
    public:
        RecordType();
        ~RecordType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf record_type; //type: string
        class Record; //type: CfgHistGl::RecordType::Record

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record> > record;
        
}; // CfgHistGl::RecordType


class CfgHistGl::RecordType::Record : public Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf record; //type: int32
        YLeaf timestamp; //type: uint32
        YLeaf record_type; //type: HistRecordEnum
        class Info; //type: CfgHistGl::RecordType::Record::Info

        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info> info;
        
}; // CfgHistGl::RecordType::Record


class CfgHistGl::RecordType::Record::Info : public Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: HistRecordEnum
        YLeaf a; //type: uint32
        class AlarmInfo; //type: CfgHistGl::RecordType::Record::Info::AlarmInfo
        class CfscheckInfo; //type: CfgHistGl::RecordType::Record::Info::CfscheckInfo
        class CommitInfo; //type: CfgHistGl::RecordType::Record::Info::CommitInfo
        class OirInfo; //type: CfgHistGl::RecordType::Record::Info::OirInfo
        class ShutdownInfo; //type: CfgHistGl::RecordType::Record::Info::ShutdownInfo
        class StartupInfo; //type: CfgHistGl::RecordType::Record::Info::StartupInfo
        class BackupInfo; //type: CfgHistGl::RecordType::Record::Info::BackupInfo

        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::AlarmInfo> alarm_info;
        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::BackupInfo> backup_info;
        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::CfscheckInfo> cfscheck_info;
        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::CommitInfo> commit_info;
        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::OirInfo> oir_info;
        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::ShutdownInfo> shutdown_info;
        std::shared_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::StartupInfo> startup_info;
        
}; // CfgHistGl::RecordType::Record::Info


class CfgHistGl::RecordType::Record::Info::AlarmInfo : public Entity
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

        YLeaf state; //type: string
        YLeaf where; //type: string

}; // CfgHistGl::RecordType::Record::Info::AlarmInfo


class CfgHistGl::RecordType::Record::Info::CfscheckInfo : public Entity
{
    public:
        CfscheckInfo();
        ~CfscheckInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf user_id; //type: string
        YLeaf line; //type: string

}; // CfgHistGl::RecordType::Record::Info::CfscheckInfo


class CfgHistGl::RecordType::Record::Info::CommitInfo : public Entity
{
    public:
        CommitInfo();
        ~CommitInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf commit_id; //type: string
        YLeaf user_id; //type: string
        YLeaf line; //type: string
        YLeaf client_name; //type: string
        YLeaf label; //type: string
        YLeaf comment; //type: string

}; // CfgHistGl::RecordType::Record::Info::CommitInfo


class CfgHistGl::RecordType::Record::Info::OirInfo : public Entity
{
    public:
        OirInfo();
        ~OirInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf config_type; //type: string
        YLeaf operation_; //type: string
        YLeaf config_name; //type: string

}; // CfgHistGl::RecordType::Record::Info::OirInfo


class CfgHistGl::RecordType::Record::Info::ShutdownInfo : public Entity
{
    public:
        ShutdownInfo();
        ~ShutdownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf comment; //type: string

}; // CfgHistGl::RecordType::Record::Info::ShutdownInfo


class CfgHistGl::RecordType::Record::Info::StartupInfo : public Entity
{
    public:
        StartupInfo();
        ~StartupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf how_booted; //type: string
        YLeaf boot_path; //type: string

}; // CfgHistGl::RecordType::Record::Info::StartupInfo


class CfgHistGl::RecordType::Record::Info::BackupInfo : public Entity
{
    public:
        BackupInfo();
        ~BackupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf comment; //type: string

}; // CfgHistGl::RecordType::Record::Info::BackupInfo

class HistRecordEnum : public Enum
{
    public:
        static const Enum::YLeaf cfghist_bag_record_all;
        static const Enum::YLeaf cfghist_bag_record_alarm;
        static const Enum::YLeaf cfghist_bag_record_cfs_check;
        static const Enum::YLeaf cfghist_bag_record_commit;
        static const Enum::YLeaf cfghist_bag_record_oir;
        static const Enum::YLeaf cfghist_bag_record_shutdown;
        static const Enum::YLeaf cfghist_bag_record_startup;
        static const Enum::YLeaf cfghist_bag_record_backup;
        static const Enum::YLeaf cfghist_bag_record_rebase;
        static const Enum::YLeaf cfghist_bag_record_last;

};


}
}

#endif /* _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_ */

