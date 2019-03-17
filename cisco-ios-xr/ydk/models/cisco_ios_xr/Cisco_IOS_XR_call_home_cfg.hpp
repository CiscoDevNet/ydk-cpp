#ifndef _CISCO_IOS_XR_CALL_HOME_CFG_
#define _CISCO_IOS_XR_CALL_HOME_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_call_home_cfg {

class CallHome : public ydk::Entity
{
    public:
        CallHome();
        ~CallHome();

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

        ydk::YLeaf customer_id; //type: string
        ydk::YLeaf phone_number; //type: string
        ydk::YLeaf contact_smart_licensing; //type: boolean
        ydk::YLeaf contact_email_address; //type: string
        ydk::YLeaf rate_limit; //type: uint32
        ydk::YLeaf site_id; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf street_address; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf contract_id; //type: string
        ydk::YLeaf reply_to; //type: string
        ydk::YLeaf from; //type: string
        ydk::YLeaf active; //type: empty
        class MailServers; //type: CallHome::MailServers
        class SyslogThrottling; //type: CallHome::SyslogThrottling
        class HttpProxy; //type: CallHome::HttpProxy
        class Profiles; //type: CallHome::Profiles
        class AlertGroups; //type: CallHome::AlertGroups
        class DataPrivacies; //type: CallHome::DataPrivacies
        class AlertGroupConfig; //type: CallHome::AlertGroupConfig
        class Authorization; //type: CallHome::Authorization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::MailServers> mail_servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::SyslogThrottling> syslog_throttling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::HttpProxy> http_proxy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::AlertGroups> alert_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::DataPrivacies> data_privacies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::AlertGroupConfig> alert_group_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Authorization> authorization;
        
}; // CallHome


class CallHome::MailServers : public ydk::Entity
{
    public:
        MailServers();
        ~MailServers();

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

        class MailServer; //type: CallHome::MailServers::MailServer

        ydk::YList mail_server;
        
}; // CallHome::MailServers


class CallHome::MailServers::MailServer : public ydk::Entity
{
    public:
        MailServer();
        ~MailServer();

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

        ydk::YLeaf mail_serv_address; //type: string
        ydk::YLeaf priority; //type: uint32

}; // CallHome::MailServers::MailServer


class CallHome::SyslogThrottling : public ydk::Entity
{
    public:
        SyslogThrottling();
        ~SyslogThrottling();

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

        ydk::YLeaf active; //type: boolean

}; // CallHome::SyslogThrottling


class CallHome::HttpProxy : public ydk::Entity
{
    public:
        HttpProxy();
        ~HttpProxy();

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

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf port; //type: uint16

}; // CallHome::HttpProxy


class CallHome::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

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

        class Profile; //type: CallHome::Profiles::Profile

        ydk::YList profile;
        
}; // CallHome::Profiles


class CallHome::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf message_format; //type: string
        ydk::YLeaf anonymous; //type: boolean
        ydk::YLeaf message_size_limit; //type: uint32
        ydk::YLeaf active; //type: empty
        class ReportType; //type: CallHome::Profiles::Profile::ReportType
        class Methods; //type: CallHome::Profiles::Profile::Methods
        class Addresses; //type: CallHome::Profiles::Profile::Addresses
        class SubscribeAlertGroup; //type: CallHome::Profiles::Profile::SubscribeAlertGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::ReportType> report_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::Methods> methods;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::Addresses> addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup> subscribe_alert_group;
        
}; // CallHome::Profiles::Profile


class CallHome::Profiles::Profile::ReportType : public ydk::Entity
{
    public:
        ReportType();
        ~ReportType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReportingCallhomeData; //type: CallHome::Profiles::Profile::ReportType::ReportingCallhomeData
        class ReportingLicensingData; //type: CallHome::Profiles::Profile::ReportType::ReportingLicensingData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::ReportType::ReportingCallhomeData> reporting_callhome_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::ReportType::ReportingLicensingData> reporting_licensing_data;
        
}; // CallHome::Profiles::Profile::ReportType


class CallHome::Profiles::Profile::ReportType::ReportingCallhomeData : public ydk::Entity
{
    public:
        ReportingCallhomeData();
        ~ReportingCallhomeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean

}; // CallHome::Profiles::Profile::ReportType::ReportingCallhomeData


class CallHome::Profiles::Profile::ReportType::ReportingLicensingData : public ydk::Entity
{
    public:
        ReportingLicensingData();
        ~ReportingLicensingData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean

}; // CallHome::Profiles::Profile::ReportType::ReportingLicensingData


class CallHome::Profiles::Profile::Methods : public ydk::Entity
{
    public:
        Methods();
        ~Methods();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Method; //type: CallHome::Profiles::Profile::Methods::Method

        ydk::YList method;
        
}; // CallHome::Profiles::Profile::Methods


class CallHome::Profiles::Profile::Methods::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method; //type: CallHomeTransMethod
        ydk::YLeaf enable; //type: boolean

}; // CallHome::Profiles::Profile::Methods::Method


class CallHome::Profiles::Profile::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: CallHome::Profiles::Profile::Addresses::Address

        ydk::YList address;
        
}; // CallHome::Profiles::Profile::Addresses


class CallHome::Profiles::Profile::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method; //type: CallHomeTransMethod
        ydk::YLeaf destination_addr; //type: string
        ydk::YLeaf enable; //type: boolean

}; // CallHome::Profiles::Profile::Addresses::Address


class CallHome::Profiles::Profile::SubscribeAlertGroup : public ydk::Entity
{
    public:
        SubscribeAlertGroup();
        ~SubscribeAlertGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Environment; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Environment
        class Configuration; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration
        class Snapshot; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot
        class Inventory; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory
        class Crash; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Crash
        class Syslogs; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Environment> environment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration> configuration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot> snapshot;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory> inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Crash> crash;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs> syslogs;
        
}; // CallHome::Profiles::Profile::SubscribeAlertGroup


class CallHome::Profiles::Profile::SubscribeAlertGroup::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: CallHomeEventSeverity

}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Environment


class CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscribe; //type: empty
        class Periodic; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic> periodic;
        
}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration


class CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: CallHomeMailSendInterval
        ydk::YLeaf day; //type: uint32
        ydk::YLeaf weekday; //type: CallHomeDayOfWeek
        ydk::YLeaf hour; //type: uint32
        ydk::YLeaf minute; //type: uint32

}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic


class CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot : public ydk::Entity
{
    public:
        Snapshot();
        ~Snapshot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Periodic; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic> periodic;
        
}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot


class CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: SnapshotInterval
        ydk::YLeaf day; //type: uint32
        ydk::YLeaf weekday; //type: CallHomeDayOfWeek
        ydk::YLeaf hour; //type: uint32
        ydk::YLeaf minute; //type: uint32

}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic


class CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscribe; //type: empty
        class Periodic; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic> periodic;
        
}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory


class CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: CallHomeMailSendInterval
        ydk::YLeaf day; //type: uint32
        ydk::YLeaf weekday; //type: CallHomeDayOfWeek
        ydk::YLeaf hour; //type: uint32
        ydk::YLeaf minute; //type: uint32

}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic


class CallHome::Profiles::Profile::SubscribeAlertGroup::Crash : public ydk::Entity
{
    public:
        Crash();
        ~Crash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscribe; //type: empty

}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Crash


class CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs : public ydk::Entity
{
    public:
        Syslogs();
        ~Syslogs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Syslog; //type: CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog

        ydk::YList syslog;
        
}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs


class CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf syslog_pattern; //type: string
        ydk::YLeaf severity; //type: CallHomeEventSeverity

}; // CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog


class CallHome::AlertGroups : public ydk::Entity
{
    public:
        AlertGroups();
        ~AlertGroups();

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

        class AlertGroup; //type: CallHome::AlertGroups::AlertGroup

        ydk::YList alert_group;
        
}; // CallHome::AlertGroups


class CallHome::AlertGroups::AlertGroup : public ydk::Entity
{
    public:
        AlertGroup();
        ~AlertGroup();

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

        ydk::YLeaf alert_group_name; //type: string
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf disable; //type: boolean

}; // CallHome::AlertGroups::AlertGroup


class CallHome::DataPrivacies : public ydk::Entity
{
    public:
        DataPrivacies();
        ~DataPrivacies();

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

        class DataPrivacy; //type: CallHome::DataPrivacies::DataPrivacy

        ydk::YList data_privacy;
        
}; // CallHome::DataPrivacies


class CallHome::DataPrivacies::DataPrivacy : public ydk::Entity
{
    public:
        DataPrivacy();
        ~DataPrivacy();

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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf level; //type: DataPrivacyLevel

}; // CallHome::DataPrivacies::DataPrivacy


class CallHome::AlertGroupConfig : public ydk::Entity
{
    public:
        AlertGroupConfig();
        ~AlertGroupConfig();

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

        class SnapshotCommands; //type: CallHome::AlertGroupConfig::SnapshotCommands

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_call_home_cfg::CallHome::AlertGroupConfig::SnapshotCommands> snapshot_commands;
        
}; // CallHome::AlertGroupConfig


class CallHome::AlertGroupConfig::SnapshotCommands : public ydk::Entity
{
    public:
        SnapshotCommands();
        ~SnapshotCommands();

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

        class SnapshotCommand; //type: CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand

        ydk::YList snapshot_command;
        
}; // CallHome::AlertGroupConfig::SnapshotCommands


class CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand : public ydk::Entity
{
    public:
        SnapshotCommand();
        ~SnapshotCommand();

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

        ydk::YLeaf command; //type: string
        ydk::YLeaf active; //type: empty

}; // CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand


class CallHome::Authorization : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf active; //type: empty

}; // CallHome::Authorization

class CallHomeDayOfWeek : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sunday;
        static const ydk::Enum::YLeaf monday;
        static const ydk::Enum::YLeaf tuesday;
        static const ydk::Enum::YLeaf wednesday;
        static const ydk::Enum::YLeaf thursday;
        static const ydk::Enum::YLeaf friday;
        static const ydk::Enum::YLeaf saturday;

};

class DataPrivacyLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf host_name;

};

class CallHomeMailSendInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf daily;
        static const ydk::Enum::YLeaf weekly;
        static const ydk::Enum::YLeaf monthly;

};

class CallHomeEventSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf fatal;
        static const ydk::Enum::YLeaf disaster;
        static const ydk::Enum::YLeaf catastrophic;

};

class SnapshotInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf daily;
        static const ydk::Enum::YLeaf weekly;
        static const ydk::Enum::YLeaf monthly;

};

class CallHomeTransMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf email;
        static const ydk::Enum::YLeaf http;

};


}
}

#endif /* _CISCO_IOS_XR_CALL_HOME_CFG_ */

