#ifndef _CISCO_IOS_XR_AAA_LIB_CFG_
#define _CISCO_IOS_XR_AAA_LIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_aaa_lib_cfg {

class Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf default_taskgroup; //type: string

    class Accountings : public Entity
    {
        public:
            Accountings();
            ~Accountings();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Accounting : public Entity
        {
            public:
                Accounting();
                ~Accounting();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf type; //type: string
                YLeaf listname; //type: string
                YLeaf rp_failover; //type: AaaAccountingRpFailoverEnum
                YLeaf broadcast; //type: AaaAccountingBroadcastEnum
                YLeaf type_xr; //type: AaaAccountingEnum
                YLeafList method; //type: list of  AaaMethodEnum
                YLeafList server_group_name; //type: list of  string



        }; // Aaa::Accountings::Accounting


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Accountings::Accounting> > accounting;


    }; // Aaa::Accountings


    class Authorizations : public Entity
    {
        public:
            Authorizations();
            ~Authorizations();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Authorization : public Entity
        {
            public:
                Authorization();
                ~Authorization();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf type; //type: string
                YLeaf listname; //type: string
                YLeafList method; //type: list of  AaaMethodEnum
                YLeafList server_group_name; //type: list of  string



        }; // Aaa::Authorizations::Authorization


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authorizations::Authorization> > authorization;


    }; // Aaa::Authorizations


    class AccountingUpdate : public Entity
    {
        public:
            AccountingUpdate();
            ~AccountingUpdate();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf type; //type: AaaAccountingUpdateEnum
            YLeaf periodic_interval; //type: uint32



    }; // Aaa::AccountingUpdate


    class Authentications : public Entity
    {
        public:
            Authentications();
            ~Authentications();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Authentication : public Entity
        {
            public:
                Authentication();
                ~Authentication();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf type; //type: string
                YLeaf listname; //type: string
                YLeafList method; //type: list of  AaaMethodEnum
                YLeafList server_group_name; //type: list of  string



        }; // Aaa::Authentications::Authentication


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authentications::Authentication> > authentication;


    }; // Aaa::Authentications


    class ServerGroups : public Entity
    {
        public:
            ServerGroups();
            ~ServerGroups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RadiusServerGroups : public Entity
        {
            public:
                RadiusServerGroups();
                ~RadiusServerGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class RadiusServerGroup : public Entity
            {
                public:
                    RadiusServerGroup();
                    ~RadiusServerGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf server_group_name; //type: string
                    YLeaf dead_time; //type: uint32
                    YLeaf source_interface; //type: string
                    YLeaf vrf; //type: string

                class Accounting : public Entity
                {
                    public:
                        Accounting();
                        ~Accounting();

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


                            YLeaf action; //type: AaaActionEnum
                            YLeaf attribute_list_name; //type: string



                    }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request


                    class Reply : public Entity
                    {
                        public:
                            Reply();
                            ~Reply();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf action; //type: AaaActionEnum
                            YLeaf attribute_list_name; //type: string



                    }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply


                        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply> reply;
                        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request> request;


                }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting


                class Servers : public Entity
                {
                    public:
                        Servers();
                        ~Servers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Server : public Entity
                    {
                        public:
                            Server();
                            ~Server();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ordering_index; //type: int32
                            YLeaf ip_address; //type: string
                            YLeaf auth_port_number; //type: uint16
                            YLeaf acct_port_number; //type: uint16



                    }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server> > server;


                }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers


                class PrivateServers : public Entity
                {
                    public:
                        PrivateServers();
                        ~PrivateServers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrivateServer : public Entity
                    {
                        public:
                            PrivateServer();
                            ~PrivateServer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ordering_index; //type: int32
                            YLeaf ip_address; //type: string
                            YLeaf auth_port_number; //type: uint16
                            YLeaf acct_port_number; //type: uint16
                            YLeaf private_timeout; //type: uint32
                            YLeaf ignore_accounting_port; //type: boolean
                            YLeaf private_retransmit; //type: uint32
                            YLeaf idle_time; //type: uint32
                            YLeaf private_key; //type: string
                            YLeaf username; //type: string
                            YLeaf ignore_auth_port; //type: boolean



                    }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer> > private_server;


                }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers


                class ServerGroupThrottle : public Entity
                {
                    public:
                        ServerGroupThrottle();
                        ~ServerGroupThrottle();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf access; //type: uint32
                        YLeaf access_timeout; //type: uint32
                        YLeaf accounting; //type: uint32



                }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle


                class LoadBalance : public Entity
                {
                    public:
                        LoadBalance();
                        ~LoadBalance();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Method : public Entity
                    {
                        public:
                            Method();
                            ~Method();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Name : public Entity
                        {
                            public:
                                Name();
                                ~Name();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf least_outstanding; //type: int32
                                YLeaf batch_size; //type: uint32
                                YLeaf ignore_preferred_server; //type: int32



                        }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name


                            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name> name;


                    }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method


                        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method> method;


                }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance


                class Authorization : public Entity
                {
                    public:
                        Authorization();
                        ~Authorization();

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


                            YLeaf action; //type: AaaActionEnum
                            YLeaf attribute_list_name; //type: string



                    }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request


                    class Reply : public Entity
                    {
                        public:
                            Reply();
                            ~Reply();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf action; //type: AaaActionEnum
                            YLeaf attribute_list_name; //type: string



                    }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply


                        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply> reply;
                        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request> request;


                }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization


                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting> accounting;
                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization> authorization;
                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance> load_balance;
                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers> private_servers;
                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle> server_group_throttle;
                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers> servers;


            }; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup> > radius_server_group;


        }; // Aaa::ServerGroups::RadiusServerGroups


        class TacacsServerGroups : public Entity
        {
            public:
                TacacsServerGroups();
                ~TacacsServerGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class TacacsServerGroup : public Entity
            {
                public:
                    TacacsServerGroup();
                    ~TacacsServerGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf server_group_name; //type: string
                    YLeaf vrf; //type: string

                class Servers : public Entity
                {
                    public:
                        Servers();
                        ~Servers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Server : public Entity
                    {
                        public:
                            Server();
                            ~Server();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ordering_index; //type: int32
                            YLeaf ip_address; //type: string



                    }; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server> > server;


                }; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers


                class PrivateServers : public Entity
                {
                    public:
                        PrivateServers();
                        ~PrivateServers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrivateServer : public Entity
                    {
                        public:
                            PrivateServer();
                            ~PrivateServer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ordering_index; //type: int32
                            YLeaf ip_address; //type: string
                            YLeaf port_number; //type: uint32
                            YLeaf key; //type: string
                            YLeaf timeout; //type: uint32



                    }; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer> > private_server;


                }; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers


                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers> private_servers;
                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers> servers;


            }; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup> > tacacs_server_group;


        }; // Aaa::ServerGroups::TacacsServerGroups


            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups> radius_server_groups;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups> tacacs_server_groups;


    }; // Aaa::ServerGroups


    class Usernames : public Entity
    {
        public:
            Usernames();
            ~Usernames();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Username : public Entity
        {
            public:
                Username();
                ~Username();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf ordering_index; //type: int32
                YLeaf name; //type: string
                YLeaf secret; //type: string
                YLeaf password; //type: string

            class UsergroupUnderUsernames : public Entity
            {
                public:
                    UsergroupUnderUsernames();
                    ~UsergroupUnderUsernames();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class UsergroupUnderUsername : public Entity
                {
                    public:
                        UsergroupUnderUsername();
                        ~UsergroupUnderUsername();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf name; //type: string



                }; // Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername> > usergroup_under_username;


            }; // Aaa::Usernames::Username::UsergroupUnderUsernames


                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames> usergroup_under_usernames;


        }; // Aaa::Usernames::Username


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username> > username;


    }; // Aaa::Usernames


    class Taskgroups : public Entity
    {
        public:
            Taskgroups();
            ~Taskgroups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Taskgroup : public Entity
        {
            public:
                Taskgroup();
                ~Taskgroup();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf name; //type: string
                YLeaf description; //type: string

            class TaskgroupUnderTaskgroups : public Entity
            {
                public:
                    TaskgroupUnderTaskgroups();
                    ~TaskgroupUnderTaskgroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class TaskgroupUnderTaskgroup : public Entity
                {
                    public:
                        TaskgroupUnderTaskgroup();
                        ~TaskgroupUnderTaskgroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf name; //type: string



                }; // Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup> > taskgroup_under_taskgroup;


            }; // Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups


            class Tasks : public Entity
            {
                public:
                    Tasks();
                    ~Tasks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Task : public Entity
                {
                    public:
                        Task();
                        ~Task();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf type; //type: AaaLocaldTaskClassEnum
                        YLeaf task_id; //type: string



                }; // Aaa::Taskgroups::Taskgroup::Tasks::Task


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::Tasks::Task> > task;


            }; // Aaa::Taskgroups::Taskgroup::Tasks


                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups> taskgroup_under_taskgroups;
                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::Tasks> tasks;


        }; // Aaa::Taskgroups::Taskgroup


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup> > taskgroup;


    }; // Aaa::Taskgroups


    class Usergroups : public Entity
    {
        public:
            Usergroups();
            ~Usergroups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Usergroup : public Entity
        {
            public:
                Usergroup();
                ~Usergroup();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf name; //type: string
                YLeaf description; //type: string

            class TaskgroupUnderUsergroups : public Entity
            {
                public:
                    TaskgroupUnderUsergroups();
                    ~TaskgroupUnderUsergroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class TaskgroupUnderUsergroup : public Entity
                {
                    public:
                        TaskgroupUnderUsergroup();
                        ~TaskgroupUnderUsergroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf name; //type: string



                }; // Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup> > taskgroup_under_usergroup;


            }; // Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups


            class UsergroupUnderUsergroups : public Entity
            {
                public:
                    UsergroupUnderUsergroups();
                    ~UsergroupUnderUsergroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class UsergroupUnderUsergroup : public Entity
                {
                    public:
                        UsergroupUnderUsergroup();
                        ~UsergroupUnderUsergroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf name; //type: string



                }; // Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup> > usergroup_under_usergroup;


            }; // Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups


                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups> taskgroup_under_usergroups;
                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups> usergroup_under_usergroups;


        }; // Aaa::Usergroups::Usergroup


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup> > usergroup;


    }; // Aaa::Usergroups


    class Radius : public Entity
    {
        public:
            Radius();
            ~Radius();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf retransmit; //type: uint32
            YLeaf dead_time; //type: uint32
            YLeaf key; //type: string
            YLeaf timeout; //type: uint32
            YLeaf ignore_accounting_port; //type: boolean
            YLeaf idle_time; //type: uint32
            YLeaf username; //type: string
            YLeaf ignore_auth_port; //type: boolean

        class Hosts : public Entity
        {
            public:
                Hosts();
                ~Hosts();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Host : public Entity
            {
                public:
                    Host();
                    ~Host();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ordering_index; //type: int32
                    YLeaf ip_address; //type: string
                    YLeaf auth_port_number; //type: uint16
                    YLeaf acct_port_number; //type: uint16
                    YLeaf host_retransmit; //type: uint32
                    YLeaf host_timeout; //type: uint32
                    YLeaf host_key; //type: string
                    YLeaf ignore_accounting_port; //type: boolean
                    YLeaf idle_time; //type: uint32
                    YLeaf username; //type: string
                    YLeaf ignore_auth_port; //type: boolean



            }; // Aaa::Radius::Hosts::Host


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Hosts::Host> > host;


        }; // Aaa::Radius::Hosts


        class DeadCriteria : public Entity
        {
            public:
                DeadCriteria();
                ~DeadCriteria();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tries; //type: uint32
                YLeaf time; //type: uint32



        }; // Aaa::Radius::DeadCriteria


        class Disallow : public Entity
        {
            public:
                Disallow();
                ~Disallow();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf null_username; //type: int32



        }; // Aaa::Radius::Disallow


        class Ipv6 : public Entity
        {
            public:
                Ipv6();
                ~Ipv6();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf dscp; //type: one of uint32, enumeration



        }; // Aaa::Radius::Ipv6


        class DynamicAuthorization : public Entity
        {
            public:
                DynamicAuthorization();
                ~DynamicAuthorization();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf ignore; //type: AaaSelectKeyEnum
                YLeaf port; //type: uint32
                YLeaf authentication_type; //type: AaaAuthenticationEnum
                YLeaf server_key; //type: string

            class Clients : public Entity
            {
                public:
                    Clients();
                    ~Clients();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Client : public Entity
                {
                    public:
                        Client();
                        ~Client();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ip_address; //type: string
                        YLeaf server_key; //type: string



                }; // Aaa::Radius::DynamicAuthorization::Clients::Client


                class ClientVrfName : public Entity
                {
                    public:
                        ClientVrfName();
                        ~ClientVrfName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vrf_name; //type: string
                        YLeaf ip_address; //type: string
                        YLeaf server_key; //type: string



                }; // Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization::Clients::Client> > client;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName> > client_vrf_name;


            }; // Aaa::Radius::DynamicAuthorization::Clients


                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization::Clients> clients;


        }; // Aaa::Radius::DynamicAuthorization


        class LoadBalanceOptions : public Entity
        {
            public:
                LoadBalanceOptions();
                ~LoadBalanceOptions();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class LoadBalanceMethod : public Entity
            {
                public:
                    LoadBalanceMethod();
                    ~LoadBalanceMethod();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BatchSize : public Entity
                {
                    public:
                        BatchSize();
                        ~BatchSize();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf batch_size; //type: uint32
                        YLeaf ignore_preferred_server; //type: int32



                }; // Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize


                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize> batch_size;


            }; // Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod


                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod> load_balance_method;


        }; // Aaa::Radius::LoadBalanceOptions


        class Vrfs : public Entity
        {
            public:
                Vrfs();
                ~Vrfs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Vrf : public Entity
            {
                public:
                    Vrf();
                    ~Vrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf vrf_name; //type: string
                    YLeaf source_interface; //type: string



            }; // Aaa::Radius::Vrfs::Vrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vrfs::Vrf> > vrf;


        }; // Aaa::Radius::Vrfs


        class Throttle : public Entity
        {
            public:
                Throttle();
                ~Throttle();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf access; //type: uint32
                YLeaf access_timeout; //type: uint32
                YLeaf accounting; //type: uint32



        }; // Aaa::Radius::Throttle


        class Vsa : public Entity
        {
            public:
                Vsa();
                ~Vsa();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Attribute : public Entity
            {
                public:
                    Attribute();
                    ~Attribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Ignore : public Entity
                {
                    public:
                        Ignore();
                        ~Ignore();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf unknown; //type: empty



                }; // Aaa::Radius::Vsa::Attribute::Ignore


                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa::Attribute::Ignore> ignore;


            }; // Aaa::Radius::Vsa::Attribute


                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa::Attribute> attribute;


        }; // Aaa::Radius::Vsa


        class Ipv4 : public Entity
        {
            public:
                Ipv4();
                ~Ipv4();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf dscp; //type: one of uint32, enumeration



        }; // Aaa::Radius::Ipv4


        class RadiusAttribute : public Entity
        {
            public:
                RadiusAttribute();
                ~RadiusAttribute();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class AcctMultiSessionId : public Entity
            {
                public:
                    AcctMultiSessionId();
                    ~AcctMultiSessionId();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class IncludeParentSessionId : public Entity
                {
                    public:
                        IncludeParentSessionId();
                        ~IncludeParentSessionId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf config; //type: AaaConfigEnum



                }; // Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId


                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId> include_parent_session_id;


            }; // Aaa::Radius::RadiusAttribute::AcctMultiSessionId


            class AcctSessionId : public Entity
            {
                public:
                    AcctSessionId();
                    ~AcctSessionId();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class PrependNasPortId : public Entity
                {
                    public:
                        PrependNasPortId();
                        ~PrependNasPortId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf config; //type: AaaConfigEnum



                }; // Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId


                    std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId> prepend_nas_port_id;


            }; // Aaa::Radius::RadiusAttribute::AcctSessionId


                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctMultiSessionId> acct_multi_session_id;
                std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctSessionId> acct_session_id;


        }; // Aaa::Radius::RadiusAttribute


        class Attributes : public Entity
        {
            public:
                Attributes();
                ~Attributes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Attribute : public Entity
            {
                public:
                    Attribute();
                    ~Attribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf attribute_list_name; //type: string
                    YLeaf attribute; //type: string



            }; // Aaa::Radius::Attributes::Attribute


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Attributes::Attribute> > attribute;


        }; // Aaa::Radius::Attributes


        class SourcePort : public Entity
        {
            public:
                SourcePort();
                ~SourcePort();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf extended; //type: empty



        }; // Aaa::Radius::SourcePort


            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Attributes> attributes;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DeadCriteria> dead_criteria;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Disallow> disallow;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization> dynamic_authorization;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Hosts> hosts;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Ipv4> ipv4;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Ipv6> ipv6;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions> load_balance_options;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute> radius_attribute;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::SourcePort> source_port;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Throttle> throttle;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vrfs> vrfs;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa> vsa;


    }; // Aaa::Radius


    class Tacacs : public Entity
    {
        public:
            Tacacs();
            ~Tacacs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf key; //type: string
            YLeaf timeout; //type: uint32
            YLeaf single_connect; //type: boolean

        class Ipv6 : public Entity
        {
            public:
                Ipv6();
                ~Ipv6();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf dscp; //type: one of uint32, enumeration



        }; // Aaa::Tacacs::Ipv6


        class Hosts : public Entity
        {
            public:
                Hosts();
                ~Hosts();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Host : public Entity
            {
                public:
                    Host();
                    ~Host();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ordering_index; //type: int32
                    YLeaf ip_address; //type: string
                    YLeaf port_number; //type: uint32
                    YLeaf key; //type: string
                    YLeaf timeout; //type: uint32
                    YLeaf single_connect; //type: boolean



            }; // Aaa::Tacacs::Hosts::Host


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Hosts::Host> > host;


        }; // Aaa::Tacacs::Hosts


        class Ipv4 : public Entity
        {
            public:
                Ipv4();
                ~Ipv4();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf dscp; //type: one of uint32, enumeration



        }; // Aaa::Tacacs::Ipv4


        class Vrfs : public Entity
        {
            public:
                Vrfs();
                ~Vrfs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Vrf : public Entity
            {
                public:
                    Vrf();
                    ~Vrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf vrf_name; //type: string
                    YLeaf source_interface; //type: string



            }; // Aaa::Tacacs::Vrfs::Vrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Vrfs::Vrf> > vrf;


        }; // Aaa::Tacacs::Vrfs


            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Hosts> hosts;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Ipv4> ipv4;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Ipv6> ipv6;
            std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Vrfs> vrfs;


    }; // Aaa::Tacacs


        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AccountingUpdate> accounting_update; // presence node
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Accountings> accountings;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authentications> authentications;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authorizations> authorizations;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius> radius;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups> server_groups;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs> tacacs;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups> taskgroups;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups> usergroups;
        std::unique_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames> usernames;


}; // Aaa


class AaaMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs_plus;
        static const Enum::YLeaf dsmd;
        static const Enum::YLeaf sgbp;
        static const Enum::YLeaf acct_d;
        static const Enum::YLeaf error;
        static const Enum::YLeaf if_authenticated;
        static const Enum::YLeaf server_group;
        static const Enum::YLeaf server_group_not_defined;
        static const Enum::YLeaf line;
        static const Enum::YLeaf enable;
        static const Enum::YLeaf kerberos;
        static const Enum::YLeaf diameter;
        static const Enum::YLeaf last;

};

class AaaAccountingUpdateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf newinfo;
        static const Enum::YLeaf periodic;

};

class AaaAccountingRpFailoverEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf set;

};

class AaaAccountingEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf start_stop;
        static const Enum::YLeaf stop_only;

};

class AaaAccountingBroadcastEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf set;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_CFG_ */

