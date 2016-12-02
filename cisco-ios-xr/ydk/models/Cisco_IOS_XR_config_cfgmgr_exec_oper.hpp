#ifndef _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_
#define _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_config_cfgmgr_exec_oper {

class CfgHistGl : public Entity
{
    public:
        CfgHistGl();
        ~CfgHistGl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class RecordType : public Entity
    {
        public:
            RecordType();
            ~RecordType();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value record_type; //type: string


        class Record : public Entity
        {
            public:
                Record();
                ~Record();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value record; //type: int32
                Value timestamp; //type: uint32
                Value record_type; //type: HistRecordEnum


            class Info : public Entity
            {
                public:
                    Info();
                    ~Info();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value type; //type: HistRecordEnum
                    Value a; //type: uint32


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
                        Value state; //type: string
                        Value where; //type: string




                }; // CfgHistGl::RecordType::Record::Info::AlarmInfo


                class CfscheckInfo : public Entity
                {
                    public:
                        CfscheckInfo();
                        ~CfscheckInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value user_id; //type: string
                        Value line; //type: string




                }; // CfgHistGl::RecordType::Record::Info::CfscheckInfo


                class CommitInfo : public Entity
                {
                    public:
                        CommitInfo();
                        ~CommitInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value commit_id; //type: string
                        Value user_id; //type: string
                        Value line; //type: string
                        Value client_name; //type: string
                        Value label; //type: string
                        Value comment; //type: string




                }; // CfgHistGl::RecordType::Record::Info::CommitInfo


                class OirInfo : public Entity
                {
                    public:
                        OirInfo();
                        ~OirInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value config_type; //type: string
                        Value operation_; //type: string
                        Value config_name; //type: string




                }; // CfgHistGl::RecordType::Record::Info::OirInfo


                class ShutdownInfo : public Entity
                {
                    public:
                        ShutdownInfo();
                        ~ShutdownInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value comment; //type: string




                }; // CfgHistGl::RecordType::Record::Info::ShutdownInfo


                class StartupInfo : public Entity
                {
                    public:
                        StartupInfo();
                        ~StartupInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value how_booted; //type: string
                        Value boot_path; //type: string




                }; // CfgHistGl::RecordType::Record::Info::StartupInfo


                class BackupInfo : public Entity
                {
                    public:
                        BackupInfo();
                        ~BackupInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value comment; //type: string




                }; // CfgHistGl::RecordType::Record::Info::BackupInfo


                    std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::AlarmInfo> alarm_info;
                    std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::BackupInfo> backup_info;
                    std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::CfscheckInfo> cfscheck_info;
                    std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::CommitInfo> commit_info;
                    std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::OirInfo> oir_info;
                    std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::ShutdownInfo> shutdown_info;
                    std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info::StartupInfo> startup_info;
                    class HistRecordEnum;


            }; // CfgHistGl::RecordType::Record::Info


                std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record::Info> info;
                class HistRecordEnum;


        }; // CfgHistGl::RecordType::Record


            std::vector<std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType::Record> > record;


    }; // CfgHistGl::RecordType


        std::vector<std::unique_ptr<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl::RecordType> > record_type;


}; // CfgHistGl


class HistRecordEnum : public Enum
{
    public:
        static const Enum::Value cfghist_bag_record_all;
        static const Enum::Value cfghist_bag_record_alarm;
        static const Enum::Value cfghist_bag_record_cfs_check;
        static const Enum::Value cfghist_bag_record_commit;
        static const Enum::Value cfghist_bag_record_oir;
        static const Enum::Value cfghist_bag_record_shutdown;
        static const Enum::Value cfghist_bag_record_startup;
        static const Enum::Value cfghist_bag_record_backup;
        static const Enum::Value cfghist_bag_record_rebase;
        static const Enum::Value cfghist_bag_record_last;

};


}
}

#endif /* _CISCO_IOS_XR_CONFIG_CFGMGR_EXEC_OPER_ */

