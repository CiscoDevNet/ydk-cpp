#ifndef _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_
#define _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_spirit_install_instmgr_oper {

class SoftwareInstall : public ydk::Entity
{
    public:
        SoftwareInstall();
        ~SoftwareInstall();

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

        class Superseded; //type: SoftwareInstall::Superseded
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Superseded> superseded;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Prepare> prepare;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Version> version;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Committed> committed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog> all_operations_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages> packages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs> operation_logs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository> repository;
        
}; // SoftwareInstall


class SoftwareInstall::Superseded : public ydk::Entity
{
    public:
        Superseded();
        ~Superseded();

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

        class SupersededPackageInfo; //type: SoftwareInstall::Superseded::SupersededPackageInfo

        ydk::YList superseded_package_info;
        
}; // SoftwareInstall::Superseded


class SoftwareInstall::Superseded::SupersededPackageInfo : public ydk::Entity
{
    public:
        SupersededPackageInfo();
        ~SupersededPackageInfo();

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

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_type; //type: string
        ydk::YLeaf boot_partition_name; //type: string
        ydk::YLeaf superseded_packages; //type: string

}; // SoftwareInstall::Superseded::SupersededPackageInfo


class SoftwareInstall::Prepare : public ydk::Entity
{
    public:
        Prepare();
        ~Prepare();

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

        ydk::YLeaf no_prepare_done; //type: string
        ydk::YLeaf prepared_boot_image; //type: string
        ydk::YLeaf prepared_boot_partition; //type: string
        ydk::YLeaf restart_type; //type: string
        ydk::YLeaf activate_message; //type: string
        ydk::YLeaf prepare_clean_message; //type: string
        class Rpm; //type: SoftwareInstall::Prepare::Rpm
        class Package; //type: SoftwareInstall::Prepare::Package

        ydk::YList rpm;
        ydk::YList package;
        
}; // SoftwareInstall::Prepare


class SoftwareInstall::Prepare::Rpm : public ydk::Entity
{
    public:
        Rpm();
        ~Rpm();

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

        ydk::YLeaf package; //type: string

}; // SoftwareInstall::Prepare::Rpm


class SoftwareInstall::Prepare::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

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

        ydk::YLeaf package; //type: string

}; // SoftwareInstall::Prepare::Package


class SoftwareInstall::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class ActivePackageInfo; //type: SoftwareInstall::Active::ActivePackageInfo

        ydk::YList active_package_info;
        
}; // SoftwareInstall::Active


class SoftwareInstall::Active::ActivePackageInfo : public ydk::Entity
{
    public:
        ActivePackageInfo();
        ~ActivePackageInfo();

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

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_type; //type: string
        ydk::YLeaf boot_partition_name; //type: string
        ydk::YLeaf number_of_active_packages; //type: uint32
        ydk::YLeaf active_packages; //type: string

}; // SoftwareInstall::Active::ActivePackageInfo


class SoftwareInstall::Version : public ydk::Entity
{
    public:
        Version();
        ~Version();

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

        ydk::YLeaf img_info; //type: string

}; // SoftwareInstall::Version


class SoftwareInstall::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::Inactive


class SoftwareInstall::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

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

        ydk::YLeaf curr_inst_oper; //type: string

}; // SoftwareInstall::Request


class SoftwareInstall::Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

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

        class Stage; //type: SoftwareInstall::Issu::Stage
        class Inventory; //type: SoftwareInstall::Issu::Inventory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Stage> stage;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Inventory> inventory;
        
}; // SoftwareInstall::Issu


class SoftwareInstall::Issu::Stage : public ydk::Entity
{
    public:
        Stage();
        ~Stage();

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

        ydk::YLeaf state; //type: IsdStateEt
        ydk::YLeaf issu_node_cnt; //type: int32
        ydk::YLeaf issu_ready_node_cnt; //type: int32
        ydk::YLeaf percentage; //type: int32
        ydk::YLeaf issu_status; //type: IsdIssuStatusEt
        ydk::YLeaf issu_error; //type: IsdErrorEt

}; // SoftwareInstall::Issu::Stage


class SoftwareInstall::Issu::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Invinfo; //type: SoftwareInstall::Issu::Inventory::Invinfo

        ydk::YList invinfo;
        
}; // SoftwareInstall::Issu::Inventory


class SoftwareInstall::Issu::Inventory::Invinfo : public ydk::Entity
{
    public:
        Invinfo();
        ~Invinfo();

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

        ydk::YLeaf node_id; //type: int32
        ydk::YLeaf node_type; //type: CardTypeEt
        ydk::YLeaf issu_node_role; //type: IssuNodeRoleEt
        ydk::YLeaf node_state; //type: IssudirNodeStatusEt
        ydk::YLeaf node_role; //type: NodeRoleEt

}; // SoftwareInstall::Issu::Inventory::Invinfo


class SoftwareInstall::Committed : public ydk::Entity
{
    public:
        Committed();
        ~Committed();

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

        class CommittedPackageInfo; //type: SoftwareInstall::Committed::CommittedPackageInfo

        ydk::YList committed_package_info;
        
}; // SoftwareInstall::Committed


class SoftwareInstall::Committed::CommittedPackageInfo : public ydk::Entity
{
    public:
        CommittedPackageInfo();
        ~CommittedPackageInfo();

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

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_type; //type: string
        ydk::YLeaf boot_partition_name; //type: string
        ydk::YLeaf number_of_committed_packages; //type: uint32
        ydk::YLeaf committed_packages; //type: string

}; // SoftwareInstall::Committed::CommittedPackageInfo


class SoftwareInstall::AllOperationsLog : public ydk::Entity
{
    public:
        AllOperationsLog();
        ~AllOperationsLog();

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

        class Summary; //type: SoftwareInstall::AllOperationsLog::Summary
        class Detail; //type: SoftwareInstall::AllOperationsLog::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog::Detail> detail;
        
}; // SoftwareInstall::AllOperationsLog


class SoftwareInstall::AllOperationsLog::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::AllOperationsLog::Summary


class SoftwareInstall::AllOperationsLog::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::AllOperationsLog::Detail


class SoftwareInstall::Packages : public ydk::Entity
{
    public:
        Packages();
        ~Packages();

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

        class Package; //type: SoftwareInstall::Packages::Package

        ydk::YList package;
        
}; // SoftwareInstall::Packages


class SoftwareInstall::Packages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

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

        ydk::YLeaf package_name; //type: string
        class Verbose; //type: SoftwareInstall::Packages::Package::Verbose
        class Brief; //type: SoftwareInstall::Packages::Package::Brief
        class Detail; //type: SoftwareInstall::Packages::Package::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Verbose> verbose;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Detail> detail;
        
}; // SoftwareInstall::Packages::Package


class SoftwareInstall::Packages::Package::Verbose : public ydk::Entity
{
    public:
        Verbose();
        ~Verbose();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::Packages::Package::Verbose


class SoftwareInstall::Packages::Package::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::Packages::Package::Brief


class SoftwareInstall::Packages::Package::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::Packages::Package::Detail


class SoftwareInstall::OperationLogs : public ydk::Entity
{
    public:
        OperationLogs();
        ~OperationLogs();

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

        class OperationLog; //type: SoftwareInstall::OperationLogs::OperationLog

        ydk::YList operation_log;
        
}; // SoftwareInstall::OperationLogs


class SoftwareInstall::OperationLogs::OperationLog : public ydk::Entity
{
    public:
        OperationLog();
        ~OperationLog();

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

        ydk::YLeaf log_id; //type: uint32
        class Summary; //type: SoftwareInstall::OperationLogs::OperationLog::Summary
        class Detail; //type: SoftwareInstall::OperationLogs::OperationLog::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog::Detail> detail;
        
}; // SoftwareInstall::OperationLogs::OperationLog


class SoftwareInstall::OperationLogs::OperationLog::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::OperationLogs::OperationLog::Summary


class SoftwareInstall::OperationLogs::OperationLog::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::OperationLogs::OperationLog::Detail


class SoftwareInstall::Repository : public ydk::Entity
{
    public:
        Repository();
        ~Repository();

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

        class Xr; //type: SoftwareInstall::Repository::Xr
        class All; //type: SoftwareInstall::Repository::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository::Xr> xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository::All> all;
        
}; // SoftwareInstall::Repository


class SoftwareInstall::Repository::Xr : public ydk::Entity
{
    public:
        Xr();
        ~Xr();

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

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::Repository::Xr


class SoftwareInstall::Repository::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        ydk::YLeaf log; //type: string

}; // SoftwareInstall::Repository::All

class IsdErrorEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf not_compatible;
        static const ydk::Enum::YLeaf not_enough_resource;
        static const ydk::Enum::YLeaf not_nsr_ready;
        static const ydk::Enum::YLeaf not_conn_sdrsm;
        static const ydk::Enum::YLeaf cmd_invalid;
        static const ydk::Enum::YLeaf load_prep_fail;
        static const ydk::Enum::YLeaf error_timeout;
        static const ydk::Enum::YLeaf err_node_down;
        static const ydk::Enum::YLeaf node_not_ready;
        static const ydk::Enum::YLeaf err_node_new;
        static const ydk::Enum::YLeaf err_card_oir;
        static const ydk::Enum::YLeaf invalid_evt;
        static const ydk::Enum::YLeaf disconn_from_calv;
        static const ydk::Enum::YLeaf gsp_down;
        static const ydk::Enum::YLeaf abort_by_ism;
        static const ydk::Enum::YLeaf rpfo;
        static const ydk::Enum::YLeaf pkg_null;
        static const ydk::Enum::YLeaf error_general;
        static const ydk::Enum::YLeaf fsa_error;
        static const ydk::Enum::YLeaf err_post_issu;
        static const ydk::Enum::YLeaf err_issu_dir_restart;

};

class NodeRoleEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node_unknown;
        static const ydk::Enum::YLeaf node_active;
        static const ydk::Enum::YLeaf node_standby;
        static const ydk::Enum::YLeaf node_unusable;

};

class IsdStateEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf init_done;
        static const ydk::Enum::YLeaf load_prep;
        static const ydk::Enum::YLeaf load_exec;
        static const ydk::Enum::YLeaf load_issu_go;
        static const ydk::Enum::YLeaf load_done;
        static const ydk::Enum::YLeaf run_prep;
        static const ydk::Enum::YLeaf big_bang;
        static const ydk::Enum::YLeaf run_done;
        static const ydk::Enum::YLeaf cleanup;
        static const ydk::Enum::YLeaf cleanup_done;
        static const ydk::Enum::YLeaf abort;
        static const ydk::Enum::YLeaf abort_done;
        static const ydk::Enum::YLeaf abort_cleanup;
        static const ydk::Enum::YLeaf unknown_state;

};

class IsdIssuStatusEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf prep_done;
        static const ydk::Enum::YLeaf big_bang;
        static const ydk::Enum::YLeaf done;
        static const ydk::Enum::YLeaf abort;
        static const ydk::Enum::YLeaf cmd_reject;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf abort_cleanup;
        static const ydk::Enum::YLeaf abort_cmd_reject;

};

class IssudirNodeStatusEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_issu_ready;
        static const ydk::Enum::YLeaf issu_ready;
        static const ydk::Enum::YLeaf isus_go;
        static const ydk::Enum::YLeaf node_fail;

};

class IssuNodeRoleEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown_role;
        static const ydk::Enum::YLeaf primary_role;
        static const ydk::Enum::YLeaf secondary_role;
        static const ydk::Enum::YLeaf tertiary_role;

};

class CardTypeEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf card_rp;
        static const ydk::Enum::YLeaf card_drp;
        static const ydk::Enum::YLeaf card_lc;
        static const ydk::Enum::YLeaf card_sc;
        static const ydk::Enum::YLeaf card_sp;
        static const ydk::Enum::YLeaf card_other;

};


}
}

#endif /* _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_ */

