#ifndef _TAILF_CONFD_MONITORING_
#define _TAILF_CONFD_MONITORING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace tailf_confd_monitoring {

class ConfdState : public ydk::Entity
{
    public:
        ConfdState();
        ~ConfdState();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf epoll; //type: boolean
        ydk::YLeaf daemon_status; //type: DaemonStatus
        ydk::YLeaf read_only_mode; //type: empty
        ydk::YLeaf upgrade_mode; //type: empty
        class Smp; //type: ConfdState::Smp
        class Ha; //type: ConfdState::Ha
        class Netconf; //type: ConfdState::Netconf
        class Cli; //type: ConfdState::Cli
        class Webui; //type: ConfdState::Webui
        class Snmp; //type: ConfdState::Snmp
        class Internal; //type: ConfdState::Internal

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Smp> smp; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Ha> ha; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Netconf> netconf; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Cli> cli; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Webui> webui; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal> internal;
                class DaemonStatus;

}; // ConfdState


class ConfdState::Smp : public ydk::Entity
{
    public:
        Smp();
        ~Smp();

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

        ydk::YLeaf number_of_threads; //type: uint16

}; // ConfdState::Smp


class ConfdState::Ha : public ydk::Entity
{
    public:
        Ha();
        ~Ha();

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

        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf master_node_id; //type: string
        ydk::YLeafList connected_slave; //type: list of  string
        ydk::YLeafList pending_slave; //type: list of  string
        class Mode;

}; // ConfdState::Ha


class ConfdState::Netconf : public ydk::Entity
{
    public:
        Netconf();
        ~Netconf();

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

        class Listen; //type: ConfdState::Netconf::Listen

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Netconf::Listen> listen;
        
}; // ConfdState::Netconf


class ConfdState::Netconf::Listen : public ydk::Entity
{
    public:
        Listen();
        ~Listen();

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

        class Tcp; //type: ConfdState::Netconf::Listen::Tcp
        class Ssh; //type: ConfdState::Netconf::Listen::Ssh

        ydk::YList tcp;
        ydk::YList ssh;
        
}; // ConfdState::Netconf::Listen


class ConfdState::Netconf::Listen::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16

}; // ConfdState::Netconf::Listen::Tcp


class ConfdState::Netconf::Listen::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16

}; // ConfdState::Netconf::Listen::Ssh


class ConfdState::Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

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

        class Listen; //type: ConfdState::Cli::Listen

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Cli::Listen> listen;
        
}; // ConfdState::Cli


class ConfdState::Cli::Listen : public ydk::Entity
{
    public:
        Listen();
        ~Listen();

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

        class Ssh; //type: ConfdState::Cli::Listen::Ssh

        ydk::YList ssh;
        
}; // ConfdState::Cli::Listen


class ConfdState::Cli::Listen::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16

}; // ConfdState::Cli::Listen::Ssh


class ConfdState::Webui : public ydk::Entity
{
    public:
        Webui();
        ~Webui();

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

        class Listen; //type: ConfdState::Webui::Listen

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Webui::Listen> listen;
        
}; // ConfdState::Webui


class ConfdState::Webui::Listen : public ydk::Entity
{
    public:
        Listen();
        ~Listen();

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

        class Tcp; //type: ConfdState::Webui::Listen::Tcp
        class Ssl; //type: ConfdState::Webui::Listen::Ssl

        ydk::YList tcp;
        ydk::YList ssl;
        
}; // ConfdState::Webui::Listen


class ConfdState::Webui::Listen::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16

}; // ConfdState::Webui::Listen::Tcp


class ConfdState::Webui::Listen::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16

}; // ConfdState::Webui::Listen::Ssl


class ConfdState::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

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

        ydk::YLeaf engine_id; //type: string
        ydk::YLeafList mib; //type: list of  string
        class Listen; //type: ConfdState::Snmp::Listen
        class Version; //type: ConfdState::Snmp::Version

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Snmp::Listen> listen;
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Snmp::Version> version;
        
}; // ConfdState::Snmp


class ConfdState::Snmp::Listen : public ydk::Entity
{
    public:
        Listen();
        ~Listen();

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

        class Udp; //type: ConfdState::Snmp::Listen::Udp

        ydk::YList udp;
        
}; // ConfdState::Snmp::Listen


class ConfdState::Snmp::Listen::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16

}; // ConfdState::Snmp::Listen::Udp


class ConfdState::Snmp::Version : public ydk::Entity
{
    public:
        Version();
        ~Version();

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

        ydk::YLeaf v1; //type: empty
        ydk::YLeaf v2c; //type: empty
        ydk::YLeaf v3; //type: empty

}; // ConfdState::Snmp::Version


class ConfdState::Internal : public ydk::Entity
{
    public:
        Internal();
        ~Internal();

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

        class Callpoints; //type: ConfdState::Internal::Callpoints
        class Cdb; //type: ConfdState::Internal::Cdb

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints> callpoints;
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Cdb> cdb;
                class DatastoreName;

}; // ConfdState::Internal


class ConfdState::Internal::Callpoints : public ydk::Entity
{
    public:
        Callpoints();
        ~Callpoints();

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

        class Callpoint; //type: ConfdState::Internal::Callpoints::Callpoint
        class Validationpoint; //type: ConfdState::Internal::Callpoints::Validationpoint
        class Actionpoint; //type: ConfdState::Internal::Callpoints::Actionpoint
        class SnmpInformCallback; //type: ConfdState::Internal::Callpoints::SnmpInformCallback
        class SnmpNotificationSubscription; //type: ConfdState::Internal::Callpoints::SnmpNotificationSubscription
        class ErrorFormattingCallback; //type: ConfdState::Internal::Callpoints::ErrorFormattingCallback
        class Typepoint; //type: ConfdState::Internal::Callpoints::Typepoint
        class NotificationStreamReplay; //type: ConfdState::Internal::Callpoints::NotificationStreamReplay
        class AuthenticationCallback; //type: ConfdState::Internal::Callpoints::AuthenticationCallback
        class AuthorizationCallbacks; //type: ConfdState::Internal::Callpoints::AuthorizationCallbacks

        ydk::YList callpoint;
        ydk::YList validationpoint;
        ydk::YList actionpoint;
        ydk::YList snmp_inform_callback;
        ydk::YList snmp_notification_subscription;
        ydk::YList error_formatting_callback;
        ydk::YList typepoint;
        ydk::YList notification_stream_replay;
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthenticationCallback> authentication_callback; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthorizationCallbacks> authorization_callbacks; // presence node
        
}; // ConfdState::Internal::Callpoints


class ConfdState::Internal::Callpoints::Callpoint : public ydk::Entity
{
    public:
        Callpoint();
        ~Callpoint();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::Callpoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Callpoint::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Callpoint::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::Callpoint


class ConfdState::Internal::Callpoints::Callpoint::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Callpoint::Daemon


class ConfdState::Internal::Callpoints::Callpoint::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Callpoint::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Callpoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Callpoint::Range


class ConfdState::Internal::Callpoints::Callpoint::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Callpoint::Range::Daemon


class ConfdState::Internal::Callpoints::Validationpoint : public ydk::Entity
{
    public:
        Validationpoint();
        ~Validationpoint();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::Validationpoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Validationpoint::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Validationpoint::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::Validationpoint


class ConfdState::Internal::Callpoints::Validationpoint::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Validationpoint::Daemon


class ConfdState::Internal::Callpoints::Validationpoint::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Validationpoint::Range


class ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon


class ConfdState::Internal::Callpoints::Actionpoint : public ydk::Entity
{
    public:
        Actionpoint();
        ~Actionpoint();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::Actionpoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Actionpoint::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Actionpoint::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::Actionpoint


class ConfdState::Internal::Callpoints::Actionpoint::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Actionpoint::Daemon


class ConfdState::Internal::Callpoints::Actionpoint::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Actionpoint::Range


class ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon


class ConfdState::Internal::Callpoints::SnmpInformCallback : public ydk::Entity
{
    public:
        SnmpInformCallback();
        ~SnmpInformCallback();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::SnmpInformCallback::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::SnmpInformCallback


class ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon


class ConfdState::Internal::Callpoints::SnmpInformCallback::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::SnmpInformCallback::Range


class ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription : public ydk::Entity
{
    public:
        SnmpNotificationSubscription();
        ~SnmpNotificationSubscription();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon


class ConfdState::Internal::Callpoints::ErrorFormattingCallback : public ydk::Entity
{
    public:
        ErrorFormattingCallback();
        ~ErrorFormattingCallback();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback


class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon


class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range


class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon


class ConfdState::Internal::Callpoints::Typepoint : public ydk::Entity
{
    public:
        Typepoint();
        ~Typepoint();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::Typepoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Typepoint::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Typepoint::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::Typepoint


class ConfdState::Internal::Callpoints::Typepoint::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Typepoint::Daemon


class ConfdState::Internal::Callpoints::Typepoint::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Typepoint::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::Typepoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Typepoint::Range


class ConfdState::Internal::Callpoints::Typepoint::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::Typepoint::Range::Daemon


class ConfdState::Internal::Callpoints::NotificationStreamReplay : public ydk::Entity
{
    public:
        NotificationStreamReplay();
        ~NotificationStreamReplay();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf replay_support; //type: ReplaySupport
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::NotificationStreamReplay::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon> daemon;
        ydk::YList range;
                class ReplaySupport;
        class Error;

}; // ConfdState::Internal::Callpoints::NotificationStreamReplay


class ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon


class ConfdState::Internal::Callpoints::NotificationStreamReplay::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::NotificationStreamReplay::Range


class ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon


class ConfdState::Internal::Callpoints::AuthenticationCallback : public ydk::Entity
{
    public:
        AuthenticationCallback();
        ~AuthenticationCallback();

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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::AuthenticationCallback::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::AuthenticationCallback


class ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon


class ConfdState::Internal::Callpoints::AuthenticationCallback::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::AuthenticationCallback::Range


class ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon


class ConfdState::Internal::Callpoints::AuthorizationCallbacks : public ydk::Entity
{
    public:
        AuthorizationCallbacks();
        ~AuthorizationCallbacks();

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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf path; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf error; //type: Error
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon> daemon;
        ydk::YList range;
                class Error;

}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks


class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon


class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf lower; //type: string
        ydk::YLeaf upper; //type: string
        ydk::YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range


class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon : public ydk::Entity
{
    public:
        Daemon();
        ~Daemon();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon


class ConfdState::Internal::Cdb : public ydk::Entity
{
    public:
        Cdb();
        ~Cdb();

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

        class Datastore; //type: ConfdState::Internal::Cdb::Datastore
        class Client; //type: ConfdState::Internal::Cdb::Client

        ydk::YList datastore;
        ydk::YList client;
        
}; // ConfdState::Internal::Cdb


class ConfdState::Internal::Cdb::Datastore : public ydk::Entity
{
    public:
        Datastore();
        ~Datastore();

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

        ydk::YLeaf name; //type: DatastoreName
        ydk::YLeaf transaction_id; //type: string
        ydk::YLeaf write_queue; //type: uint32
        ydk::YLeaf filename; //type: string
        ydk::YLeaf disk_size; //type: uint64
        ydk::YLeaf ram_size; //type: uint64
        ydk::YLeaf read_locks; //type: uint32
        ydk::YLeaf write_lock_set; //type: boolean
        ydk::YLeaf subscription_lock_set; //type: boolean
        ydk::YLeaf waiting_for_replication_sync; //type: boolean
        class PendingSubscriptionSync; //type: ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync
        class PendingNotificationQueue; //type: ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue

        std::shared_ptr<cisco_ios_xr::tailf_confd_monitoring::ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync> pending_subscription_sync; // presence node
        ydk::YList pending_notification_queue;
        
}; // ConfdState::Internal::Cdb::Datastore


class ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync : public ydk::Entity
{
    public:
        PendingSubscriptionSync();
        ~PendingSubscriptionSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: int32
        ydk::YLeaf time_remaining; //type: one of uint64, enumeration
        class Notification; //type: ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification

        ydk::YList notification;
                class TimeRemaining;

}; // ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync


class ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_name; //type: string
        ydk::YLeafList subscription_ids; //type: list of  uint32

}; // ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification


class ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue : public ydk::Entity
{
    public:
        PendingNotificationQueue();
        ~PendingNotificationQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Notification; //type: ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification

        ydk::YList notification;
        
}; // ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue


class ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: int32
        ydk::YLeaf client_name; //type: string
        ydk::YLeafList subscription_ids; //type: list of  uint32

}; // ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification


class ConfdState::Internal::Cdb::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf info; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf datastore; //type: enumeration
        ydk::YLeaf lock; //type: Lock
        class Subscription; //type: ConfdState::Internal::Cdb::Client::Subscription

        ydk::YList subscription;
                class Type;
        class Datastore;
        class Lock;

}; // ConfdState::Internal::Cdb::Client


class ConfdState::Internal::Cdb::Client::Subscription : public ydk::Entity
{
    public:
        Subscription();
        ~Subscription();

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

        ydk::YLeaf datastore; //type: DatastoreName
        ydk::YLeaf twophase; //type: empty
        ydk::YLeaf priority; //type: int32
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf path; //type: string
        ydk::YLeaf error; //type: Error
        class Error;

}; // ConfdState::Internal::Cdb::Client::Subscription

class ConfdState::DaemonStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf starting;
        static const ydk::Enum::YLeaf phase0;
        static const ydk::Enum::YLeaf phase1;
        static const ydk::Enum::YLeaf started;
        static const ydk::Enum::YLeaf stopping;

        static int get_enum_value(const std::string & name) {
            if (name == "starting") return 0;
            if (name == "phase0") return 1;
            if (name == "phase1") return 2;
            if (name == "started") return 3;
            if (name == "stopping") return 4;
            return -1;
        }
};

class ConfdState::Ha::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf slave;
        static const ydk::Enum::YLeaf master;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "slave") return 1;
            if (name == "master") return 2;
            return -1;
        }
};

class ConfdState::Internal::DatastoreName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf startup;
        static const ydk::Enum::YLeaf operational;

        static int get_enum_value(const std::string & name) {
            if (name == "running") return 0;
            if (name == "startup") return 1;
            if (name == "operational") return 2;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Callpoint::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Callpoint::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Validationpoint::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Validationpoint::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Actionpoint::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Actionpoint::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::SnmpInformCallback::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Typepoint::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Typepoint::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf builtin;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "builtin") return 1;
            if (name == "external") return 2;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::AuthenticationCallback::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOT_REGISTERED;
        static const ydk::Enum::YLeaf UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "NOT-REGISTERED") return 0;
            if (name == "UNKNOWN") return 1;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};

class ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::TimeRemaining : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinity;

        static int get_enum_value(const std::string & name) {
            if (name == "infinity") return 0;
            return -1;
        }
};

class ConfdState::Internal::Cdb::Client::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf waiting;

        static int get_enum_value(const std::string & name) {
            if (name == "inactive") return 0;
            if (name == "client") return 1;
            if (name == "subscriber") return 2;
            if (name == "waiting") return 3;
            return -1;
        }
};

class ConfdState::Internal::Cdb::Client::Datastore : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pre_commit_running;

        static int get_enum_value(const std::string & name) {
            if (name == "pre_commit_running") return 9;
            return -1;
        }
};

class ConfdState::Internal::Cdb::Client::Lock : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf subscription;
        static const ydk::Enum::YLeaf pending_read;
        static const ydk::Enum::YLeaf pending_subscription;

        static int get_enum_value(const std::string & name) {
            if (name == "read") return 0;
            if (name == "subscription") return 1;
            if (name == "pending-read") return 2;
            if (name == "pending-subscription") return 3;
            return -1;
        }
};

class ConfdState::Internal::Cdb::Client::Subscription::Error : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PENDING;

        static int get_enum_value(const std::string & name) {
            if (name == "PENDING") return 0;
            return -1;
        }
};


}
}

#endif /* _TAILF_CONFD_MONITORING_ */

