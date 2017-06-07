#ifndef _TAILF_CONFD_MONITORING_
#define _TAILF_CONFD_MONITORING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace tailf_confd_monitoring {

class ConfdState : public Entity
{
    public:
        ConfdState();
        ~ConfdState();

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

        YLeaf version; //type: string
        YLeaf epoll; //type: boolean
        YLeaf daemon_status; //type: DaemonStatusEnum
        YLeaf read_only_mode; //type: empty
        YLeaf upgrade_mode; //type: empty
        class Smp; //type: ConfdState::Smp
        class Ha; //type: ConfdState::Ha
        class LoadedDataModels; //type: ConfdState::LoadedDataModels
        class Netconf; //type: ConfdState::Netconf
        class Cli; //type: ConfdState::Cli
        class Webui; //type: ConfdState::Webui
        class Rest; //type: ConfdState::Rest
        class Snmp; //type: ConfdState::Snmp
        class Internal; //type: ConfdState::Internal

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Cli> cli; // presence node
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Ha> ha; // presence node
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal> internal;
        std::shared_ptr<tailf_confd_monitoring::ConfdState::LoadedDataModels> loaded_data_models;
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Netconf> netconf; // presence node
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Rest> rest; // presence node
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Smp> smp; // presence node
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Snmp> snmp; // presence node
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Webui> webui; // presence node
                class DaemonStatusEnum;

}; // ConfdState


class ConfdState::Smp : public Entity
{
    public:
        Smp();
        ~Smp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_threads; //type: uint16

}; // ConfdState::Smp


class ConfdState::Ha : public Entity
{
    public:
        Ha();
        ~Ha();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: ModeEnum
        YLeaf node_id; //type: string
        YLeaf master_node_id; //type: string
        YLeafList connected_slave; //type: list of  string
        YLeafList pending_slave; //type: list of  string
        class ModeEnum;

}; // ConfdState::Ha


class ConfdState::LoadedDataModels : public Entity
{
    public:
        LoadedDataModels();
        ~LoadedDataModels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DataModel; //type: ConfdState::LoadedDataModels::DataModel

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::LoadedDataModels::DataModel> > data_model;
        
}; // ConfdState::LoadedDataModels


class ConfdState::LoadedDataModels::DataModel : public Entity
{
    public:
        DataModel();
        ~DataModel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf revision; //type: string
        YLeaf namespace_; //type: string
        YLeaf prefix; //type: string
        YLeaf exported_to_all; //type: empty
        YLeafList exported_to; //type: list of  one of string, enumeration
        class ExportedToEnum;

}; // ConfdState::LoadedDataModels::DataModel


class ConfdState::Netconf : public Entity
{
    public:
        Netconf();
        ~Netconf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Listen; //type: ConfdState::Netconf::Listen

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Netconf::Listen> listen;
        
}; // ConfdState::Netconf


class ConfdState::Netconf::Listen : public Entity
{
    public:
        Listen();
        ~Listen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcp; //type: ConfdState::Netconf::Listen::Tcp
        class Ssh; //type: ConfdState::Netconf::Listen::Ssh

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Netconf::Listen::Ssh> > ssh;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Netconf::Listen::Tcp> > tcp;
        
}; // ConfdState::Netconf::Listen


class ConfdState::Netconf::Listen::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Netconf::Listen::Tcp


class ConfdState::Netconf::Listen::Ssh : public Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Netconf::Listen::Ssh


class ConfdState::Cli : public Entity
{
    public:
        Cli();
        ~Cli();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Listen; //type: ConfdState::Cli::Listen

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Cli::Listen> listen;
        
}; // ConfdState::Cli


class ConfdState::Cli::Listen : public Entity
{
    public:
        Listen();
        ~Listen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ssh; //type: ConfdState::Cli::Listen::Ssh

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Cli::Listen::Ssh> > ssh;
        
}; // ConfdState::Cli::Listen


class ConfdState::Cli::Listen::Ssh : public Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Cli::Listen::Ssh


class ConfdState::Webui : public Entity
{
    public:
        Webui();
        ~Webui();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Listen; //type: ConfdState::Webui::Listen

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Webui::Listen> listen;
        
}; // ConfdState::Webui


class ConfdState::Webui::Listen : public Entity
{
    public:
        Listen();
        ~Listen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcp; //type: ConfdState::Webui::Listen::Tcp
        class Ssl; //type: ConfdState::Webui::Listen::Ssl

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Webui::Listen::Ssl> > ssl;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Webui::Listen::Tcp> > tcp;
        
}; // ConfdState::Webui::Listen


class ConfdState::Webui::Listen::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Webui::Listen::Tcp


class ConfdState::Webui::Listen::Ssl : public Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Webui::Listen::Ssl


class ConfdState::Rest : public Entity
{
    public:
        Rest();
        ~Rest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Listen; //type: ConfdState::Rest::Listen

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Rest::Listen> listen;
        
}; // ConfdState::Rest


class ConfdState::Rest::Listen : public Entity
{
    public:
        Listen();
        ~Listen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcp; //type: ConfdState::Rest::Listen::Tcp
        class Ssl; //type: ConfdState::Rest::Listen::Ssl

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Rest::Listen::Ssl> > ssl;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Rest::Listen::Tcp> > tcp;
        
}; // ConfdState::Rest::Listen


class ConfdState::Rest::Listen::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Rest::Listen::Tcp


class ConfdState::Rest::Listen::Ssl : public Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Rest::Listen::Ssl


class ConfdState::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf engine_id; //type: string
        YLeafList mib; //type: list of  string
        class Listen; //type: ConfdState::Snmp::Listen
        class Version; //type: ConfdState::Snmp::Version

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Snmp::Listen> listen;
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Snmp::Version> version;
        
}; // ConfdState::Snmp


class ConfdState::Snmp::Listen : public Entity
{
    public:
        Listen();
        ~Listen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Udp; //type: ConfdState::Snmp::Listen::Udp

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Snmp::Listen::Udp> > udp;
        
}; // ConfdState::Snmp::Listen


class ConfdState::Snmp::Listen::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // ConfdState::Snmp::Listen::Udp


class ConfdState::Snmp::Version : public Entity
{
    public:
        Version();
        ~Version();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf v1; //type: empty
        YLeaf v2c; //type: empty
        YLeaf v3; //type: empty

}; // ConfdState::Snmp::Version


class ConfdState::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Callpoints; //type: ConfdState::Internal::Callpoints
        class Cdb; //type: ConfdState::Internal::Cdb

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints> callpoints;
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb> cdb;
                class DatastoreNameEnum;

}; // ConfdState::Internal


class ConfdState::Internal::Callpoints : public Entity
{
    public:
        Callpoints();
        ~Callpoints();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Actionpoint> > actionpoint;
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthenticationCallback> authentication_callback; // presence node
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthorizationCallbacks> authorization_callbacks; // presence node
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Callpoint> > callpoint;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::ErrorFormattingCallback> > error_formatting_callback;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::NotificationStreamReplay> > notification_stream_replay;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpInformCallback> > snmp_inform_callback;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpNotificationSubscription> > snmp_notification_subscription;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Typepoint> > typepoint;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Validationpoint> > validationpoint;
        
}; // ConfdState::Internal::Callpoints


class ConfdState::Internal::Callpoints::Callpoint : public Entity
{
    public:
        Callpoint();
        ~Callpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::Callpoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Callpoint::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Callpoint::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Callpoint::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Callpoint


class ConfdState::Internal::Callpoints::Callpoint::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Callpoint::Daemon


class ConfdState::Internal::Callpoints::Callpoint::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Callpoint::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Callpoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Callpoint::Range


class ConfdState::Internal::Callpoints::Callpoint::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Callpoint::Range::Daemon


class ConfdState::Internal::Callpoints::Validationpoint : public Entity
{
    public:
        Validationpoint();
        ~Validationpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::Validationpoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Validationpoint::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Validationpoint::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Validationpoint::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Validationpoint


class ConfdState::Internal::Callpoints::Validationpoint::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Validationpoint::Daemon


class ConfdState::Internal::Callpoints::Validationpoint::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Validationpoint::Range


class ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon


class ConfdState::Internal::Callpoints::Actionpoint : public Entity
{
    public:
        Actionpoint();
        ~Actionpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::Actionpoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Actionpoint::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Actionpoint::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Actionpoint::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Actionpoint


class ConfdState::Internal::Callpoints::Actionpoint::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Actionpoint::Daemon


class ConfdState::Internal::Callpoints::Actionpoint::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Actionpoint::Range


class ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon


class ConfdState::Internal::Callpoints::SnmpInformCallback : public Entity
{
    public:
        SnmpInformCallback();
        ~SnmpInformCallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::SnmpInformCallback::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpInformCallback::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::SnmpInformCallback


class ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon


class ConfdState::Internal::Callpoints::SnmpInformCallback::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::SnmpInformCallback::Range


class ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription : public Entity
{
    public:
        SnmpNotificationSubscription();
        ~SnmpNotificationSubscription();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range


class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon


class ConfdState::Internal::Callpoints::ErrorFormattingCallback : public Entity
{
    public:
        ErrorFormattingCallback();
        ~ErrorFormattingCallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback


class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon


class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range


class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon


class ConfdState::Internal::Callpoints::Typepoint : public Entity
{
    public:
        Typepoint();
        ~Typepoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::Typepoint::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::Typepoint::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Typepoint::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Typepoint::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Typepoint


class ConfdState::Internal::Callpoints::Typepoint::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Typepoint::Daemon


class ConfdState::Internal::Callpoints::Typepoint::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::Typepoint::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::Typepoint::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::Typepoint::Range


class ConfdState::Internal::Callpoints::Typepoint::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::Typepoint::Range::Daemon


class ConfdState::Internal::Callpoints::NotificationStreamReplay : public Entity
{
    public:
        NotificationStreamReplay();
        ~NotificationStreamReplay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf replay_support; //type: ReplaySupportEnum
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::NotificationStreamReplay::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::NotificationStreamReplay::Range> > range;
                class ReplaySupportEnum;
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::NotificationStreamReplay


class ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon


class ConfdState::Internal::Callpoints::NotificationStreamReplay::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::NotificationStreamReplay::Range


class ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon


class ConfdState::Internal::Callpoints::AuthenticationCallback : public Entity
{
    public:
        AuthenticationCallback();
        ~AuthenticationCallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::AuthenticationCallback::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthenticationCallback::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::AuthenticationCallback


class ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon


class ConfdState::Internal::Callpoints::AuthenticationCallback::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::AuthenticationCallback::Range


class ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon


class ConfdState::Internal::Callpoints::AuthorizationCallbacks : public Entity
{
    public:
        AuthorizationCallbacks();
        ~AuthorizationCallbacks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf path; //type: string
        YLeaf file; //type: string
        YLeaf error; //type: ErrorEnum
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon
        class Range; //type: ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon> daemon;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range> > range;
                class ErrorEnum;

}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks


class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon


class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: string
        YLeaf upper; //type: string
        YLeaf default_; //type: empty
        class Daemon; //type: ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon

        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon> daemon;
        
}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range


class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon : public Entity
{
    public:
        Daemon();
        ~Daemon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon


class ConfdState::Internal::Cdb : public Entity
{
    public:
        Cdb();
        ~Cdb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Datastore; //type: ConfdState::Internal::Cdb::Datastore
        class Client; //type: ConfdState::Internal::Cdb::Client

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb::Client> > client;
        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb::Datastore> > datastore;
        
}; // ConfdState::Internal::Cdb


class ConfdState::Internal::Cdb::Datastore : public Entity
{
    public:
        Datastore();
        ~Datastore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: DatastoreNameEnum
        YLeaf transaction_id; //type: string
        YLeaf write_queue; //type: uint32
        YLeaf filename; //type: string
        YLeaf disk_size; //type: uint64
        YLeaf ram_size; //type: uint64
        YLeaf read_locks; //type: uint32
        YLeaf write_lock_set; //type: boolean
        YLeaf subscription_lock_set; //type: boolean
        YLeaf waiting_for_replication_sync; //type: boolean
        class PendingSubscriptionSync; //type: ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync
        class PendingNotificationQueue; //type: ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue> > pending_notification_queue;
        std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync> pending_subscription_sync; // presence node
        
}; // ConfdState::Internal::Cdb::Datastore


class ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync : public Entity
{
    public:
        PendingSubscriptionSync();
        ~PendingSubscriptionSync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: int32
        YLeaf time_remaining; //type: one of uint64, enumeration
        class Notification; //type: ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification> > notification;
                class TimeRemainingEnum;

}; // ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync


class ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_name; //type: string
        YLeafList subscription_ids; //type: list of  uint32

}; // ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification


class ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue : public Entity
{
    public:
        PendingNotificationQueue();
        ~PendingNotificationQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Notification; //type: ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification> > notification;
        
}; // ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue


class ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: int32
        YLeaf client_name; //type: string
        YLeafList subscription_ids; //type: list of  uint32

}; // ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification


class ConfdState::Internal::Cdb::Client : public Entity
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

        YLeaf name; //type: string
        YLeaf info; //type: string
        YLeaf type; //type: TypeEnum
        YLeaf datastore; //type: enumeration
        YLeaf lock; //type: LockEnum
        class Subscription; //type: ConfdState::Internal::Cdb::Client::Subscription

        std::vector<std::shared_ptr<tailf_confd_monitoring::ConfdState::Internal::Cdb::Client::Subscription> > subscription;
                class TypeEnum;
        class DatastoreEnum;
        class LockEnum;

}; // ConfdState::Internal::Cdb::Client


class ConfdState::Internal::Cdb::Client::Subscription : public Entity
{
    public:
        Subscription();
        ~Subscription();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf datastore; //type: DatastoreNameEnum
        YLeaf twophase; //type: empty
        YLeaf priority; //type: int32
        YLeaf id; //type: uint32
        YLeaf path; //type: string
        YLeaf error; //type: ErrorEnum
        class ErrorEnum;

}; // ConfdState::Internal::Cdb::Client::Subscription

class ConfdState::DaemonStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf starting;
        static const Enum::YLeaf phase0;
        static const Enum::YLeaf phase1;
        static const Enum::YLeaf started;
        static const Enum::YLeaf stopping;

};

class ConfdState::Ha::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf slave;
        static const Enum::YLeaf master;
        static const Enum::YLeaf relay_slave;

};

class ConfdState::LoadedDataModels::DataModel::ExportedToEnum : public Enum
{
    public:
        static const Enum::YLeaf netconf;
        static const Enum::YLeaf cli;
        static const Enum::YLeaf webui;
        static const Enum::YLeaf rest;
        static const Enum::YLeaf snmp;

};

class ConfdState::Internal::DatastoreNameEnum : public Enum
{
    public:
        static const Enum::YLeaf running;
        static const Enum::YLeaf startup;
        static const Enum::YLeaf operational;

};

class ConfdState::Internal::Callpoints::Callpoint::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::Callpoint::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::Validationpoint::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::Validationpoint::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::Actionpoint::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::Actionpoint::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::SnmpInformCallback::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::ErrorFormattingCallback::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::Typepoint::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::Typepoint::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupportEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf builtin;
        static const Enum::YLeaf external;

};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::AuthenticationCallback::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::AuthorizationCallbacks::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf NOT_REGISTERED;
        static const Enum::YLeaf UNKNOWN;

};

class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};

class ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::TimeRemainingEnum : public Enum
{
    public:
        static const Enum::YLeaf infinity;

};

class ConfdState::Internal::Cdb::Client::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf client;
        static const Enum::YLeaf subscriber;
        static const Enum::YLeaf waiting;

};

class ConfdState::Internal::Cdb::Client::DatastoreEnum : public Enum
{
    public:
        static const Enum::YLeaf pre_commit_running;

};

class ConfdState::Internal::Cdb::Client::LockEnum : public Enum
{
    public:
        static const Enum::YLeaf read;
        static const Enum::YLeaf subscription;
        static const Enum::YLeaf pending_read;
        static const Enum::YLeaf pending_subscription;

};

class ConfdState::Internal::Cdb::Client::Subscription::ErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf PENDING;

};


}
}

#endif /* _TAILF_CONFD_MONITORING_ */

