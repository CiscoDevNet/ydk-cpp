#ifndef _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_
#define _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_spirit_install_instmgr_oper {

class SoftwareInstall : public Entity
{
    public:
        SoftwareInstall();
        ~SoftwareInstall();

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

        class Files; //type: SoftwareInstall::Files
        class LastNOperationLogs; //type: SoftwareInstall::LastNOperationLogs
        class Prepare; //type: SoftwareInstall::Prepare
        class Active; //type: SoftwareInstall::Active
        class Version; //type: SoftwareInstall::Version
        class Inactive; //type: SoftwareInstall::Inactive
        class Request; //type: SoftwareInstall::Request
        class Issu; //type: SoftwareInstall::Issu
        class Committed; //type: SoftwareInstall::Committed
        class AllOperationsLog; //type: SoftwareInstall::AllOperationsLog
        class Packages; //type: SoftwareInstall::Packages
        class OperationLogs; //type: SoftwareInstall::OperationLogs
        class Repository; //type: SoftwareInstall::Repository

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Active> active;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog> all_operations_log;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Committed> committed;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files> files;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs> last_n_operation_logs;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs> operation_logs;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages> packages;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Prepare> prepare;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository> repository;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Request> request;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Version> version;
        
}; // SoftwareInstall


class SoftwareInstall::Files : public Entity
{
    public:
        Files();
        ~Files();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class File; //type: SoftwareInstall::Files::File

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files::File> > file;
        
}; // SoftwareInstall::Files


class SoftwareInstall::Files::File : public Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_name; //type: string
        class Brief; //type: SoftwareInstall::Files::File::Brief
        class Detail; //type: SoftwareInstall::Files::File::Detail

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files::File::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files::File::Detail> detail;
        
}; // SoftwareInstall::Files::File


class SoftwareInstall::Files::File::Brief : public Entity
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

        YLeaf log; //type: string

}; // SoftwareInstall::Files::File::Brief


class SoftwareInstall::Files::File::Detail : public Entity
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

        YLeaf log; //type: string

}; // SoftwareInstall::Files::File::Detail


class SoftwareInstall::LastNOperationLogs : public Entity
{
    public:
        LastNOperationLogs();
        ~LastNOperationLogs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LastNOperationLog; //type: SoftwareInstall::LastNOperationLogs::LastNOperationLog

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs::LastNOperationLog> > last_n_operation_log;
        
}; // SoftwareInstall::LastNOperationLogs


class SoftwareInstall::LastNOperationLogs::LastNOperationLog : public Entity
{
    public:
        LastNOperationLog();
        ~LastNOperationLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_n_logs; //type: int32
        class Summary; //type: SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary
        class Detail; //type: SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary> summary;
        
}; // SoftwareInstall::LastNOperationLogs::LastNOperationLog


class SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary


class SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail : public Entity
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

        YLeaf log; //type: string

}; // SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail


class SoftwareInstall::Prepare : public Entity
{
    public:
        Prepare();
        ~Prepare();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_prepare_done; //type: string
        YLeaf prepared_boot_image; //type: string
        YLeaf prepared_boot_partition; //type: string
        YLeaf restart_type; //type: string
        YLeaf activate_message; //type: string
        YLeaf prepare_clean_message; //type: string
        class Rpm; //type: SoftwareInstall::Prepare::Rpm
        class Package; //type: SoftwareInstall::Prepare::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Prepare::Package> > package;
        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Prepare::Rpm> > rpm;
        
}; // SoftwareInstall::Prepare


class SoftwareInstall::Prepare::Rpm : public Entity
{
    public:
        Rpm();
        ~Rpm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf package; //type: string

}; // SoftwareInstall::Prepare::Rpm


class SoftwareInstall::Prepare::Package : public Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf package; //type: string

}; // SoftwareInstall::Prepare::Package


class SoftwareInstall::Active : public Entity
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

        class ActivePackageInfo; //type: SoftwareInstall::Active::ActivePackageInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Active::ActivePackageInfo> > active_package_info;
        
}; // SoftwareInstall::Active


class SoftwareInstall::Active::ActivePackageInfo : public Entity
{
    public:
        ActivePackageInfo();
        ~ActivePackageInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf error_message; //type: string
        YLeaf location; //type: string
        YLeaf node_type; //type: string
        YLeaf boot_partition_name; //type: string
        YLeaf number_of_active_packages; //type: uint32
        YLeaf active_packages; //type: string

}; // SoftwareInstall::Active::ActivePackageInfo


class SoftwareInstall::Version : public Entity
{
    public:
        Version();
        ~Version();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::Version


class SoftwareInstall::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::Inactive


class SoftwareInstall::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::Request


class SoftwareInstall::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stage; //type: SoftwareInstall::Issu::Stage
        class Inventory; //type: SoftwareInstall::Issu::Inventory

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Inventory> inventory;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Stage> stage;
        
}; // SoftwareInstall::Issu


class SoftwareInstall::Issu::Stage : public Entity
{
    public:
        Stage();
        ~Stage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: IsdStateEtEnum
        YLeaf issu_node_cnt; //type: int32
        YLeaf issu_ready_node_cnt; //type: int32
        YLeaf percentage; //type: int32
        YLeaf issu_status; //type: IsdIssuStatusEtEnum
        YLeaf issu_error; //type: IsdErrorEtEnum

}; // SoftwareInstall::Issu::Stage


class SoftwareInstall::Issu::Inventory : public Entity
{
    public:
        Inventory();
        ~Inventory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Invinfo; //type: SoftwareInstall::Issu::Inventory::Invinfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Inventory::Invinfo> > invinfo;
        
}; // SoftwareInstall::Issu::Inventory


class SoftwareInstall::Issu::Inventory::Invinfo : public Entity
{
    public:
        Invinfo();
        ~Invinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: int32
        YLeaf node_type; //type: CardTypeEtEnum
        YLeaf issu_node_role; //type: IssuNodeRoleEtEnum
        YLeaf node_state; //type: IssudirNodeStatusEtEnum
        YLeaf node_role; //type: NodeRoleEtEnum

}; // SoftwareInstall::Issu::Inventory::Invinfo


class SoftwareInstall::Committed : public Entity
{
    public:
        Committed();
        ~Committed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommittedPackageInfo; //type: SoftwareInstall::Committed::CommittedPackageInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Committed::CommittedPackageInfo> > committed_package_info;
        
}; // SoftwareInstall::Committed


class SoftwareInstall::Committed::CommittedPackageInfo : public Entity
{
    public:
        CommittedPackageInfo();
        ~CommittedPackageInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf error_message; //type: string
        YLeaf location; //type: string
        YLeaf node_type; //type: string
        YLeaf boot_partition_name; //type: string
        YLeaf number_of_committed_packages; //type: uint32
        YLeaf committed_packages; //type: string

}; // SoftwareInstall::Committed::CommittedPackageInfo


class SoftwareInstall::AllOperationsLog : public Entity
{
    public:
        AllOperationsLog();
        ~AllOperationsLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: SoftwareInstall::AllOperationsLog::Summary
        class Detail; //type: SoftwareInstall::AllOperationsLog::Detail

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog::Summary> summary;
        
}; // SoftwareInstall::AllOperationsLog


class SoftwareInstall::AllOperationsLog::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::AllOperationsLog::Summary


class SoftwareInstall::AllOperationsLog::Detail : public Entity
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

        YLeaf log; //type: string

}; // SoftwareInstall::AllOperationsLog::Detail


class SoftwareInstall::Packages : public Entity
{
    public:
        Packages();
        ~Packages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Package; //type: SoftwareInstall::Packages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package> > package;
        
}; // SoftwareInstall::Packages


class SoftwareInstall::Packages::Package : public Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf package_name; //type: string
        class Verbose; //type: SoftwareInstall::Packages::Package::Verbose
        class Brief; //type: SoftwareInstall::Packages::Package::Brief
        class Detail; //type: SoftwareInstall::Packages::Package::Detail

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Verbose> verbose;
        
}; // SoftwareInstall::Packages::Package


class SoftwareInstall::Packages::Package::Verbose : public Entity
{
    public:
        Verbose();
        ~Verbose();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::Packages::Package::Verbose


class SoftwareInstall::Packages::Package::Brief : public Entity
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

        YLeaf log; //type: string

}; // SoftwareInstall::Packages::Package::Brief


class SoftwareInstall::Packages::Package::Detail : public Entity
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

        YLeaf log; //type: string

}; // SoftwareInstall::Packages::Package::Detail


class SoftwareInstall::OperationLogs : public Entity
{
    public:
        OperationLogs();
        ~OperationLogs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OperationLog; //type: SoftwareInstall::OperationLogs::OperationLog

        std::vector<std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog> > operation_log;
        
}; // SoftwareInstall::OperationLogs


class SoftwareInstall::OperationLogs::OperationLog : public Entity
{
    public:
        OperationLog();
        ~OperationLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log_id; //type: int32
        class Summary; //type: SoftwareInstall::OperationLogs::OperationLog::Summary
        class Detail; //type: SoftwareInstall::OperationLogs::OperationLog::Detail

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog::Summary> summary;
        
}; // SoftwareInstall::OperationLogs::OperationLog


class SoftwareInstall::OperationLogs::OperationLog::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::OperationLogs::OperationLog::Summary


class SoftwareInstall::OperationLogs::OperationLog::Detail : public Entity
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

        YLeaf log; //type: string

}; // SoftwareInstall::OperationLogs::OperationLog::Detail


class SoftwareInstall::Repository : public Entity
{
    public:
        Repository();
        ~Repository();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xr; //type: SoftwareInstall::Repository::Xr
        class All; //type: SoftwareInstall::Repository::All

        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository::All> all;
        std::shared_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository::Xr> xr;
        
}; // SoftwareInstall::Repository


class SoftwareInstall::Repository::Xr : public Entity
{
    public:
        Xr();
        ~Xr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::Repository::Xr


class SoftwareInstall::Repository::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: string

}; // SoftwareInstall::Repository::All

class IsdErrorEtEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf not_compatible;
        static const Enum::YLeaf not_enough_resource;
        static const Enum::YLeaf not_nsr_ready;
        static const Enum::YLeaf not_conn_sdrsm;
        static const Enum::YLeaf cmd_invalid;
        static const Enum::YLeaf load_prep_fail;
        static const Enum::YLeaf error_timeout;
        static const Enum::YLeaf err_node_down;
        static const Enum::YLeaf node_not_ready;
        static const Enum::YLeaf err_node_new;
        static const Enum::YLeaf err_card_oir;
        static const Enum::YLeaf invalid_evt;
        static const Enum::YLeaf disconn_from_calv;
        static const Enum::YLeaf gsp_down;
        static const Enum::YLeaf abort_by_ism;
        static const Enum::YLeaf rpfo;
        static const Enum::YLeaf pkg_null;
        static const Enum::YLeaf error_general;
        static const Enum::YLeaf fsa_error;
        static const Enum::YLeaf err_post_issu;
        static const Enum::YLeaf err_issu_dir_restart;

};

class NodeRoleEtEnum : public Enum
{
    public:
        static const Enum::YLeaf node_unknown;
        static const Enum::YLeaf node_active;
        static const Enum::YLeaf node_standby;
        static const Enum::YLeaf node_unusable;

};

class IsdStateEtEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf idle;
        static const Enum::YLeaf init;
        static const Enum::YLeaf init_done;
        static const Enum::YLeaf load_prep;
        static const Enum::YLeaf load_exec;
        static const Enum::YLeaf load_issu_go;
        static const Enum::YLeaf load_done;
        static const Enum::YLeaf run_prep;
        static const Enum::YLeaf big_bang;
        static const Enum::YLeaf run_done;
        static const Enum::YLeaf cleanup;
        static const Enum::YLeaf cleanup_done;
        static const Enum::YLeaf abort;
        static const Enum::YLeaf abort_done;
        static const Enum::YLeaf abort_cleanup;
        static const Enum::YLeaf unknown_state;

};

class IsdIssuStatusEtEnum : public Enum
{
    public:
        static const Enum::YLeaf ok;
        static const Enum::YLeaf prep_done;
        static const Enum::YLeaf big_bang;
        static const Enum::YLeaf done;
        static const Enum::YLeaf abort;
        static const Enum::YLeaf cmd_reject;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf abort_cleanup;
        static const Enum::YLeaf abort_cmd_reject;

};

class IssudirNodeStatusEtEnum : public Enum
{
    public:
        static const Enum::YLeaf not_issu_ready;
        static const Enum::YLeaf issu_ready;
        static const Enum::YLeaf isus_go;
        static const Enum::YLeaf node_fail;

};

class IssuNodeRoleEtEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown_role;
        static const Enum::YLeaf primary_role;
        static const Enum::YLeaf secondary_role;
        static const Enum::YLeaf tertiary_role;

};

class CardTypeEtEnum : public Enum
{
    public:
        static const Enum::YLeaf card_rp;
        static const Enum::YLeaf card_drp;
        static const Enum::YLeaf card_lc;
        static const Enum::YLeaf card_sc;
        static const Enum::YLeaf card_sp;
        static const Enum::YLeaf card_other;

};


}
}

#endif /* _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_ */

