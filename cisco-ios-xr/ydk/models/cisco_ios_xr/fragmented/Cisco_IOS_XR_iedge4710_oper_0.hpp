#ifndef _CISCO_IOS_XR_IEDGE4710_OPER_0_
#define _CISCO_IOS_XR_IEDGE4710_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {

class Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Manager; //type: Subscriber::Manager
        class Session; //type: Subscriber::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager> manager;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session> session;
        
}; // Subscriber


class Subscriber::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nodes; //type: Subscriber::Manager::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes> nodes;
        
}; // Subscriber::Manager


class Subscriber::Manager::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Subscriber::Manager::Nodes::Node

        ydk::YList node;
        
}; // Subscriber::Manager::Nodes


class Subscriber::Manager::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class Statistics; //type: Subscriber::Manager::Nodes::Node::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics> statistics;
        
}; // Subscriber::Manager::Nodes::Node


class Subscriber::Manager::Nodes::Node::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aaa; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa
        class AggregateSummary; //type: Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary
        class DisconnUnique; //type: Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique
        class Srg; //type: Subscriber::Manager::Nodes::Node::Statistics::Srg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa> aaa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary> aggregate_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique> disconn_unique;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Srg> srg;
        
}; // Subscriber::Manager::Nodes::Node::Statistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting> aggregate_accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility> aggregate_mobility;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication> aggregate_authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll> accounting_stats_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization> change_of_authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization> authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization> aggregate_authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll> aggregate_accounting_stats_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility> mobility;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization> aggregate_change_of_authorization;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting : public ydk::Entity
{
    public:
        AggregateAccounting();
        ~AggregateAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf started_sessions; //type: uint64
        ydk::YLeaf stopped_sessions; //type: uint64
        ydk::YLeaf policy_plane_errored_requests; //type: uint64
        ydk::YLeaf policy_plane_unknown_requests; //type: uint64
        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update> update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight> interim_inflight;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start : public ydk::Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop : public ydk::Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim : public ydk::Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough : public ydk::Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight : public ydk::Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quota_exhausts; //type: uint32
        ydk::YLeaf denied_requests; //type: uint32
        ydk::YLeaf accepted_requests; //type: uint32
        ydk::YLeaf total_quota_of_requests; //type: uint32
        ydk::YLeaf remaining_quota_of_requests; //type: uint32
        ydk::YLeaf low_water_mark_quota_of_requests; //type: uint32

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility : public ydk::Entity
{
    public:
        AggregateMobility();
        ~AggregateMobility();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_request_successes; //type: uint64
        ydk::YLeaf send_request_failures; //type: uint64
        ydk::YLeaf receive_response_successes; //type: uint64
        ydk::YLeaf receive_response_failures; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication : public ydk::Entity
{
    public:
        AggregateAuthentication();
        ~AggregateAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll : public ydk::Entity
{
    public:
        AccountingStatsAll();
        ~AccountingStatsAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccountingStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics
        class AuthenticationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics
        class AuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics
        class ChangeOfAuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics
        class MobilityStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics> accounting_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics> authentication_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics> authorization_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics> change_of_authorization_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics> mobility_statistics;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics : public ydk::Entity
{
    public:
        AccountingStatistics();
        ~AccountingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf started_sessions; //type: uint64
        ydk::YLeaf stopped_sessions; //type: uint64
        ydk::YLeaf policy_plane_errored_requests; //type: uint64
        ydk::YLeaf policy_plane_unknown_requests; //type: uint64
        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update> update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight> interim_inflight;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start : public ydk::Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop : public ydk::Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim : public ydk::Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough : public ydk::Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight : public ydk::Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quota_exhausts; //type: uint32
        ydk::YLeaf denied_requests; //type: uint32
        ydk::YLeaf accepted_requests; //type: uint32
        ydk::YLeaf total_quota_of_requests; //type: uint32
        ydk::YLeaf remaining_quota_of_requests; //type: uint32
        ydk::YLeaf low_water_mark_quota_of_requests; //type: uint32

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics : public ydk::Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics : public ydk::Entity
{
    public:
        AuthorizationStatistics();
        ~AuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics : public ydk::Entity
{
    public:
        ChangeOfAuthorizationStatistics();
        ~ChangeOfAuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_account_cmd_resps; //type: uint64
        ydk::YLeaf unknown_service_cmd_resps; //type: uint64
        ydk::YLeaf unknown_cmd_resps; //type: uint64
        ydk::YLeaf attr_list_retrieve_failure_resps; //type: uint64
        ydk::YLeaf resp_send_failure; //type: uint64
        ydk::YLeaf internal_err_resps; //type: uint64
        ydk::YLeaf service_profile_push_failure_resps; //type: uint64
        ydk::YLeaf no_cmd_resps; //type: uint64
        ydk::YLeaf no_session_found_resps; //type: uint64
        ydk::YLeaf no_session_peer_resps; //type: uint64
        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify> single_service_modify;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti> service_multi;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon : public ydk::Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff : public ydk::Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate : public ydk::Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect : public ydk::Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon : public ydk::Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff : public ydk::Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify : public ydk::Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti : public ydk::Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics : public ydk::Entity
{
    public:
        MobilityStatistics();
        ~MobilityStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_request_successes; //type: uint64
        ydk::YLeaf send_request_failures; //type: uint64
        ydk::YLeaf receive_response_successes; //type: uint64
        ydk::YLeaf receive_response_failures; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization : public ydk::Entity
{
    public:
        ChangeOfAuthorization();
        ~ChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_account_cmd_resps; //type: uint64
        ydk::YLeaf unknown_service_cmd_resps; //type: uint64
        ydk::YLeaf unknown_cmd_resps; //type: uint64
        ydk::YLeaf attr_list_retrieve_failure_resps; //type: uint64
        ydk::YLeaf resp_send_failure; //type: uint64
        ydk::YLeaf internal_err_resps; //type: uint64
        ydk::YLeaf service_profile_push_failure_resps; //type: uint64
        ydk::YLeaf no_cmd_resps; //type: uint64
        ydk::YLeaf no_session_found_resps; //type: uint64
        ydk::YLeaf no_session_peer_resps; //type: uint64
        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify> single_service_modify;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti> service_multi;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon : public ydk::Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff : public ydk::Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate : public ydk::Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect : public ydk::Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon : public ydk::Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff : public ydk::Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify : public ydk::Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti : public ydk::Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization : public ydk::Entity
{
    public:
        AggregateAuthorization();
        ~AggregateAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll : public ydk::Entity
{
    public:
        AggregateAccountingStatsAll();
        ~AggregateAccountingStatsAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccountingStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics
        class AuthenticationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics
        class AuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics
        class ChangeOfAuthorizationStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics
        class MobilityStatistics; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics> accounting_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics> authentication_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics> authorization_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics> change_of_authorization_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics> mobility_statistics;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics : public ydk::Entity
{
    public:
        AccountingStatistics();
        ~AccountingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf started_sessions; //type: uint64
        ydk::YLeaf stopped_sessions; //type: uint64
        ydk::YLeaf policy_plane_errored_requests; //type: uint64
        ydk::YLeaf policy_plane_unknown_requests; //type: uint64
        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update> update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight> interim_inflight;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start : public ydk::Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop : public ydk::Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim : public ydk::Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough : public ydk::Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight : public ydk::Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quota_exhausts; //type: uint32
        ydk::YLeaf denied_requests; //type: uint32
        ydk::YLeaf accepted_requests; //type: uint32
        ydk::YLeaf total_quota_of_requests; //type: uint32
        ydk::YLeaf remaining_quota_of_requests; //type: uint32
        ydk::YLeaf low_water_mark_quota_of_requests; //type: uint32

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics : public ydk::Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics : public ydk::Entity
{
    public:
        AuthorizationStatistics();
        ~AuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_requests; //type: uint64
        ydk::YLeaf accepted_requests; //type: uint64
        ydk::YLeaf successful_requests; //type: uint64
        ydk::YLeaf rejected_requests; //type: uint64
        ydk::YLeaf unreachable_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics : public ydk::Entity
{
    public:
        ChangeOfAuthorizationStatistics();
        ~ChangeOfAuthorizationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_account_cmd_resps; //type: uint64
        ydk::YLeaf unknown_service_cmd_resps; //type: uint64
        ydk::YLeaf unknown_cmd_resps; //type: uint64
        ydk::YLeaf attr_list_retrieve_failure_resps; //type: uint64
        ydk::YLeaf resp_send_failure; //type: uint64
        ydk::YLeaf internal_err_resps; //type: uint64
        ydk::YLeaf service_profile_push_failure_resps; //type: uint64
        ydk::YLeaf no_cmd_resps; //type: uint64
        ydk::YLeaf no_session_found_resps; //type: uint64
        ydk::YLeaf no_session_peer_resps; //type: uint64
        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify> single_service_modify;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti> service_multi;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon : public ydk::Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff : public ydk::Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate : public ydk::Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect : public ydk::Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon : public ydk::Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff : public ydk::Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify : public ydk::Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti : public ydk::Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics : public ydk::Entity
{
    public:
        MobilityStatistics();
        ~MobilityStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_request_successes; //type: uint64
        ydk::YLeaf send_request_failures; //type: uint64
        ydk::YLeaf receive_response_successes; //type: uint64
        ydk::YLeaf receive_response_failures; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf started_sessions; //type: uint64
        ydk::YLeaf stopped_sessions; //type: uint64
        ydk::YLeaf policy_plane_errored_requests; //type: uint64
        ydk::YLeaf policy_plane_unknown_requests; //type: uint64
        class Start; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start
        class Stop; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop
        class Interim; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim
        class PassThrough; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough
        class Update; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update
        class InterimInflight; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update> update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight> interim_inflight;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start : public ydk::Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop : public ydk::Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim : public ydk::Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough : public ydk::Entity
{
    public:
        PassThrough();
        ~PassThrough();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf errored_requests; //type: uint64
        ydk::YLeaf aaa_errored_requests; //type: uint64
        ydk::YLeaf aaa_sent_requests; //type: uint64
        ydk::YLeaf aaa_succeeded_responses; //type: uint64
        ydk::YLeaf aaa_failed_responses; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight : public ydk::Entity
{
    public:
        InterimInflight();
        ~InterimInflight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quota_exhausts; //type: uint32
        ydk::YLeaf denied_requests; //type: uint32
        ydk::YLeaf accepted_requests; //type: uint32
        ydk::YLeaf total_quota_of_requests; //type: uint32
        ydk::YLeaf remaining_quota_of_requests; //type: uint32
        ydk::YLeaf low_water_mark_quota_of_requests; //type: uint32

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility : public ydk::Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_request_successes; //type: uint64
        ydk::YLeaf send_request_failures; //type: uint64
        ydk::YLeaf receive_response_successes; //type: uint64
        ydk::YLeaf receive_response_failures; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization : public ydk::Entity
{
    public:
        AggregateChangeOfAuthorization();
        ~AggregateChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_account_cmd_resps; //type: uint64
        ydk::YLeaf unknown_service_cmd_resps; //type: uint64
        ydk::YLeaf unknown_cmd_resps; //type: uint64
        ydk::YLeaf attr_list_retrieve_failure_resps; //type: uint64
        ydk::YLeaf resp_send_failure; //type: uint64
        ydk::YLeaf internal_err_resps; //type: uint64
        ydk::YLeaf service_profile_push_failure_resps; //type: uint64
        ydk::YLeaf no_cmd_resps; //type: uint64
        ydk::YLeaf no_session_found_resps; //type: uint64
        ydk::YLeaf no_session_peer_resps; //type: uint64
        class AccountLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon
        class AccountLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff
        class AccountUpdate; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate
        class SessionDisconnect; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect
        class SingleServiceLogon; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon
        class SingleServiceLogoff; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff
        class SingleServiceModify; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify
        class ServiceMulti; //type: Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify> single_service_modify;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti> service_multi;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon : public ydk::Entity
{
    public:
        AccountLogon();
        ~AccountLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff : public ydk::Entity
{
    public:
        AccountLogoff();
        ~AccountLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate : public ydk::Entity
{
    public:
        AccountUpdate();
        ~AccountUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect : public ydk::Entity
{
    public:
        SessionDisconnect();
        ~SessionDisconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon : public ydk::Entity
{
    public:
        SingleServiceLogon();
        ~SingleServiceLogon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff : public ydk::Entity
{
    public:
        SingleServiceLogoff();
        ~SingleServiceLogoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify : public ydk::Entity
{
    public:
        SingleServiceModify();
        ~SingleServiceModify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify


class Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti : public ydk::Entity
{
    public:
        ServiceMulti();
        ~ServiceMulti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_requests; //type: uint64
        ydk::YLeaf acknowledged_requests; //type: uint64
        ydk::YLeaf non_acknowledged_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti


class Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary : public ydk::Entity
{
    public:
        AggregateSummary();
        ~AggregateSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_subscriber_control_policy_on_interface; //type: uint64
        ydk::YLeaf no_class_match_in_start_request; //type: uint64
        ydk::YLeaf nas_port_attribute_format_warnings; //type: uint64
        ydk::YLeaf nas_port_id_attribute_format_warnings; //type: uint64
        ydk::YLeaf destination_station_id_attribute_format_warnings; //type: uint64
        ydk::YLeaf calling_station_id_attribute_format_warnings; //type: uint64
        ydk::YLeaf username_attribute_format_warnings; //type: uint64
        ydk::YLeaf install_user_profiles; //type: uint64
        ydk::YLeaf user_profile_install_errors; //type: uint64
        ydk::YLeaf user_profile_removals; //type: uint64
        ydk::YLeaf user_profile_errors; //type: uint64
        ydk::YLeaf sess_disc_quota_exhausts; //type: uint64
        ydk::YLeaf sess_disc_no_quota; //type: uint64
        ydk::YLeaf sess_disc_quota_avail; //type: uint64
        ydk::YLeaf sess_disc_recon_ip; //type: uint64
        ydk::YLeaf sess_disc_none_started; //type: uint64
        ydk::YLeaf sess_disc_quota; //type: uint32
        ydk::YLeaf sess_disc_quota_remaining; //type: uint32
        ydk::YLeaf sess_disc_q_count; //type: uint32

}; // Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary


class Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique : public ydk::Entity
{
    public:
        DisconnUnique();
        ~DisconnUnique();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HistoryData; //type: Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData

        ydk::YList history_data;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique


class Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData : public ydk::Entity
{
    public:
        HistoryData();
        ~HistoryData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disc_reason; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf latest_activity; //type: uint32
        ydk::YLeaf if_name; //type: string

}; // Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData


class Subscriber::Manager::Nodes::Node::Statistics::Srg : public ydk::Entity
{
    public:
        Srg();
        ~Srg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf txlist_send_triggered; //type: uint32
        ydk::YLeaf txlist_send_failed; //type: uint32
        ydk::YLeaf txlist_send_failed_notactive; //type: uint32
        ydk::YLeaf actual_txlist_sent; //type: uint32
        ydk::YLeaf alreadyin_txlist; //type: uint32
        ydk::YLeaf txlist_encode; //type: uint32
        ydk::YLeaf txlist_encode_fail; //type: uint32
        ydk::YLeaf create_update_encode; //type: uint32
        ydk::YLeaf delete_encode; //type: uint32
        ydk::YLeaf create_upd_clean_callback; //type: uint32
        ydk::YLeaf delete_clean_callback; //type: uint32
        ydk::YLeaf slave_recv_entry; //type: uint32
        ydk::YLeaf slave_decode_fail; //type: uint32
        ydk::YLeaf slave_create_update; //type: uint32
        ydk::YLeaf slave_delete; //type: uint32
        ydk::YLeaf srg_context_malloc; //type: uint32
        ydk::YLeaf srg_context_free; //type: uint32
        ydk::YLeaf sod_count; //type: uint32
        ydk::YLeaf eod_count; //type: uint32
        ydk::YLeaf sod_eod_replay_req_count; //type: uint32
        ydk::YLeaf sod_eod_dirty_mark_count; //type: uint32
        ydk::YLeaf sod_eod_dirty_delete_count; //type: uint32
        ydk::YLeaf ack_to_srg; //type: uint32
        ydk::YLeaf nack_to_srg; //type: uint32
        ydk::YLeaf nack_to_srg_fail_cnt; //type: uint32
        ydk::YLeaf txlist_remove_all; //type: uint32
        ydk::YLeaf txlist_del_sync; //type: uint32
        ydk::YLeaf txlist_del_sync_notlinked; //type: uint32
        ydk::YLeaf txlist_del_app; //type: uint32
        ydk::YLeaf txlist_del_app_notlinked; //type: uint32
        ydk::YLeaf txlist_clean_invalid_state; //type: uint32
        ydk::YLeaf txlist_remove_all_internal_error; //type: uint32
        ydk::YLeaf is_srg_flow_control_enabled; //type: boolean
        ydk::YLeaf max_inflight_sessoin_count; //type: uint32
        ydk::YLeaf flow_control_resume_threshold; //type: uint32
        ydk::YLeaf inflight_session_count; //type: uint32
        ydk::YLeaf inflight_add_count; //type: uint32
        ydk::YLeaf inflight_under_run_count; //type: uint32
        ydk::YLeaf inflight_alloc_fails; //type: uint32
        ydk::YLeaf inflight_insert_failures; //type: uint32
        ydk::YLeaf inflight_deletes; //type: uint32
        ydk::YLeaf inflight_not_found; //type: uint32
        ydk::YLeaf inflight_delete_failures; //type: uint32
        ydk::YLeaf total_pause_count; //type: uint32
        ydk::YLeaf total_resume_count; //type: uint32
        ydk::YLeaf total_dont_send_to_txlist; //type: uint32
        ydk::YLeaf total_srg_not_master; //type: uint32
        ydk::YLeaf total_master_eoms_pending; //type: uint32
        ydk::YLeaf total_master_eoms_pending_cleared; //type: uint32
        ydk::YLeaf last_pause_period; //type: uint64
        ydk::YLeaf total_pause_time; //type: uint64
        ydk::YLeaf last_pause_time; //type: uint64
        ydk::YLeaf last_resume_time; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Srg


class Subscriber::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nodes; //type: Subscriber::Session::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes> nodes;
        
}; // Subscriber::Session


class Subscriber::Session::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Subscriber::Session::Nodes::Node

        ydk::YList node;
        
}; // Subscriber::Session::Nodes


class Subscriber::Session::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class SrgRoles; //type: Subscriber::Session::Nodes::Node::SrgRoles
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles> srg_roles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries> author_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries> mac_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries> interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries> authentication_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries> state_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries> ipv4_address_vrf_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries> address_family_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries> username_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries> access_interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries> ipv4_address_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries> vrf_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions> sessions;
        
}; // Subscriber::Session::Nodes::Node


class Subscriber::Session::Nodes::Node::SrgRoles : public ydk::Entity
{
    public:
        SrgRoles();
        ~SrgRoles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrgRole; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole

        ydk::YList srg_role;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole : public ydk::Entity
{
    public:
        SrgRole();
        ~SrgRole();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srg; //type: SubscriberSrgOperFilterFlag
        class AuthorSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries
        class UsernameSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries
        class MacSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries
        class InterfaceSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries
        class StateSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries
        class AuthenticationSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries
        class SubscriberSessions; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions
        class Ipv4AddressVrfSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries
        class SrgSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary
        class AccessInterfaceSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries
        class AddressFamilySummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries
        class Ipv4AddressSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries
        class VrfSummaries; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries> author_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries> username_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries> mac_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries> interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries> state_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries> authentication_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions> subscriber_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries> ipv4_address_vrf_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary> srg_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries> access_interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries> address_family_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries> ipv4_address_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries> vrf_summaries;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries : public ydk::Entity
{
    public:
        AuthorSummaries();
        ~AuthorSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthorSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary

        ydk::YList author_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary : public ydk::Entity
{
    public:
        AuthorSummary();
        ~AuthorSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf author_state; //type: SubscriberAuthorStateFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries : public ydk::Entity
{
    public:
        UsernameSummaries();
        ~UsernameSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UsernameSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary

        ydk::YList username_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary : public ydk::Entity
{
    public:
        UsernameSummary();
        ~UsernameSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries : public ydk::Entity
{
    public:
        MacSummaries();
        ~MacSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary

        ydk::YList mac_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary : public ydk::Entity
{
    public:
        MacSummary();
        ~MacSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries : public ydk::Entity
{
    public:
        InterfaceSummaries();
        ~InterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary

        ydk::YList interface_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries : public ydk::Entity
{
    public:
        StateSummaries();
        ~StateSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StateSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary

        ydk::YList state_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary : public ydk::Entity
{
    public:
        StateSummary();
        ~StateSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: SubscriberStateFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries : public ydk::Entity
{
    public:
        AuthenticationSummaries();
        ~AuthenticationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary

        ydk::YList authentication_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary : public ydk::Entity
{
    public:
        AuthenticationSummary();
        ~AuthenticationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authentication_state; //type: SubscriberAuthenStateFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr

class SubscriberAuthorStateFilterFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf un_authorized;
        static const ydk::Enum::YLeaf authorized;

};

class SubscriberSrgOperFilterFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srg_none;
        static const ydk::Enum::YLeaf srg_master;
        static const ydk::Enum::YLeaf srg_slave;
        static const ydk::Enum::YLeaf srg_both;

};

class SubscriberAddressFamilyFilterFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_only;
        static const ydk::Enum::YLeaf ipv6_only;
        static const ydk::Enum::YLeaf ipv4_all;
        static const ydk::Enum::YLeaf ipv6_all;
        static const ydk::Enum::YLeaf dual_all;
        static const ydk::Enum::YLeaf dual_part_up;
        static const ydk::Enum::YLeaf dual_up;
        static const ydk::Enum::YLeaf lac;

};

class SubscriberStateFilterFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf activated;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf disconnecting;
        static const ydk::Enum::YLeaf end;

};

class SubscriberAuthenStateFilterFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf un_authenticated;
        static const ydk::Enum::YLeaf authenticated;

};

class IedgeOperServiceStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf new_;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf req_association;
        static const ydk::Enum::YLeaf associated;
        static const ydk::Enum::YLeaf req_pd_association;
        static const ydk::Enum::YLeaf applied;
        static const ydk::Enum::YLeaf req_unassociation;
        static const ydk::Enum::YLeaf req_pd_unassociation;
        static const ydk::Enum::YLeaf unapplied;
        static const ydk::Enum::YLeaf max;

};

class IedgeOperService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf profile;
        static const ydk::Enum::YLeaf template_;
        static const ydk::Enum::YLeaf grp_template;
        static const ydk::Enum::YLeaf ppp_template;
        static const ydk::Enum::YLeaf eth_template;
        static const ydk::Enum::YLeaf ip_sub_template;
        static const ydk::Enum::YLeaf multi_template;
        static const ydk::Enum::YLeaf max_templae;

};

class IedgeOperSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initialize;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf activated;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf disconnecting;
        static const ydk::Enum::YLeaf end;

};

class IedgePppSub : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pta;
        static const ydk::Enum::YLeaf lac;

};

class IedgeOperSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf pppoe;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf ip_packet_trigger;
        static const ydk::Enum::YLeaf ip_packet_dhcp_trigger;

};


}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_OPER_0_ */

