#ifndef _CISCO_IOS_XR_IEDGE4710_OPER_
#define _CISCO_IOS_XR_IEDGE4710_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_oper {

class Subscriber : public Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Manager : public Entity
    {
        public:
            Manager();
            ~Manager();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



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



            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf node_name; //type: string

                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



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



                        class AggregateAccounting : public Entity
                        {
                            public:
                                AggregateAccounting();
                                ~AggregateAccounting();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf active_sessions; //type: uint32
                                YLeaf started_sessions; //type: uint64
                                YLeaf stopped_sessions; //type: uint64
                                YLeaf policy_plane_errored_requests; //type: uint64
                                YLeaf policy_plane_unknown_requests; //type: uint64

                            class Start : public Entity
                            {
                                public:
                                    Start();
                                    ~Start();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start


                            class Stop : public Entity
                            {
                                public:
                                    Stop();
                                    ~Stop();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop


                            class Interim : public Entity
                            {
                                public:
                                    Interim();
                                    ~Interim();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim


                            class PassThrough : public Entity
                            {
                                public:
                                    PassThrough();
                                    ~PassThrough();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough


                            class Update : public Entity
                            {
                                public:
                                    Update();
                                    ~Update();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update


                            class InterimInflight : public Entity
                            {
                                public:
                                    InterimInflight();
                                    ~InterimInflight();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf quota_exhausts; //type: uint32
                                    YLeaf denied_requests; //type: uint32
                                    YLeaf accepted_requests; //type: uint32
                                    YLeaf total_quota_of_requests; //type: uint32
                                    YLeaf remaining_quota_of_requests; //type: uint32
                                    YLeaf low_water_mark_quota_of_requests; //type: uint32



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim> interim;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight> interim_inflight;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough> pass_through;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start> start;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop> stop;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update> update;


                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting


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


                                YLeaf sent_requests; //type: uint64
                                YLeaf accepted_requests; //type: uint64
                                YLeaf successful_requests; //type: uint64
                                YLeaf rejected_requests; //type: uint64
                                YLeaf unreachable_requests; //type: uint64
                                YLeaf errored_requests; //type: uint64
                                YLeaf incomplete_requests; //type: uint64
                                YLeaf terminated_requests; //type: uint64



                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication


                        class AggregateMobility : public Entity
                        {
                            public:
                                AggregateMobility();
                                ~AggregateMobility();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_request_successes; //type: uint64
                                YLeaf send_request_failures; //type: uint64
                                YLeaf receive_response_successes; //type: uint64
                                YLeaf receive_response_failures; //type: uint64



                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility


                        class AggregateAuthentication : public Entity
                        {
                            public:
                                AggregateAuthentication();
                                ~AggregateAuthentication();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf sent_requests; //type: uint64
                                YLeaf accepted_requests; //type: uint64
                                YLeaf successful_requests; //type: uint64
                                YLeaf rejected_requests; //type: uint64
                                YLeaf unreachable_requests; //type: uint64
                                YLeaf errored_requests; //type: uint64
                                YLeaf incomplete_requests; //type: uint64
                                YLeaf terminated_requests; //type: uint64



                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication


                        class ChangeOfAuthorization : public Entity
                        {
                            public:
                                ChangeOfAuthorization();
                                ~ChangeOfAuthorization();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unknown_account_cmd_resps; //type: uint64
                                YLeaf unknown_service_cmd_resps; //type: uint64
                                YLeaf unknown_cmd_resps; //type: uint64
                                YLeaf attr_list_retrieve_failure_resps; //type: uint64
                                YLeaf resp_send_failure; //type: uint64
                                YLeaf internal_err_resps; //type: uint64
                                YLeaf service_profile_push_failure_resps; //type: uint64
                                YLeaf no_cmd_resps; //type: uint64
                                YLeaf no_session_found_resps; //type: uint64
                                YLeaf no_session_peer_resps; //type: uint64

                            class AccountLogon : public Entity
                            {
                                public:
                                    AccountLogon();
                                    ~AccountLogon();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon


                            class AccountLogoff : public Entity
                            {
                                public:
                                    AccountLogoff();
                                    ~AccountLogoff();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff


                            class AccountUpdate : public Entity
                            {
                                public:
                                    AccountUpdate();
                                    ~AccountUpdate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate


                            class SessionDisconnect : public Entity
                            {
                                public:
                                    SessionDisconnect();
                                    ~SessionDisconnect();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect


                            class SingleServiceLogon : public Entity
                            {
                                public:
                                    SingleServiceLogon();
                                    ~SingleServiceLogon();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon


                            class SingleServiceLogoff : public Entity
                            {
                                public:
                                    SingleServiceLogoff();
                                    ~SingleServiceLogoff();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff


                            class SingleServiceModify : public Entity
                            {
                                public:
                                    SingleServiceModify();
                                    ~SingleServiceModify();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify


                            class ServiceMulti : public Entity
                            {
                                public:
                                    ServiceMulti();
                                    ~ServiceMulti();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff> account_logoff;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon> account_logon;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate> account_update;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti> service_multi;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect> session_disconnect;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon> single_service_logon;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify> single_service_modify;


                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization


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


                                YLeaf sent_requests; //type: uint64
                                YLeaf accepted_requests; //type: uint64
                                YLeaf successful_requests; //type: uint64
                                YLeaf rejected_requests; //type: uint64
                                YLeaf unreachable_requests; //type: uint64
                                YLeaf errored_requests; //type: uint64
                                YLeaf incomplete_requests; //type: uint64
                                YLeaf terminated_requests; //type: uint64



                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization


                        class AggregateAuthorization : public Entity
                        {
                            public:
                                AggregateAuthorization();
                                ~AggregateAuthorization();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf sent_requests; //type: uint64
                                YLeaf accepted_requests; //type: uint64
                                YLeaf successful_requests; //type: uint64
                                YLeaf rejected_requests; //type: uint64
                                YLeaf unreachable_requests; //type: uint64
                                YLeaf errored_requests; //type: uint64
                                YLeaf incomplete_requests; //type: uint64
                                YLeaf terminated_requests; //type: uint64



                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization


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


                                YLeaf active_sessions; //type: uint32
                                YLeaf started_sessions; //type: uint64
                                YLeaf stopped_sessions; //type: uint64
                                YLeaf policy_plane_errored_requests; //type: uint64
                                YLeaf policy_plane_unknown_requests; //type: uint64

                            class Start : public Entity
                            {
                                public:
                                    Start();
                                    ~Start();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start


                            class Stop : public Entity
                            {
                                public:
                                    Stop();
                                    ~Stop();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop


                            class Interim : public Entity
                            {
                                public:
                                    Interim();
                                    ~Interim();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim


                            class PassThrough : public Entity
                            {
                                public:
                                    PassThrough();
                                    ~PassThrough();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough


                            class Update : public Entity
                            {
                                public:
                                    Update();
                                    ~Update();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf errored_requests; //type: uint64
                                    YLeaf aaa_errored_requests; //type: uint64
                                    YLeaf aaa_sent_requests; //type: uint64
                                    YLeaf aaa_succeeded_responses; //type: uint64
                                    YLeaf aaa_failed_responses; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update


                            class InterimInflight : public Entity
                            {
                                public:
                                    InterimInflight();
                                    ~InterimInflight();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf quota_exhausts; //type: uint32
                                    YLeaf denied_requests; //type: uint32
                                    YLeaf accepted_requests; //type: uint32
                                    YLeaf total_quota_of_requests; //type: uint32
                                    YLeaf remaining_quota_of_requests; //type: uint32
                                    YLeaf low_water_mark_quota_of_requests; //type: uint32



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim> interim;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight> interim_inflight;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough> pass_through;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start> start;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop> stop;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update> update;


                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting


                        class Mobility : public Entity
                        {
                            public:
                                Mobility();
                                ~Mobility();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_request_successes; //type: uint64
                                YLeaf send_request_failures; //type: uint64
                                YLeaf receive_response_successes; //type: uint64
                                YLeaf receive_response_failures; //type: uint64



                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility


                        class AggregateChangeOfAuthorization : public Entity
                        {
                            public:
                                AggregateChangeOfAuthorization();
                                ~AggregateChangeOfAuthorization();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unknown_account_cmd_resps; //type: uint64
                                YLeaf unknown_service_cmd_resps; //type: uint64
                                YLeaf unknown_cmd_resps; //type: uint64
                                YLeaf attr_list_retrieve_failure_resps; //type: uint64
                                YLeaf resp_send_failure; //type: uint64
                                YLeaf internal_err_resps; //type: uint64
                                YLeaf service_profile_push_failure_resps; //type: uint64
                                YLeaf no_cmd_resps; //type: uint64
                                YLeaf no_session_found_resps; //type: uint64
                                YLeaf no_session_peer_resps; //type: uint64

                            class AccountLogon : public Entity
                            {
                                public:
                                    AccountLogon();
                                    ~AccountLogon();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon


                            class AccountLogoff : public Entity
                            {
                                public:
                                    AccountLogoff();
                                    ~AccountLogoff();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff


                            class AccountUpdate : public Entity
                            {
                                public:
                                    AccountUpdate();
                                    ~AccountUpdate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate


                            class SessionDisconnect : public Entity
                            {
                                public:
                                    SessionDisconnect();
                                    ~SessionDisconnect();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect


                            class SingleServiceLogon : public Entity
                            {
                                public:
                                    SingleServiceLogon();
                                    ~SingleServiceLogon();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon


                            class SingleServiceLogoff : public Entity
                            {
                                public:
                                    SingleServiceLogoff();
                                    ~SingleServiceLogoff();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff


                            class SingleServiceModify : public Entity
                            {
                                public:
                                    SingleServiceModify();
                                    ~SingleServiceModify();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify


                            class ServiceMulti : public Entity
                            {
                                public:
                                    ServiceMulti();
                                    ~ServiceMulti();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_requests; //type: uint64
                                    YLeaf acknowledged_requests; //type: uint64
                                    YLeaf non_acknowledged_requests; //type: uint64



                            }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff> account_logoff;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon> account_logon;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate> account_update;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti> service_multi;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect> session_disconnect;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon> single_service_logon;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify> single_service_modify;


                        }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting> accounting;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting> aggregate_accounting;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication> aggregate_authentication;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization> aggregate_authorization;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization> aggregate_change_of_authorization;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility> aggregate_mobility;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication> authentication;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization> authorization;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization> change_of_authorization;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility> mobility;


                    }; // Subscriber::Manager::Nodes::Node::Statistics::Aaa


                    class AggregateSummary : public Entity
                    {
                        public:
                            AggregateSummary();
                            ~AggregateSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf no_subscriber_control_policy_on_interface; //type: uint64
                            YLeaf no_class_match_in_start_request; //type: uint64
                            YLeaf nas_port_attribute_format_warnings; //type: uint64
                            YLeaf nas_port_id_attribute_format_warnings; //type: uint64
                            YLeaf destination_station_id_attribute_format_warnings; //type: uint64
                            YLeaf calling_station_id_attribute_format_warnings; //type: uint64
                            YLeaf username_attribute_format_warnings; //type: uint64
                            YLeaf install_user_profiles; //type: uint64
                            YLeaf user_profile_install_errors; //type: uint64
                            YLeaf user_profile_removals; //type: uint64
                            YLeaf user_profile_errors; //type: uint64
                            YLeaf sess_disc_quota_exhausts; //type: uint64
                            YLeaf sess_disc_no_quota; //type: uint64
                            YLeaf sess_disc_quota_avail; //type: uint64
                            YLeaf sess_disc_recon_ip; //type: uint64
                            YLeaf sess_disc_none_started; //type: uint64
                            YLeaf sess_disc_quota; //type: uint32
                            YLeaf sess_disc_quota_remaining; //type: uint32
                            YLeaf sess_disc_q_count; //type: uint32



                    }; // Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary


                    class Srg : public Entity
                    {
                        public:
                            Srg();
                            ~Srg();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf txlist_send_triggered; //type: uint32
                            YLeaf txlist_send_failed; //type: uint32
                            YLeaf txlist_send_failed_notactive; //type: uint32
                            YLeaf actual_txlist_sent; //type: uint32
                            YLeaf alreadyin_txlist; //type: uint32
                            YLeaf txlist_encode; //type: uint32
                            YLeaf txlist_encode_fail; //type: uint32
                            YLeaf create_update_encode; //type: uint32
                            YLeaf delete_encode; //type: uint32
                            YLeaf create_upd_clean_callback; //type: uint32
                            YLeaf delete_clean_callback; //type: uint32
                            YLeaf slave_recv_entry; //type: uint32
                            YLeaf slave_decode_fail; //type: uint32
                            YLeaf slave_create_update; //type: uint32
                            YLeaf slave_delete; //type: uint32
                            YLeaf srg_context_malloc; //type: uint32
                            YLeaf srg_context_free; //type: uint32
                            YLeaf sod_count; //type: uint32
                            YLeaf eod_count; //type: uint32
                            YLeaf sod_eod_replay_req_count; //type: uint32
                            YLeaf sod_eod_dirty_mark_count; //type: uint32
                            YLeaf sod_eod_dirty_delete_count; //type: uint32
                            YLeaf ack_to_srg; //type: uint32
                            YLeaf nack_to_srg; //type: uint32
                            YLeaf nack_to_srg_fail_cnt; //type: uint32
                            YLeaf txlist_remove_all; //type: uint32
                            YLeaf txlist_del_sync; //type: uint32
                            YLeaf txlist_del_sync_notlinked; //type: uint32
                            YLeaf txlist_del_app; //type: uint32
                            YLeaf txlist_del_app_notlinked; //type: uint32
                            YLeaf txlist_clean_invalid_state; //type: uint32
                            YLeaf txlist_remove_all_internal_error; //type: uint32
                            YLeaf is_srg_flow_control_enabled; //type: boolean
                            YLeaf max_inflight_sessoin_count; //type: uint32
                            YLeaf flow_control_resume_threshold; //type: uint32
                            YLeaf inflight_session_count; //type: uint32
                            YLeaf inflight_add_count; //type: uint32
                            YLeaf inflight_under_run_count; //type: uint32
                            YLeaf inflight_alloc_fails; //type: uint32
                            YLeaf inflight_insert_failures; //type: uint32
                            YLeaf inflight_deletes; //type: uint32
                            YLeaf inflight_not_found; //type: uint32
                            YLeaf inflight_delete_failures; //type: uint32
                            YLeaf total_pause_count; //type: uint32
                            YLeaf total_resume_count; //type: uint32
                            YLeaf total_dont_send_to_txlist; //type: uint32
                            YLeaf total_srg_not_master; //type: uint32
                            YLeaf total_master_eoms_pending; //type: uint32
                            YLeaf last_pause_period; //type: uint64
                            YLeaf total_pause_time; //type: uint64
                            YLeaf last_pause_time; //type: uint64
                            YLeaf last_resume_time; //type: uint64



                    }; // Subscriber::Manager::Nodes::Node::Statistics::Srg


                        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa> aaa;
                        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary> aggregate_summary;
                        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Srg> srg;


                }; // Subscriber::Manager::Nodes::Node::Statistics


                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics> statistics;


            }; // Subscriber::Manager::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node> > node;


        }; // Subscriber::Manager::Nodes


            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes> nodes;


    }; // Subscriber::Manager


    class Session : public Entity
    {
        public:
            Session();
            ~Session();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



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



            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf node_name; //type: string

                class AuthorSummaries : public Entity
                {
                    public:
                        AuthorSummaries();
                        ~AuthorSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AuthorSummary : public Entity
                    {
                        public:
                            AuthorSummary();
                            ~AuthorSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf author_state; //type: SubscriberAuthorStateFilterFlagEnum

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary> > author_summary;


                }; // Subscriber::Session::Nodes::Node::AuthorSummaries


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



                    class StateXr : public Entity
                    {
                        public:
                            StateXr();
                            ~StateXr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Pppoe : public Entity
                        {
                            public:
                                Pppoe();
                                ~Pppoe();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf initialized_sessions; //type: uint32
                                YLeaf connecting_sessions; //type: uint32
                                YLeaf connected_sessions; //type: uint32
                                YLeaf activated_sessions; //type: uint32
                                YLeaf idle_sessions; //type: uint32
                                YLeaf disconnecting_sessions; //type: uint32
                                YLeaf end_sessions; //type: uint32



                        }; // Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe


                        class IpSubscriberDhcp : public Entity
                        {
                            public:
                                IpSubscriberDhcp();
                                ~IpSubscriberDhcp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf initialized_sessions; //type: uint32
                                YLeaf connecting_sessions; //type: uint32
                                YLeaf connected_sessions; //type: uint32
                                YLeaf activated_sessions; //type: uint32
                                YLeaf idle_sessions; //type: uint32
                                YLeaf disconnecting_sessions; //type: uint32
                                YLeaf end_sessions; //type: uint32



                        }; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp


                        class IpSubscriberPacket : public Entity
                        {
                            public:
                                IpSubscriberPacket();
                                ~IpSubscriberPacket();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf initialized_sessions; //type: uint32
                                YLeaf connecting_sessions; //type: uint32
                                YLeaf connected_sessions; //type: uint32
                                YLeaf activated_sessions; //type: uint32
                                YLeaf idle_sessions; //type: uint32
                                YLeaf disconnecting_sessions; //type: uint32
                                YLeaf end_sessions; //type: uint32



                        }; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe> pppoe;


                    }; // Subscriber::Session::Nodes::Node::Summary::StateXr


                    class AddressFamilyXr : public Entity
                    {
                        public:
                            AddressFamilyXr();
                            ~AddressFamilyXr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Pppoe : public Entity
                        {
                            public:
                                Pppoe();
                                ~Pppoe();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf in_progress_sessions; //type: uint32
                                YLeaf ipv4_only_sessions; //type: uint32
                                YLeaf ipv6_only_sessions; //type: uint32
                                YLeaf dual_part_up_sessions; //type: uint32
                                YLeaf dual_up_sessions; //type: uint32
                                YLeaf lac_sessions; //type: uint32



                        }; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe


                        class IpSubscriberDhcp : public Entity
                        {
                            public:
                                IpSubscriberDhcp();
                                ~IpSubscriberDhcp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf in_progress_sessions; //type: uint32
                                YLeaf ipv4_only_sessions; //type: uint32
                                YLeaf ipv6_only_sessions; //type: uint32
                                YLeaf dual_part_up_sessions; //type: uint32
                                YLeaf dual_up_sessions; //type: uint32
                                YLeaf lac_sessions; //type: uint32



                        }; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp


                        class IpSubscriberPacket : public Entity
                        {
                            public:
                                IpSubscriberPacket();
                                ~IpSubscriberPacket();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf in_progress_sessions; //type: uint32
                                YLeaf ipv4_only_sessions; //type: uint32
                                YLeaf ipv6_only_sessions; //type: uint32
                                YLeaf dual_part_up_sessions; //type: uint32
                                YLeaf dual_up_sessions; //type: uint32
                                YLeaf lac_sessions; //type: uint32



                        }; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe> pppoe;


                    }; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr


                        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr> address_family_xr;
                        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr> state_xr;


                }; // Subscriber::Session::Nodes::Node::Summary


                class MacSummaries : public Entity
                {
                    public:
                        MacSummaries();
                        ~MacSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class MacSummary : public Entity
                    {
                        public:
                            MacSummary();
                            ~MacSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf mac_address; //type: string

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary> > mac_summary;


                }; // Subscriber::Session::Nodes::Node::MacSummaries


                class InterfaceSummaries : public Entity
                {
                    public:
                        InterfaceSummaries();
                        ~InterfaceSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class InterfaceSummary : public Entity
                    {
                        public:
                            InterfaceSummary();
                            ~InterfaceSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary> > interface_summary;


                }; // Subscriber::Session::Nodes::Node::InterfaceSummaries


                class AuthenticationSummaries : public Entity
                {
                    public:
                        AuthenticationSummaries();
                        ~AuthenticationSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AuthenticationSummary : public Entity
                    {
                        public:
                            AuthenticationSummary();
                            ~AuthenticationSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf authentication_state; //type: SubscriberAuthenStateFilterFlagEnum

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary> > authentication_summary;


                }; // Subscriber::Session::Nodes::Node::AuthenticationSummaries


                class StateSummaries : public Entity
                {
                    public:
                        StateSummaries();
                        ~StateSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class StateSummary : public Entity
                    {
                        public:
                            StateSummary();
                            ~StateSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf state; //type: SubscriberStateFilterFlagEnum

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary> > state_summary;


                }; // Subscriber::Session::Nodes::Node::StateSummaries


                class Ipv4AddressVrfSummaries : public Entity
                {
                    public:
                        Ipv4AddressVrfSummaries();
                        ~Ipv4AddressVrfSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ipv4AddressVrfSummary : public Entity
                    {
                        public:
                            Ipv4AddressVrfSummary();
                            ~Ipv4AddressVrfSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string
                            YLeaf address; //type: string

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary> > ipv4_address_vrf_summary;


                }; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries


                class AddressFamilySummaries : public Entity
                {
                    public:
                        AddressFamilySummaries();
                        ~AddressFamilySummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AddressFamilySummary : public Entity
                    {
                        public:
                            AddressFamilySummary();
                            ~AddressFamilySummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf address_family; //type: SubscriberAddressFamilyFilterFlagEnum

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary> > address_family_summary;


                }; // Subscriber::Session::Nodes::Node::AddressFamilySummaries


                class UsernameSummaries : public Entity
                {
                    public:
                        UsernameSummaries();
                        ~UsernameSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class UsernameSummary : public Entity
                    {
                        public:
                            UsernameSummary();
                            ~UsernameSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf username; //type: string

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary> > username_summary;


                }; // Subscriber::Session::Nodes::Node::UsernameSummaries


                class AccessInterfaceSummaries : public Entity
                {
                    public:
                        AccessInterfaceSummaries();
                        ~AccessInterfaceSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AccessInterfaceSummary : public Entity
                    {
                        public:
                            AccessInterfaceSummary();
                            ~AccessInterfaceSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary> > access_interface_summary;


                }; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries


                class Ipv4AddressSummaries : public Entity
                {
                    public:
                        Ipv4AddressSummaries();
                        ~Ipv4AddressSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ipv4AddressSummary : public Entity
                    {
                        public:
                            Ipv4AddressSummary();
                            ~Ipv4AddressSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf address; //type: string

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary> > ipv4_address_summary;


                }; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries


                class VrfSummaries : public Entity
                {
                    public:
                        VrfSummaries();
                        ~VrfSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class VrfSummary : public Entity
                    {
                        public:
                            VrfSummary();
                            ~VrfSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string

                        class StateXr : public Entity
                        {
                            public:
                                StateXr();
                                ~StateXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf initialized_sessions; //type: uint32
                                    YLeaf connecting_sessions; //type: uint32
                                    YLeaf connected_sessions; //type: uint32
                                    YLeaf activated_sessions; //type: uint32
                                    YLeaf idle_sessions; //type: uint32
                                    YLeaf disconnecting_sessions; //type: uint32
                                    YLeaf end_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr


                        class AddressFamilyXr : public Entity
                        {
                            public:
                                AddressFamilyXr();
                                ~AddressFamilyXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Pppoe : public Entity
                            {
                                public:
                                    Pppoe();
                                    ~Pppoe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe


                            class IpSubscriberDhcp : public Entity
                            {
                                public:
                                    IpSubscriberDhcp();
                                    ~IpSubscriberDhcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp


                            class IpSubscriberPacket : public Entity
                            {
                                public:
                                    IpSubscriberPacket();
                                    ~IpSubscriberPacket();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_progress_sessions; //type: uint32
                                    YLeaf ipv4_only_sessions; //type: uint32
                                    YLeaf ipv6_only_sessions; //type: uint32
                                    YLeaf dual_part_up_sessions; //type: uint32
                                    YLeaf dual_up_sessions; //type: uint32
                                    YLeaf lac_sessions; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket


                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
                                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe> pppoe;


                        }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr> address_family_xr;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr> state_xr;


                    }; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary> > vrf_summary;


                }; // Subscriber::Session::Nodes::Node::VrfSummaries


                class Sessions : public Entity
                {
                    public:
                        Sessions();
                        ~Sessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Session_ : public Entity
                    {
                        public:
                            Session_();
                            ~Session_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf session_id; //type: string
                            YLeaf session_type; //type: IedgeOperSessionEnum
                            YLeaf pppoe_sub_type; //type: IedgePppSubEnum
                            YLeaf interface_name; //type: string
                            YLeaf vrf_name; //type: string
                            YLeaf circuit_id; //type: string
                            YLeaf remote_id; //type: string
                            YLeaf lns_address; //type: string
                            YLeaf lac_address; //type: string
                            YLeaf tunnel_client_authentication_id; //type: string
                            YLeaf tunnel_server_authentication_id; //type: string
                            YLeaf session_ip_address; //type: string
                            YLeaf session_ipv6_address; //type: string
                            YLeaf session_ipv6_prefix; //type: string
                            YLeaf delegated_ipv6_prefix; //type: string
                            YLeaf ipv6_interface_id; //type: string
                            YLeaf mac_address; //type: string
                            YLeaf account_session_id; //type: string
                            YLeaf nas_port; //type: string
                            YLeaf username; //type: string
                            YLeaf clientname; //type: string
                            YLeaf formattedname; //type: string
                            YLeaf is_session_authentic; //type: boolean
                            YLeaf is_session_author; //type: boolean
                            YLeaf session_state; //type: IedgeOperSessionStateEnum
                            YLeaf session_creation_time; //type: string
                            YLeaf idle_state_change_time; //type: string
                            YLeaf total_session_idle_time; //type: uint32
                            YLeaf access_interface_name; //type: string
                            YLeaf pending_callbacks; //type: uint64
                            YLeaf af_up_status; //type: uint32
                            YLeaf session_ipv4_state; //type: IedgeOperSessionAfStateEnum
                            YLeaf session_ipv6_state; //type: IedgeOperSessionAfStateEnum

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



                            class AccountingSession : public Entity
                            {
                                public:
                                    AccountingSession();
                                    ~AccountingSession();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf accounting_state_rc; //type: uint32
                                    YLeaf accounting_stop_state; //type: uint32
                                    YLeaf record_context_name; //type: string
                                    YLeaf method_list_name; //type: string
                                    YLeaf account_session_id; //type: string
                                    YLeaf accounting_start_time; //type: string
                                    YLeaf is_interim_accounting_enabled; //type: boolean
                                    YLeaf interim_interval; //type: uint32
                                    YLeaf last_successful_interim_update_time; //type: string
                                    YLeaf next_interim_update_attempt_time; //type: uint32
                                    YLeaf last_interim_update_attempt_time; //type: string
                                    YLeaf sent_interim_updates; //type: uint32
                                    YLeaf accepted_interim_updates; //type: uint32
                                    YLeaf rejected_interim_updates; //type: uint32
                                    YLeaf sent_interim_update_failures; //type: uint32



                            }; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession


                                std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession> > accounting_session;


                        }; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting


                        class UserProfileAttributes : public Entity
                        {
                            public:
                                UserProfileAttributes();
                                ~UserProfileAttributes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ipv4mtu; //type: uint32
                                YLeaf ipv4_unnumbered; //type: string
                                YLeaf authorization_service_type; //type: AaaAuthServiceEnum
                                YLeaf tunnel_client_endpoint; //type: string
                                YLeaf tunnel_server_endpoint; //type: string
                                YLeaf tunnel_tos_setting; //type: uint32
                                YLeaf tunnel_medium; //type: AaaTunnelMediumEnum
                                YLeaf tunnel_preference; //type: uint32
                                YLeaf tunnel_client_authentication_id; //type: string
                                YLeaf tunnel_protocol; //type: AaaTunnelProtoEnum
                                YLeaf actual_data_rate_upstream; //type: uint32
                                YLeaf actual_data_rate_downstream; //type: uint32
                                YLeaf attainable_data_rate_upstream; //type: uint32
                                YLeaf attainable_data_rate_downstream; //type: uint32
                                YLeaf pool_address; //type: string
                                YLeaf circuit_id; //type: string
                                YLeaf connection_receive_speed; //type: uint32
                                YLeaf connection_transmission_speed; //type: uint32
                                YLeaf destination_station_id; //type: string
                                YLeaf primary_dns_server_address; //type: string
                                YLeaf secondary_dns_server_address; //type: string
                                YLeaf formatted_calling_station_id; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf interface_type; //type: AaaInterfaceEnum
                                YLeaf interim_accounting_interval; //type: uint32
                                YLeaf ingress_access_list; //type: string
                                YLeaf egress_access_list; //type: string
                                YLeaf ip_netmask; //type: string
                                YLeaf is_interworking_functionality; //type: boolean
                                YLeaf max_interleaving_delay_downstream; //type: uint32
                                YLeaf max_interleaving_delay_upstream; //type: uint32
                                YLeaf max_data_rate_upstream; //type: uint32
                                YLeaf max_data_rate_downstream; //type: uint32
                                YLeaf min_data_rate_downstream; //type: uint32
                                YLeaf min_data_rate_downstream_low_power; //type: uint32
                                YLeaf min_data_rate_upstream_low_power; //type: uint32
                                YLeaf primary_net_bios_server_address; //type: string
                                YLeaf secondary_net_bios_server_address; //type: string
                                YLeaf parent_interface_name; //type: string
                                YLeaf remote_id; //type: string
                                YLeaf route; //type: string
                                YLeaf session_timeout; //type: uint32
                                YLeaf strict_rpf_packets; //type: uint32
                                YLeaf accounting_session_id; //type: string
                                YLeaf upstream_parameterized_qos_policy; //type: string
                                YLeaf downstream_parameterized_qos_policy; //type: string
                                YLeaf upstream_qos_policy; //type: string
                                YLeaf downstream_qos_policy; //type: string
                                YLeaf session_termination_cause; //type: AaaTerminateCauseEnum



                        }; // Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes


                        class MobilityAttributes : public Entity
                        {
                            public:
                                MobilityAttributes();
                                ~MobilityAttributes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf mpc_protocol; //type: boolean
                                YLeaf mobility_ipv4_address; //type: string
                                YLeaf mobility_default_ipv4_gateway; //type: string
                                YLeaf mobility_dns_server; //type: string
                                YLeaf mobility_dhcp_server; //type: string
                                YLeaf mobility_ipv4_netmask; //type: string
                                YLeaf domain_name; //type: string
                                YLeaf uplink_gre_key; //type: string
                                YLeaf downlink_gre_key; //type: string
                                YLeaf lease_time; //type: string



                        }; // Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes


                        class SessionChangeOfAuthorization : public Entity
                        {
                            public:
                                SessionChangeOfAuthorization();
                                ~SessionChangeOfAuthorization();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf request_acked; //type: boolean
                                YLeaf request_time; //type: string
                                YLeaf coa_request_attributes; //type: string
                                YLeaf reply_time; //type: string
                                YLeaf coa_reply_attributes; //type: string



                        }; // Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization


                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting> accounting;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes> mobility_attributes;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization> > session_change_of_authorization;
                            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes> user_profile_attributes;


                    }; // Subscriber::Session::Nodes::Node::Sessions::Session_


                        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_> > session;


                }; // Subscriber::Session::Nodes::Node::Sessions


                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries> access_interface_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries> address_family_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries> authentication_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries> author_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries> interface_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries> ipv4_address_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries> ipv4_address_vrf_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries> mac_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions> sessions;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries> state_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary> summary;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries> username_summaries;
                    std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries> vrf_summaries;


            }; // Subscriber::Session::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node> > node;


        }; // Subscriber::Session::Nodes


            std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes> nodes;


    }; // Subscriber::Session


        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager> manager;
        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session> session;


}; // Subscriber

class IedgeLicenseManager : public Entity
{
    public:
        IedgeLicenseManager();
        ~IedgeLicenseManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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



        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf nodeid; //type: string

            class IedgeLicenseManagerSummary : public Entity
            {
                public:
                    IedgeLicenseManagerSummary();
                    ~IedgeLicenseManagerSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf session_limit; //type: uint32
                    YLeaf session_threshold; //type: uint32
                    YLeaf session_license_count; //type: uint32
                    YLeaf session_count; //type: uint32



            }; // IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary


                std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary> iedge_license_manager_summary;


        }; // IedgeLicenseManager::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node> > node;


    }; // IedgeLicenseManager::Nodes


        std::unique_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes> nodes;


}; // IedgeLicenseManager


class AaaTunnelProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf pptp;
        static const Enum::YLeaf l2f;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf atmp;
        static const Enum::YLeaf vtp;
        static const Enum::YLeaf ah;
        static const Enum::YLeaf ip_over_ip;
        static const Enum::YLeaf minimum_ip_over_ip;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf bay_dvs;
        static const Enum::YLeaf ip_in_ip;
        static const Enum::YLeaf vlan;

};

class AaaTerminateCauseEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf user_request;
        static const Enum::YLeaf lost_carrier;
        static const Enum::YLeaf lost_service;
        static const Enum::YLeaf idle_timeout;
        static const Enum::YLeaf session_timeout;
        static const Enum::YLeaf admin_reset;
        static const Enum::YLeaf admin_reboot;
        static const Enum::YLeaf port_error;
        static const Enum::YLeaf nas_error;
        static const Enum::YLeaf nas_request;
        static const Enum::YLeaf nas_reboot;
        static const Enum::YLeaf port_unneeded;
        static const Enum::YLeaf port_preempted;
        static const Enum::YLeaf port_suspended;
        static const Enum::YLeaf service_unavailable;
        static const Enum::YLeaf callback;
        static const Enum::YLeaf user_error;
        static const Enum::YLeaf host_request;
        static const Enum::YLeaf supplicant_restart;
        static const Enum::YLeaf reauthorization_failure;
        static const Enum::YLeaf port_reinitialized;
        static const Enum::YLeaf admin_disabled;

};

class SubscriberAuthorStateFilterFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf un_authorized;
        static const Enum::YLeaf authorized;

};

class IedgeOperSessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf initialize;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf activated;
        static const Enum::YLeaf idle;
        static const Enum::YLeaf disconnecting;
        static const Enum::YLeaf end;

};

class IedgeOperSessionAfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_started;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up_pending;
        static const Enum::YLeaf up;

};

class SubscriberStateFilterFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf initializing;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf activated;
        static const Enum::YLeaf idle;
        static const Enum::YLeaf disconnecting;
        static const Enum::YLeaf end;

};

class AaaAuthServiceEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf login;
        static const Enum::YLeaf framed;
        static const Enum::YLeaf callback_login;
        static const Enum::YLeaf callback_framed;
        static const Enum::YLeaf outbound;
        static const Enum::YLeaf administrator;
        static const Enum::YLeaf prompt;
        static const Enum::YLeaf authentication_only;
        static const Enum::YLeaf callback_nas_prompt;
        static const Enum::YLeaf call_check;
        static const Enum::YLeaf callback_administrator;
        static const Enum::YLeaf voice;
        static const Enum::YLeaf fax;
        static const Enum::YLeaf modem_relay;
        static const Enum::YLeaf eap_over_udp;

};

class AaaInterfaceEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf primary_rate;
        static const Enum::YLeaf basic_rate;
        static const Enum::YLeaf serial;
        static const Enum::YLeaf asynchronous;
        static const Enum::YLeaf vty;
        static const Enum::YLeaf atm;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ppp_over_atm;
        static const Enum::YLeaf pppoe_over_atm;
        static const Enum::YLeaf pppoe_over_ethernet;
        static const Enum::YLeaf ppp_over_vlan;
        static const Enum::YLeaf ppp_over_qinq;
        static const Enum::YLeaf v120;
        static const Enum::YLeaf v110;
        static const Enum::YLeaf piafs;
        static const Enum::YLeaf x75;
        static const Enum::YLeaf ip_sec;
        static const Enum::YLeaf other;
        static const Enum::YLeaf virtual_pppoe_over_ethernet;
        static const Enum::YLeaf virtual_pppoe_over_vlan;
        static const Enum::YLeaf virtual_pppoe_over_qinq;
        static const Enum::YLeaf ipo_e_over_ethernet;
        static const Enum::YLeaf ipo_e_over_vlan;
        static const Enum::YLeaf ipo_e_over_qinq;
        static const Enum::YLeaf virtual_i_po_e_over_ethernet;
        static const Enum::YLeaf virtual_i_po_e_over_vlan;
        static const Enum::YLeaf virtual_i_po_e_over_qinq;

};

class SubscriberAuthenStateFilterFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf un_authenticated;
        static const Enum::YLeaf authenticated;

};

class IedgeOperSessionEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf pppoe;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf ip_packet_trigger;
        static const Enum::YLeaf ip_packet_dhcp_trigger;

};

class AaaTunnelMediumEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf nsap;
        static const Enum::YLeaf hdlc;
        static const Enum::YLeaf bbn;
        static const Enum::YLeaf all802;

};

class IedgePppSubEnum : public Enum
{
    public:
        static const Enum::YLeaf pta;
        static const Enum::YLeaf lac;

};

class SubscriberAddressFamilyFilterFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4_only;
        static const Enum::YLeaf ipv6_only;
        static const Enum::YLeaf ipv4_all;
        static const Enum::YLeaf ipv6_all;
        static const Enum::YLeaf dual_all;
        static const Enum::YLeaf dual_part_up;
        static const Enum::YLeaf dual_up;
        static const Enum::YLeaf lac;

};


}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_OPER_ */

