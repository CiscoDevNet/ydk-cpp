#ifndef _CISCO_IOS_XR_IFMGR_CFG_4_
#define _CISCO_IOS_XR_IFMGR_CFG_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos : public ydk::Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string
        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent> subscriber_parent;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames : public ydk::Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public ydk::Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_group_string; //type: string
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent : public ydk::Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy> > service_policy;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos> > service_policy_qos;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos : public ydk::Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string
        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent> subscriber_parent;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames : public ydk::Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public ydk::Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_group_string; //type: string
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent : public ydk::Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies : public ydk::Entity
{
    public:
        ServicePolicies();
        ~ServicePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions : public ydk::Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanMonitorSession; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;
        
}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_class; //type: SpanSessionClass
        ydk::YLeaf mirror_first; //type: uint32
        ydk::YLeaf mirror_interval; //type: SpanMirrorInterval
        class Attachment; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment
        class Acl; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl> acl; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_enable; //type: empty
        ydk::YLeaf acl_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_name; //type: string
        ydk::YLeaf direction; //type: SpanTrafficDirection
        ydk::YLeaf port_level_enable; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession : public ydk::Entity
{
    public:
        SsrpSession();
        ~SsrpSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupId; //type: InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId> group_id;
        
}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId : public ydk::Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint32
        ydk::YLeaf id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId


class InterfaceConfigurations::InterfaceConfiguration::Statistics : public ydk::Entity
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

        ydk::YLeaf load_interval; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Statistics


class InterfaceConfigurations::InterfaceConfiguration::Subscriber : public ydk::Entity
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

        class IpSubscriber; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber> ip_subscriber;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber : public ydk::Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_templates; //type: uint32
        ydk::YLeaf interface; //type: empty
        class Ipv4; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4
        class SessionLimit; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit
        class Ipv6; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit> session_limit;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected> l2_connected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed> routed;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected : public ydk::Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dhcp; //type: empty
        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol : public ydk::Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf address_unique; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed : public ydk::Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unclassified_ip; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf dhcp_snoop; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected> l2_connected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed> routed;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected : public ydk::Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dhcp; //type: empty
        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol : public ydk::Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf address_unique; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed : public ydk::Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unclassified_ip; //type: uint32
        ydk::YLeaf dhcp; //type: uint32
        ydk::YLeaf dhcp_snoop; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit : public ydk::Entity
{
    public:
        SessionLimit();
        ~SessionLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Total; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total
        class UnclassifiedSource; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total> total;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource> unclassified_source;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_vlan; //type: int32

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource : public ydk::Entity
{
    public:
        UnclassifiedSource();
        ~UnclassifiedSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_vlan; //type: int32

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel : public ydk::Entity
{
    public:
        TransportProfileTunnel();
        ~TransportProfileTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        class Bfd; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd
        class WorkingLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination
        class Fault; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault
        class ProtectLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination> destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault> fault;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp> working_lsp;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf multiplier_standby; //type: uint32
        class MinInterval; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval
        class MinIntervalStandby; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval> min_interval;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby> min_interval_standby;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval : public ydk::Entity
{
    public:
        MinInterval();
        ~MinInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval_ms; //type: uint32
        ydk::YLeaf interval_us; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby : public ydk::Entity
{
    public:
        MinIntervalStandby();
        ~MinIntervalStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval_standby_ms; //type: uint32
        ydk::YLeaf interval_standby_us; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault : public ydk::Entity
{
    public:
        Fault();
        ~Fault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class ProtectionTrigger; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger> protection_trigger;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger : public ydk::Entity
{
    public:
        ProtectionTrigger();
        ~ProtectionTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi; //type: boolean
        ydk::YLeaf ais; //type: boolean
        ydk::YLeaf lkr; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf lockout; //type: empty
        ydk::YLeaf lsp_id; //type: uint32
        class OutLabel; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel> out_label; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel : public ydk::Entity
{
    public:
        OutLabel();
        ~OutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf link; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf lockout; //type: empty
        ydk::YLeaf lsp_id; //type: uint32
        class OutLabel; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel> out_label; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel : public ydk::Entity
{
    public:
        OutLabel();
        ~OutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf link; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp : public ydk::Entity
{
    public:
        TunnelIp();
        ~TunnelIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_key; //type: empty
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf tunnel_vrf; //type: string
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf disable; //type: int32
        class Mode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode
        class Source; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source
        class Key; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key
        class Keepalive; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination> destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key> key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode> mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source> source;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: int32
        ydk::YLeaf address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf address_mask; //type: string
        ydk::YLeaf prefix_list_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keep_alive_period; //type: uint32
        ydk::YLeaf keep_alive_retries; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entropy; //type: empty
        ydk::YLeaf value_; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: int32
        ydk::YLeaf mode_direction; //type: TunnelModeDirection

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: int32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes : public ydk::Entity
{
    public:
        TunnelTeAttributes();
        ~TunnelTeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_protection; //type: empty
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf soft_preemption; //type: empty
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf signalled_name; //type: string
        class BackupBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth
        class BfdOverLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp
        class BindingSegmentIdMpls; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls
        class ForwardingAdjacency; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency
        class PathOptionProtects; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects
        class Bidirectional; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional
        class AdminMode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode
        class Switching; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching
        class Pce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce
        class TunnelPathSelection; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection
        class AutoBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth
        class Priority; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority
        class AffinityMask; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask
        class Logging; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging
        class Bandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth
        class Autoroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute
        class PolicyClasses; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses
        class NewStyleAffinityAffinityTypes; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes
        class FastReroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode> admin_mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth> backup_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp> bfd_over_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional> bidirectional;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls> binding_segment_id_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute> fast_reroute; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency> forwarding_adjacency;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects> path_option_protects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce> pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses> policy_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching> switching;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection> tunnel_path_selection;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode : public ydk::Entity
{
    public:
        AdminMode();
        ~AdminMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deactivate_tunnel; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth : public ydk::Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_enable; //type: boolean
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf overflow_enable; //type: boolean
        ydk::YLeaf collection_only; //type: empty
        class Underflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow
        class Overflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow
        class BandwidthLimits; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits
        class AdjustmentThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow> overflow; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow> underflow; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold : public ydk::Entity
{
    public:
        AdjustmentThreshold();
        ~AdjustmentThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits : public ydk::Entity
{
    public:
        BandwidthLimits();
        ~BandwidthLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_min_limit; //type: uint32
        ydk::YLeaf bandwidth_max_limit; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow : public ydk::Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow : public ydk::Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutorouteAnnounce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce
        class Destinations; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations> destinations;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce : public ydk::Entity
{
    public:
        AutorouteAnnounce();
        ~AutorouteAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf include_ipv6; //type: empty
        class ExcludeTraffic; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic
        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic> exclude_traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric> metric;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic : public ydk::Entity
{
    public:
        ExcludeTraffic();
        ~ExcludeTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_routing; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: MplsTeAutorouteMetric
        ydk::YLeaf absolute_metric; //type: uint32
        ydk::YLeaf relative_metric; //type: int32
        ydk::YLeaf constant_metric; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations : public ydk::Entity
{
    public:
        Destinations();
        ~Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination> > destination;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth : public ydk::Entity
{
    public:
        BackupBandwidth();
        ~BackupBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf pool_type; //type: MplsTeBackupBandwidthPool
        ydk::YLeaf class_type; //type: MplsTeBackupBandwidthClass
        ydk::YLeaf limit_type; //type: MplsTeBandwidthLimit
        ydk::YLeaf backup_bandwidth; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf class_or_pool_type; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp : public ydk::Entity
{
    public:
        BfdOverLsp();
        ~BfdOverLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_initial_wait; //type: uint32
        ydk::YLeaf fast_detect; //type: MplsTebfdSession
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf multiplier; //type: uint32
        ydk::YLeaf bringup_timeout; //type: uint32
        ydk::YLeaf periodic_ping_disable; //type: empty
        ydk::YLeaf dampening_secondary_wait; //type: uint32
        ydk::YLeaf periodic_ping_interval; //type: uint32
        ydk::YLeaf dampening_maximum_wait; //type: uint32
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf encap_mode; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional : public ydk::Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty
        class AssociationCoroutedType; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType
        class AssociationParameters; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType> association_corouted_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters> association_parameters; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType : public ydk::Entity
{
    public:
        AssociationCoroutedType();
        ~AssociationCoroutedType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wrap_protection_enable; //type: empty
        ydk::YLeaf enable; //type: empty
        class FaultOam; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam> fault_oam;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam : public ydk::Entity
{
    public:
        FaultOam();
        ~FaultOam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters : public ydk::Entity
{
    public:
        AssociationParameters();
        ~AssociationParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_id; //type: uint32
        ydk::YLeaf association_source_address; //type: string
        ydk::YLeaf association_is_global_id_configured; //type: boolean
        ydk::YLeaf association_global_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls : public ydk::Entity
{
    public:
        BindingSegmentIdMpls();
        ~BindingSegmentIdMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_id_type; //type: BindingSegmentId
        ydk::YLeaf label_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_protection; //type: uint32
        ydk::YLeaf node_protection; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency : public ydk::Entity
{
    public:
        ForwardingAdjacency();
        ~ForwardingAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf include_ipv6; //type: empty
        ydk::YLeaf hold_time; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_switch_over_change_message; //type: empty
        ydk::YLeaf all; //type: empty
        ydk::YLeaf record_route_messsage; //type: empty
        ydk::YLeaf bfd_state_message; //type: empty
        ydk::YLeaf bandwidth_change_message; //type: empty
        ydk::YLeaf reoptimize_attempts_message; //type: empty
        ydk::YLeaf reroute_messsage; //type: empty
        ydk::YLeaf state_message; //type: empty
        ydk::YLeaf insufficient_bw_message; //type: empty
        ydk::YLeaf reoptimized_message; //type: empty
        ydk::YLeaf pcalc_failure_message; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NewStyleAffinityAffinityType; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string
        ydk::YLeaf affinity10; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects : public ydk::Entity
{
    public:
        PathOptionProtects();
        ~PathOptionProtects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOptionProtect; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect> > path_option_protect;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect : public ydk::Entity
{
    public:
        PathOptionProtect();
        ~PathOptionProtect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection; //type: MplsTePathOptionProtection
        class PathOptions; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions> path_options;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions : public ydk::Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOption; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption> > path_option;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preference_level; //type: uint32
        ydk::YLeaf path_type; //type: MplsTePathOption
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_name; //type: string
        ydk::YLeaf path_property; //type: int32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf output_label; //type: int32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf lockdown; //type: MplsTePathOptionProperty
        ydk::YLeaf verbatim; //type: MplsTePathOptionProperty
        ydk::YLeaf pce; //type: MplsTePathOptionProperty
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf igp_type; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf igp_area; //type: int32
        ydk::YLeaf igp_area_ip_address_id; //type: string
        ydk::YLeaf path_option_attribute_set_name; //type: string
        ydk::YLeaf protected_by_preference_level; //type: uint32
        ydk::YLeaf segment_routing; //type: MplsTePathOptionProperty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce : public ydk::Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf delegation; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses : public ydk::Entity
{
    public:
        PolicyClasses();
        ~PolicyClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList policy_class; //type: list of  uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching : public ydk::Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Transit; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit
        class Endpoint; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint> endpoint; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit> transit; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint : public ydk::Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability; //type: MplsTeSwitchingCap
        ydk::YLeaf encoding; //type: MplsTeSwitchingEncode

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit : public ydk::Entity
{
    public:
        Transit();
        ~Transit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability; //type: MplsTeSwitchingCap
        ydk::YLeaf encoding; //type: MplsTeSwitchingEncode

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection : public ydk::Entity
{
    public:
        TunnelPathSelection();
        ~TunnelPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker; //type: MplsTePathSelectionTiebreaker
        ydk::YLeaf path_selection_hop_limit; //type: uint32
        ydk::YLeaf path_selection_cost_limit; //type: uint32
        class Invalidation; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: PathInvalidationAction

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation


class InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration : public ydk::Entity
{
    public:
        VlanSubConfiguration();
        ~VlanSubConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanIdentifier; //type: InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier> vlan_identifier; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration


class InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier : public ydk::Entity
{
    public:
        VlanIdentifier();
        ~VlanIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_type; //type: Vlan
        ydk::YLeaf first_tag; //type: uint32
        ydk::YLeaf second_tag; //type: one of enumeration, uint32

}; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier


class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration : public ydk::Entity
{
    public:
        VlanTrunkConfiguration();
        ~VlanTrunkConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunneling_ethertype; //type: TunnelingEthertype
        class NativeVlanIdentifier; //type: InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier> native_vlan_identifier; // presence node
                class TunnelingEthertype;

}; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration


class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier : public ydk::Entity
{
    public:
        NativeVlanIdentifier();
        ~NativeVlanIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_type; //type: Vlan
        ydk::YLeaf vlan_identifier; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier


class InterfaceConfigurations::InterfaceConfiguration::Wanphy : public ydk::Entity
{
    public:
        Wanphy();
        ~Wanphy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf report_path_rdi; //type: empty
        ydk::YLeaf report_los; //type: empty
        ydk::YLeaf report_path_lcd; //type: empty
        ydk::YLeaf report_path_fe_plm; //type: empty
        ydk::YLeaf lan_mode; //type: WanphyLanMode
        ydk::YLeaf report_path_plm; //type: empty
        ydk::YLeaf report_path_fe_ais; //type: empty
        ydk::YLeaf report_path_ais; //type: empty
        ydk::YLeaf report_line_ais; //type: empty
        ydk::YLeaf report_lof; //type: empty
        ydk::YLeaf report_lop; //type: empty
        ydk::YLeaf report_rdi; //type: empty
        ydk::YLeaf report_sd_ber; //type: empty
        ydk::YLeaf threshold_sd_ber; //type: uint32
        ydk::YLeaf report_sf_ber; //type: empty
        ydk::YLeaf threshold_sf_ber; //type: uint32
        ydk::YLeaf wan_mode; //type: WanphyWanMode

}; // InterfaceConfigurations::InterfaceConfiguration::Wanphy

class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0x9100;
        static const ydk::Enum::YLeaf Y_0x9200;

};


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_4_ */

