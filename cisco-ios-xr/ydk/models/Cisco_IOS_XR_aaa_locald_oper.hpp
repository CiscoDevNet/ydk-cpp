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
            ValueList task_id; //type: list of  string




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
            Value name; //type: string
            Value authenmethod; //type: int32
            ValueList usergroup; //type: list of  string
            ValueList taskmap; //type: list of  string




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
            Value name; //type: string
            Value authenmethod; //type: int32
            ValueList usergroup; //type: list of  string
            ValueList taskmap; //type: list of  string




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
                Value name; //type: string
                Value name_xr; //type: string


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
                        Value task_id; //type: string
                        Value read; //type: boolean
                        Value write; //type: boolean
                        Value execute; //type: boolean
                        Value debug; //type: boolean




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
                        Value task_id; //type: string
                        Value read; //type: boolean
                        Value write; //type: boolean
                        Value execute; //type: boolean
                        Value debug; //type: boolean




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
                Value name; //type: string
                Value name_xr; //type: string
                Value admin_user; //type: boolean
                Value first_user; //type: boolean
                ValueList usergroup; //type: list of  string


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
                        Value task_id; //type: string
                        Value read; //type: boolean
                        Value write; //type: boolean
                        Value execute; //type: boolean
                        Value debug; //type: boolean




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
                Value name; //type: string
                Value name_xr; //type: string


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
                        Value task_id; //type: string
                        Value read; //type: boolean
                        Value write; //type: boolean
                        Value execute; //type: boolean
                        Value debug; //type: boolean




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
                    Value name_xr; //type: string


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
                            Value task_id; //type: string
                            Value read; //type: boolean
                            Value write; //type: boolean
                            Value execute; //type: boolean
                            Value debug; //type: boolean




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
                            Value task_id; //type: string
                            Value read; //type: boolean
                            Value write; //type: boolean
                            Value execute; //type: boolean
                            Value debug; //type: boolean




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
            Value name; //type: string
            Value authenmethod; //type: int32
            ValueList usergroup; //type: list of  string
            ValueList taskmap; //type: list of  string




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
            Value name; //type: string
            Value authenmethod; //type: int32
            ValueList usergroup; //type: list of  string
            ValueList taskmap; //type: list of  string




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
                    Value ip_address; //type: string
                    Value auth_port_number; //type: uint32
                    Value acct_port_number; //type: uint32
                    Value ipv4_address; //type: string
                    Value priority; //type: uint32
                    Value timeout_xr; //type: uint32
                    Value retransmit; //type: uint32
                    Value dead_time; //type: uint32
                    Value dead_detect_time; //type: uint32
                    Value dead_detect_tries; //type: uint32
                    Value authentication_port; //type: uint32
                    Value accounting_port; //type: uint32
                    Value state; //type: string
                    Value current_state_duration; //type: uint32
                    Value previous_state_duration; //type: uint32
                    Value packets_in; //type: uint32
                    Value packets_out; //type: uint32
                    Value timeouts; //type: uint32
                    Value aborts; //type: uint32
                    Value replies_expected; //type: uint32
                    Value redirected_requests; //type: uint32
                    Value authentication_rtt; //type: uint32
                    Value access_requests; //type: uint32
                    Value access_request_retransmits; //type: uint32
                    Value access_accepts; //type: uint32
                    Value access_rejects; //type: uint32
                    Value access_challenges; //type: uint32
                    Value bad_access_responses; //type: uint32
                    Value bad_access_authenticators; //type: uint32
                    Value pending_access_requests; //type: uint32
                    Value access_timeouts; //type: uint32
                    Value unknown_access_types; //type: uint32
                    Value dropped_access_responses; //type: uint32
                    Value throttled_access_reqs; //type: uint32
                    Value throttled_timed_out_reqs; //type: uint32
                    Value throttled_dropped_reqs; //type: uint32
                    Value max_throttled_access_reqs; //type: uint32
                    Value currently_throttled_access_reqs; //type: uint32
                    Value authen_response_time; //type: uint32
                    Value authen_transaction_successess; //type: uint32
                    Value authen_transaction_failure; //type: uint32
                    Value authen_unexpected_responses; //type: uint32
                    Value authen_server_error_responses; //type: uint32
                    Value authen_incorrect_responses; //type: uint32
                    Value author_requests; //type: uint32
                    Value author_request_timeouts; //type: uint32
                    Value author_response_time; //type: uint32
                    Value author_transaction_successess; //type: uint32
                    Value author_transaction_failure; //type: uint32
                    Value author_unexpected_responses; //type: uint32
                    Value author_server_error_responses; //type: uint32
                    Value author_incorrect_responses; //type: uint32
                    Value accounting_rtt; //type: uint32
                    Value accounting_requests; //type: uint32
                    Value accounting_retransmits; //type: uint32
                    Value accounting_responses; //type: uint32
                    Value bad_accounting_responses; //type: uint32
                    Value bad_accounting_authenticators; //type: uint32
                    Value pending_accounting_requets; //type: uint32
                    Value accounting_timeouts; //type: uint32
                    Value unknown_accounting_types; //type: uint32
                    Value dropped_accounting_responses; //type: uint32
                    Value is_a_private_server; //type: boolean
                    Value total_test_auth_reqs; //type: uint32
                    Value total_test_auth_timeouts; //type: uint32
                    Value total_test_auth_response; //type: uint32
                    Value total_test_auth_pending; //type: uint32
                    Value total_test_acct_reqs; //type: uint32
                    Value total_test_acct_timeouts; //type: uint32
                    Value total_test_acct_response; //type: uint32
                    Value total_test_acct_pending; //type: uint32
                    Value throttled_acct_transactions; //type: uint32
                    Value throttled_acct_timed_out_stats; //type: uint32
                    Value throttled_acct_failures_stats; //type: uint32
                    Value max_acct_throttled; //type: uint32
                    Value throttleda_acct_transactions; //type: uint32
                    Value acct_unexpected_responses; //type: uint32
                    Value acct_server_error_responses; //type: uint32
                    Value acct_incorrect_responses; //type: uint32
                    Value acct_response_time; //type: uint32
                    Value acct_transaction_successess; //type: uint32
                    Value acct_transaction_failure; //type: uint32
                    Value total_deadtime; //type: uint32
                    Value last_deadtime; //type: uint32
                    Value is_quarantined; //type: boolean
                    Value group_name; //type: string
                    Value ip_address_xr; //type: string
                    Value family; //type: string




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
                Value unknown_authentication_response; //type: uint32
                Value authentication_nas_id; //type: string
                Value unknown_accounting_response; //type: uint32
                Value accounting_nas_id; //type: string




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
                        Value time_remaining; //type: uint32
                        Value bytes_out; //type: uint32
                        Value out_pak_size; //type: uint32
                        Value bytes_in; //type: uint32
                        Value in_pak_size; //type: uint32
                        Value pak_type; //type: string
                        Value session_id; //type: int32
                        Value sock; //type: int32




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
                    Value addr; //type: string
                    Value timeout; //type: uint32
                    Value port; //type: uint32
                    Value bytes_in; //type: uint32
                    Value bytes_out; //type: uint32
                    Value closes; //type: uint32
                    Value opens; //type: uint32
                    Value errors; //type: uint32
                    Value aborts; //type: uint32
                    Value paks_in; //type: uint32
                    Value paks_out; //type: uint32
                    Value replies_expected; //type: uint32
                    Value up; //type: boolean
                    Value conn_up; //type: boolean
                    Value single_connect; //type: boolean
                    Value is_private; //type: boolean
                    Value vrf_name; //type: string
                    Value addr_buf; //type: string
                    Value family; //type: string




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
                    Value group_name; //type: string
                    Value sg_map_num; //type: uint32
                    Value vrf_name; //type: string


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
                        Value addr; //type: string
                        Value timeout; //type: uint32
                        Value port; //type: uint32
                        Value bytes_in; //type: uint32
                        Value bytes_out; //type: uint32
                        Value closes; //type: uint32
                        Value opens; //type: uint32
                        Value errors; //type: uint32
                        Value aborts; //type: uint32
                        Value paks_in; //type: uint32
                        Value paks_out; //type: uint32
                        Value replies_expected; //type: uint32
                        Value up; //type: boolean
                        Value conn_up; //type: boolean
                        Value single_connect; //type: boolean
                        Value is_private; //type: boolean
                        Value vrf_name; //type: string
                        Value addr_buf; //type: string
                        Value family; //type: string




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

