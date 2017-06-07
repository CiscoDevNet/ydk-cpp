#ifndef _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_0_
#define _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_installmgr_admin_oper {

class Install : public Entity
{
    public:
        Install();
        ~Install();

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

        YLeaf log_size; //type: int32
        class ConfigurationRegisters; //type: Install::ConfigurationRegisters
        class RequestStatuses; //type: Install::RequestStatuses
        class BootVariables; //type: Install::BootVariables
        class Software; //type: Install::Software
        class SoftwareInventory; //type: Install::SoftwareInventory
        class Issu; //type: Install::Issu
        class BootImage; //type: Install::BootImage
        class Logs; //type: Install::Logs

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::BootImage> boot_image;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::BootVariables> boot_variables;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::ConfigurationRegisters> configuration_registers;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs> logs;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses> request_statuses;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software> software;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory> software_inventory;
        
}; // Install


class Install::ConfigurationRegisters : public Entity
{
    public:
        ConfigurationRegisters();
        ~ConfigurationRegisters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConfigurationRegister; //type: Install::ConfigurationRegisters::ConfigurationRegister

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::ConfigurationRegisters::ConfigurationRegister> > configuration_register;
        
}; // Install::ConfigurationRegisters


class Install::ConfigurationRegisters::ConfigurationRegister : public Entity
{
    public:
        ConfigurationRegister();
        ~ConfigurationRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf config_register; //type: string

}; // Install::ConfigurationRegisters::ConfigurationRegister


class Install::RequestStatuses : public Entity
{
    public:
        RequestStatuses();
        ~RequestStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RequestStatus; //type: Install::RequestStatuses::RequestStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus> > request_status;
        
}; // Install::RequestStatuses


class Install::RequestStatuses::RequestStatus : public Entity
{
    public:
        RequestStatus();
        ~RequestStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: int32
        YLeaf percentage; //type: uint8
        YLeaf abort_state; //type: InstmgrBagAbortStateEnum
        YLeaf downloaded_bytes; //type: uint32
        YLeaf unanswered_query; //type: boolean
        YLeaf operation_phase; //type: InstmgrInstallPhaseEnum
        class RequestInformation; //type: Install::RequestStatuses::RequestStatus::RequestInformation
        class AbortStatus; //type: Install::RequestStatuses::RequestStatus::AbortStatus
        class IncrementalInstallInformation; //type: Install::RequestStatuses::RequestStatus::IncrementalInstallInformation
        class IssuMessage; //type: Install::RequestStatuses::RequestStatus::IssuMessage
        class Message; //type: Install::RequestStatuses::RequestStatus::Message

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::AbortStatus> abort_status;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IncrementalInstallInformation> incremental_install_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IssuMessage> > issu_message;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::Message> > message;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::RequestInformation> request_information;
        
}; // Install::RequestStatuses::RequestStatus


class Install::RequestStatuses::RequestStatus::RequestInformation : public Entity
{
    public:
        RequestInformation();
        ~RequestInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf user_id; //type: string
        YLeaf trigger_type; //type: InstmgrBagRequestTriggerEnum
        YLeaf request_option; //type: int32
        YLeaf operation_type; //type: InstmgrRequestEnum
        YLeaf operation_detail; //type: string

}; // Install::RequestStatuses::RequestStatus::RequestInformation


class Install::RequestStatuses::RequestStatus::AbortStatus : public Entity
{
    public:
        AbortStatus();
        ~AbortStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf abort_method; //type: InstmgrIssuAbortMethodEnum
        YLeaf abort_impact; //type: InstmgrIssuAbortImpactEnum

}; // Install::RequestStatuses::RequestStatus::AbortStatus


class Install::RequestStatuses::RequestStatus::IncrementalInstallInformation : public Entity
{
    public:
        IncrementalInstallInformation();
        ~IncrementalInstallInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: InstmgrBagIiDirectionEnum
        YLeaf ii_error; //type: string
        class Nodes; //type: Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes> > nodes;
        
}; // Install::RequestStatuses::RequestStatus::IncrementalInstallInformation


class Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf state; //type: InstmgrBagIiStateEnum

}; // Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes


class Install::RequestStatuses::RequestStatus::IssuMessage : public Entity
{
    public:
        IssuMessage();
        ~IssuMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: InstmgrBagUserMsgCategoryEnum
        YLeaf message; //type: string
        class Scope; //type: Install::RequestStatuses::RequestStatus::IssuMessage::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IssuMessage::Scope> scope;
        
}; // Install::RequestStatuses::RequestStatus::IssuMessage


class Install::RequestStatuses::RequestStatus::IssuMessage::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32

}; // Install::RequestStatuses::RequestStatus::IssuMessage::Scope


class Install::RequestStatuses::RequestStatus::Message : public Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: InstmgrBagUserMsgCategoryEnum
        YLeaf message; //type: string
        class Scope; //type: Install::RequestStatuses::RequestStatus::Message::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::Message::Scope> scope;
        
}; // Install::RequestStatuses::RequestStatus::Message


class Install::RequestStatuses::RequestStatus::Message::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32

}; // Install::RequestStatuses::RequestStatus::Message::Scope


class Install::BootVariables : public Entity
{
    public:
        BootVariables();
        ~BootVariables();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BootVariable; //type: Install::BootVariables::BootVariable

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::BootVariables::BootVariable> > boot_variable;
        
}; // Install::BootVariables


class Install::BootVariables::BootVariable : public Entity
{
    public:
        BootVariable();
        ~BootVariable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf boot_variable; //type: string

}; // Install::BootVariables::BootVariable


class Install::Software : public Entity
{
    public:
        Software();
        ~Software();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AliasDevices; //type: Install::Software::AliasDevices
        class PackageDevices; //type: Install::Software::PackageDevices
        class ComponentDevices; //type: Install::Software::ComponentDevices

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices> alias_devices;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices> component_devices;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices> package_devices;
        
}; // Install::Software


class Install::Software::AliasDevices : public Entity
{
    public:
        AliasDevices();
        ~AliasDevices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AliasDevice; //type: Install::Software::AliasDevices::AliasDevice

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice> > alias_device;
        
}; // Install::Software::AliasDevices


class Install::Software::AliasDevices::AliasDevice : public Entity
{
    public:
        AliasDevice();
        ~AliasDevice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device_name; //type: string
        class Aliases; //type: Install::Software::AliasDevices::AliasDevice::Aliases

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice::Aliases> aliases;
        
}; // Install::Software::AliasDevices::AliasDevice


class Install::Software::AliasDevices::AliasDevice::Aliases : public Entity
{
    public:
        Aliases();
        ~Aliases();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Alias; //type: Install::Software::AliasDevices::AliasDevice::Aliases::Alias

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice::Aliases::Alias> > alias;
        
}; // Install::Software::AliasDevices::AliasDevice::Aliases


class Install::Software::AliasDevices::AliasDevice::Aliases::Alias : public Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf package_name; //type: string
        YLeaf alias_names; //type: string

}; // Install::Software::AliasDevices::AliasDevice::Aliases::Alias


class Install::Software::PackageDevices : public Entity
{
    public:
        PackageDevices();
        ~PackageDevices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PackageDevice; //type: Install::Software::PackageDevices::PackageDevice

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice> > package_device;
        
}; // Install::Software::PackageDevices


class Install::Software::PackageDevices::PackageDevice : public Entity
{
    public:
        PackageDevice();
        ~PackageDevice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device_name; //type: string
        class Packages; //type: Install::Software::PackageDevices::PackageDevice::Packages

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages> packages;
        
}; // Install::Software::PackageDevices::PackageDevice


class Install::Software::PackageDevices::PackageDevice::Packages : public Entity
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

        class Package; //type: Install::Software::PackageDevices::PackageDevice::Packages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages::Package> > package;
        
}; // Install::Software::PackageDevices::PackageDevice::Packages


class Install::Software::PackageDevices::PackageDevice::Packages::Package : public Entity
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
        YLeaf name; //type: string
        YLeaf version; //type: string
        YLeaf description; //type: string
        YLeaf release; //type: string
        YLeaf vendor; //type: string
        YLeaf date; //type: string
        YLeaf source; //type: string
        YLeaf base; //type: string
        YLeaf bootable; //type: boolean
        YLeaf composite; //type: boolean
        YLeaf restart_info; //type: string
        YLeaf package_type; //type: InstmgrPkgEnum
        YLeaf group_type; //type: InstmgrGroupEnum
        YLeaf depth; //type: uint32
        YLeaf uncompressed_size; //type: uint32
        YLeaf compressed_size; //type: uint32
        YLeafList cards; //type: list of  string
        class SubPkg; //type: Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg> > sub_pkg;
        
}; // Install::Software::PackageDevices::PackageDevice::Packages::Package


class Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg : public Entity
{
    public:
        SubPkg();
        ~SubPkg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf node_types; //type: uint64

}; // Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg


class Install::Software::ComponentDevices : public Entity
{
    public:
        ComponentDevices();
        ~ComponentDevices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ComponentDevice; //type: Install::Software::ComponentDevices::ComponentDevice

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice> > component_device;
        
}; // Install::Software::ComponentDevices


class Install::Software::ComponentDevices::ComponentDevice : public Entity
{
    public:
        ComponentDevice();
        ~ComponentDevice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device_name; //type: string
        class ComponentPackages; //type: Install::Software::ComponentDevices::ComponentDevice::ComponentPackages

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages> component_packages;
        
}; // Install::Software::ComponentDevices::ComponentDevice


class Install::Software::ComponentDevices::ComponentDevice::ComponentPackages : public Entity
{
    public:
        ComponentPackages();
        ~ComponentPackages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ComponentPackage; //type: Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage> > component_package;
        
}; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages


class Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage : public Entity
{
    public:
        ComponentPackage();
        ~ComponentPackage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf package_name; //type: string
        class Component; //type: Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component> > component;
        
}; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage


class Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component : public Entity
{
    public:
        Component();
        ~Component();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf component_name; //type: string
        YLeaf name; //type: string
        YLeaf version; //type: string
        YLeaf release; //type: string
        YLeaf description; //type: string
        YLeafList files; //type: list of  string

}; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component


class Install::SoftwareInventory : public Entity
{
    public:
        SoftwareInventory();
        ~SoftwareInventory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Committed; //type: Install::SoftwareInventory::Committed
        class Inactive; //type: Install::SoftwareInventory::Inactive
        class Requests; //type: Install::SoftwareInventory::Requests
        class Active; //type: Install::SoftwareInventory::Active

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active> active;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed> committed;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests> requests;
        
}; // Install::SoftwareInventory


class Install::SoftwareInventory::Committed : public Entity
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

        class Summary; //type: Install::SoftwareInventory::Committed::Summary
        class Inventories; //type: Install::SoftwareInventory::Committed::Inventories

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories> inventories;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary> summary;
        
}; // Install::SoftwareInventory::Committed


class Install::SoftwareInventory::Committed::Summary : public Entity
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

        class DefaultLoadPath; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath
        class AdminLoadPath; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath
        class SdrLoadPath; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath
        class LocationLoadPath; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath> admin_load_path;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath> default_load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath> > location_load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath> > sdr_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath : public Entity
{
    public:
        DefaultLoadPath();
        ~DefaultLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf admin_match; //type: boolean
        YLeafList secure_domain_router_name; //type: list of  string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath : public Entity
{
    public:
        AdminLoadPath();
        ~AdminLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath : public Entity
{
    public:
        SdrLoadPath();
        ~SdrLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath : public Entity
{
    public:
        LocationLoadPath();
        ~LocationLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf secure_domain_router_name; //type: string
        YLeaf node_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Committed::Inventories : public Entity
{
    public:
        Inventories();
        ~Inventories();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inventory; //type: Install::SoftwareInventory::Committed::Inventories::Inventory

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Committed::Inventories


class Install::SoftwareInventory::Committed::Inventories::Inventory : public Entity
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

        YLeaf node_name; //type: string
        YLeaf major; //type: uint32
        YLeaf minor; //type: uint32
        YLeaf boot_image_name; //type: string
        YLeaf node_type; //type: uint64
        YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Committed::Inventories::Inventory


class Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package


class Install::SoftwareInventory::Inactive : public Entity
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

        class Summary; //type: Install::SoftwareInventory::Inactive::Summary
        class Inventories; //type: Install::SoftwareInventory::Inactive::Inventories

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories> inventories;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary> summary;
        
}; // Install::SoftwareInventory::Inactive


class Install::SoftwareInventory::Inactive::Summary : public Entity
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

        class DefaultLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath
        class AdminLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath
        class SdrLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath
        class LocationLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath> admin_load_path;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath> default_load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath> > location_load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath> > sdr_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath : public Entity
{
    public:
        DefaultLoadPath();
        ~DefaultLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf admin_match; //type: boolean
        YLeafList secure_domain_router_name; //type: list of  string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath : public Entity
{
    public:
        AdminLoadPath();
        ~AdminLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath : public Entity
{
    public:
        SdrLoadPath();
        ~SdrLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath : public Entity
{
    public:
        LocationLoadPath();
        ~LocationLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf secure_domain_router_name; //type: string
        YLeaf node_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Inactive::Inventories : public Entity
{
    public:
        Inventories();
        ~Inventories();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inventory; //type: Install::SoftwareInventory::Inactive::Inventories::Inventory

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Inactive::Inventories


class Install::SoftwareInventory::Inactive::Inventories::Inventory : public Entity
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

        YLeaf node_name; //type: string
        YLeaf major; //type: uint32
        YLeaf minor; //type: uint32
        YLeaf boot_image_name; //type: string
        YLeaf node_type; //type: uint64
        YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Inactive::Inventories::Inventory


class Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package


class Install::SoftwareInventory::Requests : public Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Requests_; //type: Install::SoftwareInventory::Requests::Requests_

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_> requests;
        
}; // Install::SoftwareInventory::Requests


class Install::SoftwareInventory::Requests::Requests_ : public Entity
{
    public:
        Requests_();
        ~Requests_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Request; //type: Install::SoftwareInventory::Requests::Requests_::Request

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request> > request;
        
}; // Install::SoftwareInventory::Requests::Requests_


class Install::SoftwareInventory::Requests::Requests_::Request : public Entity
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

        YLeaf request_id; //type: int32
        class Inventories; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories> inventories;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories : public Entity
{
    public:
        Inventories();
        ~Inventories();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inventory; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory : public Entity
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

        YLeaf node_name; //type: string
        YLeaf major; //type: uint32
        YLeaf minor; //type: uint32
        YLeaf boot_image_name; //type: string
        YLeaf node_type; //type: uint64
        YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package


class Install::SoftwareInventory::Active : public Entity
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

        class Summary; //type: Install::SoftwareInventory::Active::Summary
        class Inventories; //type: Install::SoftwareInventory::Active::Inventories

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories> inventories;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary> summary;
        
}; // Install::SoftwareInventory::Active


class Install::SoftwareInventory::Active::Summary : public Entity
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

        class DefaultLoadPath; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath
        class AdminLoadPath; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath
        class SdrLoadPath; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath
        class LocationLoadPath; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath> admin_load_path;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath> default_load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath> > location_load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath> > sdr_load_path;
        
}; // Install::SoftwareInventory::Active::Summary


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath : public Entity
{
    public:
        DefaultLoadPath();
        ~DefaultLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf admin_match; //type: boolean
        YLeafList secure_domain_router_name; //type: list of  string
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Active::Summary::AdminLoadPath : public Entity
{
    public:
        AdminLoadPath();
        ~AdminLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Active::Summary::SdrLoadPath : public Entity
{
    public:
        SdrLoadPath();
        ~SdrLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Active::Summary::LocationLoadPath : public Entity
{
    public:
        LocationLoadPath();
        ~LocationLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: uint32
        YLeaf secure_domain_router_name; //type: string
        YLeaf node_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath
        class StandbyLoadPath; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath> > load_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;
        
}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath : public Entity
{
    public:
        StandbyLoadPath();
        ~StandbyLoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath


class Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package


class Install::SoftwareInventory::Active::Inventories : public Entity
{
    public:
        Inventories();
        ~Inventories();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inventory; //type: Install::SoftwareInventory::Active::Inventories::Inventory

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory> > inventory;
        
}; // Install::SoftwareInventory::Active::Inventories


class Install::SoftwareInventory::Active::Inventories::Inventory : public Entity
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

        YLeaf node_name; //type: string
        YLeaf major; //type: uint32
        YLeaf minor; //type: uint32
        YLeaf boot_image_name; //type: string
        YLeaf node_type; //type: uint64
        YLeaf secure_domain_router_name; //type: string
        class LoadPath; //type: Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath> > load_path;
        
}; // Install::SoftwareInventory::Active::Inventories::Inventory


class Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath : public Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package : public Entity
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

        YLeaf device_name; //type: string
        YLeaf name; //type: string

}; // Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package


class Install::Issu : public Entity
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

        class CardInventories; //type: Install::Issu::CardInventories
        class Stage; //type: Install::Issu::Stage

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories> card_inventories;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage> stage;
        
}; // Install::Issu


class Install::Issu::CardInventories : public Entity
{
    public:
        CardInventories();
        ~CardInventories();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CardInventory; //type: Install::Issu::CardInventories::CardInventory

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories::CardInventory> > card_inventory;
        
}; // Install::Issu::CardInventories


class Install::Issu::CardInventories::CardInventory : public Entity
{
    public:
        CardInventory();
        ~CardInventory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_type_id; //type: IsmCardTypeFamilyEnum
        class Summary; //type: Install::Issu::CardInventories::CardInventory::Summary

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories::CardInventory::Summary> > summary;
        
}; // Install::Issu::CardInventories::CardInventory


class Install::Issu::CardInventories::CardInventory::Summary : public Entity
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

        YLeaf node_name; //type: string
        YLeaf partner_node_name; //type: string
        YLeaf node_state; //type: InstmgrCardStateEnum
        YLeaf node_role; //type: InstmgrNodeRoleEnum
        YLeaf node_type_pi; //type: InstmgrPiCardEnum
        YLeaf node_type_issu; //type: string
        YLeaf node_current_state; //type: InstmgrIsmNodeStateEnum
        YLeaf node_expected_state; //type: InstmgrIsmNodeStateEnum
        YLeaf node_failure_reason; //type: string
        YLeaf is_conforming_node; //type: InstallmgrIsmNodeConformingEnum
        YLeaf attempts; //type: uint32
        YLeaf is_node_upgraded; //type: boolean

}; // Install::Issu::CardInventories::CardInventory::Summary


class Install::Issu::Stage : public Entity
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

        YLeaf issu_state; //type: string
        YLeaf issu_op_id; //type: uint32
        YLeaf percentage; //type: uint32
        YLeaf is_issu_aborted; //type: boolean
        YLeaf is_issu_aborted_by_ism; //type: boolean
        YLeaf issu_manager_fsm_state; //type: InstmgrIsmFsmStateEnum
        YLeaf participating_node_all; //type: uint32
        YLeaf num_nodes_in_progress; //type: uint32
        YLeaf num_of_nodes_in_load; //type: uint32
        YLeaf num_of_nodes_in_run; //type: uint32
        YLeaf numof_nc_nodes; //type: uint32
        class NodeInProgress; //type: Install::Issu::Stage::NodeInProgress
        class NodesInLoad; //type: Install::Issu::Stage::NodesInLoad
        class NodesInRun; //type: Install::Issu::Stage::NodesInRun
        class NcNodes; //type: Install::Issu::Stage::NcNodes

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NcNodes> nc_nodes;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodeInProgress> node_in_progress;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInLoad> nodes_in_load;
        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInRun> nodes_in_run;
        
}; // Install::Issu::Stage


class Install::Issu::Stage::NodeInProgress : public Entity
{
    public:
        NodeInProgress();
        ~NodeInProgress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NodeInProgress


class Install::Issu::Stage::NodesInLoad : public Entity
{
    public:
        NodesInLoad();
        ~NodesInLoad();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NodesInLoad


class Install::Issu::Stage::NodesInRun : public Entity
{
    public:
        NodesInRun();
        ~NodesInRun();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NodesInRun


class Install::Issu::Stage::NcNodes : public Entity
{
    public:
        NcNodes();
        ~NcNodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList node; //type: list of  string

}; // Install::Issu::Stage::NcNodes


class Install::BootImage : public Entity
{
    public:
        BootImage();
        ~BootImage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_image_file; //type: string

}; // Install::BootImage


class Install::Logs : public Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Log; //type: Install::Logs::Log

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log> > log;
        
}; // Install::Logs


class Install::Logs::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request_id; //type: int32
        class Header; //type: Install::Logs::Log::Header
        class Summary; //type: Install::Logs::Log::Summary
        class Message; //type: Install::Logs::Log::Message
        class Change; //type: Install::Logs::Log::Change
        class Detail; //type: Install::Logs::Log::Detail
        class Communication; //type: Install::Logs::Log::Communication

        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change> > change;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication> > communication;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail> > detail;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header> > header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message> > message;
        std::vector<std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary> > summary;
        
}; // Install::Logs::Log


class Install::Logs::Log::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogContents; //type: Install::Logs::Log::Header::LogContents

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents> log_contents;
        
}; // Install::Logs::Log::Header


class Install::Logs::Log::Header::LogContents : public Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Header::LogContents::V3

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents::V3> v3;
        
}; // Install::Logs::Log::Header::LogContents


class Install::Logs::Log::Header::LogContents::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
        YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Header::LogContents::V3::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Header::LogContents::V3


class Install::Logs::Log::Header::LogContents::V3::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Header::LogContents::V3::Scope


class Install::Logs::Log::Summary : public Entity
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

        class LogContents; //type: Install::Logs::Log::Summary::LogContents

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents> log_contents;
        
}; // Install::Logs::Log::Summary


class Install::Logs::Log::Summary::LogContents : public Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Summary::LogContents::V3

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents::V3> v3;
        
}; // Install::Logs::Log::Summary::LogContents


class Install::Logs::Log::Summary::LogContents::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
        YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Summary::LogContents::V3::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Summary::LogContents::V3


class Install::Logs::Log::Summary::LogContents::V3::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Summary::LogContents::V3::Scope


class Install::Logs::Log::Message : public Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogContents; //type: Install::Logs::Log::Message::LogContents

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents> log_contents;
        
}; // Install::Logs::Log::Message


class Install::Logs::Log::Message::LogContents : public Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Message::LogContents::V3

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents::V3> v3;
        
}; // Install::Logs::Log::Message::LogContents


class Install::Logs::Log::Message::LogContents::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
        YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Message::LogContents::V3::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Message::LogContents::V3


class Install::Logs::Log::Message::LogContents::V3::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Message::LogContents::V3::Scope


class Install::Logs::Log::Change : public Entity
{
    public:
        Change();
        ~Change();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogContents; //type: Install::Logs::Log::Change::LogContents

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents> log_contents;
        
}; // Install::Logs::Log::Change


class Install::Logs::Log::Change::LogContents : public Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Change::LogContents::V3

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents::V3> v3;
        
}; // Install::Logs::Log::Change::LogContents


class Install::Logs::Log::Change::LogContents::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
        YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Change::LogContents::V3::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Change::LogContents::V3


class Install::Logs::Log::Change::LogContents::V3::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Change::LogContents::V3::Scope


class Install::Logs::Log::Detail : public Entity
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

        class LogContents; //type: Install::Logs::Log::Detail::LogContents

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents> log_contents;
        
}; // Install::Logs::Log::Detail


class Install::Logs::Log::Detail::LogContents : public Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Detail::LogContents::V3

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents::V3> v3;
        
}; // Install::Logs::Log::Detail::LogContents


class Install::Logs::Log::Detail::LogContents::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
        YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Detail::LogContents::V3::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Detail::LogContents::V3


class Install::Logs::Log::Detail::LogContents::V3::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Detail::LogContents::V3::Scope


class Install::Logs::Log::Communication : public Entity
{
    public:
        Communication();
        ~Communication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogContents; //type: Install::Logs::Log::Communication::LogContents

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents> log_contents;
        
}; // Install::Logs::Log::Communication


class Install::Logs::Log::Communication::LogContents : public Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint32
        class V3; //type: Install::Logs::Log::Communication::LogContents::V3

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents::V3> v3;
        
}; // Install::Logs::Log::Communication::LogContents

class InstmgrIssuAbortMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf method_undefined;
        static const Enum::YLeaf method_no_operation;
        static const Enum::YLeaf method_standby_reload;
        static const Enum::YLeaf method_system_reload;
        static const Enum::YLeaf method_rollback;
        static const Enum::YLeaf method_not_possible;
        static const Enum::YLeaf method_admin_only;

};

class InstmgrBagRequestTriggerEnum : public Enum
{
    public:
        static const Enum::YLeaf cli;
        static const Enum::YLeaf xr_xml;

};

class InstmgrGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf inst_pkg_group_undefined;
        static const Enum::YLeaf inst_pkg_group_grouped;
        static const Enum::YLeaf inst_pkg_group_individual;

};

class IsmCardTypeFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ndsc_active_rp;
        static const Enum::YLeaf ndsc_standby_rp;
        static const Enum::YLeaf active_drp;
        static const Enum::YLeaf standby_drp;
        static const Enum::YLeaf dsc_active_rp;
        static const Enum::YLeaf dsc_standby_rp;
        static const Enum::YLeaf active_sc;
        static const Enum::YLeaf standby_sc;
        static const Enum::YLeaf root_active_sc;
        static const Enum::YLeaf root_standby_sc;
        static const Enum::YLeaf lc;
        static const Enum::YLeaf sp;
        static const Enum::YLeaf fabric_sp;
        static const Enum::YLeaf spa;

};

class InstmgrBagUserMsgCategoryEnum : public Enum
{
    public:
        static const Enum::YLeaf user_error;
        static const Enum::YLeaf non_specific;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf information;
        static const Enum::YLeaf user_prompt;
        static const Enum::YLeaf log;
        static const Enum::YLeaf system_error;
        static const Enum::YLeaf user_response;

};

class InstallmgrIsmNodeConformingEnum : public Enum
{
    public:
        static const Enum::YLeaf conforming;
        static const Enum::YLeaf none_conforming;
        static const Enum::YLeaf upgrade_fail;
        static const Enum::YLeaf none_conforming_spa;
        static const Enum::YLeaf spa_upgrade_fail;

};

class InstmgrInstallPhaseEnum : public Enum
{
    public:
        static const Enum::YLeaf inst_phase_unknown;
        static const Enum::YLeaf inst_phase_download;
        static const Enum::YLeaf inst_phase_sw_change;
        static const Enum::YLeaf inst_phase_cleaning_up;

};

class InstmgrIssuAbortImpactEnum : public Enum
{
    public:
        static const Enum::YLeaf undefined;
        static const Enum::YLeaf hitless;
        static const Enum::YLeaf traffic_outage;
        static const Enum::YLeaf not_applicable;

};

class InstmgrIsmNodeStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf issu_node_gsp_ready;
        static const Enum::YLeaf load_shut_done;
        static const Enum::YLeaf standby_management_upgrade_done;
        static const Enum::YLeaf fabric_upgrade_done;
        static const Enum::YLeaf imdr_preparation_ack_received;
        static const Enum::YLeaf imdr_preparation_failed;
        static const Enum::YLeaf imdr_start_ack_received;
        static const Enum::YLeaf imdr_start_failed;
        static const Enum::YLeaf imdr_complete_ack_received;
        static const Enum::YLeaf imdr_complete_failed;
        static const Enum::YLeaf standby_management_ready;
        static const Enum::YLeaf fo_acknowledged;
        static const Enum::YLeaf fo_complete;
        static const Enum::YLeaf standby_ready_after_fo;
        static const Enum::YLeaf iam_ready_afteri_mdr;
        static const Enum::YLeaf nsf_ready;
        static const Enum::YLeaf nsf_begin_ack_received;
        static const Enum::YLeaf imdr_done;
        static const Enum::YLeaf unshut_done;
        static const Enum::YLeaf run_done;
        static const Enum::YLeaf imdr_abort_sent;
        static const Enum::YLeaf imdr_abort_ack_received;
        static const Enum::YLeaf imdr_abort_failed;
        static const Enum::YLeaf standby_management_downgrade_done;
        static const Enum::YLeaf fabric_downgrade_done;
        static const Enum::YLeaf reload_during_issu;
        static const Enum::YLeaf timneout;
        static const Enum::YLeaf fabric_upgrade_failed;
        static const Enum::YLeaf unsupported_hw;
        static const Enum::YLeaf not_reachable;
        static const Enum::YLeaf max;

};

class InstmgrPkgEnum : public Enum
{
    public:
        static const Enum::YLeaf inst_pkg_type_undefined;
        static const Enum::YLeaf inst_pkg_type_root;
        static const Enum::YLeaf inst_pkg_type_standard;
        static const Enum::YLeaf inst_pkg_type_internal;

};

class InstmgrCardStateEnum : public Enum
{
    public:
        static const Enum::YLeaf instmgr_card_not_present;
        static const Enum::YLeaf instmgr_card_present;
        static const Enum::YLeaf instmgr_card_reset;
        static const Enum::YLeaf instmgr_card_booting;
        static const Enum::YLeaf instmgr_card_mbi_booting;
        static const Enum::YLeaf instmgr_card_running_mbi;
        static const Enum::YLeaf instmgr_card_running_ena;
        static const Enum::YLeaf instmgr_card_bring_down;
        static const Enum::YLeaf instmgr_card_ena_failure;
        static const Enum::YLeaf instmgr_card_f_diag_run;
        static const Enum::YLeaf instmgr_card_f_diag_failure;
        static const Enum::YLeaf instmgr_card_powered;
        static const Enum::YLeaf instmgr_card_unpowered;
        static const Enum::YLeaf instmgr_card_mdr;
        static const Enum::YLeaf instmgr_card_mdr_running_mbi;
        static const Enum::YLeaf instmgr_card_main_t_mode;
        static const Enum::YLeaf instmgr_card_admin_down;
        static const Enum::YLeaf instmgr_card_no_mon;
        static const Enum::YLeaf instmgr_card_unknown;
        static const Enum::YLeaf instmgr_card_failed;
        static const Enum::YLeaf instmgr_card_ok;
        static const Enum::YLeaf instmgr_card_missing;
        static const Enum::YLeaf instmgr_card_field_diag_downloading;
        static const Enum::YLeaf instmgr_card_field_diag_unmonitor;
        static const Enum::YLeaf instmgr_card_fabric_field_diag_unmonitor;
        static const Enum::YLeaf instmgr_card_field_diag_rp_launching;
        static const Enum::YLeaf instmgr_card_field_diag_running;
        static const Enum::YLeaf instmgr_card_field_diag_pass;
        static const Enum::YLeaf instmgr_card_field_diag_fail;
        static const Enum::YLeaf instmgr_card_field_diag_timeout;
        static const Enum::YLeaf instmgr_card_disabled;
        static const Enum::YLeaf instmgr_card_spa_booting;
        static const Enum::YLeaf instmgr_card_not_allowed_online;
        static const Enum::YLeaf instmgr_card_stopped;
        static const Enum::YLeaf instmgr_card_incompatible_fw_ver;
        static const Enum::YLeaf instmgr_card_fpd_hold;
        static const Enum::YLeaf instmgr_card_updating_fpd;
        static const Enum::YLeaf instmgr_card_num_states;

};

class InstmgrNodeRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf redundency_unknown;
        static const Enum::YLeaf redundency_active;
        static const Enum::YLeaf redundency_standby;
        static const Enum::YLeaf redundency_unusable;

};

class InstmgrRequestEnum : public Enum
{
    public:
        static const Enum::YLeaf add;
        static const Enum::YLeaf accept;
        static const Enum::YLeaf clean;
        static const Enum::YLeaf activate;
        static const Enum::YLeaf deactivate;
        static const Enum::YLeaf commit;
        static const Enum::YLeaf verify;
        static const Enum::YLeaf rollback;
        static const Enum::YLeaf clear_rollback;
        static const Enum::YLeaf clear_log;
        static const Enum::YLeaf health_check;
        static const Enum::YLeaf operation_;
        static const Enum::YLeaf stop_timer;
        static const Enum::YLeaf label;
        static const Enum::YLeaf clear_label;
        static const Enum::YLeaf extend;

};

class InstmgrIsmFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf init_done;
        static const Enum::YLeaf load_shut;
        static const Enum::YLeaf load_wait;
        static const Enum::YLeaf load_stp_root_before;
        static const Enum::YLeaf load_standby_root_sc_upgrade;
        static const Enum::YLeaf load_standby_management_upgrade;
        static const Enum::YLeaf load_stp_root_after;
        static const Enum::YLeaf load_fabric_upgrade;
        static const Enum::YLeaf load_management_issu_ready;
        static const Enum::YLeaf load_done;
        static const Enum::YLeaf run_prep;
        static const Enum::YLeaf run_wait;
        static const Enum::YLeaf runi_mdr_prep;
        static const Enum::YLeaf runi_mdr_start;
        static const Enum::YLeaf runi_mdr_complete;
        static const Enum::YLeaf run_make_standby_ready;
        static const Enum::YLeaf run_root_scfo;
        static const Enum::YLeaf run_ndscfo;
        static const Enum::YLeaf run_transient1;
        static const Enum::YLeaf run_dscfo;
        static const Enum::YLeaf run_fo_complete;
        static const Enum::YLeaf run_stp_root_return;
        static const Enum::YLeaf runi_mdr_continue;
        static const Enum::YLeaf run_am_i_ready_afteri_mdr;
        static const Enum::YLeaf run_nsf_ready;
        static const Enum::YLeaf run_nsf_begin;
        static const Enum::YLeaf runi_mdr_done;
        static const Enum::YLeaf run_management_issu_ready;
        static const Enum::YLeaf run_un_shut;
        static const Enum::YLeaf run_is_done;
        static const Enum::YLeaf state_max;

};

class InstmgrBagIiDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_incremental;
        static const Enum::YLeaf installing;
        static const Enum::YLeaf unwinding;

};

class InstmgrPiCardEnum : public Enum
{
    public:
        static const Enum::YLeaf type_rp;
        static const Enum::YLeaf type_drp;
        static const Enum::YLeaf type_lc;
        static const Enum::YLeaf type_sc;
        static const Enum::YLeaf type_sp;
        static const Enum::YLeaf type_other;

};

class InstmgrBagIiStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf in_progress;
        static const Enum::YLeaf completed;
        static const Enum::YLeaf aborted;
        static const Enum::YLeaf rebooted;

};

class InstmgrBagLogEntryUserMsgCategoryEnum : public Enum
{
    public:
        static const Enum::YLeaf user_error;
        static const Enum::YLeaf non_specific;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf information;
        static const Enum::YLeaf user_prompt;
        static const Enum::YLeaf log;
        static const Enum::YLeaf system_error;
        static const Enum::YLeaf user_response;

};

class InstmgrBagAbortStateEnum : public Enum
{
    public:
        static const Enum::YLeaf abortable;
        static const Enum::YLeaf no_longer_abortable;
        static const Enum::YLeaf never_abortable;
        static const Enum::YLeaf already_aborted;

};


}
}

#endif /* _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_0_ */

