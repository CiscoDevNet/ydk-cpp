#ifndef _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_
#define _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_protocol_radius_oper {

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


                YLeaf node_name; //type: string

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


                    YLeaf unknown_authentication_responses; //type: uint32
                    YLeaf authentication_nas_id; //type: string
                    YLeaf unknown_accounting_responses; //type: uint32



            }; // Radius::Nodes::Node::Client


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


                            YLeaf ip_address; //type: string
                            YLeaf auth_port_number; //type: uint32
                            YLeaf acct_port_number; //type: uint32

                        class Time : public Entity
                        {
                            public:
                                Time();
                                ~Time();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf value_; //type: uint32
                                YLeaf is_computed; //type: boolean



                        }; // Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time


                        class Tries : public Entity
                        {
                            public:
                                Tries();
                                ~Tries();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf value_; //type: uint32
                                YLeaf is_computed; //type: boolean



                        }; // Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries


                            std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time> time;
                            std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries> tries;


                    }; // Radius::Nodes::Node::DeadCriteria::Hosts::Host


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host> > host;


                }; // Radius::Nodes::Node::DeadCriteria::Hosts


                    std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts> hosts;


            }; // Radius::Nodes::Node::DeadCriteria


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



                class AuthenticationGroup : public Entity
                {
                    public:
                        AuthenticationGroup();
                        ~AuthenticationGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf server_address; //type: string
                        YLeaf port; //type: uint32
                        YLeaf ip_address; //type: string
                        YLeaf family; //type: string

                    class Authentication_ : public Entity
                    {
                        public:
                            Authentication_();
                            ~Authentication_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf access_requests; //type: uint32
                            YLeaf pending_access_requests; //type: uint32
                            YLeaf access_request_retransmits; //type: uint32
                            YLeaf access_accepts; //type: uint32
                            YLeaf access_rejects; //type: uint32
                            YLeaf access_challenges; //type: uint32
                            YLeaf access_timeouts; //type: uint32
                            YLeaf bad_access_responses; //type: uint32
                            YLeaf bad_access_authenticators; //type: uint32
                            YLeaf unknown_access_types; //type: uint32
                            YLeaf dropped_access_responses; //type: uint32
                            YLeaf rtt; //type: uint32
                            YLeaf authen_response_time; //type: uint32
                            YLeaf authen_transaction_successess; //type: uint32
                            YLeaf authen_transaction_failure; //type: uint32
                            YLeaf authen_unexpected_responses; //type: uint32
                            YLeaf authen_server_error_responses; //type: uint32
                            YLeaf authen_incorrect_responses; //type: uint32



                    }; // Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_


                        std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_> authentication;


                }; // Radius::Nodes::Node::Authentication::AuthenticationGroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication::AuthenticationGroup> > authentication_group;


            }; // Radius::Nodes::Node::Authentication


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



                class AccountingGroup : public Entity
                {
                    public:
                        AccountingGroup();
                        ~AccountingGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf server_address; //type: string
                        YLeaf port; //type: uint32
                        YLeaf ip_address; //type: string
                        YLeaf family; //type: string

                    class Accounting_ : public Entity
                    {
                        public:
                            Accounting_();
                            ~Accounting_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf requests; //type: uint32
                            YLeaf pending_requests; //type: uint32
                            YLeaf retransmits; //type: uint32
                            YLeaf responses; //type: uint32
                            YLeaf timeouts; //type: uint32
                            YLeaf bad_responses; //type: uint32
                            YLeaf bad_authenticators; //type: uint32
                            YLeaf unknown_packet_types; //type: uint32
                            YLeaf dropped_responses; //type: uint32
                            YLeaf rtt; //type: uint32
                            YLeaf acct_unexpected_responses; //type: uint32
                            YLeaf acct_server_error_responses; //type: uint32
                            YLeaf acct_incorrect_responses; //type: uint32
                            YLeaf acct_response_time; //type: uint32
                            YLeaf acct_transaction_successess; //type: uint32
                            YLeaf acct_transaction_failure; //type: uint32



                    }; // Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_


                        std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_> accounting;


                }; // Radius::Nodes::Node::Accounting::AccountingGroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting::AccountingGroup> > accounting_group;


            }; // Radius::Nodes::Node::Accounting


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


                        YLeaf server_group_name; //type: string
                        YLeaf groups; //type: uint32
                        YLeaf vrf_name; //type: string
                        YLeaf dead_time; //type: uint32
                        YLeaf servers; //type: uint32

                    class ServerGroup_ : public Entity
                    {
                        public:
                            ServerGroup_();
                            ~ServerGroup_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf server_address; //type: string
                            YLeaf authentication_port; //type: uint32
                            YLeaf accounting_port; //type: uint32
                            YLeaf is_private; //type: boolean
                            YLeaf ip_address; //type: string
                            YLeaf family; //type: string

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


                                YLeaf requests; //type: uint32
                                YLeaf pending_requests; //type: uint32
                                YLeaf retransmits; //type: uint32
                                YLeaf responses; //type: uint32
                                YLeaf timeouts; //type: uint32
                                YLeaf bad_responses; //type: uint32
                                YLeaf bad_authenticators; //type: uint32
                                YLeaf unknown_packet_types; //type: uint32
                                YLeaf dropped_responses; //type: uint32
                                YLeaf rtt; //type: uint32
                                YLeaf acct_unexpected_responses; //type: uint32
                                YLeaf acct_server_error_responses; //type: uint32
                                YLeaf acct_incorrect_responses; //type: uint32
                                YLeaf acct_response_time; //type: uint32
                                YLeaf acct_transaction_successess; //type: uint32
                                YLeaf acct_transaction_failure; //type: uint32



                        }; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting


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


                                YLeaf access_requests; //type: uint32
                                YLeaf pending_access_requests; //type: uint32
                                YLeaf access_request_retransmits; //type: uint32
                                YLeaf access_accepts; //type: uint32
                                YLeaf access_rejects; //type: uint32
                                YLeaf access_challenges; //type: uint32
                                YLeaf access_timeouts; //type: uint32
                                YLeaf bad_access_responses; //type: uint32
                                YLeaf bad_access_authenticators; //type: uint32
                                YLeaf unknown_access_types; //type: uint32
                                YLeaf dropped_access_responses; //type: uint32
                                YLeaf rtt; //type: uint32
                                YLeaf authen_response_time; //type: uint32
                                YLeaf authen_transaction_successess; //type: uint32
                                YLeaf authen_transaction_failure; //type: uint32
                                YLeaf authen_unexpected_responses; //type: uint32
                                YLeaf authen_server_error_responses; //type: uint32
                                YLeaf authen_incorrect_responses; //type: uint32



                        }; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication


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


                                YLeaf author_requests; //type: uint32
                                YLeaf author_request_timeouts; //type: uint32
                                YLeaf author_unexpected_responses; //type: uint32
                                YLeaf author_server_error_responses; //type: uint32
                                YLeaf author_incorrect_responses; //type: uint32
                                YLeaf author_response_time; //type: uint32
                                YLeaf author_transaction_successess; //type: uint32
                                YLeaf author_transaction_failure; //type: uint32



                        }; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization


                            std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting> accounting;
                            std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication> authentication;
                            std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization> authorization;


                    }; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_


                        std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_> > server_group;


                }; // Radius::Nodes::Node::ServerGroups::ServerGroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup> > server_group;


            }; // Radius::Nodes::Node::ServerGroups


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


                    YLeaf disconnected_invalid_requests; //type: uint32
                    YLeaf invalid_coa_requests; //type: uint32



            }; // Radius::Nodes::Node::DynamicAuthorization


                std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting> accounting;
                std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication> authentication;
                std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Client> client;
                std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria> dead_criteria;
                std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DynamicAuthorization> dynamic_authorization;
                std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups> server_groups;


        }; // Radius::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node> > node;


    }; // Radius::Nodes


        std::unique_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes> nodes;


}; // Radius



}
}

#endif /* _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_ */

