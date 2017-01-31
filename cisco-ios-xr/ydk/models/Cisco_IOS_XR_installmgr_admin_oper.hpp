#ifndef _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_
#define _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_installmgr_admin_oper {

class Install : public Entity
{
    public:
        Install();
        ~Install();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf log_size; //type: int32

    class ConfigurationRegisters : public Entity
    {
        public:
            ConfigurationRegisters();
            ~ConfigurationRegisters();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class ConfigurationRegister : public Entity
        {
            public:
                ConfigurationRegister();
                ~ConfigurationRegister();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf node_name; //type: string
                YLeaf config_register; //type: string



        }; // Install::ConfigurationRegisters::ConfigurationRegister


            std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::ConfigurationRegisters::ConfigurationRegister> > configuration_register;


    }; // Install::ConfigurationRegisters


    class RequestStatuses : public Entity
    {
        public:
            RequestStatuses();
            ~RequestStatuses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RequestStatus : public Entity
        {
            public:
                RequestStatus();
                ~RequestStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf request_id; //type: int32
                YLeaf percentage; //type: uint8
                YLeaf abort_state; //type: InstmgrBagAbortStateEnum
                YLeaf downloaded_bytes; //type: uint32
                YLeaf unanswered_query; //type: boolean
                YLeaf operation_phase; //type: InstmgrInstallPhaseEnum

            class RequestInformation : public Entity
            {
                public:
                    RequestInformation();
                    ~RequestInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf request_id; //type: uint32
                    YLeaf user_id; //type: string
                    YLeaf trigger_type; //type: InstmgrBagRequestTriggerEnum
                    YLeaf request_option; //type: int32
                    YLeaf operation_type; //type: InstmgrRequestEnum
                    YLeaf operation_detail; //type: string



            }; // Install::RequestStatuses::RequestStatus::RequestInformation


            class AbortStatus : public Entity
            {
                public:
                    AbortStatus();
                    ~AbortStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf abort_method; //type: InstmgrIssuAbortMethodEnum
                    YLeaf abort_impact; //type: InstmgrIssuAbortImpactEnum



            }; // Install::RequestStatuses::RequestStatus::AbortStatus


            class IncrementalInstallInformation : public Entity
            {
                public:
                    IncrementalInstallInformation();
                    ~IncrementalInstallInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf direction; //type: InstmgrBagIiDirectionEnum
                    YLeaf ii_error; //type: string

                class Nodes : public Entity
                {
                    public:
                        Nodes();
                        ~Nodes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf node_name; //type: string
                        YLeaf state; //type: InstmgrBagIiStateEnum



                }; // Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes


                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes> > nodes;


            }; // Install::RequestStatuses::RequestStatus::IncrementalInstallInformation


            class IssuMessage : public Entity
            {
                public:
                    IssuMessage();
                    ~IssuMessage();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf category; //type: InstmgrBagUserMsgCategoryEnum
                    YLeaf message; //type: string

                class Scope : public Entity
                {
                    public:
                        Scope();
                        ~Scope();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf admin_read; //type: boolean
                        YLeaf affected_sd_rs; //type: uint32



                }; // Install::RequestStatuses::RequestStatus::IssuMessage::Scope


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IssuMessage::Scope> scope;


            }; // Install::RequestStatuses::RequestStatus::IssuMessage


            class Message : public Entity
            {
                public:
                    Message();
                    ~Message();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf category; //type: InstmgrBagUserMsgCategoryEnum
                    YLeaf message; //type: string

                class Scope : public Entity
                {
                    public:
                        Scope();
                        ~Scope();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf admin_read; //type: boolean
                        YLeaf affected_sd_rs; //type: uint32



                }; // Install::RequestStatuses::RequestStatus::Message::Scope


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::Message::Scope> scope;


            }; // Install::RequestStatuses::RequestStatus::Message


                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::AbortStatus> abort_status;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IncrementalInstallInformation> incremental_install_information;
                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::IssuMessage> > issu_message;
                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::Message> > message;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus::RequestInformation> request_information;


        }; // Install::RequestStatuses::RequestStatus


            std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses::RequestStatus> > request_status;


    }; // Install::RequestStatuses


    class BootVariables : public Entity
    {
        public:
            BootVariables();
            ~BootVariables();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class BootVariable : public Entity
        {
            public:
                BootVariable();
                ~BootVariable();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf node_name; //type: string
                YLeaf boot_variable; //type: string



        }; // Install::BootVariables::BootVariable


            std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::BootVariables::BootVariable> > boot_variable;


    }; // Install::BootVariables


    class Software : public Entity
    {
        public:
            Software();
            ~Software();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class AliasDevices : public Entity
        {
            public:
                AliasDevices();
                ~AliasDevices();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class AliasDevice : public Entity
            {
                public:
                    AliasDevice();
                    ~AliasDevice();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf device_name; //type: string

                class Aliases : public Entity
                {
                    public:
                        Aliases();
                        ~Aliases();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Alias : public Entity
                    {
                        public:
                            Alias();
                            ~Alias();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf package_name; //type: string
                            YLeaf alias_names; //type: string



                    }; // Install::Software::AliasDevices::AliasDevice::Aliases::Alias


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice::Aliases::Alias> > alias;


                }; // Install::Software::AliasDevices::AliasDevice::Aliases


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice::Aliases> aliases;


            }; // Install::Software::AliasDevices::AliasDevice


                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices::AliasDevice> > alias_device;


        }; // Install::Software::AliasDevices


        class PackageDevices : public Entity
        {
            public:
                PackageDevices();
                ~PackageDevices();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class PackageDevice : public Entity
            {
                public:
                    PackageDevice();
                    ~PackageDevice();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf device_name; //type: string

                class Packages : public Entity
                {
                    public:
                        Packages();
                        ~Packages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Package : public Entity
                    {
                        public:
                            Package();
                            ~Package();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


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

                        class SubPkg : public Entity
                        {
                            public:
                                SubPkg();
                                ~SubPkg();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf name; //type: string
                                YLeaf node_types; //type: uint64



                        }; // Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg


                            std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg> > sub_pkg;


                    }; // Install::Software::PackageDevices::PackageDevice::Packages::Package


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages::Package> > package;


                }; // Install::Software::PackageDevices::PackageDevice::Packages


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice::Packages> packages;


            }; // Install::Software::PackageDevices::PackageDevice


                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices::PackageDevice> > package_device;


        }; // Install::Software::PackageDevices


        class ComponentDevices : public Entity
        {
            public:
                ComponentDevices();
                ~ComponentDevices();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class ComponentDevice : public Entity
            {
                public:
                    ComponentDevice();
                    ~ComponentDevice();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf device_name; //type: string

                class ComponentPackages : public Entity
                {
                    public:
                        ComponentPackages();
                        ~ComponentPackages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class ComponentPackage : public Entity
                    {
                        public:
                            ComponentPackage();
                            ~ComponentPackage();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf package_name; //type: string

                        class Component : public Entity
                        {
                            public:
                                Component();
                                ~Component();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf component_name; //type: string
                                YLeaf name; //type: string
                                YLeaf version; //type: string
                                YLeaf release; //type: string
                                YLeaf description; //type: string
                                YLeafList files; //type: list of  string



                        }; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component


                            std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component> > component;


                    }; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage> > component_package;


                }; // Install::Software::ComponentDevices::ComponentDevice::ComponentPackages


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice::ComponentPackages> component_packages;


            }; // Install::Software::ComponentDevices::ComponentDevice


                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices::ComponentDevice> > component_device;


        }; // Install::Software::ComponentDevices


            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::AliasDevices> alias_devices;
            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::ComponentDevices> component_devices;
            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software::PackageDevices> package_devices;


    }; // Install::Software


    class SoftwareInventory : public Entity
    {
        public:
            SoftwareInventory();
            ~SoftwareInventory();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Committed : public Entity
        {
            public:
                Committed();
                ~Committed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Summary : public Entity
            {
                public:
                    Summary();
                    ~Summary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class DefaultLoadPath : public Entity
                {
                    public:
                        DefaultLoadPath();
                        ~DefaultLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf admin_match; //type: boolean
                        YLeafList secure_domain_router_name; //type: list of  string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Committed::Summary::DefaultLoadPath


                class AdminLoadPath : public Entity
                {
                    public:
                        AdminLoadPath();
                        ~AdminLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Committed::Summary::AdminLoadPath


                class SdrLoadPath : public Entity
                {
                    public:
                        SdrLoadPath();
                        ~SdrLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf secure_domain_router_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Committed::Summary::SdrLoadPath


                class LocationLoadPath : public Entity
                {
                    public:
                        LocationLoadPath();
                        ~LocationLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf secure_domain_router_name; //type: string
                        YLeaf node_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Committed::Summary::LocationLoadPath


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::AdminLoadPath> admin_load_path;
                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::DefaultLoadPath> default_load_path;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::LocationLoadPath> > location_load_path;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary::SdrLoadPath> > sdr_load_path;


            }; // Install::SoftwareInventory::Committed::Summary


            class Inventories : public Entity
            {
                public:
                    Inventories();
                    ~Inventories();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Inventory : public Entity
                {
                    public:
                        Inventory();
                        ~Inventory();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf node_name; //type: string
                        YLeaf major; //type: uint32
                        YLeaf minor; //type: uint32
                        YLeaf boot_image_name; //type: string
                        YLeaf node_type; //type: uint64
                        YLeaf secure_domain_router_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath> > load_path;


                }; // Install::SoftwareInventory::Committed::Inventories::Inventory


                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories::Inventory> > inventory;


            }; // Install::SoftwareInventory::Committed::Inventories


                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Inventories> inventories;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed::Summary> summary;


        }; // Install::SoftwareInventory::Committed


        class Inactive : public Entity
        {
            public:
                Inactive();
                ~Inactive();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Summary : public Entity
            {
                public:
                    Summary();
                    ~Summary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class DefaultLoadPath : public Entity
                {
                    public:
                        DefaultLoadPath();
                        ~DefaultLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf admin_match; //type: boolean
                        YLeafList secure_domain_router_name; //type: list of  string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath


                class AdminLoadPath : public Entity
                {
                    public:
                        AdminLoadPath();
                        ~AdminLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Inactive::Summary::AdminLoadPath


                class SdrLoadPath : public Entity
                {
                    public:
                        SdrLoadPath();
                        ~SdrLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf secure_domain_router_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Inactive::Summary::SdrLoadPath


                class LocationLoadPath : public Entity
                {
                    public:
                        LocationLoadPath();
                        ~LocationLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf secure_domain_router_name; //type: string
                        YLeaf node_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Inactive::Summary::LocationLoadPath


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::AdminLoadPath> admin_load_path;
                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath> default_load_path;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::LocationLoadPath> > location_load_path;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary::SdrLoadPath> > sdr_load_path;


            }; // Install::SoftwareInventory::Inactive::Summary


            class Inventories : public Entity
            {
                public:
                    Inventories();
                    ~Inventories();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Inventory : public Entity
                {
                    public:
                        Inventory();
                        ~Inventory();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf node_name; //type: string
                        YLeaf major; //type: uint32
                        YLeaf minor; //type: uint32
                        YLeaf boot_image_name; //type: string
                        YLeaf node_type; //type: uint64
                        YLeaf secure_domain_router_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath> > load_path;


                }; // Install::SoftwareInventory::Inactive::Inventories::Inventory


                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories::Inventory> > inventory;


            }; // Install::SoftwareInventory::Inactive::Inventories


                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Inventories> inventories;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive::Summary> summary;


        }; // Install::SoftwareInventory::Inactive


        class Requests : public Entity
        {
            public:
                Requests();
                ~Requests();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Requests_ : public Entity
            {
                public:
                    Requests_();
                    ~Requests_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Request : public Entity
                {
                    public:
                        Request();
                        ~Request();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: int32

                    class Inventories : public Entity
                    {
                        public:
                            Inventories();
                            ~Inventories();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Inventory : public Entity
                        {
                            public:
                                Inventory();
                                ~Inventory();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf node_name; //type: string
                                YLeaf major; //type: uint32
                                YLeaf minor; //type: uint32
                                YLeaf boot_image_name; //type: string
                                YLeaf node_type; //type: uint64
                                YLeaf secure_domain_router_name; //type: string

                            class LoadPath : public Entity
                            {
                                public:
                                    LoadPath();
                                    ~LoadPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf version; //type: string
                                    YLeaf build_information; //type: string

                                class Package : public Entity
                                {
                                    public:
                                        Package();
                                        ~Package();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf device_name; //type: string
                                        YLeaf name; //type: string



                                }; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package


                                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package> package;


                            }; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath> > load_path;


                        }; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory


                            std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory> > inventory;


                    }; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories


                        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories> inventories;


                }; // Install::SoftwareInventory::Requests::Requests_::Request


                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request> > request;


            }; // Install::SoftwareInventory::Requests::Requests_


                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_> requests;


        }; // Install::SoftwareInventory::Requests


        class Active : public Entity
        {
            public:
                Active();
                ~Active();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Summary : public Entity
            {
                public:
                    Summary();
                    ~Summary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class DefaultLoadPath : public Entity
                {
                    public:
                        DefaultLoadPath();
                        ~DefaultLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf admin_match; //type: boolean
                        YLeafList secure_domain_router_name; //type: list of  string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Active::Summary::DefaultLoadPath


                class AdminLoadPath : public Entity
                {
                    public:
                        AdminLoadPath();
                        ~AdminLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Active::Summary::AdminLoadPath


                class SdrLoadPath : public Entity
                {
                    public:
                        SdrLoadPath();
                        ~SdrLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf secure_domain_router_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Active::Summary::SdrLoadPath


                class LocationLoadPath : public Entity
                {
                    public:
                        LocationLoadPath();
                        ~LocationLoadPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf request_id; //type: uint32
                        YLeaf secure_domain_router_name; //type: string
                        YLeaf node_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath


                    class StandbyLoadPath : public Entity
                    {
                        public:
                            StandbyLoadPath();
                            ~StandbyLoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath> > load_path;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath> > standby_load_path;


                }; // Install::SoftwareInventory::Active::Summary::LocationLoadPath


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::AdminLoadPath> admin_load_path;
                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::DefaultLoadPath> default_load_path;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::LocationLoadPath> > location_load_path;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary::SdrLoadPath> > sdr_load_path;


            }; // Install::SoftwareInventory::Active::Summary


            class Inventories : public Entity
            {
                public:
                    Inventories();
                    ~Inventories();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Inventory : public Entity
                {
                    public:
                        Inventory();
                        ~Inventory();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf node_name; //type: string
                        YLeaf major; //type: uint32
                        YLeaf minor; //type: uint32
                        YLeaf boot_image_name; //type: string
                        YLeaf node_type; //type: uint64
                        YLeaf secure_domain_router_name; //type: string

                    class LoadPath : public Entity
                    {
                        public:
                            LoadPath();
                            ~LoadPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf version; //type: string
                            YLeaf build_information; //type: string

                        class Package : public Entity
                        {
                            public:
                                Package();
                                ~Package();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf device_name; //type: string
                                YLeaf name; //type: string



                        }; // Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package> package;


                    }; // Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath> > load_path;


                }; // Install::SoftwareInventory::Active::Inventories::Inventory


                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories::Inventory> > inventory;


            }; // Install::SoftwareInventory::Active::Inventories


                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Inventories> inventories;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active::Summary> summary;


        }; // Install::SoftwareInventory::Active


            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Active> active;
            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Committed> committed;
            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Inactive> inactive;
            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests> requests;


    }; // Install::SoftwareInventory


    class Issu : public Entity
    {
        public:
            Issu();
            ~Issu();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class CardInventories : public Entity
        {
            public:
                CardInventories();
                ~CardInventories();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class CardInventory : public Entity
            {
                public:
                    CardInventory();
                    ~CardInventory();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf card_type_id; //type: IsmCardTypeFamilyEnum

                class Summary : public Entity
                {
                    public:
                        Summary();
                        ~Summary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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


                    std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories::CardInventory::Summary> > summary;


            }; // Install::Issu::CardInventories::CardInventory


                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories::CardInventory> > card_inventory;


        }; // Install::Issu::CardInventories


        class Stage : public Entity
        {
            public:
                Stage();
                ~Stage();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


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

            class NodeInProgress : public Entity
            {
                public:
                    NodeInProgress();
                    ~NodeInProgress();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList node; //type: list of  string



            }; // Install::Issu::Stage::NodeInProgress


            class NodesInLoad : public Entity
            {
                public:
                    NodesInLoad();
                    ~NodesInLoad();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList node; //type: list of  string



            }; // Install::Issu::Stage::NodesInLoad


            class NodesInRun : public Entity
            {
                public:
                    NodesInRun();
                    ~NodesInRun();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList node; //type: list of  string



            }; // Install::Issu::Stage::NodesInRun


            class NcNodes : public Entity
            {
                public:
                    NcNodes();
                    ~NcNodes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList node; //type: list of  string



            }; // Install::Issu::Stage::NcNodes


                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NcNodes> nc_nodes;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodeInProgress> node_in_progress;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInLoad> nodes_in_load;
                std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage::NodesInRun> nodes_in_run;


        }; // Install::Issu::Stage


            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::CardInventories> card_inventories;
            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu::Stage> stage;


    }; // Install::Issu


    class BootImage : public Entity
    {
        public:
            BootImage();
            ~BootImage();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf system_image_file; //type: string



    }; // Install::BootImage


    class Logs : public Entity
    {
        public:
            Logs();
            ~Logs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Log : public Entity
        {
            public:
                Log();
                ~Log();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf request_id; //type: int32

            class Header : public Entity
            {
                public:
                    Header();
                    ~Header();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LogContents : public Entity
                {
                    public:
                        LogContents();
                        ~LogContents();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf version; //type: uint32

                    class V3 : public Entity
                    {
                        public:
                            V3();
                            ~V3();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
                            YLeaf message; //type: string

                        class Scope : public Entity
                        {
                            public:
                                Scope();
                                ~Scope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf admin_read; //type: boolean
                                YLeaf affected_sd_rs; //type: uint32



                        }; // Install::Logs::Log::Header::LogContents::V3::Scope


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents::V3::Scope> scope;


                    }; // Install::Logs::Log::Header::LogContents::V3


                        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents::V3> v3;


                }; // Install::Logs::Log::Header::LogContents


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header::LogContents> log_contents;


            }; // Install::Logs::Log::Header


            class Summary : public Entity
            {
                public:
                    Summary();
                    ~Summary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LogContents : public Entity
                {
                    public:
                        LogContents();
                        ~LogContents();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf version; //type: uint32

                    class V3 : public Entity
                    {
                        public:
                            V3();
                            ~V3();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
                            YLeaf message; //type: string

                        class Scope : public Entity
                        {
                            public:
                                Scope();
                                ~Scope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf admin_read; //type: boolean
                                YLeaf affected_sd_rs; //type: uint32



                        }; // Install::Logs::Log::Summary::LogContents::V3::Scope


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents::V3::Scope> scope;


                    }; // Install::Logs::Log::Summary::LogContents::V3


                        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents::V3> v3;


                }; // Install::Logs::Log::Summary::LogContents


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary::LogContents> log_contents;


            }; // Install::Logs::Log::Summary


            class Message : public Entity
            {
                public:
                    Message();
                    ~Message();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LogContents : public Entity
                {
                    public:
                        LogContents();
                        ~LogContents();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf version; //type: uint32

                    class V3 : public Entity
                    {
                        public:
                            V3();
                            ~V3();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
                            YLeaf message; //type: string

                        class Scope : public Entity
                        {
                            public:
                                Scope();
                                ~Scope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf admin_read; //type: boolean
                                YLeaf affected_sd_rs; //type: uint32



                        }; // Install::Logs::Log::Message::LogContents::V3::Scope


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents::V3::Scope> scope;


                    }; // Install::Logs::Log::Message::LogContents::V3


                        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents::V3> v3;


                }; // Install::Logs::Log::Message::LogContents


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message::LogContents> log_contents;


            }; // Install::Logs::Log::Message


            class Change : public Entity
            {
                public:
                    Change();
                    ~Change();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LogContents : public Entity
                {
                    public:
                        LogContents();
                        ~LogContents();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf version; //type: uint32

                    class V3 : public Entity
                    {
                        public:
                            V3();
                            ~V3();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
                            YLeaf message; //type: string

                        class Scope : public Entity
                        {
                            public:
                                Scope();
                                ~Scope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf admin_read; //type: boolean
                                YLeaf affected_sd_rs; //type: uint32



                        }; // Install::Logs::Log::Change::LogContents::V3::Scope


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents::V3::Scope> scope;


                    }; // Install::Logs::Log::Change::LogContents::V3


                        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents::V3> v3;


                }; // Install::Logs::Log::Change::LogContents


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change::LogContents> log_contents;


            }; // Install::Logs::Log::Change


            class Detail : public Entity
            {
                public:
                    Detail();
                    ~Detail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LogContents : public Entity
                {
                    public:
                        LogContents();
                        ~LogContents();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf version; //type: uint32

                    class V3 : public Entity
                    {
                        public:
                            V3();
                            ~V3();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
                            YLeaf message; //type: string

                        class Scope : public Entity
                        {
                            public:
                                Scope();
                                ~Scope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf admin_read; //type: boolean
                                YLeaf affected_sd_rs; //type: uint32



                        }; // Install::Logs::Log::Detail::LogContents::V3::Scope


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents::V3::Scope> scope;


                    }; // Install::Logs::Log::Detail::LogContents::V3


                        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents::V3> v3;


                }; // Install::Logs::Log::Detail::LogContents


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail::LogContents> log_contents;


            }; // Install::Logs::Log::Detail


            class Communication : public Entity
            {
                public:
                    Communication();
                    ~Communication();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LogContents : public Entity
                {
                    public:
                        LogContents();
                        ~LogContents();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf version; //type: uint32

                    class V3 : public Entity
                    {
                        public:
                            V3();
                            ~V3();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
                            YLeaf message; //type: string

                        class Scope : public Entity
                        {
                            public:
                                Scope();
                                ~Scope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf admin_read; //type: boolean
                                YLeaf affected_sd_rs; //type: uint32



                        }; // Install::Logs::Log::Communication::LogContents::V3::Scope


                            std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents::V3::Scope> scope;


                    }; // Install::Logs::Log::Communication::LogContents::V3


                        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents::V3> v3;


                }; // Install::Logs::Log::Communication::LogContents


                    std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents> log_contents;


            }; // Install::Logs::Log::Communication


                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Change> > change;
                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication> > communication;
                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Detail> > detail;
                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Header> > header;
                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Message> > message;
                std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Summary> > summary;


        }; // Install::Logs::Log


            std::vector<std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log> > log;


    }; // Install::Logs


        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::BootImage> boot_image;
        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::BootVariables> boot_variables;
        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::ConfigurationRegisters> configuration_registers;
        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Issu> issu;
        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs> logs;
        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::RequestStatuses> request_statuses;
        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Software> software;
        std::unique_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory> software_inventory;


}; // Install


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

#endif /* _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_ */

