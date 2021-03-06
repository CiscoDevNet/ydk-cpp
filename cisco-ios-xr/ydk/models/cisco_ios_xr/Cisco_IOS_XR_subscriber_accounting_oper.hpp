#ifndef _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_accounting_oper {

class SubscriberAccounting : public ydk::Entity
{
    public:
        SubscriberAccounting();
        ~SubscriberAccounting();

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

        class Nodes; //type: SubscriberAccounting::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes> nodes;
        
}; // SubscriberAccounting


class SubscriberAccounting::Nodes : public ydk::Entity
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

        class Node; //type: SubscriberAccounting::Nodes::Node

        ydk::YList node;
        
}; // SubscriberAccounting::Nodes


class SubscriberAccounting::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        class SubscriberAccountingSessionFeatures; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures
        class SubscriberAccountingSummary; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary
        class SubscriberAccountingFlowFeatures; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures
        class SubscriberAccountingSrgFeatures; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures> subscriber_accounting_session_features;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary> subscriber_accounting_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures> subscriber_accounting_flow_features;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures> subscriber_accounting_srg_features;
        
}; // SubscriberAccounting::Nodes::Node


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures : public ydk::Entity
{
    public:
        SubscriberAccountingSessionFeatures();
        ~SubscriberAccountingSessionFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberAccountingSessionFeature; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature

        ydk::YList subscriber_accounting_session_feature;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature : public ydk::Entity
{
    public:
        SubscriberAccountingSessionFeature();
        ~SubscriberAccountingSessionFeature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_label; //type: uint32
        class SessionFeatureData; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData> session_feature_data;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData : public ydk::Entity
{
    public:
        SessionFeatureData();
        ~SessionFeatureData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_subscriber_label; //type: uint32
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf session_disconnected; //type: boolean
        ydk::YLeaf session_accounting_enabled_flag; //type: boolean
        ydk::YLeaf session_accounting_method_list; //type: string
        ydk::YLeaf session_accounting_periodic_interval; //type: uint32
        ydk::YLeaf session_accounting_aaa_trans_pending; //type: uint32
        ydk::YLeaf session_accounting_aaa_request_failed; //type: uint32
        ydk::YLeaf session_accounting_started; //type: boolean
        ydk::YLeaf session_idle_timeout_enabled_flag; //type: boolean
        ydk::YLeaf idle_timeout_value; //type: uint32
        ydk::YLeaf idle_timeout_threshold; //type: uint32
        ydk::YLeaf idle_timeout_direction; //type: string
        ydk::YLeaf session_is_idle; //type: boolean
        ydk::YLeaf session_stats_changed_time; //type: uint32
        ydk::YLeaf session_total_idle_time; //type: uint32
        ydk::YLeaf session_to_idle_count; //type: uint32
        ydk::YLeaf session_to_awake_count; //type: uint32
        ydk::YLeaf session_idle_to_aaa_trans_pending; //type: uint32
        ydk::YLeaf session_idle_to_aaa_request_failed; //type: uint32
        ydk::YLeaf session_timeout_enabled_flag; //type: boolean
        ydk::YLeaf session_timeout_value; //type: uint32
        ydk::YLeaf session_timeout_time_remaining; //type: uint32
        class ServiceAccountingFeature; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature

        ydk::YList service_accounting_feature;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature : public ydk::Entity
{
    public:
        ServiceAccountingFeature();
        ~ServiceAccountingFeature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_accounting_enabled_flag; //type: boolean
        ydk::YLeaf service_accounting_service_id; //type: uint32
        ydk::YLeaf service_accounting_method_list; //type: string
        ydk::YLeaf service_accounting_periodic_interval; //type: uint32
        ydk::YLeaf session_accounting_aaa_trans_pending; //type: uint32
        ydk::YLeaf session_accounting_aaa_request_failed; //type: uint32
        ydk::YLeaf session_accounting_started; //type: boolean

}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary : public ydk::Entity
{
    public:
        SubscriberAccountingSummary();
        ~SubscriberAccountingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AaaCounters; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters
        class IdleTimeoutCounters; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters
        class SessionTimeoutCounters; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters
        class SessionFlowCounters; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters> aaa_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters> idle_timeout_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters> session_timeout_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters> session_flow_counters;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters : public ydk::Entity
{
    public:
        AaaCounters();
        ~AaaCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_start; //type: uint32
        ydk::YLeaf flow_disconnect; //type: uint32
        ydk::YLeaf session_accounting_start; //type: uint32
        ydk::YLeaf session_accounting_stop; //type: uint32
        ydk::YLeaf session_accounting_update; //type: uint32
        ydk::YLeaf service_accounting_start; //type: uint32
        ydk::YLeaf service_accounting_stop; //type: uint32
        ydk::YLeaf service_accounting_update; //type: uint32
        ydk::YLeaf flow_accounting_start; //type: uint32
        ydk::YLeaf flow_accounting_stop; //type: uint32
        ydk::YLeaf flow_accounting_update; //type: uint32
        ydk::YLeaf accounting_callback; //type: uint32
        ydk::YLeaf session_acct_trans_pending; //type: uint32
        ydk::YLeaf session_acct_reqs_failed; //type: uint32
        ydk::YLeaf session_acct_out_of_sync; //type: uint32
        ydk::YLeaf session_idle_to_trans_pending; //type: uint32
        ydk::YLeaf session_idle_to_reqs_failed; //type: uint32
        ydk::YLeaf session_idle_to_out_of_sync; //type: uint32
        ydk::YLeaf service_acct_trans_pending; //type: uint32
        ydk::YLeaf service_acct_reqs_failed; //type: uint32
        ydk::YLeaf service_acct_out_of_sync; //type: uint32
        ydk::YLeaf service_idle_to_trans_pending; //type: uint32
        ydk::YLeaf service_idle_to_reqs_failed; //type: uint32
        ydk::YLeaf service_idle_to_out_of_sync; //type: uint32
        ydk::YLeaf prepaid_start; //type: uint32
        ydk::YLeaf prepaid_stop; //type: uint32
        ydk::YLeaf prepaid_accounting_start; //type: uint32
        ydk::YLeaf prepaid_accounting_stop; //type: uint32
        ydk::YLeaf prepaid_volume_threshold_reached; //type: uint32
        ydk::YLeaf prepaid_time_threshold_reached; //type: uint32
        ydk::YLeaf prepaid_quota_depleted; //type: uint32
        ydk::YLeaf prepaid_reauthorization; //type: uint32
        ydk::YLeaf idle_timeout; //type: uint32
        ydk::YLeaf idle_timeout_response_callback; //type: uint32
        ydk::YLeaf owned_resource_start; //type: uint32

}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters : public ydk::Entity
{
    public:
        IdleTimeoutCounters();
        ~IdleTimeoutCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_session_idle_timers; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf transitions_to_idle; //type: uint32
        ydk::YLeaf transitions_to_awake; //type: uint32
        ydk::YLeaf active_flow_idle_timers; //type: uint32
        ydk::YLeaf expired_flow_idle_timers; //type: uint32
        ydk::YLeaf active_prepaid_idle_timers; //type: uint32
        ydk::YLeaf expired_prepaid_idle_timers; //type: uint32

}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters : public ydk::Entity
{
    public:
        SessionTimeoutCounters();
        ~SessionTimeoutCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_session_timers; //type: uint32
        ydk::YLeaf expired_session_timers; //type: uint32

}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters : public ydk::Entity
{
    public:
        SessionFlowCounters();
        ~SessionFlowCounters();

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
        ydk::YLeaf disconnected_sessions; //type: uint32
        ydk::YLeaf active_session_accounting_sessions; //type: uint32
        ydk::YLeaf active_flows; //type: uint32
        ydk::YLeaf quota_received; //type: uint32

}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters


class SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures : public ydk::Entity
{
    public:
        SubscriberAccountingFlowFeatures();
        ~SubscriberAccountingFlowFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberAccountingFlowFeature; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature

        ydk::YList subscriber_accounting_flow_feature;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures


class SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature : public ydk::Entity
{
    public:
        SubscriberAccountingFlowFeature();
        ~SubscriberAccountingFlowFeature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_label; //type: uint32
        class FlowFeatureData; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData> flow_feature_data;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature


class SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData : public ydk::Entity
{
    public:
        FlowFeatureData();
        ~FlowFeatureData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_accounting_enabled_flag; //type: boolean
        ydk::YLeaf flow_idle_timeout_enabled_flag; //type: boolean
        ydk::YLeaf prepaid_enabled_flag; //type: boolean
        ydk::YLeaf prepaid_reauth_timer_enabled; //type: boolean
        ydk::YLeaf prepaid_idle_timeout_enabled; //type: boolean
        ydk::YLeaf prepaid_final_unit; //type: boolean
        ydk::YLeaf unique_class_label; //type: uint32
        ydk::YLeaf flow_direction; //type: uint32
        ydk::YLeaf flow_accounting_periodic_interval; //type: uint32
        ydk::YLeaf flow_idle_timeout_value; //type: uint32
        ydk::YLeaf prepaid_time_quota; //type: uint32
        ydk::YLeaf prepaid_time_threshold; //type: uint32
        ydk::YLeaf prepaid_total_time_quota; //type: uint32
        ydk::YLeaf prepaid_volume_threshold; //type: uint32
        ydk::YLeaf prepaid_remaining_qt; //type: uint32
        ydk::YLeaf prepaid_remaining_qat; //type: uint32
        ydk::YLeaf prepaid_remaining_qit; //type: uint32
        ydk::YLeaf prepaid_remaining_qtt; //type: uint32
        ydk::YLeaf prepaid_remaining_wheel; //type: uint32
        ydk::YLeaf prepaid_tariff_time; //type: uint32
        ydk::YLeaf prepaid_idle_timeout_value; //type: uint32
        ydk::YLeaf prepaid_reauth_timeout_value; //type: uint32
        ydk::YLeaf prepaid_ccfh; //type: uint32
        ydk::YLeaf prepaid_result_code; //type: uint32
        ydk::YLeaf prepaid_volumei_quota; //type: uint64
        ydk::YLeaf prepaid_volumeo_quota; //type: uint64
        ydk::YLeaf prepaid_volumeb_quota; //type: uint64
        ydk::YLeaf prepaid_total_volumei_quota; //type: uint64
        ydk::YLeaf prepaid_total_volumeo_quota; //type: uint64
        ydk::YLeaf prepaid_total_volumeb_quota; //type: uint64
        ydk::YLeaf prepaid_volume_usedi_quota; //type: uint64
        ydk::YLeaf prepaid_volume_usedo_quota; //type: uint64
        ydk::YLeaf prepaid_volume_refi_quota; //type: uint64
        ydk::YLeaf prepaid_volume_refo_quota; //type: uint64
        ydk::YLeaf prepaid_volume_refb_quota; //type: uint64
        ydk::YLeaf prepaid_volume_agg_refi_quota; //type: uint64
        ydk::YLeaf prepaid_volume_agg_refo_quota; //type: uint64
        ydk::YLeaf prepaid_volume_agg_refb_quota; //type: uint64
        ydk::YLeaf prepaid_volume_newi_quota; //type: uint64
        ydk::YLeaf prepaid_volume_newo_quota; //type: uint64
        ydk::YLeaf prepaid_volume_newb_quota; //type: uint64
        ydk::YLeaf prepaid_tariff_volumei_quota; //type: uint64
        ydk::YLeaf prepaid_tariff_volumeo_quota; //type: uint64
        ydk::YLeaf prepaid_tariff_volumeb_quota; //type: uint64
        ydk::YLeaf flow_accounting_method_list_name; //type: string
        ydk::YLeaf prepaid_cfg; //type: string
        ydk::YLeaf prepaid_time_state; //type: string
        ydk::YLeaf prepaid_volume_state; //type: string
        ydk::YLeaf prepaid_charging_rule; //type: string

}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures : public ydk::Entity
{
    public:
        SubscriberAccountingSrgFeatures();
        ~SubscriberAccountingSrgFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberAccountingSrgFeature; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures::SubscriberAccountingSrgFeature

        ydk::YList subscriber_accounting_srg_feature;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures::SubscriberAccountingSrgFeature : public ydk::Entity
{
    public:
        SubscriberAccountingSrgFeature();
        ~SubscriberAccountingSrgFeature();

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
        class SrgStatusCounters; //type: SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures::SubscriberAccountingSrgFeature::SrgStatusCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_accounting_oper::SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures::SubscriberAccountingSrgFeature::SrgStatusCounters> srg_status_counters;
        
}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures::SubscriberAccountingSrgFeature


class SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures::SubscriberAccountingSrgFeature::SrgStatusCounters : public ydk::Entity
{
    public:
        SrgStatusCounters();
        ~SrgStatusCounters();

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
        ydk::YLeaf access_interface_handle; //type: uint32
        ydk::YLeaf accounting_mode; //type: uint32
        ydk::YLeaf srg_node_role; //type: uint32
        ydk::YLeaf srg_master_eoms_pending_flag; //type: boolean
        ydk::YLeaf srg_diameter_up_flag; //type: boolean
        ydk::YLeaf srg_role_upd_time; //type: string

}; // SubscriberAccounting::Nodes::Node::SubscriberAccountingSrgFeatures::SubscriberAccountingSrgFeature::SrgStatusCounters


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_OPER_ */

