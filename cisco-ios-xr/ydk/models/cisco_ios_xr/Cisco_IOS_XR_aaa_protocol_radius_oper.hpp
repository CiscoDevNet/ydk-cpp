#ifndef _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_
#define _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_aaa_protocol_radius_oper {

class Radius : public Entity
{
    public:
        Radius();
        ~Radius();

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

        class Nodes; //type: Radius::Nodes

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes> nodes;
        
}; // Radius


class Radius::Nodes : public Entity
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

        class Node; //type: Radius::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node> > node;
        
}; // Radius::Nodes


class Radius::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Client; //type: Radius::Nodes::Node::Client
        class DeadCriteria; //type: Radius::Nodes::Node::DeadCriteria
        class Authentication; //type: Radius::Nodes::Node::Authentication
        class Accounting; //type: Radius::Nodes::Node::Accounting
        class ServerGroups; //type: Radius::Nodes::Node::ServerGroups
        class DynamicAuthorization; //type: Radius::Nodes::Node::DynamicAuthorization

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Client> client;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria> dead_criteria;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DynamicAuthorization> dynamic_authorization;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups> server_groups;
        
}; // Radius::Nodes::Node


class Radius::Nodes::Node::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unknown_authentication_responses; //type: uint32
        YLeaf authentication_nas_id; //type: string
        YLeaf unknown_accounting_responses; //type: uint32

}; // Radius::Nodes::Node::Client


class Radius::Nodes::Node::DeadCriteria : public Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hosts; //type: Radius::Nodes::Node::DeadCriteria::Hosts

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts> hosts;
        
}; // Radius::Nodes::Node::DeadCriteria


class Radius::Nodes::Node::DeadCriteria::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Radius::Nodes::Node::DeadCriteria::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host> > host;
        
}; // Radius::Nodes::Node::DeadCriteria::Hosts


class Radius::Nodes::Node::DeadCriteria::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf auth_port_number; //type: uint32
        YLeaf acct_port_number; //type: uint32
        class Time; //type: Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time
        class Tries; //type: Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time> time;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries> tries;
        
}; // Radius::Nodes::Node::DeadCriteria::Hosts::Host


class Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf is_computed; //type: boolean

}; // Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time


class Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries : public Entity
{
    public:
        Tries();
        ~Tries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf is_computed; //type: boolean

}; // Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries


class Radius::Nodes::Node::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthenticationGroup; //type: Radius::Nodes::Node::Authentication::AuthenticationGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication::AuthenticationGroup> > authentication_group;
        
}; // Radius::Nodes::Node::Authentication


class Radius::Nodes::Node::Authentication::AuthenticationGroup : public Entity
{
    public:
        AuthenticationGroup();
        ~AuthenticationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_address; //type: string
        YLeaf port; //type: uint32
        YLeaf ip_address; //type: string
        YLeaf family; //type: string
        class Authentication_; //type: Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_> authentication;
        
}; // Radius::Nodes::Node::Authentication::AuthenticationGroup


class Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_ : public Entity
{
    public:
        Authentication_();
        ~Authentication_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class Radius::Nodes::Node::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccountingGroup; //type: Radius::Nodes::Node::Accounting::AccountingGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting::AccountingGroup> > accounting_group;
        
}; // Radius::Nodes::Node::Accounting


class Radius::Nodes::Node::Accounting::AccountingGroup : public Entity
{
    public:
        AccountingGroup();
        ~AccountingGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_address; //type: string
        YLeaf port; //type: uint32
        YLeaf ip_address; //type: string
        YLeaf family; //type: string
        class Accounting_; //type: Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_> accounting;
        
}; // Radius::Nodes::Node::Accounting::AccountingGroup


class Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_ : public Entity
{
    public:
        Accounting_();
        ~Accounting_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class Radius::Nodes::Node::ServerGroups : public Entity
{
    public:
        ServerGroups();
        ~ServerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServerGroup; //type: Radius::Nodes::Node::ServerGroups::ServerGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup> > server_group;
        
}; // Radius::Nodes::Node::ServerGroups


class Radius::Nodes::Node::ServerGroups::ServerGroup : public Entity
{
    public:
        ServerGroup();
        ~ServerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_group_name; //type: string
        YLeaf groups; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf dead_time; //type: uint32
        YLeaf servers; //type: uint32
        class ServerGroup_; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_> > server_group;
        
}; // Radius::Nodes::Node::ServerGroups::ServerGroup


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_ : public Entity
{
    public:
        ServerGroup_();
        ~ServerGroup_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_address; //type: string
        YLeaf authentication_port; //type: uint32
        YLeaf accounting_port; //type: uint32
        YLeaf is_private; //type: boolean
        YLeaf ip_address; //type: string
        YLeaf family; //type: string
        class Accounting; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting
        class Authentication; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication
        class Authorization; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization> authorization;
        
}; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf author_requests; //type: uint32
        YLeaf author_request_timeouts; //type: uint32
        YLeaf author_unexpected_responses; //type: uint32
        YLeaf author_server_error_responses; //type: uint32
        YLeaf author_incorrect_responses; //type: uint32
        YLeaf author_response_time; //type: uint32
        YLeaf author_transaction_successess; //type: uint32
        YLeaf author_transaction_failure; //type: uint32

}; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization


class Radius::Nodes::Node::DynamicAuthorization : public Entity
{
    public:
        DynamicAuthorization();
        ~DynamicAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disconnected_invalid_requests; //type: uint32
        YLeaf invalid_coa_requests; //type: uint32

}; // Radius::Nodes::Node::DynamicAuthorization


}
}

#endif /* _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_ */

