#ifndef _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_
#define _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_cfgmgr_exec_oper {

class CfgHistGl : public ydk::Entity
{
    public:
        CfgHistGl();
        ~CfgHistGl();

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

        class RecordType; //type: CfgHistGl::RecordType

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType> > record_type;
        
}; // CfgHistGl


class CfgHistGl::RecordType : public ydk::Entity
{
    public:
        RecordType();
        ~RecordType();

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

        ydk::YLeaf record_type; //type: string
        class Record; //type: CfgHistGl::RecordType::Record

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record> > record;
        
}; // CfgHistGl::RecordType


class CfgHistGl::RecordType::Record : public ydk::Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf record; //type: int32
        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf record_type; //type: HistRecord
        class Info; //type: CfgHistGl::RecordType::Record::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info> info;
        
}; // CfgHistGl::RecordType::Record


class CfgHistGl::RecordType::Record::Info : public ydk::Entity
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
        class AlarmInfo; //type: CfgHistGl::RecordType::Record::Info::AlarmInfo
        class CfscheckInfo; //type: CfgHistGl::RecordType::Record::Info::CfscheckInfo
        class CommitInfo; //type: CfgHistGl::RecordType::Record::Info::CommitInfo
        class OirInfo; //type: CfgHistGl::RecordType::Record::Info::OirInfo
        class ShutdownInfo; //type: CfgHistGl::RecordType::Record::Info::ShutdownInfo
        class StartupInfo; //type: CfgHistGl::RecordType::Record::Info::StartupInfo
        class BackupInfo; //type: CfgHistGl::RecordType::Record::Info::BackupInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::AlarmInfo> alarm_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::BackupInfo> backup_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::CfscheckInfo> cfscheck_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::CommitInfo> commit_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::OirInfo> oir_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::ShutdownInfo> shutdown_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::StartupInfo> startup_info;
        
}; // CfgHistGl::RecordType::Record::Info


class CfgHistGl::RecordType::Record::Info::AlarmInfo : public ydk::Entity
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

}; // CfgHistGl::RecordType::Record::Info::AlarmInfo


class CfgHistGl::RecordType::Record::Info::BackupInfo : public ydk::Entity
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

}; // CfgHistGl::RecordType::Record::Info::BackupInfo


class CfgHistGl::RecordType::Record::Info::CfscheckInfo : public ydk::Entity
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

}; // CfgHistGl::RecordType::Record::Info::CfscheckInfo


class CfgHistGl::RecordType::Record::Info::CommitInfo : public ydk::Entity
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

}; // CfgHistGl::RecordType::Record::Info::CommitInfo


class CfgHistGl::RecordType::Record::Info::OirInfo : public ydk::Entity
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

}; // CfgHistGl::RecordType::Record::Info::OirInfo


class CfgHistGl::RecordType::Record::Info::ShutdownInfo : public ydk::Entity
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

}; // CfgHistGl::RecordType::Record::Info::ShutdownInfo


class CfgHistGl::RecordType::Record::Info::StartupInfo : public ydk::Entity
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

}; // CfgHistGl::RecordType::Record::Info::StartupInfo

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

