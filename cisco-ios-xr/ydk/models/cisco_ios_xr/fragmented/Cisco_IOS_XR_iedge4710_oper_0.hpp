#ifndef _CISCO_IOS_XR_IEDGE4710_OPER_0_
#define _CISCO_IOS_XR_IEDGE4710_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Manager; //type: Subscriber::Manager
        class Session; //type: Subscriber::Session

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager> manager;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session> session;


}; // Subscriber


class Subscriber::Manager : public Entity
{
    public:
        Manager();
        ~Manager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nodes; //type: Subscriber::Manager::Nodes

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes> nodes;


}; // Subscriber::Manager


class Subscriber::Manager::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Subscriber::Manager::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node> > node;


}; // Subscriber::Manager::Nodes


class Subscriber::Manager::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class Statistics; //type: Subscriber::Manager::Nodes::Node::Statistics

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics> statistics;


}; // Subscriber::Manager::Nodes::Node


class Subscriber::Manager::Nodes::Node::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Aaa; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa
        class AggregateSummary; //type: Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary
        class Srg; //type: Subscriber::Manager::Nodes::Node::Statistics::Srg

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary> aggregate_summary;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Srg> srg;


}; // Subscriber::Manager::Nodes::Node::Statistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AggregateAccounting; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting
        class Authentication; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication
        class AggregateMobility; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility
        class AggregateAuthentication; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication
        class AccountingStatsAll; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll
        class ChangeOfAuthorization; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization
        class Authorization; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization
        class AggregateAuthorization; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization
        class AggregateAccountingStatsAll; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll
        class Accounting; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting
        class Mobility; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility
        class AggregateChangeOfAuthorization; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll> accounting_stats_all;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting> aggregate_accounting;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll> aggregate_accounting_stats_all;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication> aggregate_authentication;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization> aggregate_authorization;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization> aggregate_change_of_authorization;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility> aggregate_mobility;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization> change_of_authorization;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility> mobility;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting : public Entity
{
    public:
        AggregateAccounting();
        ~AggregateAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sessions; //type: uint32
        YLeaf started_sessions; //type: uint64
        YLeaf stopped_sessions; //type: uint64
        YLeaf policy_plane_errored_requests; //type: uint64
        YLeaf policy_plane_unknown_requests; //type: uint64

        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim> interim;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight> interim_inflight;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough> pass_through;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start> start;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop> stop;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update> update;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start : public Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop : public Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim : public Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough : public Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight : public Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf quota_exhausts; //type: uint32
        YLeaf denied_requests; //type: uint32
        YLeaf accepted_requests; //type: uint32
        YLeaf total_quota_of_requests; //type: uint32
        YLeaf remaining_quota_of_requests; //type: uint32
        YLeaf low_water_mark_quota_of_requests; //type: uint32



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility : public Entity
{
    public:
        AggregateMobility();
        ~AggregateMobility();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_request_successes; //type: uint64
        YLeaf send_request_failures; //type: uint64
        YLeaf receive_response_successes; //type: uint64
        YLeaf receive_response_failures; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication : public Entity
{
    public:
        AggregateAuthentication();
        ~AggregateAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll : public Entity
{
    public:
        AccountingStatsAll();
        ~AccountingStatsAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccountingStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics
        class AuthenticationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics
        class AuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics
        class ChangeOfAuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics
        class MobilityStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics> accounting_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics> authentication_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics> authorization_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics> change_of_authorization_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics> mobility_statistics;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics : public Entity
{
    public:
        AccountingStatistics();
        ~AccountingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sessions; //type: uint32
        YLeaf started_sessions; //type: uint64
        YLeaf stopped_sessions; //type: uint64
        YLeaf policy_plane_errored_requests; //type: uint64
        YLeaf policy_plane_unknown_requests; //type: uint64

        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim> interim;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight> interim_inflight;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough> pass_through;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start> start;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop> stop;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update> update;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start : public Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop : public Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim : public Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough : public Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight : public Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf quota_exhausts; //type: uint32
        YLeaf denied_requests; //type: uint32
        YLeaf accepted_requests; //type: uint32
        YLeaf total_quota_of_requests; //type: uint32
        YLeaf remaining_quota_of_requests; //type: uint32
        YLeaf low_water_mark_quota_of_requests; //type: uint32



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics : public Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics : public Entity
{
    public:
        AuthorizationStatistics();
        ~AuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics : public Entity
{
    public:
        ChangeOfAuthorizationStatistics();
        ~ChangeOfAuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff> account_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon> account_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate> account_update;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti> service_multi;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect> session_disconnect;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon> single_service_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify> single_service_modify;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon : public Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff : public Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate : public Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect : public Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon : public Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff : public Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify : public Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti : public Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics : public Entity
{
    public:
        MobilityStatistics();
        ~MobilityStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_request_successes; //type: uint64
        YLeaf send_request_failures; //type: uint64
        YLeaf receive_response_successes; //type: uint64
        YLeaf receive_response_failures; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization : public Entity
{
    public:
        ChangeOfAuthorization();
        ~ChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff> account_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon> account_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate> account_update;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti> service_multi;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect> session_disconnect;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon> single_service_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify> single_service_modify;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon : public Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff : public Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate : public Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect : public Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon : public Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff : public Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify : public Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti : public Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization : public Entity
{
    public:
        AggregateAuthorization();
        ~AggregateAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll : public Entity
{
    public:
        AggregateAccountingStatsAll();
        ~AggregateAccountingStatsAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccountingStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics
        class AuthenticationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics
        class AuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics
        class ChangeOfAuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics
        class MobilityStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics> accounting_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics> authentication_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics> authorization_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics> change_of_authorization_statistics;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics> mobility_statistics;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics : public Entity
{
    public:
        AccountingStatistics();
        ~AccountingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sessions; //type: uint32
        YLeaf started_sessions; //type: uint64
        YLeaf stopped_sessions; //type: uint64
        YLeaf policy_plane_errored_requests; //type: uint64
        YLeaf policy_plane_unknown_requests; //type: uint64

        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim> interim;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight> interim_inflight;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough> pass_through;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start> start;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop> stop;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update> update;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start : public Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop : public Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim : public Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough : public Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight : public Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf quota_exhausts; //type: uint32
        YLeaf denied_requests; //type: uint32
        YLeaf accepted_requests; //type: uint32
        YLeaf total_quota_of_requests; //type: uint32
        YLeaf remaining_quota_of_requests; //type: uint32
        YLeaf low_water_mark_quota_of_requests; //type: uint32



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics : public Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics : public Entity
{
    public:
        AuthorizationStatistics();
        ~AuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_requests; //type: uint64
        YLeaf accepted_requests; //type: uint64
        YLeaf successful_requests; //type: uint64
        YLeaf rejected_requests; //type: uint64
        YLeaf unreachable_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf incomplete_requests; //type: uint64
        YLeaf terminated_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics : public Entity
{
    public:
        ChangeOfAuthorizationStatistics();
        ~ChangeOfAuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff> account_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon> account_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate> account_update;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti> service_multi;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect> session_disconnect;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon> single_service_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify> single_service_modify;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon : public Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff : public Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate : public Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect : public Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon : public Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff : public Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify : public Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti : public Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics : public Entity
{
    public:
        MobilityStatistics();
        ~MobilityStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_request_successes; //type: uint64
        YLeaf send_request_failures; //type: uint64
        YLeaf receive_response_successes; //type: uint64
        YLeaf receive_response_failures; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sessions; //type: uint32
        YLeaf started_sessions; //type: uint64
        YLeaf stopped_sessions; //type: uint64
        YLeaf policy_plane_errored_requests; //type: uint64
        YLeaf policy_plane_unknown_requests; //type: uint64

        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim> interim;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight> interim_inflight;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough> pass_through;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start> start;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop> stop;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update> update;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start : public Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop : public Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim : public Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough : public Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf errored_requests; //type: uint64
        YLeaf aaa_errored_requests; //type: uint64
        YLeaf aaa_sent_requests; //type: uint64
        YLeaf aaa_succeeded_responses; //type: uint64
        YLeaf aaa_failed_responses; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight : public Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf quota_exhausts; //type: uint32
        YLeaf denied_requests; //type: uint32
        YLeaf accepted_requests; //type: uint32
        YLeaf total_quota_of_requests; //type: uint32
        YLeaf remaining_quota_of_requests; //type: uint32
        YLeaf low_water_mark_quota_of_requests; //type: uint32



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility : public Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_request_successes; //type: uint64
        YLeaf send_request_failures; //type: uint64
        YLeaf receive_response_successes; //type: uint64
        YLeaf receive_response_failures; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization : public Entity
{
    public:
        AggregateChangeOfAuthorization();
        ~AggregateChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff> account_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon> account_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate> account_update;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti> service_multi;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect> session_disconnect;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon> single_service_logon;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify> single_service_modify;


}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon : public Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff : public Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate : public Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect : public Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon : public Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff : public Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify : public Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti : public Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_requests; //type: uint64
        YLeaf acknowledged_requests; //type: uint64
        YLeaf non_acknowledged_requests; //type: uint64



}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary : public Entity
{
    public:
        AggregateSummary();
        ~AggregateSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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


class Subscriber::Manager::Nodes::Node::Statistics::Srg : public Entity
{
    public:
        Srg();
        ~Srg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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


class Subscriber::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nodes; //type: Subscriber::Session::Nodes

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes> nodes;


}; // Subscriber::Session


class Subscriber::Session::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Subscriber::Session::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node> > node;


}; // Subscriber::Session::Nodes


class Subscriber::Session::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class AuthorSummaries; //type: Subscriber::Session::Nodes::Node::AuthorSummaries
        class Summary; //type: Subscriber::Session::Nodes::Node::Summary
        class MacSummaries; //type: Subscriber::Session::Nodes::Node::MacSummaries
        class InterfaceSummaries; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries
        class AuthenticationSummaries; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries
        class StateSummaries; //type: Subscriber::Session::Nodes::Node::StateSummaries
        class Ipv4AddressVrfSummaries; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries
        class AddressFamilySummaries; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries
        class UsernameSummaries; //type: Subscriber::Session::Nodes::Node::UsernameSummaries
        class AccessInterfaceSummaries; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries
        class Ipv4AddressSummaries; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries
        class VrfSummaries; //type: Subscriber::Session::Nodes::Node::VrfSummaries
        class Sessions; //type: Subscriber::Session::Nodes::Node::Sessions

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries> access_interface_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries> address_family_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries> authentication_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries> author_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries> interface_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries> ipv4_address_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries> ipv4_address_vrf_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries> mac_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries> state_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries> username_summaries;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries> vrf_summaries;


}; // Subscriber::Session::Nodes::Node


class Subscriber::Session::Nodes::Node::AuthorSummaries : public Entity
{
    public:
        AuthorSummaries();
        ~AuthorSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AuthorSummary; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary> > author_summary;


}; // Subscriber::Session::Nodes::Node::AuthorSummaries


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary : public Entity
{
    public:
        AuthorSummary();
        ~AuthorSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf author_state; //type: SubscriberAuthorStateFilterFlagEnum

        class StateXr; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StateXr; //type: Subscriber::Session::Nodes::Node::Summary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::Summary


class Subscriber::Session::Nodes::Node::Summary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::Summary::StateXr


class Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::MacSummaries : public Entity
{
    public:
        MacSummaries();
        ~MacSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacSummary; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary> > mac_summary;


}; // Subscriber::Session::Nodes::Node::MacSummaries


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary : public Entity
{
    public:
        MacSummary();
        ~MacSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_address; //type: string

        class StateXr; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::InterfaceSummaries : public Entity
{
    public:
        InterfaceSummaries();
        ~InterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceSummary; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary> > interface_summary;


}; // Subscriber::Session::Nodes::Node::InterfaceSummaries


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary : public Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class StateXr; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthenticationSummaries : public Entity
{
    public:
        AuthenticationSummaries();
        ~AuthenticationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AuthenticationSummary; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary> > authentication_summary;


}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary : public Entity
{
    public:
        AuthenticationSummary();
        ~AuthenticationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf authentication_state; //type: SubscriberAuthenStateFilterFlagEnum

        class StateXr; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::StateSummaries : public Entity
{
    public:
        StateSummaries();
        ~StateSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StateSummary; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary> > state_summary;


}; // Subscriber::Session::Nodes::Node::StateSummaries


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary : public Entity
{
    public:
        StateSummary();
        ~StateSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: SubscriberStateFilterFlagEnum

        class StateXr; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries : public Entity
{
    public:
        Ipv4AddressVrfSummaries();
        ~Ipv4AddressVrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4AddressVrfSummary; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary> > ipv4_address_vrf_summary;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary : public Entity
{
    public:
        Ipv4AddressVrfSummary();
        ~Ipv4AddressVrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf address; //type: string

        class StateXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary

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

#endif /* _CISCO_IOS_XR_IEDGE4710_OPER_0_ */
