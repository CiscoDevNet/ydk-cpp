#ifndef _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_
#define _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_installmgr_admin_oper {

class Install : public ydk::Entity
{
    public:
        Install();
        ~Install();

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

        ydk::YLeaf log_size; //type: int32
        class ConfigurationRegisters; //type: Install::ConfigurationRegisters
        class RequestStatuses; //type: Install::RequestStatuses
        class BootVariables; //type: Install::BootVariables
        class Software; //type: Install::Software
        class SoftwareInventory; //type: Install::SoftwareInventory
        class Issu; //type: Install::Issu
        class BootImage; //type: Install::BootImage
        class Logs; //type: Install::Logs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::BootImage> boot_image;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::BootVariables> boot_variables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::ConfigurationRegisters> configuration_registers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs> logs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses> request_statuses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software> software;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory> software_inventory;
        
}; // Install


class Install::BootImage : public ydk::Entity
{
    public:
        BootImage();
        ~BootImage();

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

        ydk::YLeaf system_image_file; //type: string

}; // Install::BootImage


class Install::BootVariables : public ydk::Entity
{
    public:
        BootVariables();
        ~BootVariables();

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

        class BootVariable; //type: Install::BootVariables::BootVariable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::BootVariables::BootVariable> > boot_variable;
        
}; // Install::BootVariables


class Install::BootVariables::BootVariable : public ydk::Entity
{
    public:
        BootVariable();
        ~BootVariable();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf boot_variable; //type: string

}; // Install::BootVariables::BootVariable


class Install::ConfigurationRegisters : public ydk::Entity
{
    public:
        ConfigurationRegisters();
        ~ConfigurationRegisters();

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

        class ConfigurationRegister; //type: Install::ConfigurationRegisters::ConfigurationRegister

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::ConfigurationRegisters::ConfigurationRegister> > configuration_register;
        
}; // Install::ConfigurationRegisters


class Install::ConfigurationRegisters::ConfigurationRegister : public ydk::Entity
{
    public:
        ConfigurationRegister();
        ~ConfigurationRegister();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf config_register; //type: string

}; // Install::ConfigurationRegisters::ConfigurationRegister


class Install::Issu : public ydk::Entity
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

        class CardInventories; //type: Install::Issu::CardInventories
        class Stage; //type: Install::Issu::Stage

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories> card_inventories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage> stage;
        
}; // Install::Issu


class Install::Issu::CardInventories : public ydk::Entity
{
    public:
        CardInventories();
        ~CardInventories();

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

        class CardInventory; //type: Install::Issu::CardInventories::CardInventory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories::CardInventory> > card_inventory;
        
}; // Install::Issu::CardInventories


class Install::Issu::CardInventories::CardInventory : public ydk::Entity
{
    public:
        CardInventory();
        ~CardInventory();

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

        ydk::YLeaf card_type_id; //type: IsmCardTypeFamily
        class Summary; //type: Install::Issu::CardInventories::CardInventory::Summary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories::CardInventory::Summary> > summary;
        
}; // Install::Issu::CardInventories::CardInventory


class Install::Issu::CardInventories::CardInventory::Summary : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf partner_node_name; //type: string
        ydk::YLeaf node_state; //type: InstmgrCardState
        ydk::YLeaf node_role; //type: InstmgrNodeRole
        ydk::YLeaf node_type_pi; //type: InstmgrPiCard
        ydk::YLeaf node_type_issu; //type: string
        ydk::YLeaf node_current_state; //type: InstmgrIsmNodeState
        ydk::YLeaf node_expected_state; //type: InstmgrIsmNodeState
        ydk::YLeaf node_failure_reason; //type: string
        ydk::YLeaf is_conforming_node; //type: InstallmgrIsmNodeConforming
        ydk::YLeaf attempts; //type: uint32
        ydk::YLeaf is_node_upgraded; //type: boolean

}; // Install::Issu::CardInventories::CardInventory::Summary


class Install::Issu::Stage : public ydk::Entity
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

        ydk::YLeaf issu_state; //type: string
        ydk::YLeaf issu_op_id; //type: uint32
        ydk::YLeaf percentage; //type: uint32
        ydk::YLeaf is_issu_aborted; //type: boolean
        ydk::YLeaf is_issu_aborted_by_ism; //type: boolean
        ydk::YLeaf issu_manager_fsm_state; //type: InstmgrIsmFsmState
        ydk::YLeaf participating_node_all; //type: uint32
        ydk::YLeaf num_nodes_in_progress; //type: uint32
        ydk::YLeaf num_of_nodes_in_load; //type: uint32
        ydk::YLeaf num_of_nodes_in_run; //type: uint32
        ydk::YLeaf numof_nc_nodes; //type: uint32
        class NodeInProgress; //type: Install::Issu::Stage::NodeInProgress
        class NodesInLoad; //type: Install::Issu::Stage::NodesInLoad
        class NodesInRun; //type: Install::Issu::Stage::NodesInRun
        class NcNodes; //type: Install::Issu::Stage::NcNodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NcNodes> nc_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodeInProgress> node_in_progress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInLoad> nodes_in_load;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInRun> nodes_in_run;
        
}; // Install::Issu::Stage


class Install::Issu::Stage::NcNodes : public ydk::Entity
{
    public:
        NcNodes();
        ~NcNodes();

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

        ydk::YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NcNodes


class Install::Issu::Stage::NodeInProgress : public ydk::Entity
{
    public:
        NodeInProgress();
        ~NodeInProgress();

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

        ydk::YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NodeInProgress


class Install::Issu::Stage::NodesInLoad : public ydk::Entity
{
    public:
        NodesInLoad();
        ~NodesInLoad();

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

        ydk::YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NodesInLoad


class Install::Issu::Stage::NodesInRun : public ydk::Entity
{
    public:
        NodesInRun();
        ~NodesInRun();

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

        ydk::YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NodesInRun


class Install::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

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

        class Log; //type: Install::Logs::Log

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log> > log;
        
}; // Install::Logs


class Install::Logs::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf request_id; //type: int32
        class Header; //type: Install::Logs::Log::Header
        class Summary; //type: Install::Logs::Log::Summary
        class Message; //type: Install::Logs::Log::Message
        class Change; //type: Install::Logs::Log::Change
        class Detail; //type: Install::Logs::Log::Detail
        class Communication; //type: Install::Logs::Log::Communication

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change> > change;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication> > communication;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail> > detail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header> > header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message> > message;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary> > summary;
        
}; // Install::Logs::Log


class Install::Logs::Log::Change : public ydk::Entity
{
    public:
        Change();
        ~Change();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogContents; //type: Install::Logs::Log::Change::LogContents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents> log_contents;
        
}; // Install::Logs::Log::Change


class Install::Logs::Log::Change::LogContents : public ydk::Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Change::LogContents::V3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents::V3> v3;
        
}; // Install::Logs::Log::Change::LogContents


class Install::Logs::Log::Change::LogContents::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagLogEntryUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Change::LogContents::V3::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Change::LogContents::V3


class Install::Logs::Log::Change::LogContents::V3::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Change::LogContents::V3::Scope


class Install::Logs::Log::Communication : public ydk::Entity
{
    public:
        Communication();
        ~Communication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogContents; //type: Install::Logs::Log::Communication::LogContents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents> log_contents;
        
}; // Install::Logs::Log::Communication


class Install::Logs::Log::Communication::LogContents : public ydk::Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Communication::LogContents::V3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents::V3> v3;
        
}; // Install::Logs::Log::Communication::LogContents


class Install::Logs::Log::Communication::LogContents::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagLogEntryUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Communication::LogContents::V3::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Communication::LogContents::V3


class Install::Logs::Log::Communication::LogContents::V3::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Communication::LogContents::V3::Scope


class Install::Logs::Log::Detail : public ydk::Entity
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

        class LogContents; //type: Install::Logs::Log::Detail::LogContents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents> log_contents;
        
}; // Install::Logs::Log::Detail


class Install::Logs::Log::Detail::LogContents : public ydk::Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Detail::LogContents::V3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents::V3> v3;
        
}; // Install::Logs::Log::Detail::LogContents


class Install::Logs::Log::Detail::LogContents::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagLogEntryUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Detail::LogContents::V3::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Detail::LogContents::V3


class Install::Logs::Log::Detail::LogContents::V3::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Detail::LogContents::V3::Scope


class Install::Logs::Log::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogContents; //type: Install::Logs::Log::Header::LogContents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents> log_contents;
        
}; // Install::Logs::Log::Header


class Install::Logs::Log::Header::LogContents : public ydk::Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Header::LogContents::V3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents::V3> v3;
        
}; // Install::Logs::Log::Header::LogContents


class Install::Logs::Log::Header::LogContents::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagLogEntryUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Header::LogContents::V3::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Header::LogContents::V3


class Install::Logs::Log::Header::LogContents::V3::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Header::LogContents::V3::Scope


class Install::Logs::Log::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogContents; //type: Install::Logs::Log::Message::LogContents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents> log_contents;
        
}; // Install::Logs::Log::Message


class Install::Logs::Log::Message::LogContents : public ydk::Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Message::LogContents::V3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents::V3> v3;
        
}; // Install::Logs::Log::Message::LogContents


class Install::Logs::Log::Message::LogContents::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagLogEntryUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Message::LogContents::V3::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Message::LogContents::V3


class Install::Logs::Log::Message::LogContents::V3::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Message::LogContents::V3::Scope


class Install::Logs::Log::Summary : public ydk::Entity
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

        class LogContents; //type: Install::Logs::Log::Summary::LogContents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents> log_contents;
        
}; // Install::Logs::Log::Summary


class Install::Logs::Log::Summary::LogContents : public ydk::Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Summary::LogContents::V3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents::V3> v3;
        
}; // Install::Logs::Log::Summary::LogContents


class Install::Logs::Log::Summary::LogContents::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagLogEntryUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Summary::LogContents::V3::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Summary::LogContents::V3


class Install::Logs::Log::Summary::LogContents::V3::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Summary::LogContents::V3::Scope


class Install::RequestStatuses : public ydk::Entity
{
    public:
        RequestStatuses();
        ~RequestStatuses();

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

        class RequestStatus; //type: Install::RequestStatuses::RequestStatus

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus> > request_status;
        
}; // Install::RequestStatuses


class Install::RequestStatuses::RequestStatus : public ydk::Entity
{
    public:
        RequestStatus();
        ~RequestStatus();

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

        ydk::YLeaf request_id; //type: int32
        ydk::YLeaf percentage; //type: uint8
        ydk::YLeaf abort_state; //type: InstmgrBagAbortState
        ydk::YLeaf downloaded_bytes; //type: uint32
        ydk::YLeaf unanswered_query; //type: boolean
        ydk::YLeaf operation_phase; //type: InstmgrInstallPhase
        class RequestInformation; //type: Install::RequestStatuses::RequestStatus::RequestInformation
        class AbortStatus; //type: Install::RequestStatuses::RequestStatus::AbortStatus
        class IncrementalInstallInformation; //type: Install::RequestStatuses::RequestStatus::IncrementalInstallInformation
        class IssuMessage; //type: Install::RequestStatuses::RequestStatus::IssuMessage
        class Message; //type: Install::RequestStatuses::RequestStatus::Message

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::AbortStatus> abort_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IncrementalInstallInformation> incremental_install_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IssuMessage> > issu_message;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::Message> > message;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::RequestInformation> request_information;
        
}; // Install::RequestStatuses::RequestStatus


class Install::RequestStatuses::RequestStatus::AbortStatus : public ydk::Entity
{
    public:
        AbortStatus();
        ~AbortStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf abort_method; //type: InstmgrIssuAbortMethod
        ydk::YLeaf abort_impact; //type: InstmgrIssuAbortImpact

}; // Install::RequestStatuses::RequestStatus::AbortStatus


class Install::RequestStatuses::RequestStatus::IncrementalInstallInformation : public ydk::Entity
{
    public:
        IncrementalInstallInformation();
        ~IncrementalInstallInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: InstmgrBagIiDirection
        ydk::YLeaf ii_error; //type: string
        class Nodes; //type: Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes> > nodes;
        
}; // Install::RequestStatuses::RequestStatus::IncrementalInstallInformation


class Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf state; //type: InstmgrBagIiState

}; // Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes


class Install::RequestStatuses::RequestStatus::IssuMessage : public ydk::Entity
{
    public:
        IssuMessage();
        ~IssuMessage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::RequestStatuses::RequestStatus::IssuMessage::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IssuMessage::Scope> scope;
        
}; // Install::RequestStatuses::RequestStatus::IssuMessage


class Install::RequestStatuses::RequestStatus::IssuMessage::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::RequestStatuses::RequestStatus::IssuMessage::Scope


class Install::RequestStatuses::RequestStatus::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::RequestStatuses::RequestStatus::Message::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::Message::Scope> scope;
        
}; // Install::RequestStatuses::RequestStatus::Message


class Install::RequestStatuses::RequestStatus::Message::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::RequestStatuses::RequestStatus::Message::Scope


class Install::RequestStatuses::RequestStatus::RequestInformation : public ydk::Entity
{
    public:
        RequestInformation();
        ~RequestInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf user_id; //type: string
        ydk::YLeaf trigger_type; //type: InstmgrBagRequestTrigger
        ydk::YLeaf request_option; //type: int32
        ydk::YLeaf operation_type; //type: InstmgrRequest
        ydk::YLeaf operation_detail; //type: string

}; // Install::RequestStatuses::RequestStatus::RequestInformation


class Install::Software : public ydk::Entity
{
    public:
        Software();
        ~Software();

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

        class AliasDevices; //type: Install::Software::AliasDevices
        class PackageDevices; //type: Install::Software::PackageDevices
        class ComponentDevices; //type: Install::Software::ComponentDevices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices> alias_devices;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices> component_devices;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices> package_devices;
        
}; // Install::Software


class Install::Software::AliasDevices : public ydk::Entity
{
    public:
        AliasDevices();
        ~AliasDevices();

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

        class AliasDevice; //type: Install::Software::AliasDevices::AliasDevice

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice> > alias_device;
        
}; // Install::Software::AliasDevices


class Install::Software::AliasDevices::AliasDevice : public ydk::Entity
{
    public:
        AliasDevice();
        ~AliasDevice();

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

        ydk::YLeaf device_name; //type: string
        class Aliases; //type: Install::Software::AliasDevices::AliasDevice::Aliases

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice::Aliases> aliases;
        
}; // Install::Software::AliasDevices::AliasDevice


class Install::Software::AliasDevices::AliasDevice::Aliases : public ydk::Entity
{
    public:
        Aliases();
        ~Aliases();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Alias; //type: Install::Software::AliasDevices::AliasDevice::Aliases::Alias

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice::Aliases::Alias> > alias;
        
}; // Install::Software::AliasDevices::AliasDevice::Aliases


class Install::Software::AliasDevices::AliasDevice::Aliases::Alias : public ydk::Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf package_name; //type: string
        ydk::YLeaf alias_names; //type: string

}; // Install::Software::AliasDevices::AliasDevice::Aliases::Alias


class Install::Software::ComponentDevices : public ydk::Entity
{
    public:
        ComponentDevices();
        ~ComponentDevices();

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

        class ComponentDevice; //type: Install::Software::ComponentDevices::ComponentDevice

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice> > component_device;
        
}; // Install::Software::ComponentDevices


class Install::Software::ComponentDevices::ComponentDevice : public ydk::Entity
{
    public:
        ComponentDevice();
        ~ComponentDevice();

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

        ydk::YLeaf device_name; //type: string
        class ComponentPackages; //type: Install::Software::ComponentDevices::ComponentDevice::ComponentPackages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages> component_packages;
        
}; // Install::Software::ComponentDevices::ComponentDevice


class Install::Software::ComponentDevices::ComponentDevice::ComponentPackages : public ydk::Entity
{
    public:
        ComponentPackages();
        ~ComponentPackages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComponentPackage; //type: Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage> > component_package;
        
}; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages


class Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage : public ydk::Entity
{
    public:
        ComponentPackage();
        ~ComponentPackage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf package_name; //type: string
        class Component; //type: Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component> > component;
        
}; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage


class Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component : public ydk::Entity
{
    public:
        Component();
        ~Component();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf release; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeafList files; //type: list of  string

}; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component


class Install::Software::PackageDevices : public ydk::Entity
{
    public:
        PackageDevices();
        ~PackageDevices();

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

        class PackageDevice; //type: Install::Software::PackageDevices::PackageDevice

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice> > package_device;
        
}; // Install::Software::PackageDevices


class Install::Software::PackageDevices::PackageDevice : public ydk::Entity
{
    public:
        PackageDevice();
        ~PackageDevice();

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

        ydk::YLeaf device_name; //type: string
        class Packages; //type: Install::Software::PackageDevices::PackageDevice::Packages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages> packages;
        
}; // Install::Software::PackageDevices::PackageDevice


class Install::Software::PackageDevices::PackageDevice::Packages : public ydk::Entity
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

        class Package; //type: Install::Software::PackageDevices::PackageDevice::Packages::Package

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages::Package> > package;
        
}; // Install::Software::PackageDevices::PackageDevice::Packages


class Install::Software::PackageDevices::PackageDevice::Packages::Package : public ydk::Entity
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

        ydk::YLeaf package_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf release; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf date; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf base; //type: string
        ydk::YLeaf bootable; //type: boolean
        ydk::YLeaf composite; //type: boolean
        ydk::YLeaf restart_info; //type: string
        ydk::YLeaf package_type; //type: InstmgrPkg
        ydk::YLeaf group_type; //type: InstmgrGroup
        ydk::YLeaf depth; //type: uint32
        ydk::YLeaf uncompressed_size; //type: uint32
        ydk::YLeaf compressed_size; //type: uint32
        ydk::YLeafList cards; //type: list of  string
        class SubPkg; //type: Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg> > sub_pkg;
        
}; // Install::Software::PackageDevices::PackageDevice::Packages::Package


class Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg : public ydk::Entity
{
    public:
        SubPkg();
        ~SubPkg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf node_types; //type: uint64

}; // Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg


class Install::SoftwareInventory : public ydk::Entity
{
    public:
        SoftwareInventory();
        ~SoftwareInventory();

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

        class Committed; //type: Install::SoftwareInventory::Committed
        class Inactive; //type: Install::SoftwareInventory::Inactive
        class Requests; //type: Install::SoftwareInventory::Requests
        class Active; //type: Install::SoftwareInventory::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed> committed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests> requests;
        
}; // Install::SoftwareInventory


class Install::SoftwareInventory::Active : public ydk::Entity
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

        class Summary; //type: Install::SoftwareInventory::Active::Summary
        class Inventories; //type: Install::SoftwareInventory::Active::Inventories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories> inventories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary> summary;
        
}; // Install::SoftwareInventory::Active


class Install::SoftwareInventory::Active::Inventories : public ydk::Entity
{
    public:
        Inventories();
        ~Inventories();

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

        class Inventory; //type: Install::SoftwareInventory::Active::Inventories::Inventory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Active::Inventories


class Install::SoftwareInventory::Active::Inventories::Inventory : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf major; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Active::Inventories::Inventory


class Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package


class Install::SoftwareInventory::Active::Summary : public ydk::Entity
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

        class DefaultLoadPath; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath
        class AdminLoadPath; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath
        class SdrLoadPath; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath
        class LocationLoadPath; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath> admin_load_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath> default_load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath> > location_load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath> > sdr_load_path;
        
}; // Install::SoftwareInventory::Active::Summary


class Install::SoftwareInventory::Active::Summary::AdminLoadPath : public ydk::Entity
{
    public:
        AdminLoadPath();
        ~AdminLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath : public ydk::Entity
{
    public:
        DefaultLoadPath();
        ~DefaultLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf admin_match; //type: boolean
        ydk::YLeafList secure_domain_router_name; //type: list of  string
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Active::Summary::LocationLoadPath : public ydk::Entity
{
    public:
        LocationLoadPath();
        ~LocationLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf secure_domain_router_name; //type: string
        ydk::YLeaf node_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Active::Summary::SdrLoadPath : public ydk::Entity
{
    public:
        SdrLoadPath();
        ~SdrLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed : public ydk::Entity
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

        class Summary; //type: Install::SoftwareInventory::Committed::Summary
        class Inventories; //type: Install::SoftwareInventory::Committed::Inventories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories> inventories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary> summary;
        
}; // Install::SoftwareInventory::Committed


class Install::SoftwareInventory::Committed::Inventories : public ydk::Entity
{
    public:
        Inventories();
        ~Inventories();

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

        class Inventory; //type: Install::SoftwareInventory::Committed::Inventories::Inventory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Committed::Inventories


class Install::SoftwareInventory::Committed::Inventories::Inventory : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf major; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Committed::Inventories::Inventory


class Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary : public ydk::Entity
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

        class DefaultLoadPath; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath
        class AdminLoadPath; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath
        class SdrLoadPath; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath
        class LocationLoadPath; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath> admin_load_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath> default_load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath> > location_load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath> > sdr_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath : public ydk::Entity
{
    public:
        AdminLoadPath();
        ~AdminLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath : public ydk::Entity
{
    public:
        DefaultLoadPath();
        ~DefaultLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf admin_match; //type: boolean
        ydk::YLeafList secure_domain_router_name; //type: list of  string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath : public ydk::Entity
{
    public:
        LocationLoadPath();
        ~LocationLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf secure_domain_router_name; //type: string
        ydk::YLeaf node_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath : public ydk::Entity
{
    public:
        SdrLoadPath();
        ~SdrLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive : public ydk::Entity
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

        class Summary; //type: Install::SoftwareInventory::Inactive::Summary
        class Inventories; //type: Install::SoftwareInventory::Inactive::Inventories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories> inventories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary> summary;
        
}; // Install::SoftwareInventory::Inactive


class Install::SoftwareInventory::Inactive::Inventories : public ydk::Entity
{
    public:
        Inventories();
        ~Inventories();

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

        class Inventory; //type: Install::SoftwareInventory::Inactive::Inventories::Inventory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Inactive::Inventories


class Install::SoftwareInventory::Inactive::Inventories::Inventory : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf major; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Inactive::Inventories::Inventory


class Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary : public ydk::Entity
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

        class DefaultLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath
        class AdminLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath
        class SdrLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath
        class LocationLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath> admin_load_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath> default_load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath> > location_load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath> > sdr_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath : public ydk::Entity
{
    public:
        AdminLoadPath();
        ~AdminLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath : public ydk::Entity
{
    public:
        DefaultLoadPath();
        ~DefaultLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf admin_match; //type: boolean
        ydk::YLeafList secure_domain_router_name; //type: list of  string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath : public ydk::Entity
{
    public:
        LocationLoadPath();
        ~LocationLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf secure_domain_router_name; //type: string
        ydk::YLeaf node_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath : public ydk::Entity
{
    public:
        SdrLoadPath();
        ~SdrLoadPath();

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

        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath : public ydk::Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

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

        class Requests_; //type: Install::SoftwareInventory::Requests::Requests_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_> requests;
        
}; // Install::SoftwareInventory::Requests


class Install::SoftwareInventory::Requests::Requests_ : public ydk::Entity
{
    public:
        Requests_();
        ~Requests_();

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

        class Request; //type: Install::SoftwareInventory::Requests::Requests_::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request> > request;
        
}; // Install::SoftwareInventory::Requests::Requests_


class Install::SoftwareInventory::Requests::Requests_::Request : public ydk::Entity
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

        ydk::YLeaf request_id; //type: int32
        class Inventories; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories> inventories;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories : public ydk::Entity
{
    public:
        Inventories();
        ~Inventories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inventory; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf major; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package : public ydk::Entity
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

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package

class InstmgrRequest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf clean;
        static const ydk::Enum::YLeaf activate;
        static const ydk::Enum::YLeaf deactivate;
        static const ydk::Enum::YLeaf commit;
        static const ydk::Enum::YLeaf verify;
        static const ydk::Enum::YLeaf rollback;
        static const ydk::Enum::YLeaf clear_rollback;
        static const ydk::Enum::YLeaf clear_log;
        static const ydk::Enum::YLeaf health_check;
        static const ydk::Enum::YLeaf operation_;
        static const ydk::Enum::YLeaf stop_timer;
        static const ydk::Enum::YLeaf label;
        static const ydk::Enum::YLeaf clear_label;
        static const ydk::Enum::YLeaf extend;

};

class InstmgrBagIiDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_incremental;
        static const ydk::Enum::YLeaf installing;
        static const ydk::Enum::YLeaf unwinding;

};

class InstmgrBagLogEntryUserMsgCategory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf user_error;
        static const ydk::Enum::YLeaf non_specific;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf user_prompt;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf system_error;
        static const ydk::Enum::YLeaf user_response;

};

class InstmgrIsmNodeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf issu_node_gsp_ready;
        static const ydk::Enum::YLeaf load_shut_done;
        static const ydk::Enum::YLeaf standby_management_upgrade_done;
        static const ydk::Enum::YLeaf fabric_upgrade_done;
        static const ydk::Enum::YLeaf imdr_preparation_ack_received;
        static const ydk::Enum::YLeaf imdr_preparation_failed;
        static const ydk::Enum::YLeaf imdr_start_ack_received;
        static const ydk::Enum::YLeaf imdr_start_failed;
        static const ydk::Enum::YLeaf imdr_complete_ack_received;
        static const ydk::Enum::YLeaf imdr_complete_failed;
        static const ydk::Enum::YLeaf standby_management_ready;
        static const ydk::Enum::YLeaf fo_acknowledged;
        static const ydk::Enum::YLeaf fo_complete;
        static const ydk::Enum::YLeaf standby_ready_after_fo;
        static const ydk::Enum::YLeaf iam_ready_afteri_mdr;
        static const ydk::Enum::YLeaf nsf_ready;
        static const ydk::Enum::YLeaf nsf_begin_ack_received;
        static const ydk::Enum::YLeaf imdr_done;
        static const ydk::Enum::YLeaf unshut_done;
        static const ydk::Enum::YLeaf run_done;
        static const ydk::Enum::YLeaf imdr_abort_sent;
        static const ydk::Enum::YLeaf imdr_abort_ack_received;
        static const ydk::Enum::YLeaf imdr_abort_failed;
        static const ydk::Enum::YLeaf standby_management_downgrade_done;
        static const ydk::Enum::YLeaf fabric_downgrade_done;
        static const ydk::Enum::YLeaf reload_during_issu;
        static const ydk::Enum::YLeaf timneout;
        static const ydk::Enum::YLeaf fabric_upgrade_failed;
        static const ydk::Enum::YLeaf unsupported_hw;
        static const ydk::Enum::YLeaf not_reachable;
        static const ydk::Enum::YLeaf max;

};

class InstmgrBagIiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf in_progress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf rebooted;

};

class InstmgrPiCard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type_rp;
        static const ydk::Enum::YLeaf type_drp;
        static const ydk::Enum::YLeaf type_lc;
        static const ydk::Enum::YLeaf type_sc;
        static const ydk::Enum::YLeaf type_sp;
        static const ydk::Enum::YLeaf type_other;

};

class InstmgrGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inst_pkg_group_undefined;
        static const ydk::Enum::YLeaf inst_pkg_group_grouped;
        static const ydk::Enum::YLeaf inst_pkg_group_individual;

};

class IsmCardTypeFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ndsc_active_rp;
        static const ydk::Enum::YLeaf ndsc_standby_rp;
        static const ydk::Enum::YLeaf active_drp;
        static const ydk::Enum::YLeaf standby_drp;
        static const ydk::Enum::YLeaf dsc_active_rp;
        static const ydk::Enum::YLeaf dsc_standby_rp;
        static const ydk::Enum::YLeaf active_sc;
        static const ydk::Enum::YLeaf standby_sc;
        static const ydk::Enum::YLeaf root_active_sc;
        static const ydk::Enum::YLeaf root_standby_sc;
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf sp;
        static const ydk::Enum::YLeaf fabric_sp;
        static const ydk::Enum::YLeaf spa;

};

class InstmgrBagUserMsgCategory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf user_error;
        static const ydk::Enum::YLeaf non_specific;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf user_prompt;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf system_error;
        static const ydk::Enum::YLeaf user_response;

};

class InstmgrIssuAbortMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf method_undefined;
        static const ydk::Enum::YLeaf method_no_operation;
        static const ydk::Enum::YLeaf method_standby_reload;
        static const ydk::Enum::YLeaf method_system_reload;
        static const ydk::Enum::YLeaf method_rollback;
        static const ydk::Enum::YLeaf method_not_possible;
        static const ydk::Enum::YLeaf method_admin_only;

};

class InstmgrIsmFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf init_done;
        static const ydk::Enum::YLeaf load_shut;
        static const ydk::Enum::YLeaf load_wait;
        static const ydk::Enum::YLeaf load_stp_root_before;
        static const ydk::Enum::YLeaf load_standby_root_sc_upgrade;
        static const ydk::Enum::YLeaf load_standby_management_upgrade;
        static const ydk::Enum::YLeaf load_stp_root_after;
        static const ydk::Enum::YLeaf load_fabric_upgrade;
        static const ydk::Enum::YLeaf load_management_issu_ready;
        static const ydk::Enum::YLeaf load_done;
        static const ydk::Enum::YLeaf run_prep;
        static const ydk::Enum::YLeaf run_wait;
        static const ydk::Enum::YLeaf runi_mdr_prep;
        static const ydk::Enum::YLeaf runi_mdr_start;
        static const ydk::Enum::YLeaf runi_mdr_complete;
        static const ydk::Enum::YLeaf run_make_standby_ready;
        static const ydk::Enum::YLeaf run_root_scfo;
        static const ydk::Enum::YLeaf run_ndscfo;
        static const ydk::Enum::YLeaf run_transient1;
        static const ydk::Enum::YLeaf run_dscfo;
        static const ydk::Enum::YLeaf run_fo_complete;
        static const ydk::Enum::YLeaf run_stp_root_return;
        static const ydk::Enum::YLeaf runi_mdr_continue;
        static const ydk::Enum::YLeaf run_am_i_ready_afteri_mdr;
        static const ydk::Enum::YLeaf run_nsf_ready;
        static const ydk::Enum::YLeaf run_nsf_begin;
        static const ydk::Enum::YLeaf runi_mdr_done;
        static const ydk::Enum::YLeaf run_management_issu_ready;
        static const ydk::Enum::YLeaf run_un_shut;
        static const ydk::Enum::YLeaf run_is_done;
        static const ydk::Enum::YLeaf state_max;

};

class InstmgrIssuAbortImpact : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf hitless;
        static const ydk::Enum::YLeaf traffic_outage;
        static const ydk::Enum::YLeaf not_applicable;

};

class InstmgrCardState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf instmgr_card_not_present;
        static const ydk::Enum::YLeaf instmgr_card_present;
        static const ydk::Enum::YLeaf instmgr_card_reset;
        static const ydk::Enum::YLeaf instmgr_card_booting;
        static const ydk::Enum::YLeaf instmgr_card_mbi_booting;
        static const ydk::Enum::YLeaf instmgr_card_running_mbi;
        static const ydk::Enum::YLeaf instmgr_card_running_ena;
        static const ydk::Enum::YLeaf instmgr_card_bring_down;
        static const ydk::Enum::YLeaf instmgr_card_ena_failure;
        static const ydk::Enum::YLeaf instmgr_card_f_diag_run;
        static const ydk::Enum::YLeaf instmgr_card_f_diag_failure;
        static const ydk::Enum::YLeaf instmgr_card_powered;
        static const ydk::Enum::YLeaf instmgr_card_unpowered;
        static const ydk::Enum::YLeaf instmgr_card_mdr;
        static const ydk::Enum::YLeaf instmgr_card_mdr_running_mbi;
        static const ydk::Enum::YLeaf instmgr_card_main_t_mode;
        static const ydk::Enum::YLeaf instmgr_card_admin_down;
        static const ydk::Enum::YLeaf instmgr_card_no_mon;
        static const ydk::Enum::YLeaf instmgr_card_unknown;
        static const ydk::Enum::YLeaf instmgr_card_failed;
        static const ydk::Enum::YLeaf instmgr_card_ok;
        static const ydk::Enum::YLeaf instmgr_card_missing;
        static const ydk::Enum::YLeaf instmgr_card_field_diag_downloading;
        static const ydk::Enum::YLeaf instmgr_card_field_diag_unmonitor;
        static const ydk::Enum::YLeaf instmgr_card_fabric_field_diag_unmonitor;
        static const ydk::Enum::YLeaf instmgr_card_field_diag_rp_launching;
        static const ydk::Enum::YLeaf instmgr_card_field_diag_running;
        static const ydk::Enum::YLeaf instmgr_card_field_diag_pass;
        static const ydk::Enum::YLeaf instmgr_card_field_diag_fail;
        static const ydk::Enum::YLeaf instmgr_card_field_diag_timeout;
        static const ydk::Enum::YLeaf instmgr_card_disabled;
        static const ydk::Enum::YLeaf instmgr_card_spa_booting;
        static const ydk::Enum::YLeaf instmgr_card_not_allowed_online;
        static const ydk::Enum::YLeaf instmgr_card_stopped;
        static const ydk::Enum::YLeaf instmgr_card_incompatible_fw_ver;
        static const ydk::Enum::YLeaf instmgr_card_fpd_hold;
        static const ydk::Enum::YLeaf instmgr_card_updating_fpd;
        static const ydk::Enum::YLeaf instmgr_card_num_states;

};

class InstmgrPkg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inst_pkg_type_undefined;
        static const ydk::Enum::YLeaf inst_pkg_type_root;
        static const ydk::Enum::YLeaf inst_pkg_type_standard;
        static const ydk::Enum::YLeaf inst_pkg_type_internal;

};

class InstmgrBagAbortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf abortable;
        static const ydk::Enum::YLeaf no_longer_abortable;
        static const ydk::Enum::YLeaf never_abortable;
        static const ydk::Enum::YLeaf already_aborted;

};

class InstmgrBagRequestTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf xr_xml;

};

class InstmgrNodeRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf redundency_unknown;
        static const ydk::Enum::YLeaf redundency_active;
        static const ydk::Enum::YLeaf redundency_standby;
        static const ydk::Enum::YLeaf redundency_unusable;

};

class InstallmgrIsmNodeConforming : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf conforming;
        static const ydk::Enum::YLeaf none_conforming;
        static const ydk::Enum::YLeaf upgrade_fail;
        static const ydk::Enum::YLeaf none_conforming_spa;
        static const ydk::Enum::YLeaf spa_upgrade_fail;

};

class InstmgrInstallPhase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inst_phase_unknown;
        static const ydk::Enum::YLeaf inst_phase_download;
        static const ydk::Enum::YLeaf inst_phase_sw_change;
        static const ydk::Enum::YLeaf inst_phase_cleaning_up;

};


}
}

#endif /* _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_ */

