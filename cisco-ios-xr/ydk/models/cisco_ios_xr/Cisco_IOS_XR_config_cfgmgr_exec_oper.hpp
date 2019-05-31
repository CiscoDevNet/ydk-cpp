#ifndef _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_
#define _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_cfgmgr_exec_oper {

class ConfigManager : public ydk::Entity
{
    public:
        ConfigManager();
        ~ConfigManager();

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

        class Global; //type: ConfigManager::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global> global;
        
}; // ConfigManager


class ConfigManager::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        class ConfigCommit; //type: ConfigManager::Global::ConfigCommit
        class HistoryTables; //type: ConfigManager::Global::HistoryTables
        class ConfigSession; //type: ConfigManager::Global::ConfigSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::ConfigCommit> config_commit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables> history_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::ConfigSession> config_session;
        
}; // ConfigManager::Global


class ConfigManager::Global::ConfigCommit : public ydk::Entity
{
    public:
        ConfigCommit();
        ~ConfigCommit();

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

        class Commits; //type: ConfigManager::Global::ConfigCommit::Commits

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::ConfigCommit::Commits> commits;
        
}; // ConfigManager::Global::ConfigCommit


class ConfigManager::Global::ConfigCommit::Commits : public ydk::Entity
{
    public:
        Commits();
        ~Commits();

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

        class Commit; //type: ConfigManager::Global::ConfigCommit::Commits::Commit

        ydk::YList commit;
        
}; // ConfigManager::Global::ConfigCommit::Commits


class ConfigManager::Global::ConfigCommit::Commits::Commit : public ydk::Entity
{
    public:
        Commit();
        ~Commit();

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

        ydk::YLeaf commit; //type: string
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf commit_id; //type: string
        ydk::YLeaf user_id; //type: string
        ydk::YLeaf line; //type: string
        ydk::YLeaf client_name; //type: string
        ydk::YLeaf label; //type: string
        ydk::YLeaf comment; //type: string

}; // ConfigManager::Global::ConfigCommit::Commits::Commit


class ConfigManager::Global::HistoryTables : public ydk::Entity
{
    public:
        HistoryTables();
        ~HistoryTables();

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

        class HistoryTable; //type: ConfigManager::Global::HistoryTables::HistoryTable

        ydk::YList history_table;
        
}; // ConfigManager::Global::HistoryTables


class ConfigManager::Global::HistoryTables::HistoryTable : public ydk::Entity
{
    public:
        HistoryTable();
        ~HistoryTable();

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

        ydk::YLeaf history_type; //type: string
        class History; //type: ConfigManager::Global::HistoryTables::HistoryTable::History

        ydk::YList history;
        
}; // ConfigManager::Global::HistoryTables::HistoryTable


class ConfigManager::Global::HistoryTables::HistoryTable::History : public ydk::Entity
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

        ydk::YLeaf history; //type: string
        ydk::YLeaf timestamp; //type: string
        class Info; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info> info;
        
}; // ConfigManager::Global::HistoryTables::HistoryTable::History


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: HistRecord
        ydk::YLeaf a; //type: uint32
        class AlarmInfo; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo
        class CfscheckInfo; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo
        class CommitInfo; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo
        class OirInfo; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo
        class ShutdownInfo; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo
        class StartupInfo; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo
        class BackupInfo; //type: ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo> alarm_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo> cfscheck_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo> commit_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo> oir_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo> shutdown_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo> startup_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo> backup_info;
        
}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: string
        ydk::YLeaf where; //type: string

}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo : public ydk::Entity
{
    public:
        CfscheckInfo();
        ~CfscheckInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_id; //type: string
        ydk::YLeaf line; //type: string

}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo : public ydk::Entity
{
    public:
        CommitInfo();
        ~CommitInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf commit_id; //type: string
        ydk::YLeaf user_id; //type: string
        ydk::YLeaf line; //type: string
        ydk::YLeaf client_name; //type: string
        ydk::YLeaf label; //type: string
        ydk::YLeaf comment; //type: string

}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo : public ydk::Entity
{
    public:
        OirInfo();
        ~OirInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config_type; //type: string
        ydk::YLeaf operation_; //type: string
        ydk::YLeaf config_name; //type: string

}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo : public ydk::Entity
{
    public:
        ShutdownInfo();
        ~ShutdownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf comment; //type: string

}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo : public ydk::Entity
{
    public:
        StartupInfo();
        ~StartupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf how_booted; //type: string
        ydk::YLeaf boot_path; //type: string

}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo


class ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo : public ydk::Entity
{
    public:
        BackupInfo();
        ~BackupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf comment; //type: string

}; // ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo


class ConfigManager::Global::ConfigSession : public ydk::Entity
{
    public:
        ConfigSession();
        ~ConfigSession();

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

        class Sessions; //type: ConfigManager::Global::ConfigSession::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::ConfigManager::Global::ConfigSession::Sessions> sessions;
        
}; // ConfigManager::Global::ConfigSession


class ConfigManager::Global::ConfigSession::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: ConfigManager::Global::ConfigSession::Sessions::Session

        ydk::YList session;
        
}; // ConfigManager::Global::ConfigSession::Sessions


class ConfigManager::Global::ConfigSession::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf session; //type: string
        ydk::YLeaf session_id; //type: string
        ydk::YLeaf client_name; //type: string
        ydk::YLeaf user_id; //type: string
        ydk::YLeaf tty_name; //type: string
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf lock_flag; //type: string
        ydk::YLeaf trial_flag; //type: string
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf elapsed_time; //type: string

}; // ConfigManager::Global::ConfigSession::Sessions::Session

class HistRecord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cfghist_bag_record_all;
        static const ydk::Enum::YLeaf cfghist_bag_record_alarm;
        static const ydk::Enum::YLeaf cfghist_bag_record_cfs_check;
        static const ydk::Enum::YLeaf cfghist_bag_record_commit;
        static const ydk::Enum::YLeaf cfghist_bag_record_oir;
        static const ydk::Enum::YLeaf cfghist_bag_record_shutdown;
        static const ydk::Enum::YLeaf cfghist_bag_record_startup;
        static const ydk::Enum::YLeaf cfghist_bag_record_backup;
        static const ydk::Enum::YLeaf cfghist_bag_record_rebase;
        static const ydk::Enum::YLeaf cfghist_bag_record_last;

};


}
}

#endif /* _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_ */

