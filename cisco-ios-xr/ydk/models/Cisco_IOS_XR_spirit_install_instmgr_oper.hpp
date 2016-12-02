#ifndef _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_
#define _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_spirit_install_instmgr_oper {

class SoftwareInstall : public Entity
{
    public:
        SoftwareInstall();
        ~SoftwareInstall();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Files : public Entity
    {
        public:
            Files();
            ~Files();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class File : public Entity
        {
            public:
                File();
                ~File();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value file_name; //type: string


            class Brief : public Entity
            {
                public:
                    Brief();
                    ~Brief();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value log; //type: string




            }; // SoftwareInstall::Files::File::Brief


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
                    Value log; //type: string




            }; // SoftwareInstall::Files::File::Detail


                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files::File::Brief> brief;
                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files::File::Detail> detail;


        }; // SoftwareInstall::Files::File


            std::vector<std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files::File> > file;


    }; // SoftwareInstall::Files


    class LastNOperationLogs : public Entity
    {
        public:
            LastNOperationLogs();
            ~LastNOperationLogs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class LastNOperationLog : public Entity
        {
            public:
                LastNOperationLog();
                ~LastNOperationLog();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value last_n_logs; //type: int32


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
                    Value log; //type: string




            }; // SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary


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
                    Value log; //type: string




            }; // SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail


                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail> detail;
                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary> summary;


        }; // SoftwareInstall::LastNOperationLogs::LastNOperationLog


            std::vector<std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs::LastNOperationLog> > last_n_operation_log;


    }; // SoftwareInstall::LastNOperationLogs


    class Prepare : public Entity
    {
        public:
            Prepare();
            ~Prepare();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value log; //type: string




    }; // SoftwareInstall::Prepare


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


        class ActivePackageInfo : public Entity
        {
            public:
                ActivePackageInfo();
                ~ActivePackageInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value error_message; //type: string
                Value location; //type: string
                Value node_type; //type: string
                Value boot_partition_name; //type: string
                Value number_of_active_packages; //type: uint32
                Value active_packages; //type: string




        }; // SoftwareInstall::Active::ActivePackageInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Active::ActivePackageInfo> > active_package_info;


    }; // SoftwareInstall::Active


    class Version : public Entity
    {
        public:
            Version();
            ~Version();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value log; //type: string




    }; // SoftwareInstall::Version


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
            Value log; //type: string




    }; // SoftwareInstall::Inactive


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
            Value log; //type: string




    }; // SoftwareInstall::Request


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
                Value state; //type: IsdStateEtEnum
                Value issu_node_cnt; //type: int32
                Value issu_ready_node_cnt; //type: int32
                Value percentage; //type: int32
                Value issu_status; //type: IsdIssuStatusEtEnum
                Value issu_error; //type: IsdErrorEtEnum


                class IsdErrorEtEnum;
                class IsdIssuStatusEtEnum;
                class IsdStateEtEnum;


        }; // SoftwareInstall::Issu::Stage


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


            class Invinfo : public Entity
            {
                public:
                    Invinfo();
                    ~Invinfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value node_id; //type: int32
                    Value node_type; //type: CardTypeEtEnum
                    Value issu_node_role; //type: IssuNodeRoleEtEnum
                    Value node_state; //type: IssudirNodeStatusEtEnum
                    Value node_role; //type: NodeRoleEtEnum


                    class IssuNodeRoleEtEnum;
                    class NodeRoleEtEnum;
                    class IssudirNodeStatusEtEnum;
                    class CardTypeEtEnum;


            }; // SoftwareInstall::Issu::Inventory::Invinfo


                std::vector<std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Inventory::Invinfo> > invinfo;


        }; // SoftwareInstall::Issu::Inventory


            std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Inventory> inventory;
            std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu::Stage> stage;


    }; // SoftwareInstall::Issu


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


        class CommittedPackageInfo : public Entity
        {
            public:
                CommittedPackageInfo();
                ~CommittedPackageInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value error_message; //type: string
                Value location; //type: string
                Value node_type; //type: string
                Value boot_partition_name; //type: string
                Value number_of_committed_packages; //type: uint32
                Value committed_packages; //type: string




        }; // SoftwareInstall::Committed::CommittedPackageInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Committed::CommittedPackageInfo> > committed_package_info;


    }; // SoftwareInstall::Committed


    class AllOperationsLog : public Entity
    {
        public:
            AllOperationsLog();
            ~AllOperationsLog();

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
                Value log; //type: string




        }; // SoftwareInstall::AllOperationsLog::Summary


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
                Value log; //type: string




        }; // SoftwareInstall::AllOperationsLog::Detail


            std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog::Detail> detail;
            std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog::Summary> summary;


    }; // SoftwareInstall::AllOperationsLog


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
                Value package_name; //type: string


            class Verbose : public Entity
            {
                public:
                    Verbose();
                    ~Verbose();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value log; //type: string




            }; // SoftwareInstall::Packages::Package::Verbose


            class Brief : public Entity
            {
                public:
                    Brief();
                    ~Brief();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value log; //type: string




            }; // SoftwareInstall::Packages::Package::Brief


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
                    Value log; //type: string




            }; // SoftwareInstall::Packages::Package::Detail


                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Brief> brief;
                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Detail> detail;
                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package::Verbose> verbose;


        }; // SoftwareInstall::Packages::Package


            std::vector<std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages::Package> > package;


    }; // SoftwareInstall::Packages


    class OperationLogs : public Entity
    {
        public:
            OperationLogs();
            ~OperationLogs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class OperationLog : public Entity
        {
            public:
                OperationLog();
                ~OperationLog();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value log_id; //type: int32


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
                    Value log; //type: string




            }; // SoftwareInstall::OperationLogs::OperationLog::Summary


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
                    Value log; //type: string




            }; // SoftwareInstall::OperationLogs::OperationLog::Detail


                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog::Detail> detail;
                std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog::Summary> summary;


        }; // SoftwareInstall::OperationLogs::OperationLog


            std::vector<std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs::OperationLog> > operation_log;


    }; // SoftwareInstall::OperationLogs


    class Repository : public Entity
    {
        public:
            Repository();
            ~Repository();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Xr : public Entity
        {
            public:
                Xr();
                ~Xr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value log; //type: string




        }; // SoftwareInstall::Repository::Xr


        class All : public Entity
        {
            public:
                All();
                ~All();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value log; //type: string




        }; // SoftwareInstall::Repository::All


            std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository::All> all;
            std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository::Xr> xr;


    }; // SoftwareInstall::Repository


        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Active> active;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::AllOperationsLog> all_operations_log;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Committed> committed;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Files> files;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Inactive> inactive;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Issu> issu;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::LastNOperationLogs> last_n_operation_logs;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::OperationLogs> operation_logs;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Packages> packages;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Prepare> prepare;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Repository> repository;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Request> request;
        std::unique_ptr<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall::Version> version;


}; // SoftwareInstall


class IsdErrorEtEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value not_compatible;
        static const Enum::Value not_enough_resource;
        static const Enum::Value not_nsr_ready;
        static const Enum::Value not_conn_sdrsm;
        static const Enum::Value cmd_invalid;
        static const Enum::Value load_prep_fail;
        static const Enum::Value error_timeout;
        static const Enum::Value err_node_down;
        static const Enum::Value node_not_ready;
        static const Enum::Value err_node_new;
        static const Enum::Value err_card_oir;
        static const Enum::Value invalid_evt;
        static const Enum::Value disconn_from_calv;
        static const Enum::Value gsp_down;
        static const Enum::Value abort_by_ism;
        static const Enum::Value rpfo;
        static const Enum::Value pkg_null;
        static const Enum::Value error_general;
        static const Enum::Value fsa_error;
        static const Enum::Value err_post_issu;
        static const Enum::Value err_issu_dir_restart;

};

class NodeRoleEtEnum : public Enum
{
    public:
        static const Enum::Value node_unknown;
        static const Enum::Value node_active;
        static const Enum::Value node_standby;
        static const Enum::Value node_unusable;

};

class IsdStateEtEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value idle;
        static const Enum::Value init;
        static const Enum::Value init_done;
        static const Enum::Value load_prep;
        static const Enum::Value load_exec;
        static const Enum::Value load_issu_go;
        static const Enum::Value load_done;
        static const Enum::Value run_prep;
        static const Enum::Value big_bang;
        static const Enum::Value run_done;
        static const Enum::Value cleanup;
        static const Enum::Value cleanup_done;
        static const Enum::Value abort;
        static const Enum::Value abort_done;
        static const Enum::Value abort_cleanup;
        static const Enum::Value unknown_state;

};

class IsdIssuStatusEtEnum : public Enum
{
    public:
        static const Enum::Value ok;
        static const Enum::Value prep_done;
        static const Enum::Value big_bang;
        static const Enum::Value done;
        static const Enum::Value abort;
        static const Enum::Value cmd_reject;
        static const Enum::Value unknown;
        static const Enum::Value abort_cleanup;
        static const Enum::Value abort_cmd_reject;

};

class IssudirNodeStatusEtEnum : public Enum
{
    public:
        static const Enum::Value not_issu_ready;
        static const Enum::Value issu_ready;
        static const Enum::Value isus_go;
        static const Enum::Value node_fail;

};

class IssuNodeRoleEtEnum : public Enum
{
    public:
        static const Enum::Value unknown_role;
        static const Enum::Value primary_role;
        static const Enum::Value secondary_role;
        static const Enum::Value tertiary_role;

};

class CardTypeEtEnum : public Enum
{
    public:
        static const Enum::Value card_rp;
        static const Enum::Value card_drp;
        static const Enum::Value card_lc;
        static const Enum::Value card_sc;
        static const Enum::Value card_sp;
        static const Enum::Value card_other;

};


}
}

#endif /* _CISCO_IOS_XR_SPIRIT_INSTALL_INSTMGR_OPER_ */

