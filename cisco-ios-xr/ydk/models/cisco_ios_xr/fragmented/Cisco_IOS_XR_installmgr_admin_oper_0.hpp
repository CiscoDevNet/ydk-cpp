#ifndef _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_0_
#define _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_0_

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

        ydk::YLeaf log_size; //type: uint32
        class ConfigurationRegisters; //type: Install::ConfigurationRegisters
        class RequestStatuses; //type: Install::RequestStatuses
        class BootVariables; //type: Install::BootVariables
        class Software; //type: Install::Software
        class SoftwareInventory; //type: Install::SoftwareInventory
        class Issu; //type: Install::Issu
        class BootImage; //type: Install::BootImage
        class Logs; //type: Install::Logs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::ConfigurationRegisters> configuration_registers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses> request_statuses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::BootVariables> boot_variables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software> software;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory> software_inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::BootImage> boot_image;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs> logs;
        
}; // Install


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

        ydk::YList configuration_register;
        
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

        ydk::YList request_status;
        
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

        ydk::YLeaf request_id; //type: uint32
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::RequestInformation> request_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::AbortStatus> abort_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IncrementalInstallInformation> incremental_install_information;
        ydk::YList issu_message;
        ydk::YList message;
        
}; // Install::RequestStatuses::RequestStatus


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

        ydk::YList nodes;
        
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

        ydk::YList boot_variable;
        
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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices> package_devices;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices> component_devices;
        
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

        ydk::YList alias_device;
        
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

        ydk::YList alias;
        
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

        ydk::YList package_device;
        
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

        ydk::YList package;
        
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

        ydk::YList sub_pkg;
        
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

        ydk::YList component_device;
        
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

        ydk::YList component_package;
        
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

        ydk::YList component;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed> committed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active> active;
        
}; // Install::SoftwareInventory


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories> inventories;
        
}; // Install::SoftwareInventory::Committed


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath> default_load_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath> admin_load_path;
        ydk::YList sdr_load_path;
        ydk::YList location_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary


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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList inventory;
        
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
        ydk::YLeaf major_; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath

        ydk::YList load_path;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories> inventories;
        
}; // Install::SoftwareInventory::Inactive


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath> default_load_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath> admin_load_path;
        ydk::YList sdr_load_path;
        ydk::YList location_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary


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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList inventory;
        
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
        ydk::YLeaf major_; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath

        ydk::YList load_path;
        
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

        ydk::YList request;
        
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

        ydk::YLeaf request_id; //type: uint32
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

        ydk::YList inventory;
        
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
        ydk::YLeaf major_; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath

        ydk::YList load_path;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories> inventories;
        
}; // Install::SoftwareInventory::Active


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath> default_load_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath> admin_load_path;
        ydk::YList sdr_load_path;
        ydk::YList location_load_path;
        
}; // Install::SoftwareInventory::Active::Summary


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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList load_path;
        ydk::YList standby_load_path;
        
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

        ydk::YList inventory;
        
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
        ydk::YLeaf major_; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf boot_image_name; //type: string
        ydk::YLeaf node_type; //type: uint64
        ydk::YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath

        ydk::YList load_path;
        
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

        ydk::YList card_inventory;
        
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

        ydk::YList summary;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodeInProgress> node_in_progress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInLoad> nodes_in_load;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInRun> nodes_in_run;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NcNodes> nc_nodes;
        
}; // Install::Issu::Stage


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

        ydk::YList log;
        
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

        ydk::YLeaf request_id; //type: uint32
        class Header; //type: Install::Logs::Log::Header
        class Summary; //type: Install::Logs::Log::Summary
        class Message; //type: Install::Logs::Log::Message
        class Change; //type: Install::Logs::Log::Change
        class Detail; //type: Install::Logs::Log::Detail
        class Communication; //type: Install::Logs::Log::Communication

        ydk::YList header;
        ydk::YList summary;
        ydk::YList message;
        ydk::YList change;
        ydk::YList detail;
        ydk::YList communication;
        
}; // Install::Logs::Log


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

        static int get_enum_value(const std::string & name) {
            if (name == "method-undefined") return 0;
            if (name == "method-no-operation") return 1;
            if (name == "method-standby-reload") return 2;
            if (name == "method-system-reload") return 3;
            if (name == "method-rollback") return 4;
            if (name == "method-not-possible") return 5;
            if (name == "method-admin-only") return 6;
            return -1;
        }
};

class InstmgrBagRequestTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf xr_xml;

        static int get_enum_value(const std::string & name) {
            if (name == "cli") return 1;
            if (name == "xr-xml") return 2;
            return -1;
        }
};

class InstmgrGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inst_pkg_group_undefined;
        static const ydk::Enum::YLeaf inst_pkg_group_grouped;
        static const ydk::Enum::YLeaf inst_pkg_group_individual;

        static int get_enum_value(const std::string & name) {
            if (name == "inst-pkg-group-undefined") return 0;
            if (name == "inst-pkg-group-grouped") return 1;
            if (name == "inst-pkg-group-individual") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "ndsc-active-rp") return 1;
            if (name == "ndsc-standby-rp") return 2;
            if (name == "active-drp") return 3;
            if (name == "standby-drp") return 4;
            if (name == "dsc-active-rp") return 5;
            if (name == "dsc-standby-rp") return 6;
            if (name == "active-sc") return 7;
            if (name == "standby-sc") return 8;
            if (name == "root-active-sc") return 9;
            if (name == "root-standby-sc") return 10;
            if (name == "lc") return 11;
            if (name == "sp") return 12;
            if (name == "fabric-sp") return 13;
            if (name == "spa") return 14;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "user-error") return 1;
            if (name == "non-specific") return 2;
            if (name == "warning") return 3;
            if (name == "information") return 4;
            if (name == "user-prompt") return 5;
            if (name == "log") return 6;
            if (name == "system-error") return 7;
            if (name == "user-response") return 8;
            return -1;
        }
};

class InstallmgrIsmNodeConforming : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf conforming;
        static const ydk::Enum::YLeaf none_conforming;
        static const ydk::Enum::YLeaf upgrade_fail;
        static const ydk::Enum::YLeaf none_conforming_spa;
        static const ydk::Enum::YLeaf spa_upgrade_fail;

        static int get_enum_value(const std::string & name) {
            if (name == "conforming") return 0;
            if (name == "none-conforming") return 1;
            if (name == "upgrade-fail") return 2;
            if (name == "none-conforming-spa") return 3;
            if (name == "spa-upgrade-fail") return 4;
            return -1;
        }
};

class InstmgrInstallPhase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inst_phase_unknown;
        static const ydk::Enum::YLeaf inst_phase_download;
        static const ydk::Enum::YLeaf inst_phase_sw_change;
        static const ydk::Enum::YLeaf inst_phase_cleaning_up;

        static int get_enum_value(const std::string & name) {
            if (name == "inst-phase-unknown") return 0;
            if (name == "inst-phase-download") return 10;
            if (name == "inst-phase-sw-change") return 50;
            if (name == "inst-phase-cleaning-up") return 1000;
            return -1;
        }
};

class InstmgrIssuAbortImpact : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf hitless;
        static const ydk::Enum::YLeaf traffic_outage;
        static const ydk::Enum::YLeaf not_applicable;

        static int get_enum_value(const std::string & name) {
            if (name == "undefined") return 0;
            if (name == "hitless") return 1;
            if (name == "traffic-outage") return 2;
            if (name == "not-applicable") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "issu-node-gsp-ready") return 1;
            if (name == "load-shut-done") return 2;
            if (name == "standby-management-upgrade-done") return 3;
            if (name == "fabric-upgrade-done") return 4;
            if (name == "imdr-preparation-ack-received") return 5;
            if (name == "imdr-preparation-failed") return 6;
            if (name == "imdr-start-ack-received") return 7;
            if (name == "imdr-start-failed") return 8;
            if (name == "imdr-complete-ack-received") return 9;
            if (name == "imdr-complete-failed") return 10;
            if (name == "standby-management-ready") return 11;
            if (name == "fo-acknowledged") return 12;
            if (name == "fo-complete") return 13;
            if (name == "standby-ready-after-fo") return 14;
            if (name == "iam-ready-afteri-mdr") return 15;
            if (name == "nsf-ready") return 16;
            if (name == "nsf-begin-ack-received") return 17;
            if (name == "imdr-done") return 18;
            if (name == "unshut-done") return 19;
            if (name == "run-done") return 20;
            if (name == "imdr-abort-sent") return 21;
            if (name == "imdr-abort-ack-received") return 22;
            if (name == "imdr-abort-failed") return 23;
            if (name == "standby-management-downgrade-done") return 24;
            if (name == "fabric-downgrade-done") return 25;
            if (name == "reload-during-issu") return 26;
            if (name == "timneout") return 27;
            if (name == "fabric-upgrade-failed") return 28;
            if (name == "unsupported-hw") return 29;
            if (name == "not-reachable") return 30;
            if (name == "max") return 32;
            return -1;
        }
};

class InstmgrPkg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inst_pkg_type_undefined;
        static const ydk::Enum::YLeaf inst_pkg_type_root;
        static const ydk::Enum::YLeaf inst_pkg_type_standard;
        static const ydk::Enum::YLeaf inst_pkg_type_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "inst-pkg-type-undefined") return 0;
            if (name == "inst-pkg-type-root") return 1;
            if (name == "inst-pkg-type-standard") return 2;
            if (name == "inst-pkg-type-internal") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "instmgr-card-not-present") return 0;
            if (name == "instmgr-card-present") return 1;
            if (name == "instmgr-card-reset") return 2;
            if (name == "instmgr-card-booting") return 3;
            if (name == "instmgr-card-mbi-booting") return 4;
            if (name == "instmgr-card-running-mbi") return 5;
            if (name == "instmgr-card-running-ena") return 6;
            if (name == "instmgr-card-bring-down") return 7;
            if (name == "instmgr-card-ena-failure") return 8;
            if (name == "instmgr-card-f-diag-run") return 9;
            if (name == "instmgr-card-f-diag-failure") return 10;
            if (name == "instmgr-card-powered") return 11;
            if (name == "instmgr-card-unpowered") return 12;
            if (name == "instmgr-card-mdr") return 13;
            if (name == "instmgr-card-mdr-running-mbi") return 14;
            if (name == "instmgr-card-main-t-mode") return 15;
            if (name == "instmgr-card-admin-down") return 16;
            if (name == "instmgr-card-no-mon") return 17;
            if (name == "instmgr-card-unknown") return 18;
            if (name == "instmgr-card-failed") return 19;
            if (name == "instmgr-card-ok") return 20;
            if (name == "instmgr-card-missing") return 21;
            if (name == "instmgr-card-field-diag-downloading") return 22;
            if (name == "instmgr-card-field-diag-unmonitor") return 23;
            if (name == "instmgr-card-fabric-field-diag-unmonitor") return 24;
            if (name == "instmgr-card-field-diag-rp-launching") return 25;
            if (name == "instmgr-card-field-diag-running") return 26;
            if (name == "instmgr-card-field-diag-pass") return 27;
            if (name == "instmgr-card-field-diag-fail") return 28;
            if (name == "instmgr-card-field-diag-timeout") return 29;
            if (name == "instmgr-card-disabled") return 30;
            if (name == "instmgr-card-spa-booting") return 31;
            if (name == "instmgr-card-not-allowed-online") return 32;
            if (name == "instmgr-card-stopped") return 33;
            if (name == "instmgr-card-incompatible-fw-ver") return 34;
            if (name == "instmgr-card-fpd-hold") return 35;
            if (name == "instmgr-card-updating-fpd") return 37;
            if (name == "instmgr-card-num-states") return 38;
            return -1;
        }
};

class InstmgrNodeRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf redundency_unknown;
        static const ydk::Enum::YLeaf redundency_active;
        static const ydk::Enum::YLeaf redundency_standby;
        static const ydk::Enum::YLeaf redundency_unusable;

        static int get_enum_value(const std::string & name) {
            if (name == "redundency-unknown") return 0;
            if (name == "redundency-active") return 1;
            if (name == "redundency-standby") return 2;
            if (name == "redundency-unusable") return 3;
            return -1;
        }
};

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

        static int get_enum_value(const std::string & name) {
            if (name == "add") return 1;
            if (name == "accept") return 2;
            if (name == "clean") return 3;
            if (name == "activate") return 4;
            if (name == "deactivate") return 5;
            if (name == "commit") return 6;
            if (name == "verify") return 7;
            if (name == "rollback") return 8;
            if (name == "clear-rollback") return 9;
            if (name == "clear-log") return 10;
            if (name == "health-check") return 11;
            if (name == "operation") return 12;
            if (name == "stop-timer") return 13;
            if (name == "label") return 14;
            if (name == "clear-label") return 15;
            if (name == "extend") return 16;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 0;
            if (name == "init-done") return 1;
            if (name == "load-shut") return 2;
            if (name == "load-wait") return 3;
            if (name == "load-stp-root-before") return 4;
            if (name == "load-standby-root-sc-upgrade") return 5;
            if (name == "load-standby-management-upgrade") return 6;
            if (name == "load-stp-root-after") return 7;
            if (name == "load-fabric-upgrade") return 8;
            if (name == "load-management-issu-ready") return 9;
            if (name == "load-done") return 10;
            if (name == "run-prep") return 11;
            if (name == "run-wait") return 12;
            if (name == "runi-mdr-prep") return 13;
            if (name == "runi-mdr-start") return 14;
            if (name == "runi-mdr-complete") return 15;
            if (name == "run-make-standby-ready") return 16;
            if (name == "run-root-scfo") return 17;
            if (name == "run-ndscfo") return 18;
            if (name == "run-transient1") return 19;
            if (name == "run-dscfo") return 20;
            if (name == "run-fo-complete") return 21;
            if (name == "run-stp-root-return") return 22;
            if (name == "runi-mdr-continue") return 23;
            if (name == "run-am-i-ready-afteri-mdr") return 24;
            if (name == "run-nsf-ready") return 25;
            if (name == "run-nsf-begin") return 26;
            if (name == "runi-mdr-done") return 27;
            if (name == "run-management-issu-ready") return 28;
            if (name == "run-un-shut") return 29;
            if (name == "run-is-done") return 30;
            if (name == "state-max") return 31;
            return -1;
        }
};

class InstmgrBagIiDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_incremental;
        static const ydk::Enum::YLeaf installing;
        static const ydk::Enum::YLeaf unwinding;

        static int get_enum_value(const std::string & name) {
            if (name == "not-incremental") return 0;
            if (name == "installing") return 1;
            if (name == "unwinding") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "type-rp") return 0;
            if (name == "type-drp") return 1;
            if (name == "type-lc") return 2;
            if (name == "type-sc") return 3;
            if (name == "type-sp") return 4;
            if (name == "type-other") return 5;
            return -1;
        }
};

class InstmgrBagIiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf in_progress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf rebooted;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 1;
            if (name == "in-progress") return 2;
            if (name == "completed") return 3;
            if (name == "aborted") return 4;
            if (name == "rebooted") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "user-error") return 1;
            if (name == "non-specific") return 2;
            if (name == "warning") return 3;
            if (name == "information") return 4;
            if (name == "user-prompt") return 5;
            if (name == "log") return 6;
            if (name == "system-error") return 7;
            if (name == "user-response") return 8;
            return -1;
        }
};

class InstmgrBagAbortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf abortable;
        static const ydk::Enum::YLeaf no_longer_abortable;
        static const ydk::Enum::YLeaf never_abortable;
        static const ydk::Enum::YLeaf already_aborted;

        static int get_enum_value(const std::string & name) {
            if (name == "abortable") return 1;
            if (name == "no-longer-abortable") return 2;
            if (name == "never-abortable") return 3;
            if (name == "already-aborted") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_0_ */

