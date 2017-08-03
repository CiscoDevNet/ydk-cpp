#ifndef _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_
#define _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_protocol_radius_oper {

class Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Nodes; //type: Radius::Nodes

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes> nodes;
        
}; // Radius


class Radius::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Radius::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node> > node;
        
}; // Radius::Nodes


class Radius::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
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


class Radius::Nodes::Node::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_authentication_responses; //type: uint32
        ydk::YLeaf authentication_nas_id; //type: string
        ydk::YLeaf unknown_accounting_responses; //type: uint32

}; // Radius::Nodes::Node::Client


class Radius::Nodes::Node::DeadCriteria : public ydk::Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hosts; //type: Radius::Nodes::Node::DeadCriteria::Hosts

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts> hosts;
        
}; // Radius::Nodes::Node::DeadCriteria


class Radius::Nodes::Node::DeadCriteria::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Radius::Nodes::Node::DeadCriteria::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host> > host;
        
}; // Radius::Nodes::Node::DeadCriteria::Hosts


class Radius::Nodes::Node::DeadCriteria::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf auth_port_number; //type: uint32
        ydk::YLeaf acct_port_number; //type: uint32
        class Time; //type: Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time
        class Tries; //type: Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time> time;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries> tries;
        
}; // Radius::Nodes::Node::DeadCriteria::Hosts::Host


class Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf is_computed; //type: boolean

}; // Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time


class Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries : public ydk::Entity
{
    public:
        Tries();
        ~Tries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf is_computed; //type: boolean

}; // Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries


class Radius::Nodes::Node::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationGroup; //type: Radius::Nodes::Node::Authentication::AuthenticationGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication::AuthenticationGroup> > authentication_group;
        
}; // Radius::Nodes::Node::Authentication


class Radius::Nodes::Node::Authentication::AuthenticationGroup : public ydk::Entity
{
    public:
        AuthenticationGroup();
        ~AuthenticationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf family; //type: string
        class Authentication_; //type: Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_> authentication;
        
}; // Radius::Nodes::Node::Authentication::AuthenticationGroup


class Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_ : public ydk::Entity
{
    public:
        Authentication_();
        ~Authentication_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_requests; //type: uint32
        ydk::YLeaf pending_access_requests; //type: uint32
        ydk::YLeaf access_request_retransmits; //type: uint32
        ydk::YLeaf access_accepts; //type: uint32
        ydk::YLeaf access_rejects; //type: uint32
        ydk::YLeaf access_challenges; //type: uint32
        ydk::YLeaf access_timeouts; //type: uint32
        ydk::YLeaf bad_access_responses; //type: uint32
        ydk::YLeaf bad_access_authenticators; //type: uint32
        ydk::YLeaf unknown_access_types; //type: uint32
        ydk::YLeaf dropped_access_responses; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf authen_response_time; //type: uint32
        ydk::YLeaf authen_transaction_successess; //type: uint32
        ydk::YLeaf authen_transaction_failure; //type: uint32
        ydk::YLeaf authen_unexpected_responses; //type: uint32
        ydk::YLeaf authen_server_error_responses; //type: uint32
        ydk::YLeaf authen_incorrect_responses; //type: uint32

}; // Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_


class Radius::Nodes::Node::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccountingGroup; //type: Radius::Nodes::Node::Accounting::AccountingGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting::AccountingGroup> > accounting_group;
        
}; // Radius::Nodes::Node::Accounting


class Radius::Nodes::Node::Accounting::AccountingGroup : public ydk::Entity
{
    public:
        AccountingGroup();
        ~AccountingGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf family; //type: string
        class Accounting_; //type: Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_> accounting;
        
}; // Radius::Nodes::Node::Accounting::AccountingGroup


class Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_ : public ydk::Entity
{
    public:
        Accounting_();
        ~Accounting_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf pending_requests; //type: uint32
        ydk::YLeaf retransmits; //type: uint32
        ydk::YLeaf responses; //type: uint32
        ydk::YLeaf timeouts; //type: uint32
        ydk::YLeaf bad_responses; //type: uint32
        ydk::YLeaf bad_authenticators; //type: uint32
        ydk::YLeaf unknown_packet_types; //type: uint32
        ydk::YLeaf dropped_responses; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf acct_unexpected_responses; //type: uint32
        ydk::YLeaf acct_server_error_responses; //type: uint32
        ydk::YLeaf acct_incorrect_responses; //type: uint32
        ydk::YLeaf acct_response_time; //type: uint32
        ydk::YLeaf acct_transaction_successess; //type: uint32
        ydk::YLeaf acct_transaction_failure; //type: uint32

}; // Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_


class Radius::Nodes::Node::ServerGroups : public ydk::Entity
{
    public:
        ServerGroups();
        ~ServerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerGroup; //type: Radius::Nodes::Node::ServerGroups::ServerGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup> > server_group;
        
}; // Radius::Nodes::Node::ServerGroups


class Radius::Nodes::Node::ServerGroups::ServerGroup : public ydk::Entity
{
    public:
        ServerGroup();
        ~ServerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_group_name; //type: string
        ydk::YLeaf groups; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf dead_time; //type: uint32
        ydk::YLeaf servers; //type: uint32
        class ServerGroup_; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_> > server_group;
        
}; // Radius::Nodes::Node::ServerGroups::ServerGroup


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_ : public ydk::Entity
{
    public:
        ServerGroup_();
        ~ServerGroup_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf authentication_port; //type: uint32
        ydk::YLeaf accounting_port; //type: uint32
        ydk::YLeaf is_private; //type: boolean
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf family; //type: string
        class Accounting; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting
        class Authentication; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication
        class Authorization; //type: Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization

        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization> authorization;
        
}; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf pending_requests; //type: uint32
        ydk::YLeaf retransmits; //type: uint32
        ydk::YLeaf responses; //type: uint32
        ydk::YLeaf timeouts; //type: uint32
        ydk::YLeaf bad_responses; //type: uint32
        ydk::YLeaf bad_authenticators; //type: uint32
        ydk::YLeaf unknown_packet_types; //type: uint32
        ydk::YLeaf dropped_responses; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf acct_unexpected_responses; //type: uint32
        ydk::YLeaf acct_server_error_responses; //type: uint32
        ydk::YLeaf acct_incorrect_responses; //type: uint32
        ydk::YLeaf acct_response_time; //type: uint32
        ydk::YLeaf acct_transaction_successess; //type: uint32
        ydk::YLeaf acct_transaction_failure; //type: uint32

}; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_requests; //type: uint32
        ydk::YLeaf pending_access_requests; //type: uint32
        ydk::YLeaf access_request_retransmits; //type: uint32
        ydk::YLeaf access_accepts; //type: uint32
        ydk::YLeaf access_rejects; //type: uint32
        ydk::YLeaf access_challenges; //type: uint32
        ydk::YLeaf access_timeouts; //type: uint32
        ydk::YLeaf bad_access_responses; //type: uint32
        ydk::YLeaf bad_access_authenticators; //type: uint32
        ydk::YLeaf unknown_access_types; //type: uint32
        ydk::YLeaf dropped_access_responses; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf authen_response_time; //type: uint32
        ydk::YLeaf authen_transaction_successess; //type: uint32
        ydk::YLeaf authen_transaction_failure; //type: uint32
        ydk::YLeaf authen_unexpected_responses; //type: uint32
        ydk::YLeaf authen_server_error_responses; //type: uint32
        ydk::YLeaf authen_incorrect_responses; //type: uint32

}; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication


class Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf author_requests; //type: uint32
        ydk::YLeaf author_request_timeouts; //type: uint32
        ydk::YLeaf author_unexpected_responses; //type: uint32
        ydk::YLeaf author_server_error_responses; //type: uint32
        ydk::YLeaf author_incorrect_responses; //type: uint32
        ydk::YLeaf author_response_time; //type: uint32
        ydk::YLeaf author_transaction_successess; //type: uint32
        ydk::YLeaf author_transaction_failure; //type: uint32

}; // Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization


class Radius::Nodes::Node::DynamicAuthorization : public ydk::Entity
{
    public:
        DynamicAuthorization();
        ~DynamicAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disconnected_invalid_requests; //type: uint32
        ydk::YLeaf invalid_coa_requests; //type: uint32

}; // Radius::Nodes::Node::DynamicAuthorization


}
}

#endif /* _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_OPER_ */

