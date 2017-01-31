#ifndef _CISCO_IOS_XR_AAA_LOCALD_OPER_
#define _CISCO_IOS_XR_AAA_LOCALD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_locald_oper {

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



    class AllTasks : public Entity
    {
        public:
            AllTasks();
            ~AllTasks();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeafList task_id; //type: list of  string



    }; // Aaa::AllTasks


    class CurrentuserDetail : public Entity
    {
        public:
            CurrentuserDetail();
            ~CurrentuserDetail();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf name; //type: string
            YLeaf authenmethod; //type: int32
            YLeafList usergroup; //type: list of  string
            YLeafList taskmap; //type: list of  string



    }; // Aaa::CurrentuserDetail


    class TaskMap : public Entity
    {
        public:
            TaskMap();
            ~TaskMap();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf name; //type: string
            YLeaf authenmethod; //type: int32
            YLeafList usergroup; //type: list of  string
            YLeafList taskmap; //type: list of  string



    }; // Aaa::TaskMap


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
                YLeaf name_xr; //type: string

            class IncludedTaskIds : public Entity
            {
                public:
                    IncludedTaskIds();
                    ~IncludedTaskIds();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf task_id; //type: string
                        YLeaf read; //type: boolean
                        YLeaf write; //type: boolean
                        YLeaf execute; //type: boolean
                        YLeaf debug; //type: boolean



                }; // Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks> > tasks;


            }; // Aaa::Taskgroups::Taskgroup::IncludedTaskIds


            class TaskMap : public Entity
            {
                public:
                    TaskMap();
                    ~TaskMap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf task_id; //type: string
                        YLeaf read; //type: boolean
                        YLeaf write; //type: boolean
                        YLeaf execute; //type: boolean
                        YLeaf debug; //type: boolean



                }; // Aaa::Taskgroups::Taskgroup::TaskMap::Tasks


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::TaskMap::Tasks> > tasks;


            }; // Aaa::Taskgroups::Taskgroup::TaskMap


                std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::IncludedTaskIds> included_task_ids;
                std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::TaskMap> task_map;


        }; // Aaa::Taskgroups::Taskgroup


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup> > taskgroup;


    }; // Aaa::Taskgroups


    class Users : public Entity
    {
        public:
            Users();
            ~Users();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class User : public Entity
        {
            public:
                User();
                ~User();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf name; //type: string
                YLeaf name_xr; //type: string
                YLeaf admin_user; //type: boolean
                YLeaf first_user; //type: boolean
                YLeafList usergroup; //type: list of  string

            class TaskMap : public Entity
            {
                public:
                    TaskMap();
                    ~TaskMap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf task_id; //type: string
                        YLeaf read; //type: boolean
                        YLeaf write; //type: boolean
                        YLeaf execute; //type: boolean
                        YLeaf debug; //type: boolean



                }; // Aaa::Users::User::TaskMap::Tasks


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users::User::TaskMap::Tasks> > tasks;


            }; // Aaa::Users::User::TaskMap


                std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users::User::TaskMap> task_map;


        }; // Aaa::Users::User


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users::User> > user;


    }; // Aaa::Users


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
                YLeaf name_xr; //type: string

            class TaskMap : public Entity
            {
                public:
                    TaskMap();
                    ~TaskMap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf task_id; //type: string
                        YLeaf read; //type: boolean
                        YLeaf write; //type: boolean
                        YLeaf execute; //type: boolean
                        YLeaf debug; //type: boolean



                }; // Aaa::Usergroups::Usergroup::TaskMap::Tasks


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::TaskMap::Tasks> > tasks;


            }; // Aaa::Usergroups::Usergroup::TaskMap


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


                    YLeaf name_xr; //type: string

                class IncludedTaskIds : public Entity
                {
                    public:
                        IncludedTaskIds();
                        ~IncludedTaskIds();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



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


                            YLeaf task_id; //type: string
                            YLeaf read; //type: boolean
                            YLeaf write; //type: boolean
                            YLeaf execute; //type: boolean
                            YLeaf debug; //type: boolean



                    }; // Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks> > tasks;


                }; // Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds


                class TaskMap : public Entity
                {
                    public:
                        TaskMap();
                        ~TaskMap();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



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


                            YLeaf task_id; //type: string
                            YLeaf read; //type: boolean
                            YLeaf write; //type: boolean
                            YLeaf execute; //type: boolean
                            YLeaf debug; //type: boolean



                    }; // Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks> > tasks;


                }; // Aaa::Usergroups::Usergroup::Taskgroup::TaskMap


                    std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds> included_task_ids;
                    std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::TaskMap> task_map;


            }; // Aaa::Usergroups::Usergroup::Taskgroup


                std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::TaskMap> task_map;
                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup> > taskgroup;


        }; // Aaa::Usergroups::Usergroup


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup> > usergroup;


    }; // Aaa::Usergroups


    class AuthenMethod : public Entity
    {
        public:
            AuthenMethod();
            ~AuthenMethod();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf name; //type: string
            YLeaf authenmethod; //type: int32
            YLeafList usergroup; //type: list of  string
            YLeafList taskmap; //type: list of  string



    }; // Aaa::AuthenMethod


    class CurrentUsergroup : public Entity
    {
        public:
            CurrentUsergroup();
            ~CurrentUsergroup();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf name; //type: string
            YLeaf authenmethod; //type: int32
            YLeafList usergroup; //type: list of  string
            YLeafList taskmap; //type: list of  string



    }; // Aaa::CurrentUsergroup


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


                    YLeaf ip_address; //type: string
                    YLeaf auth_port_number; //type: uint32
                    YLeaf acct_port_number; //type: uint32
                    YLeaf ipv4_address; //type: string
                    YLeaf priority; //type: uint32
                    YLeaf timeout_xr; //type: uint32
                    YLeaf retransmit; //type: uint32
                    YLeaf dead_time; //type: uint32
                    YLeaf dead_detect_time; //type: uint32
                    YLeaf dead_detect_tries; //type: uint32
                    YLeaf authentication_port; //type: uint32
                    YLeaf accounting_port; //type: uint32
                    YLeaf state; //type: string
                    YLeaf current_state_duration; //type: uint32
                    YLeaf previous_state_duration; //type: uint32
                    YLeaf packets_in; //type: uint32
                    YLeaf packets_out; //type: uint32
                    YLeaf timeouts; //type: uint32
                    YLeaf aborts; //type: uint32
                    YLeaf replies_expected; //type: uint32
                    YLeaf redirected_requests; //type: uint32
                    YLeaf authentication_rtt; //type: uint32
                    YLeaf access_requests; //type: uint32
                    YLeaf access_request_retransmits; //type: uint32
                    YLeaf access_accepts; //type: uint32
                    YLeaf access_rejects; //type: uint32
                    YLeaf access_challenges; //type: uint32
                    YLeaf bad_access_responses; //type: uint32
                    YLeaf bad_access_authenticators; //type: uint32
                    YLeaf pending_access_requests; //type: uint32
                    YLeaf access_timeouts; //type: uint32
                    YLeaf unknown_access_types; //type: uint32
                    YLeaf dropped_access_responses; //type: uint32
                    YLeaf throttled_access_reqs; //type: uint32
                    YLeaf throttled_timed_out_reqs; //type: uint32
                    YLeaf throttled_dropped_reqs; //type: uint32
                    YLeaf max_throttled_access_reqs; //type: uint32
                    YLeaf currently_throttled_access_reqs; //type: uint32
                    YLeaf authen_response_time; //type: uint32
                    YLeaf authen_transaction_successess; //type: uint32
                    YLeaf authen_transaction_failure; //type: uint32
                    YLeaf authen_unexpected_responses; //type: uint32
                    YLeaf authen_server_error_responses; //type: uint32
                    YLeaf authen_incorrect_responses; //type: uint32
                    YLeaf author_requests; //type: uint32
                    YLeaf author_request_timeouts; //type: uint32
                    YLeaf author_response_time; //type: uint32
                    YLeaf author_transaction_successess; //type: uint32
                    YLeaf author_transaction_failure; //type: uint32
                    YLeaf author_unexpected_responses; //type: uint32
                    YLeaf author_server_error_responses; //type: uint32
                    YLeaf author_incorrect_responses; //type: uint32
                    YLeaf accounting_rtt; //type: uint32
                    YLeaf accounting_requests; //type: uint32
                    YLeaf accounting_retransmits; //type: uint32
                    YLeaf accounting_responses; //type: uint32
                    YLeaf bad_accounting_responses; //type: uint32
                    YLeaf bad_accounting_authenticators; //type: uint32
                    YLeaf pending_accounting_requets; //type: uint32
                    YLeaf accounting_timeouts; //type: uint32
                    YLeaf unknown_accounting_types; //type: uint32
                    YLeaf dropped_accounting_responses; //type: uint32
                    YLeaf is_a_private_server; //type: boolean
                    YLeaf total_test_auth_reqs; //type: uint32
                    YLeaf total_test_auth_timeouts; //type: uint32
                    YLeaf total_test_auth_response; //type: uint32
                    YLeaf total_test_auth_pending; //type: uint32
                    YLeaf total_test_acct_reqs; //type: uint32
                    YLeaf total_test_acct_timeouts; //type: uint32
                    YLeaf total_test_acct_response; //type: uint32
                    YLeaf total_test_acct_pending; //type: uint32
                    YLeaf throttled_acct_transactions; //type: uint32
                    YLeaf throttled_acct_timed_out_stats; //type: uint32
                    YLeaf throttled_acct_failures_stats; //type: uint32
                    YLeaf max_acct_throttled; //type: uint32
                    YLeaf throttleda_acct_transactions; //type: uint32
                    YLeaf acct_unexpected_responses; //type: uint32
                    YLeaf acct_server_error_responses; //type: uint32
                    YLeaf acct_incorrect_responses; //type: uint32
                    YLeaf acct_response_time; //type: uint32
                    YLeaf acct_transaction_successess; //type: uint32
                    YLeaf acct_transaction_failure; //type: uint32
                    YLeaf total_deadtime; //type: uint32
                    YLeaf last_deadtime; //type: uint32
                    YLeaf is_quarantined; //type: boolean
                    YLeaf group_name; //type: string
                    YLeaf ip_address_xr; //type: string
                    YLeaf family; //type: string



            }; // Aaa::Radius::Servers::Server


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Servers::Server> > server;


        }; // Aaa::Radius::Servers


        class Global : public Entity
        {
            public:
                Global();
                ~Global();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf unknown_authentication_response; //type: uint32
                YLeaf authentication_nas_id; //type: string
                YLeaf unknown_accounting_response; //type: uint32
                YLeaf accounting_nas_id; //type: string



        }; // Aaa::Radius::Global


            std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Global> global;
            std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Servers> servers;


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



                class TacacsRequestbag : public Entity
                {
                    public:
                        TacacsRequestbag();
                        ~TacacsRequestbag();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf time_remaining; //type: uint32
                        YLeaf bytes_out; //type: uint32
                        YLeaf out_pak_size; //type: uint32
                        YLeaf bytes_in; //type: uint32
                        YLeaf in_pak_size; //type: uint32
                        YLeaf pak_type; //type: string
                        YLeaf session_id; //type: int32
                        YLeaf sock; //type: int32



                }; // Aaa::Tacacs::Requests::Request::TacacsRequestbag


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Requests::Request::TacacsRequestbag> > tacacs_requestbag;


            }; // Aaa::Tacacs::Requests::Request


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Requests::Request> > request;


        }; // Aaa::Tacacs::Requests


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


                    YLeaf addr; //type: string
                    YLeaf timeout; //type: uint32
                    YLeaf port; //type: uint32
                    YLeaf bytes_in; //type: uint32
                    YLeaf bytes_out; //type: uint32
                    YLeaf closes; //type: uint32
                    YLeaf opens; //type: uint32
                    YLeaf errors; //type: uint32
                    YLeaf aborts; //type: uint32
                    YLeaf paks_in; //type: uint32
                    YLeaf paks_out; //type: uint32
                    YLeaf replies_expected; //type: uint32
                    YLeaf up; //type: boolean
                    YLeaf conn_up; //type: boolean
                    YLeaf single_connect; //type: boolean
                    YLeaf is_private; //type: boolean
                    YLeaf vrf_name; //type: string
                    YLeaf addr_buf; //type: string
                    YLeaf family; //type: string



            }; // Aaa::Tacacs::Servers::Server


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Servers::Server> > server;


        }; // Aaa::Tacacs::Servers


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



            class ServerGroup : public Entity
            {
                public:
                    ServerGroup();
                    ~ServerGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf group_name; //type: string
                    YLeaf sg_map_num; //type: uint32
                    YLeaf vrf_name; //type: string

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


                        YLeaf addr; //type: string
                        YLeaf timeout; //type: uint32
                        YLeaf port; //type: uint32
                        YLeaf bytes_in; //type: uint32
                        YLeaf bytes_out; //type: uint32
                        YLeaf closes; //type: uint32
                        YLeaf opens; //type: uint32
                        YLeaf errors; //type: uint32
                        YLeaf aborts; //type: uint32
                        YLeaf paks_in; //type: uint32
                        YLeaf paks_out; //type: uint32
                        YLeaf replies_expected; //type: uint32
                        YLeaf up; //type: boolean
                        YLeaf conn_up; //type: boolean
                        YLeaf single_connect; //type: boolean
                        YLeaf is_private; //type: boolean
                        YLeaf vrf_name; //type: string
                        YLeaf addr_buf; //type: string
                        YLeaf family; //type: string



                }; // Aaa::Tacacs::ServerGroups::ServerGroup::Server


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::ServerGroups::ServerGroup::Server> > server;


            }; // Aaa::Tacacs::ServerGroups::ServerGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::ServerGroups::ServerGroup> > server_group;


        }; // Aaa::Tacacs::ServerGroups


            std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Requests> requests;
            std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::ServerGroups> server_groups;
            std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Servers> servers;


    }; // Aaa::Tacacs


        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::AllTasks> all_tasks;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::AuthenMethod> authen_method;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::CurrentUsergroup> current_usergroup;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::CurrentuserDetail> currentuser_detail;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius> radius;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs> tacacs;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::TaskMap> task_map;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups> taskgroups;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups> usergroups;
        std::unique_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users> users;


}; // Aaa



}
}

#endif /* _CISCO_IOS_XR_AAA_LOCALD_OPER_ */

