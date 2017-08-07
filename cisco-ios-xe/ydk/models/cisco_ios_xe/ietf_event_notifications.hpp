#ifndef _IETF_EVENT_NOTIFICATIONS_
#define _IETF_EVENT_NOTIFICATIONS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ietf_event_notifications {

class Stream : public virtual ydk::Identity
{
    public:
        Stream();
        ~Stream();


}; // Stream

class Transport : public virtual ydk::Identity
{
    public:
        Transport();
        ~Transport();


}; // Transport

class SubscriptionResult : public virtual ydk::Identity
{
    public:
        SubscriptionResult();
        ~SubscriptionResult();


}; // SubscriptionResult

class Encodings : public virtual ydk::Identity
{
    public:
        Encodings();
        ~Encodings();


}; // Encodings

class SubscriptionErrors : public virtual ydk::Identity
{
    public:
        SubscriptionErrors();
        ~SubscriptionErrors();


}; // SubscriptionErrors

class SubscriptionStreamStatus : public virtual ydk::Identity
{
    public:
        SubscriptionStreamStatus();
        ~SubscriptionStreamStatus();


}; // SubscriptionStreamStatus

class EstablishSubscription : public ydk::Entity
{
    public:
        EstablishSubscription();
        ~EstablishSubscription();

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

        class Input; //type: EstablishSubscription::Input
        class Output; //type: EstablishSubscription::Output

        std::shared_ptr<ietf_event_notifications::EstablishSubscription::Input> input;
        std::shared_ptr<ietf_event_notifications::EstablishSubscription::Output> output;
        
}; // EstablishSubscription


class EstablishSubscription::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stream; //type: Stream
        //type: uint32 (refers to ietf_event_notifications::Filters::Filter::filter_id)
        ydk::YLeaf filter_ref;
        ydk::YLeaf filter; //type: string
        ydk::YLeaf subtree_filter; //type: string
        ydk::YLeaf xpath_filter; //type: string
        ydk::YLeaf anchor_time; //type: string
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf dampening_period; //type: uint32
        ydk::YLeaf no_synch_on_start; //type: empty
        ydk::YLeaf encoding; //type: Encodings
        ydk::YLeaf stoptime; //type: string
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf subscription_priority; //type: uint8
        ydk::YLeaf subscription_dependency; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeafList excluded_change; //type: list of  ChangeType

}; // EstablishSubscription::Input


class EstablishSubscription::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription_result; //type: SubscriptionResult
        ydk::YLeaf subscription_id; //type: uint32
        ydk::YLeaf stream; //type: Stream
        ydk::YLeaf encoding; //type: Encodings
        ydk::YLeaf filter; //type: string
        //type: uint32 (refers to ietf_event_notifications::Filters::Filter::filter_id)
        ydk::YLeaf filter_ref;
        ydk::YLeaf subtree_filter; //type: string
        ydk::YLeaf xpath_filter; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf stoptime; //type: string
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf anchor_time; //type: string
        ydk::YLeaf no_synch_on_start; //type: empty
        ydk::YLeaf dampening_period; //type: uint32
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf subscription_priority; //type: uint8
        ydk::YLeaf subscription_dependency; //type: string
        ydk::YLeafList excluded_change; //type: list of  ChangeType

}; // EstablishSubscription::Output

class CreateSubscription : public ydk::Entity
{
    public:
        CreateSubscription();
        ~CreateSubscription();

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

        class Input; //type: CreateSubscription::Input

        std::shared_ptr<ietf_event_notifications::CreateSubscription::Input> input;
        
}; // CreateSubscription


class CreateSubscription::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stream; //type: Stream
        ydk::YLeaf encoding; //type: Encodings
        ydk::YLeaf filter; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf stoptime; //type: string

}; // CreateSubscription::Input

class ModifySubscription : public ydk::Entity
{
    public:
        ModifySubscription();
        ~ModifySubscription();

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

        class Input; //type: ModifySubscription::Input
        class Output; //type: ModifySubscription::Output

        std::shared_ptr<ietf_event_notifications::ModifySubscription::Input> input;
        std::shared_ptr<ietf_event_notifications::ModifySubscription::Output> output;
        
}; // ModifySubscription


class ModifySubscription::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription_id; //type: uint32
        ydk::YLeaf filter; //type: string
        //type: uint32 (refers to ietf_event_notifications::Filters::Filter::filter_id)
        ydk::YLeaf filter_ref;
        ydk::YLeaf subtree_filter; //type: string
        ydk::YLeaf xpath_filter; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf stoptime; //type: string
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf anchor_time; //type: string
        ydk::YLeaf no_synch_on_start; //type: empty
        ydk::YLeaf dampening_period; //type: uint32
        ydk::YLeafList excluded_change; //type: list of  ChangeType

}; // ModifySubscription::Input


class ModifySubscription::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription_result; //type: SubscriptionResult
        ydk::YLeaf subscription_id; //type: uint32
        ydk::YLeaf stream; //type: Stream
        ydk::YLeaf encoding; //type: Encodings
        ydk::YLeaf filter; //type: string
        //type: uint32 (refers to ietf_event_notifications::Filters::Filter::filter_id)
        ydk::YLeaf filter_ref;
        ydk::YLeaf subtree_filter; //type: string
        ydk::YLeaf xpath_filter; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf stoptime; //type: string
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf anchor_time; //type: string
        ydk::YLeaf no_synch_on_start; //type: empty
        ydk::YLeaf dampening_period; //type: uint32
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf subscription_priority; //type: uint8
        ydk::YLeaf subscription_dependency; //type: string
        ydk::YLeafList excluded_change; //type: list of  ChangeType

}; // ModifySubscription::Output

class DeleteSubscription : public ydk::Entity
{
    public:
        DeleteSubscription();
        ~DeleteSubscription();

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

        class Input; //type: DeleteSubscription::Input
        class Output; //type: DeleteSubscription::Output

        std::shared_ptr<ietf_event_notifications::DeleteSubscription::Input> input;
        std::shared_ptr<ietf_event_notifications::DeleteSubscription::Output> output;
        
}; // DeleteSubscription


class DeleteSubscription::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription_id; //type: uint32

}; // DeleteSubscription::Input


class DeleteSubscription::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription_result; //type: SubscriptionResult

}; // DeleteSubscription::Output

class Streams : public ydk::Entity
{
    public:
        Streams();
        ~Streams();

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

        ydk::YLeafList stream; //type: list of  Stream

}; // Streams

class Filters : public ydk::Entity
{
    public:
        Filters();
        ~Filters();

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

        class Filter; //type: Filters::Filter

        std::vector<std::shared_ptr<ietf_event_notifications::Filters::Filter> > filter;
        
}; // Filters


class Filters::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter_id; //type: uint32
        ydk::YLeaf filter; //type: string
        ydk::YLeaf subtree_filter; //type: string
        ydk::YLeaf xpath_filter; //type: string

}; // Filters::Filter

class SubscriptionConfig : public ydk::Entity
{
    public:
        SubscriptionConfig();
        ~SubscriptionConfig();

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

        class Subscription; //type: SubscriptionConfig::Subscription

        std::vector<std::shared_ptr<ietf_event_notifications::SubscriptionConfig::Subscription> > subscription;
        
}; // SubscriptionConfig


class SubscriptionConfig::Subscription : public ydk::Entity
{
    public:
        Subscription();
        ~Subscription();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription_id; //type: uint32
        ydk::YLeaf stream; //type: Stream
        ydk::YLeaf encoding; //type: Encodings
        ydk::YLeaf filter; //type: string
        //type: uint32 (refers to ietf_event_notifications::Filters::Filter::filter_id)
        ydk::YLeaf filter_ref;
        ydk::YLeaf subtree_filter; //type: string
        ydk::YLeaf xpath_filter; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf stoptime; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf source_interface;
        ydk::YLeaf source_vrf; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf anchor_time; //type: string
        ydk::YLeaf no_synch_on_start; //type: empty
        ydk::YLeaf dampening_period; //type: uint32
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf subscription_priority; //type: uint8
        ydk::YLeaf subscription_dependency; //type: string
        ydk::YLeafList excluded_change; //type: list of  ChangeType
        class Receivers; //type: SubscriptionConfig::Subscription::Receivers

        std::shared_ptr<ietf_event_notifications::SubscriptionConfig::Subscription::Receivers> receivers;
        
}; // SubscriptionConfig::Subscription


class SubscriptionConfig::Subscription::Receivers : public ydk::Entity
{
    public:
        Receivers();
        ~Receivers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Receiver; //type: SubscriptionConfig::Subscription::Receivers::Receiver

        std::vector<std::shared_ptr<ietf_event_notifications::SubscriptionConfig::Subscription::Receivers::Receiver> > receiver;
        
}; // SubscriptionConfig::Subscription::Receivers


class SubscriptionConfig::Subscription::Receivers::Receiver : public ydk::Entity
{
    public:
        Receiver();
        ~Receiver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: one of union, string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf protocol; //type: Transport

}; // SubscriptionConfig::Subscription::Receivers::Receiver

class Subscriptions : public ydk::Entity
{
    public:
        Subscriptions();
        ~Subscriptions();

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

        class Subscription; //type: Subscriptions::Subscription

        std::vector<std::shared_ptr<ietf_event_notifications::Subscriptions::Subscription> > subscription;
        
}; // Subscriptions


class Subscriptions::Subscription : public ydk::Entity
{
    public:
        Subscription();
        ~Subscription();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription_id; //type: uint32
        ydk::YLeaf configured_subscription; //type: empty
        ydk::YLeaf subscription_status; //type: SubscriptionStreamStatus
        ydk::YLeaf stream; //type: Stream
        ydk::YLeaf encoding; //type: Encodings
        ydk::YLeaf filter; //type: string
        //type: uint32 (refers to ietf_event_notifications::Filters::Filter::filter_id)
        ydk::YLeaf filter_ref;
        ydk::YLeaf subtree_filter; //type: string
        ydk::YLeaf xpath_filter; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf stoptime; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf source_interface;
        ydk::YLeaf source_vrf; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf anchor_time; //type: string
        ydk::YLeaf no_synch_on_start; //type: empty
        ydk::YLeaf dampening_period; //type: uint32
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf subscription_priority; //type: uint8
        ydk::YLeaf subscription_dependency; //type: string
        ydk::YLeafList excluded_change; //type: list of  ChangeType
        class Receivers; //type: Subscriptions::Subscription::Receivers

        std::shared_ptr<ietf_event_notifications::Subscriptions::Subscription::Receivers> receivers;
        
}; // Subscriptions::Subscription


class Subscriptions::Subscription::Receivers : public ydk::Entity
{
    public:
        Receivers();
        ~Receivers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Receiver; //type: Subscriptions::Subscription::Receivers::Receiver

        std::vector<std::shared_ptr<ietf_event_notifications::Subscriptions::Subscription::Receivers::Receiver> > receiver;
        
}; // Subscriptions::Subscription::Receivers


class Subscriptions::Subscription::Receivers::Receiver : public ydk::Entity
{
    public:
        Receiver();
        ~Receiver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: one of union, string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf protocol; //type: Transport

}; // Subscriptions::Subscription::Receivers::Receiver

class Suspended : public ietf_event_notifications::SubscriptionStreamStatus, virtual ydk::Identity
{
    public:
        Suspended();
        ~Suspended();


}; // Suspended

class Inactive : public ietf_event_notifications::SubscriptionStreamStatus, virtual ydk::Identity
{
    public:
        Inactive();
        ~Inactive();


}; // Inactive

class NETCONF : public ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        NETCONF();
        ~NETCONF();


}; // Netconf

class InternalError : public ietf_event_notifications::SubscriptionErrors, virtual ydk::Identity
{
    public:
        InternalError();
        ~InternalError();


}; // InternalError

class NoResources : public ietf_event_notifications::SubscriptionErrors, virtual ydk::Identity
{
    public:
        NoResources();
        ~NoResources();


}; // NoResources

class Error : public ietf_event_notifications::SubscriptionResult, virtual ydk::Identity
{
    public:
        Error();
        ~Error();


}; // Error

class EncodeXml : public ietf_event_notifications::Encodings, virtual ydk::Identity
{
    public:
        EncodeXml();
        ~EncodeXml();


}; // EncodeXml

class Netconf : public ietf_event_notifications::Transport, virtual ydk::Identity
{
    public:
        Netconf();
        ~Netconf();


}; // Netconf

class Ok : public ietf_event_notifications::SubscriptionResult, virtual ydk::Identity
{
    public:
        Ok();
        ~Ok();


}; // Ok

class ErrorOther : public ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorOther();
        ~ErrorOther();


}; // ErrorOther

class Other : public ietf_event_notifications::SubscriptionErrors, virtual ydk::Identity
{
    public:
        Other();
        ~Other();


}; // Other

class InError : public ietf_event_notifications::SubscriptionStreamStatus, virtual ydk::Identity
{
    public:
        InError();
        ~InError();


}; // InError

class EncodeJson : public ietf_event_notifications::Encodings, virtual ydk::Identity
{
    public:
        EncodeJson();
        ~EncodeJson();


}; // EncodeJson

class SubscriptionDeleted : public ietf_event_notifications::SubscriptionErrors, virtual ydk::Identity
{
    public:
        SubscriptionDeleted();
        ~SubscriptionDeleted();


}; // SubscriptionDeleted

class Active : public ietf_event_notifications::SubscriptionStreamStatus, virtual ydk::Identity
{
    public:
        Active();
        ~Active();


}; // Active

class ErrorNoSuchOption : public ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorNoSuchOption();
        ~ErrorNoSuchOption();


}; // ErrorNoSuchOption

class ErrorConfiguredSubscription : public ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorConfiguredSubscription();
        ~ErrorConfiguredSubscription();


}; // ErrorConfiguredSubscription

class ErrorInsufficientResources : public ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorInsufficientResources();
        ~ErrorInsufficientResources();


}; // ErrorInsufficientResources

class ErrorNoSuchSubscription : public ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorNoSuchSubscription();
        ~ErrorNoSuchSubscription();


}; // ErrorNoSuchSubscription

class PushSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_originated;
        static const ydk::Enum::YLeaf address_originated;

};


}
}

#endif /* _IETF_EVENT_NOTIFICATIONS_ */

