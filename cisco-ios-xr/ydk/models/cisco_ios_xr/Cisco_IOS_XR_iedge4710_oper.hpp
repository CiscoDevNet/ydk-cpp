#ifndef _CISCO_IOS_XR_IEDGE4710_OPER_
#define _CISCO_IOS_XR_IEDGE4710_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {

class IedgeLicenseManager : public ydk::Entity
{
    public:
        IedgeLicenseManager();
        ~IedgeLicenseManager();

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

        class Nodes; //type: IedgeLicenseManager::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes> nodes;
        
}; // IedgeLicenseManager


class IedgeLicenseManager::Nodes : public ydk::Entity
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

        class Node; //type: IedgeLicenseManager::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node> > node;
        
}; // IedgeLicenseManager::Nodes


class IedgeLicenseManager::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf nodeid; //type: string
        class IedgeLicenseManagerSummary; //type: IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary> iedge_license_manager_summary;
        
}; // IedgeLicenseManager::Nodes::Node


class IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary : public ydk::Entity
{
    public:
        IedgeLicenseManagerSummary();
        ~IedgeLicenseManagerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf session_threshold; //type: uint32
        ydk::YLeaf session_license_count; //type: uint32
        ydk::YLeaf session_count; //type: uint32

}; // IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node> > node;
        
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
        class Srg; //type: Subscriber::Manager::Nodes::Node::Statistics::Srg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa> aaa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary> aggregate_summary;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll> accounting_stats_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting> aggregate_accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll> aggregate_accounting_stats_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication> aggregate_authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization> aggregate_authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization> aggregate_change_of_authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility> aggregate_mobility;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization> authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization> change_of_authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility> mobility;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight> interim_inflight;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update> update;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight> interim_inflight;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update> update;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics


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
        ydk::YLeaf incomplete_requests; //type: uint64
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
        ydk::YLeaf incomplete_requests; //type: uint64
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti> service_multi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify> single_service_modify;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight> interim_inflight;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update> update;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim> interim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight> interim_inflight;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough> pass_through;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start> start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop> stop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update> update;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics


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
        ydk::YLeaf incomplete_requests; //type: uint64
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
        ydk::YLeaf incomplete_requests; //type: uint64
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti> service_multi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify> single_service_modify;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics


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
        ydk::YLeaf incomplete_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication


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
        ydk::YLeaf incomplete_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti> service_multi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify> single_service_modify;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization


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
        ydk::YLeaf incomplete_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication


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
        ydk::YLeaf incomplete_requests; //type: uint64
        ydk::YLeaf terminated_requests; //type: uint64

}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff> account_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon> account_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate> account_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti> service_multi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect> session_disconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff> single_service_logoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon> single_service_logon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify> single_service_modify;
        
}; // Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node> > node;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries> access_interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries> address_family_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries> authentication_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries> author_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries> interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries> ipv4_address_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries> ipv4_address_vrf_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries> mac_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries> state_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries> username_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries> vrf_summaries;
        
}; // Subscriber::Session::Nodes::Node


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries : public ydk::Entity
{
    public:
        AccessInterfaceSummaries();
        ~AccessInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessInterfaceSummary; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary> > access_interface_summary;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary : public ydk::Entity
{
    public:
        AccessInterfaceSummary();
        ~AccessInterfaceSummary();

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
        class StateXr; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries : public ydk::Entity
{
    public:
        AddressFamilySummaries();
        ~AddressFamilySummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressFamilySummary; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary> > address_family_summary;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary : public ydk::Entity
{
    public:
        AddressFamilySummary();
        ~AddressFamilySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: SubscriberAddressFamilyFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthenticationSummaries : public ydk::Entity
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

        class AuthenticationSummary; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary> > authentication_summary;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary : public ydk::Entity
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
        class StateXr; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthorSummaries : public ydk::Entity
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

        class AuthorSummary; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary> > author_summary;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary : public ydk::Entity
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
        class StateXr; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::InterfaceSummaries : public ydk::Entity
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

        class InterfaceSummary; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary> > interface_summary;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary : public ydk::Entity
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
        class StateXr; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries : public ydk::Entity
{
    public:
        Ipv4AddressSummaries();
        ~Ipv4AddressSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddressSummary; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary> > ipv4_address_summary;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary : public ydk::Entity
{
    public:
        Ipv4AddressSummary();
        ~Ipv4AddressSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries : public ydk::Entity
{
    public:
        Ipv4AddressVrfSummaries();
        ~Ipv4AddressVrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddressVrfSummary; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary> > ipv4_address_vrf_summary;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary : public ydk::Entity
{
    public:
        Ipv4AddressVrfSummary();
        ~Ipv4AddressVrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf address; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::MacSummaries : public ydk::Entity
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

        class MacSummary; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary> > mac_summary;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary : public ydk::Entity
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
        class StateXr; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session_; //type: Subscriber::Session::Nodes::Node::Sessions::Session_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_> > session;
        
}; // Subscriber::Session::Nodes::Node::Sessions


class Subscriber::Session::Nodes::Node::Sessions::Session_ : public ydk::Entity
{
    public:
        Session_();
        ~Session_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: string
        ydk::YLeaf session_type; //type: IedgeOperSession
        ydk::YLeaf pppoe_sub_type; //type: IedgePppSub
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf lns_address; //type: string
        ydk::YLeaf lac_address; //type: string
        ydk::YLeaf tunnel_client_authentication_id; //type: string
        ydk::YLeaf tunnel_server_authentication_id; //type: string
        ydk::YLeaf session_ip_address; //type: string
        ydk::YLeaf session_ipv6_address; //type: string
        ydk::YLeaf session_ipv6_prefix; //type: string
        ydk::YLeaf delegated_ipv6_prefix; //type: string
        ydk::YLeaf ipv6_interface_id; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf account_session_id; //type: string
        ydk::YLeaf nas_port; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf clientname; //type: string
        ydk::YLeaf formattedname; //type: string
        ydk::YLeaf is_session_authentic; //type: boolean
        ydk::YLeaf is_session_author; //type: boolean
        ydk::YLeaf session_state; //type: IedgeOperSessionState
        ydk::YLeaf session_creation_time; //type: string
        ydk::YLeaf idle_state_change_time; //type: string
        ydk::YLeaf total_session_idle_time; //type: uint32
        ydk::YLeaf access_interface_name; //type: string
        ydk::YLeaf pending_callbacks; //type: uint64
        ydk::YLeaf af_up_status; //type: uint32
        ydk::YLeaf session_ipv4_state; //type: IedgeOperSessionAfState
        ydk::YLeaf session_ipv6_state; //type: IedgeOperSessionAfState
        class Accounting; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting
        class UserProfileAttributes; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes
        class MobilityAttributes; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes
        class SessionChangeOfAuthorization; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes> mobility_attributes;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization> > session_change_of_authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes> user_profile_attributes;
        
}; // Subscriber::Session::Nodes::Node::Sessions::Session_


class Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting : public ydk::Entity
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

        class AccountingSession; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession> > accounting_session;
        
}; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting


class Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession : public ydk::Entity
{
    public:
        AccountingSession();
        ~AccountingSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting_state_rc; //type: uint32
        ydk::YLeaf accounting_stop_state; //type: uint32
        ydk::YLeaf record_context_name; //type: string
        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf account_session_id; //type: string
        ydk::YLeaf accounting_start_time; //type: string
        ydk::YLeaf is_interim_accounting_enabled; //type: boolean
        ydk::YLeaf interim_interval; //type: uint32
        ydk::YLeaf last_successful_interim_update_time; //type: string
        ydk::YLeaf next_interim_update_attempt_time; //type: uint32
        ydk::YLeaf last_interim_update_attempt_time; //type: string
        ydk::YLeaf sent_interim_updates; //type: uint32
        ydk::YLeaf accepted_interim_updates; //type: uint32
        ydk::YLeaf rejected_interim_updates; //type: uint32
        ydk::YLeaf sent_interim_update_failures; //type: uint32

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession


class Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes : public ydk::Entity
{
    public:
        MobilityAttributes();
        ~MobilityAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpc_protocol; //type: boolean
        ydk::YLeaf mobility_ipv4_address; //type: string
        ydk::YLeaf mobility_default_ipv4_gateway; //type: string
        ydk::YLeaf mobility_dns_server; //type: string
        ydk::YLeaf mobility_dhcp_server; //type: string
        ydk::YLeaf mobility_ipv4_netmask; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf uplink_gre_key; //type: string
        ydk::YLeaf downlink_gre_key; //type: string
        ydk::YLeaf lease_time; //type: string

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes


class Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization : public ydk::Entity
{
    public:
        SessionChangeOfAuthorization();
        ~SessionChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request_acked; //type: boolean
        ydk::YLeaf request_time; //type: string
        ydk::YLeaf coa_request_attributes; //type: string
        ydk::YLeaf reply_time; //type: string
        ydk::YLeaf coa_reply_attributes; //type: string

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization


class Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes : public ydk::Entity
{
    public:
        UserProfileAttributes();
        ~UserProfileAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4mtu; //type: uint32
        ydk::YLeaf ipv4_unnumbered; //type: string
        ydk::YLeaf authorization_service_type; //type: AaaAuthService
        ydk::YLeaf tunnel_client_endpoint; //type: string
        ydk::YLeaf tunnel_server_endpoint; //type: string
        ydk::YLeaf tunnel_tos_setting; //type: uint32
        ydk::YLeaf tunnel_medium; //type: AaaTunnelMedium
        ydk::YLeaf tunnel_preference; //type: uint32
        ydk::YLeaf tunnel_client_authentication_id; //type: string
        ydk::YLeaf tunnel_protocol; //type: AaaTunnelProto
        ydk::YLeaf actual_data_rate_upstream; //type: uint32
        ydk::YLeaf actual_data_rate_downstream; //type: uint32
        ydk::YLeaf attainable_data_rate_upstream; //type: uint32
        ydk::YLeaf attainable_data_rate_downstream; //type: uint32
        ydk::YLeaf pool_address; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf connection_receive_speed; //type: uint32
        ydk::YLeaf connection_transmission_speed; //type: uint32
        ydk::YLeaf destination_station_id; //type: string
        ydk::YLeaf primary_dns_server_address; //type: string
        ydk::YLeaf secondary_dns_server_address; //type: string
        ydk::YLeaf formatted_calling_station_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_type; //type: AaaInterface
        ydk::YLeaf interim_accounting_interval; //type: uint32
        ydk::YLeaf ingress_access_list; //type: string
        ydk::YLeaf egress_access_list; //type: string
        ydk::YLeaf ip_netmask; //type: string
        ydk::YLeaf is_interworking_functionality; //type: boolean
        ydk::YLeaf max_interleaving_delay_downstream; //type: uint32
        ydk::YLeaf max_interleaving_delay_upstream; //type: uint32
        ydk::YLeaf max_data_rate_upstream; //type: uint32
        ydk::YLeaf max_data_rate_downstream; //type: uint32
        ydk::YLeaf min_data_rate_downstream; //type: uint32
        ydk::YLeaf min_data_rate_downstream_low_power; //type: uint32
        ydk::YLeaf min_data_rate_upstream_low_power; //type: uint32
        ydk::YLeaf primary_net_bios_server_address; //type: string
        ydk::YLeaf secondary_net_bios_server_address; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf route; //type: string
        ydk::YLeaf session_timeout; //type: uint32
        ydk::YLeaf strict_rpf_packets; //type: uint32
        ydk::YLeaf accounting_session_id; //type: string
        ydk::YLeaf upstream_parameterized_qos_policy; //type: string
        ydk::YLeaf downstream_parameterized_qos_policy; //type: string
        ydk::YLeaf upstream_qos_policy; //type: string
        ydk::YLeaf downstream_qos_policy; //type: string
        ydk::YLeaf session_termination_cause; //type: AaaTerminateCause

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes


class Subscriber::Session::Nodes::Node::StateSummaries : public ydk::Entity
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

        class StateSummary; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary> > state_summary;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary : public ydk::Entity
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
        class StateXr; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StateXr; //type: Subscriber::Session::Nodes::Node::Summary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::Summary


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Summary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Summary::StateXr


class Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::UsernameSummaries : public ydk::Entity
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

        class UsernameSummary; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary> > username_summary;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary : public ydk::Entity
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
        class StateXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::VrfSummaries : public ydk::Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfSummary; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary> > vrf_summary;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary : public ydk::Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr : public ydk::Entity
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

        class Pppoe; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe : public ydk::Entity
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

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe

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

class SubscriberAuthorStateFilterFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf un_authorized;
        static const ydk::Enum::YLeaf authorized;

};

class AaaTunnelMedium : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf nsap;
        static const ydk::Enum::YLeaf hdlc;
        static const ydk::Enum::YLeaf bbn;
        static const ydk::Enum::YLeaf all802;

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

class AaaTunnelProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pptp;
        static const ydk::Enum::YLeaf l2f;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf atmp;
        static const ydk::Enum::YLeaf vtp;
        static const ydk::Enum::YLeaf ah;
        static const ydk::Enum::YLeaf ip_over_ip;
        static const ydk::Enum::YLeaf minimum_ip_over_ip;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf bay_dvs;
        static const ydk::Enum::YLeaf ip_in_ip;
        static const ydk::Enum::YLeaf vlan;

};

class SubscriberAuthenStateFilterFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf un_authenticated;
        static const ydk::Enum::YLeaf authenticated;

};

class AaaInterface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf primary_rate;
        static const ydk::Enum::YLeaf basic_rate;
        static const ydk::Enum::YLeaf serial;
        static const ydk::Enum::YLeaf asynchronous;
        static const ydk::Enum::YLeaf vty;
        static const ydk::Enum::YLeaf atm;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ppp_over_atm;
        static const ydk::Enum::YLeaf pppoe_over_atm;
        static const ydk::Enum::YLeaf pppoe_over_ethernet;
        static const ydk::Enum::YLeaf ppp_over_vlan;
        static const ydk::Enum::YLeaf ppp_over_qinq;
        static const ydk::Enum::YLeaf v120;
        static const ydk::Enum::YLeaf v110;
        static const ydk::Enum::YLeaf piafs;
        static const ydk::Enum::YLeaf x75;
        static const ydk::Enum::YLeaf ip_sec;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf virtual_pppoe_over_ethernet;
        static const ydk::Enum::YLeaf virtual_pppoe_over_vlan;
        static const ydk::Enum::YLeaf virtual_pppoe_over_qinq;
        static const ydk::Enum::YLeaf ipo_e_over_ethernet;
        static const ydk::Enum::YLeaf ipo_e_over_vlan;
        static const ydk::Enum::YLeaf ipo_e_over_qinq;
        static const ydk::Enum::YLeaf virtual_i_po_e_over_ethernet;
        static const ydk::Enum::YLeaf virtual_i_po_e_over_vlan;
        static const ydk::Enum::YLeaf virtual_i_po_e_over_qinq;

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

class AaaTerminateCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf user_request;
        static const ydk::Enum::YLeaf lost_carrier;
        static const ydk::Enum::YLeaf lost_service;
        static const ydk::Enum::YLeaf idle_timeout;
        static const ydk::Enum::YLeaf session_timeout;
        static const ydk::Enum::YLeaf admin_reset;
        static const ydk::Enum::YLeaf admin_reboot;
        static const ydk::Enum::YLeaf port_error;
        static const ydk::Enum::YLeaf nas_error;
        static const ydk::Enum::YLeaf nas_request;
        static const ydk::Enum::YLeaf nas_reboot;
        static const ydk::Enum::YLeaf port_unneeded;
        static const ydk::Enum::YLeaf port_preempted;
        static const ydk::Enum::YLeaf port_suspended;
        static const ydk::Enum::YLeaf service_unavailable;
        static const ydk::Enum::YLeaf callback;
        static const ydk::Enum::YLeaf user_error;
        static const ydk::Enum::YLeaf host_request;
        static const ydk::Enum::YLeaf supplicant_restart;
        static const ydk::Enum::YLeaf reauthorization_failure;
        static const ydk::Enum::YLeaf port_reinitialized;
        static const ydk::Enum::YLeaf admin_disabled;

};

class IedgeOperSessionAfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_started;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up_pending;
        static const ydk::Enum::YLeaf up;

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

class AaaAuthService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf framed;
        static const ydk::Enum::YLeaf callback_login;
        static const ydk::Enum::YLeaf callback_framed;
        static const ydk::Enum::YLeaf outbound;
        static const ydk::Enum::YLeaf administrator;
        static const ydk::Enum::YLeaf prompt;
        static const ydk::Enum::YLeaf authentication_only;
        static const ydk::Enum::YLeaf callback_nas_prompt;
        static const ydk::Enum::YLeaf call_check;
        static const ydk::Enum::YLeaf callback_administrator;
        static const ydk::Enum::YLeaf voice;
        static const ydk::Enum::YLeaf fax;
        static const ydk::Enum::YLeaf modem_relay;
        static const ydk::Enum::YLeaf eap_over_udp;

};


}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_OPER_ */

