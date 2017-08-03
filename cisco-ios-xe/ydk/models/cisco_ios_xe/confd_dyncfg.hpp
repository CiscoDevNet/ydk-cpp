#ifndef _CONFD_DYNCFG_
#define _CONFD_DYNCFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace confd_dyncfg {

class Confdconfig : public ydk::Entity
{
    public:
        Confdconfig();
        ~Confdconfig();

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

        class Subagents; //type: Confdconfig::Subagents
        class Notifications; //type: Confdconfig::Notifications
        class Opcache; //type: Confdconfig::Opcache
        class Snmpgw; //type: Confdconfig::Snmpgw
        class Hidegroup; //type: Confdconfig::Hidegroup
        class Encryptedstrings; //type: Confdconfig::Encryptedstrings
        class Logs; //type: Confdconfig::Logs
        class Sessionlimits; //type: Confdconfig::Sessionlimits
        class Aaa; //type: Confdconfig::Aaa
        class Ssh; //type: Confdconfig::Ssh
        class Cli; //type: Confdconfig::Cli
        class Webui; //type: Confdconfig::Webui
        class Rest; //type: Confdconfig::Rest
        class Restconf; //type: Confdconfig::Restconf
        class Proxyforwarding; //type: Confdconfig::Proxyforwarding
        class Snmpagent; //type: Confdconfig::Snmpagent
        class Netconf; //type: Confdconfig::Netconf

        std::shared_ptr<confd_dyncfg::Confdconfig::Aaa> aaa; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Cli> cli; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Encryptedstrings> encryptedstrings; // presence node
        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Hidegroup> > hidegroup;
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs> logs; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Netconf> netconf; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Notifications> notifications; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Opcache> opcache; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Proxyforwarding> proxyforwarding; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Rest> rest; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Restconf> restconf; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Sessionlimits> sessionlimits; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent> snmpagent; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpgw> snmpgw; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Ssh> ssh; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Subagents> subagents; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Webui> webui; // presence node
        
}; // Confdconfig


class Confdconfig::Subagents : public ydk::Entity
{
    public:
        Subagents();
        ~Subagents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subagent; //type: Confdconfig::Subagents::Subagent

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Subagents::Subagent> > subagent;
        
}; // Confdconfig::Subagents


class Confdconfig::Subagents::Subagent : public ydk::Entity
{
    public:
        Subagent();
        ~Subagent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf disablesubtreeoptimization; //type: boolean
        class Tcp; //type: Confdconfig::Subagents::Subagent::Tcp
        class Ssh; //type: Confdconfig::Subagents::Subagent::Ssh
        class Mount; //type: Confdconfig::Subagents::Subagent::Mount

        std::shared_ptr<confd_dyncfg::Confdconfig::Subagents::Subagent::Mount> mount;
        std::shared_ptr<confd_dyncfg::Confdconfig::Subagents::Subagent::Ssh> ssh; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Subagents::Subagent::Tcp> tcp; // presence node
        
}; // Confdconfig::Subagents::Subagent


class Confdconfig::Subagents::Subagent::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        class Confdauth; //type: Confdconfig::Subagents::Subagent::Tcp::Confdauth

        std::shared_ptr<confd_dyncfg::Confdconfig::Subagents::Subagent::Tcp::Confdauth> confdauth;
        
}; // Confdconfig::Subagents::Subagent::Tcp


class Confdconfig::Subagents::Subagent::Tcp::Confdauth : public ydk::Entity
{
    public:
        Confdauth();
        ~Confdauth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf group; //type: string

}; // Confdconfig::Subagents::Subagent::Tcp::Confdauth


class Confdconfig::Subagents::Subagent::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf user; //type: string
        ydk::YLeaf password; //type: string

}; // Confdconfig::Subagents::Subagent::Ssh


class Confdconfig::Subagents::Subagent::Mount : public ydk::Entity
{
    public:
        Mount();
        ~Mount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string
        ydk::YLeafList node; //type: list of  string

}; // Confdconfig::Subagents::Subagent::Mount


class Confdconfig::Notifications : public ydk::Entity
{
    public:
        Notifications();
        ~Notifications();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eventstreams; //type: Confdconfig::Notifications::Eventstreams

        std::shared_ptr<confd_dyncfg::Confdconfig::Notifications::Eventstreams> eventstreams;
        
}; // Confdconfig::Notifications


class Confdconfig::Notifications::Eventstreams : public ydk::Entity
{
    public:
        Eventstreams();
        ~Eventstreams();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stream; //type: Confdconfig::Notifications::Eventstreams::Stream

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Notifications::Eventstreams::Stream> > stream;
        
}; // Confdconfig::Notifications::Eventstreams


class Confdconfig::Notifications::Eventstreams::Stream : public ydk::Entity
{
    public:
        Stream();
        ~Stream();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf replaysupport; //type: boolean
        class Builtinreplaystore; //type: Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore

        std::shared_ptr<confd_dyncfg::Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore> builtinreplaystore; // presence node
        
}; // Confdconfig::Notifications::Eventstreams::Stream


class Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore : public ydk::Entity
{
    public:
        Builtinreplaystore();
        ~Builtinreplaystore();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf dir; //type: string
        ydk::YLeaf maxsize; //type: string
        ydk::YLeaf maxfiles; //type: int64

}; // Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore


class Confdconfig::Opcache : public ydk::Entity
{
    public:
        Opcache();
        ~Opcache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf timeout; //type: uint64

}; // Confdconfig::Opcache


class Confdconfig::Snmpgw : public ydk::Entity
{
    public:
        Snmpgw();
        ~Snmpgw();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf trapport; //type: uint16
        class Agent; //type: Confdconfig::Snmpgw::Agent

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Snmpgw::Agent> > agent;
        
}; // Confdconfig::Snmpgw


class Confdconfig::Snmpgw::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf subscriptionid; //type: string
        ydk::YLeaf forwardnotifstream; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf community; //type: string
        ydk::YLeaf community_bin; //type: string
        ydk::YLeaf version; //type: Snmpversiontype
        ydk::YLeaf timeout; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeafList module; //type: list of  string

}; // Confdconfig::Snmpgw::Agent


class Confdconfig::Hidegroup : public ydk::Entity
{
    public:
        Hidegroup();
        ~Hidegroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf callback; //type: string

}; // Confdconfig::Hidegroup


class Confdconfig::Encryptedstrings : public ydk::Entity
{
    public:
        Encryptedstrings();
        ~Encryptedstrings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Des3Cbc; //type: Confdconfig::Encryptedstrings::Des3Cbc
        class Aescfb128; //type: Confdconfig::Encryptedstrings::Aescfb128

        std::shared_ptr<confd_dyncfg::Confdconfig::Encryptedstrings::Aescfb128> aescfb128; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Encryptedstrings::Des3Cbc> des3cbc; // presence node
        
}; // Confdconfig::Encryptedstrings


class Confdconfig::Encryptedstrings::Des3Cbc : public ydk::Entity
{
    public:
        Des3Cbc();
        ~Des3Cbc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key1; //type: string
        ydk::YLeaf key2; //type: string
        ydk::YLeaf key3; //type: string
        ydk::YLeaf initvector; //type: string

}; // Confdconfig::Encryptedstrings::Des3Cbc


class Confdconfig::Encryptedstrings::Aescfb128 : public ydk::Entity
{
    public:
        Aescfb128();
        ~Aescfb128();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        ydk::YLeaf initvector; //type: string

}; // Confdconfig::Encryptedstrings::Aescfb128


class Confdconfig::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf developerloglevel; //type: Developerlogleveltype
        ydk::YLeaf auditlogcommit; //type: boolean
        ydk::YLeaf snmploglevel; //type: Snmplogleveltype
        class Syslogconfig; //type: Confdconfig::Logs::Syslogconfig
        class Confdlog; //type: Confdconfig::Logs::Confdlog
        class Developerlog; //type: Confdconfig::Logs::Developerlog
        class Auditlog; //type: Confdconfig::Logs::Auditlog
        class Netconflog; //type: Confdconfig::Logs::Netconflog
        class Snmplog; //type: Confdconfig::Logs::Snmplog
        class Webuibrowserlog; //type: Confdconfig::Logs::Webuibrowserlog
        class Webuiaccesslog; //type: Confdconfig::Logs::Webuiaccesslog
        class Netconftracelog; //type: Confdconfig::Logs::Netconftracelog
        class Xpathtracelog; //type: Confdconfig::Logs::Xpathtracelog
        class Errorlog; //type: Confdconfig::Logs::Errorlog

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Auditlog> auditlog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Confdlog> confdlog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Developerlog> developerlog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Errorlog> errorlog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Netconflog> netconflog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Netconftracelog> netconftracelog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Snmplog> snmplog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Syslogconfig> syslogconfig; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Webuiaccesslog> webuiaccesslog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Webuibrowserlog> webuibrowserlog; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Xpathtracelog> xpathtracelog; // presence node
        
}; // Confdconfig::Logs


class Confdconfig::Logs::Syslogconfig : public ydk::Entity
{
    public:
        Syslogconfig();
        ~Syslogconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: Syslogversiontype
        ydk::YLeaf facility; //type: one of uint32, enumeration
        class Udp; //type: Confdconfig::Logs::Syslogconfig::Udp
        class Syslogservers; //type: Confdconfig::Logs::Syslogconfig::Syslogservers

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Syslogconfig::Syslogservers> syslogservers; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Syslogconfig::Udp> udp; // presence node
        
}; // Confdconfig::Logs::Syslogconfig


class Confdconfig::Logs::Syslogconfig::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf host; //type: one of union, string
        ydk::YLeaf port; //type: uint16

}; // Confdconfig::Logs::Syslogconfig::Udp


class Confdconfig::Logs::Syslogconfig::Syslogservers : public ydk::Entity
{
    public:
        Syslogservers();
        ~Syslogservers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Server; //type: Confdconfig::Logs::Syslogconfig::Syslogservers::Server

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Syslogconfig::Syslogservers::Server> > server;
        
}; // Confdconfig::Logs::Syslogconfig::Syslogservers


class Confdconfig::Logs::Syslogconfig::Syslogservers::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: one of union, string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: Syslogversiontype
        ydk::YLeaf facility; //type: one of uint32, enumeration
        ydk::YLeaf enabled; //type: boolean

}; // Confdconfig::Logs::Syslogconfig::Syslogservers::Server


class Confdconfig::Logs::Confdlog : public ydk::Entity
{
    public:
        Confdlog();
        ~Confdlog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class File; //type: Confdconfig::Logs::Confdlog::File
        class Syslog; //type: Confdconfig::Logs::Confdlog::Syslog

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Confdlog::File> file; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Confdlog::Syslog> syslog; // presence node
        
}; // Confdconfig::Logs::Confdlog


class Confdconfig::Logs::Confdlog::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf name; //type: string

}; // Confdconfig::Logs::Confdlog::File


class Confdconfig::Logs::Confdlog::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf facility; //type: one of uint32, enumeration

}; // Confdconfig::Logs::Confdlog::Syslog


class Confdconfig::Logs::Developerlog : public ydk::Entity
{
    public:
        Developerlog();
        ~Developerlog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class File; //type: Confdconfig::Logs::Developerlog::File
        class Syslog; //type: Confdconfig::Logs::Developerlog::Syslog

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Developerlog::File> file; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Developerlog::Syslog> syslog; // presence node
        
}; // Confdconfig::Logs::Developerlog


class Confdconfig::Logs::Developerlog::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf name; //type: string

}; // Confdconfig::Logs::Developerlog::File


class Confdconfig::Logs::Developerlog::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf facility; //type: one of uint32, enumeration

}; // Confdconfig::Logs::Developerlog::Syslog


class Confdconfig::Logs::Auditlog : public ydk::Entity
{
    public:
        Auditlog();
        ~Auditlog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class File; //type: Confdconfig::Logs::Auditlog::File
        class Syslog; //type: Confdconfig::Logs::Auditlog::Syslog

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Auditlog::File> file; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Auditlog::Syslog> syslog; // presence node
        
}; // Confdconfig::Logs::Auditlog


class Confdconfig::Logs::Auditlog::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf name; //type: string

}; // Confdconfig::Logs::Auditlog::File


class Confdconfig::Logs::Auditlog::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf facility; //type: one of uint32, enumeration

}; // Confdconfig::Logs::Auditlog::Syslog


class Confdconfig::Logs::Netconflog : public ydk::Entity
{
    public:
        Netconflog();
        ~Netconflog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class File; //type: Confdconfig::Logs::Netconflog::File
        class Syslog; //type: Confdconfig::Logs::Netconflog::Syslog

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Netconflog::File> file; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Netconflog::Syslog> syslog; // presence node
        
}; // Confdconfig::Logs::Netconflog


class Confdconfig::Logs::Netconflog::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf name; //type: string

}; // Confdconfig::Logs::Netconflog::File


class Confdconfig::Logs::Netconflog::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf facility; //type: one of uint32, enumeration

}; // Confdconfig::Logs::Netconflog::Syslog


class Confdconfig::Logs::Snmplog : public ydk::Entity
{
    public:
        Snmplog();
        ~Snmplog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class File; //type: Confdconfig::Logs::Snmplog::File
        class Syslog; //type: Confdconfig::Logs::Snmplog::Syslog

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Snmplog::File> file; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Snmplog::Syslog> syslog; // presence node
        
}; // Confdconfig::Logs::Snmplog


class Confdconfig::Logs::Snmplog::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf name; //type: string

}; // Confdconfig::Logs::Snmplog::File


class Confdconfig::Logs::Snmplog::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf facility; //type: one of uint32, enumeration

}; // Confdconfig::Logs::Snmplog::Syslog


class Confdconfig::Logs::Webuibrowserlog : public ydk::Entity
{
    public:
        Webuibrowserlog();
        ~Webuibrowserlog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf filename; //type: string

}; // Confdconfig::Logs::Webuibrowserlog


class Confdconfig::Logs::Webuiaccesslog : public ydk::Entity
{
    public:
        Webuiaccesslog();
        ~Webuiaccesslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf trafficlog; //type: boolean
        ydk::YLeaf dir; //type: string

}; // Confdconfig::Logs::Webuiaccesslog


class Confdconfig::Logs::Netconftracelog : public ydk::Entity
{
    public:
        Netconftracelog();
        ~Netconftracelog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf filename; //type: string
        ydk::YLeaf format; //type: Netconftraceformattype

}; // Confdconfig::Logs::Netconftracelog


class Confdconfig::Logs::Xpathtracelog : public ydk::Entity
{
    public:
        Xpathtracelog();
        ~Xpathtracelog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf filename; //type: string

}; // Confdconfig::Logs::Xpathtracelog


class Confdconfig::Logs::Errorlog : public ydk::Entity
{
    public:
        Errorlog();
        ~Errorlog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf filename; //type: string
        ydk::YLeaf maxsize; //type: string
        class Debug; //type: Confdconfig::Logs::Errorlog::Debug

        std::shared_ptr<confd_dyncfg::Confdconfig::Logs::Errorlog::Debug> debug; // presence node
        
}; // Confdconfig::Logs::Errorlog


class Confdconfig::Logs::Errorlog::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf level; //type: uint16
        ydk::YLeafList tag; //type: list of  string

}; // Confdconfig::Logs::Errorlog::Debug


class Confdconfig::Sessionlimits : public ydk::Entity
{
    public:
        Sessionlimits();
        ~Sessionlimits();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxsessions; //type: one of uint32, enumeration
        ydk::YLeaf maxconfigsessions; //type: one of uint32, enumeration
        class Sessionlimit; //type: Confdconfig::Sessionlimits::Sessionlimit
        class Configsessionlimit; //type: Confdconfig::Sessionlimits::Configsessionlimit

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Sessionlimits::Configsessionlimit> > configsessionlimit;
        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Sessionlimits::Sessionlimit> > sessionlimit;
        
}; // Confdconfig::Sessionlimits


class Confdconfig::Sessionlimits::Sessionlimit : public ydk::Entity
{
    public:
        Sessionlimit();
        ~Sessionlimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context; //type: string
        ydk::YLeaf maxsessions; //type: one of uint32, enumeration

}; // Confdconfig::Sessionlimits::Sessionlimit


class Confdconfig::Sessionlimits::Configsessionlimit : public ydk::Entity
{
    public:
        Configsessionlimit();
        ~Configsessionlimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context; //type: string
        ydk::YLeaf maxsessions; //type: one of uint32, enumeration

}; // Confdconfig::Sessionlimits::Configsessionlimit


class Confdconfig::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sshpubkeyauthentication; //type: Pubkeyauthenticationtype
        ydk::YLeaf sshlogingracetime; //type: string
        ydk::YLeaf sshmaxauthtries; //type: one of uint32, enumeration
        ydk::YLeaf defaultgroup; //type: string
        ydk::YLeaf authorder; //type: string
        ydk::YLeaf expirationwarning; //type: Expirationwarningtype
        ydk::YLeaf auditusername; //type: Auditusernametype
        class Pam; //type: Confdconfig::Aaa::Pam
        class Externalauthentication; //type: Confdconfig::Aaa::Externalauthentication
        class Localauthentication; //type: Confdconfig::Aaa::Localauthentication
        class Authenticationcallback; //type: Confdconfig::Aaa::Authenticationcallback
        class Authorization; //type: Confdconfig::Aaa::Authorization

        std::shared_ptr<confd_dyncfg::Confdconfig::Aaa::Authenticationcallback> authenticationcallback; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Aaa::Authorization> authorization; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Aaa::Externalauthentication> externalauthentication; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Aaa::Localauthentication> localauthentication; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Aaa::Pam> pam; // presence node
        
}; // Confdconfig::Aaa


class Confdconfig::Aaa::Pam : public ydk::Entity
{
    public:
        Pam();
        ~Pam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf service; //type: string
        ydk::YLeaf timeout; //type: string

}; // Confdconfig::Aaa::Pam


class Confdconfig::Aaa::Externalauthentication : public ydk::Entity
{
    public:
        Externalauthentication();
        ~Externalauthentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf executable; //type: string
        ydk::YLeaf usebase64; //type: boolean
        ydk::YLeaf includeextra; //type: boolean

}; // Confdconfig::Aaa::Externalauthentication


class Confdconfig::Aaa::Localauthentication : public ydk::Entity
{
    public:
        Localauthentication();
        ~Localauthentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Confdconfig::Aaa::Localauthentication


class Confdconfig::Aaa::Authenticationcallback : public ydk::Entity
{
    public:
        Authenticationcallback();
        ~Authenticationcallback();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Confdconfig::Aaa::Authenticationcallback


class Confdconfig::Aaa::Authorization : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        class Callback; //type: Confdconfig::Aaa::Authorization::Callback

        std::shared_ptr<confd_dyncfg::Confdconfig::Aaa::Authorization::Callback> callback; // presence node
        
}; // Confdconfig::Aaa::Authorization


class Confdconfig::Aaa::Authorization::Callback : public ydk::Entity
{
    public:
        Callback();
        ~Callback();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Confdconfig::Aaa::Authorization::Callback


class Confdconfig::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idleconnectiontimeout; //type: string
        ydk::YLeaf clientaliveinterval; //type: one of string, enumeration
        ydk::YLeaf clientalivecountmax; //type: uint32
        class Algorithms; //type: Confdconfig::Ssh::Algorithms

        std::shared_ptr<confd_dyncfg::Confdconfig::Ssh::Algorithms> algorithms; // presence node
        
}; // Confdconfig::Ssh


class Confdconfig::Ssh::Algorithms : public ydk::Entity
{
    public:
        Algorithms();
        ~Algorithms();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serverhostkey; //type: string
        ydk::YLeaf kex; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf encryption; //type: string
        class Dhgroup; //type: Confdconfig::Ssh::Algorithms::Dhgroup

        std::shared_ptr<confd_dyncfg::Confdconfig::Ssh::Algorithms::Dhgroup> dhgroup; // presence node
        
}; // Confdconfig::Ssh::Algorithms


class Confdconfig::Ssh::Algorithms::Dhgroup : public ydk::Entity
{
    public:
        Dhgroup();
        ~Dhgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minsize; //type: uint32
        ydk::YLeaf maxsize; //type: uint32

}; // Confdconfig::Ssh::Algorithms::Dhgroup


class Confdconfig::Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf allowimplicitwildcard; //type: boolean
        ydk::YLeaf startupscriptnoninteractive; //type: boolean
        ydk::YLeaf modenamestyle; //type: Climodenamestyletype
        ydk::YLeaf allowoverwriteoncopy; //type: boolean
        ydk::YLeaf inheritpaginate; //type: boolean
        ydk::YLeaf safescriptexecution; //type: boolean
        ydk::YLeaf exitconfigmodeonctrlc; //type: boolean
        ydk::YLeaf execnavigationcmds; //type: boolean
        ydk::YLeaf allowoldstylemodecmds; //type: boolean
        ydk::YLeaf continueonerrorcmdstack; //type: boolean
        ydk::YLeaf toplevelcmdsinsubmode; //type: boolean
        ydk::YLeaf mixedmode; //type: boolean
        ydk::YLeaf completionshowoldval; //type: boolean
        ydk::YLeaf completionmetainfo; //type: Completionmetainfotype
        ydk::YLeaf reportinvalidcompletioninput; //type: boolean
        ydk::YLeaf useshortenabled; //type: boolean
        ydk::YLeaf smartrenamefiltering; //type: boolean
        ydk::YLeaf allowparenquotes; //type: boolean
        ydk::YLeaf singleelempattern; //type: boolean
        ydk::YLeaf multipatternoperation; //type: Multipatternoperationtype
        ydk::YLeaf sortsubmodecmds; //type: boolean
        ydk::YLeaf sortlocalcmds; //type: boolean
        ydk::YLeaf displayemptyconfigcontainers; //type: boolean
        ydk::YLeaf displaynonpresenceattributes; //type: boolean
        ydk::YLeaf showeditors; //type: boolean
        ydk::YLeaf whoshowmode; //type: boolean
        ydk::YLeaf whohistorydatetimeformat; //type: Whohistorydatetimeformattype
        ydk::YLeaf editwrapmode; //type: Editwrapmodetype
        ydk::YLeaf supportquotedeol; //type: boolean
        ydk::YLeaf allowwildcard; //type: boolean
        ydk::YLeaf allowallaswildcard; //type: boolean
        ydk::YLeaf allowrangeexpression; //type: boolean
        ydk::YLeaf allowrangeexpressionalltypes; //type: boolean
        ydk::YLeaf usedoubledotranges; //type: boolean
        ydk::YLeaf addextratablespacing; //type: boolean
        ydk::YLeaf suppressrangekeyword; //type: boolean
        ydk::YLeaf exitmodeonemptyrange; //type: boolean
        ydk::YLeaf tablelabel; //type: boolean
        ydk::YLeaf tablelookahead; //type: uint64
        ydk::YLeaf morebufferlines; //type: one of uint32, enumeration
        ydk::YLeaf showtablelabelsifmultiple; //type: boolean
        ydk::YLeaf defaulttablebehavior; //type: Tablebehaviortype
        ydk::YLeaf allowtableoverflow; //type: boolean
        ydk::YLeaf tableoverflowtruncate; //type: boolean
        ydk::YLeaf allowtablecellwrap; //type: boolean
        ydk::YLeaf showallns; //type: boolean
        ydk::YLeaf useexposensprefix; //type: boolean
        ydk::YLeaf orderedshowconfig; //type: boolean
        ydk::YLeaf suppressfastshow; //type: boolean
        ydk::YLeaf leafprompting; //type: boolean
        ydk::YLeaf modeinfoinaudit; //type: Modeinfoinaudittype
        ydk::YLeaf auditlogmode; //type: Cliauditlogtype
        ydk::YLeaf transactions; //type: boolean
        ydk::YLeaf transactionctrlcmds; //type: boolean
        ydk::YLeaf style; //type: Clistyle
        ydk::YLeaf completionshowmax; //type: uint32
        ydk::YLeaf rollbackaaa; //type: boolean
        ydk::YLeaf rollbackmax; //type: uint32
        ydk::YLeaf rollbacknumbering; //type: Rollnumbering
        ydk::YLeaf rollbacknumberinginitial; //type: int64
        ydk::YLeaf inconsistentdatabasesuffix; //type: string
        ydk::YLeaf showdefaults; //type: boolean
        ydk::YLeaf reallocateopertrans; //type: boolean
        ydk::YLeaf quicksshteardown; //type: boolean
        ydk::YLeaf calignleafvalues; //type: boolean
        ydk::YLeaf jalignleafvalues; //type: boolean
        ydk::YLeaf defaultprefix; //type: string
        ydk::YLeaf jwarningprefix; //type: string
        ydk::YLeaf jabortedprefix; //type: string
        ydk::YLeaf jerrorprefix; //type: string
        ydk::YLeaf cwarningprefix; //type: string
        ydk::YLeaf cabortedprefix; //type: string
        ydk::YLeaf cerrorprefix; //type: string
        ydk::YLeaf invaliddatastring; //type: string
        ydk::YLeaf showkeyname; //type: boolean
        ydk::YLeaf commitretrytimeout; //type: one of string, enumeration
        ydk::YLeaf timezone; //type: Clitimezonetype
        ydk::YLeaf utcoffset; //type: int64
        ydk::YLeaf olddetailsarg; //type: boolean
        ydk::YLeaf withdefaults; //type: boolean
        ydk::YLeaf ignoreshowwithdefaultondiff; //type: boolean
        ydk::YLeaf trimdefaultshow; //type: boolean
        ydk::YLeaf trimdefaultsave; //type: boolean
        ydk::YLeaf banner; //type: string
        ydk::YLeaf bannerfile; //type: string
        ydk::YLeaf prompt1; //type: string
        ydk::YLeaf prompt2; //type: string
        ydk::YLeaf cprompt1; //type: string
        ydk::YLeaf cprompt2; //type: string
        ydk::YLeaf cstylepromptinjstyle; //type: boolean
        ydk::YLeaf prompthostnamedelimiter; //type: string
        ydk::YLeaf asyncpromptrefresh; //type: boolean
        ydk::YLeaf showlogdirectory; //type: string
        ydk::YLeaf idletimeout; //type: string
        ydk::YLeaf promptsessionscli; //type: boolean
        ydk::YLeaf disableidletimeoutoncmd; //type: boolean
        ydk::YLeaf commandtimeout; //type: one of string, enumeration
        ydk::YLeaf commitmessage; //type: boolean
        ydk::YLeaf commitmessageformat; //type: string
        ydk::YLeaf jshowcr; //type: boolean
        ydk::YLeaf showpipe; //type: boolean
        ydk::YLeaf showpipeconfig; //type: boolean
        ydk::YLeaf disablepipe; //type: boolean
        ydk::YLeaf disablepipeconfig; //type: boolean
        ydk::YLeaf pipehelpmode; //type: Pipehelpmodetype
        ydk::YLeaf jallowdeleteall; //type: boolean
        ydk::YLeaf csilentno; //type: boolean
        ydk::YLeaf nofollowincompletecommand; //type: boolean
        ydk::YLeaf crestrictiveno; //type: boolean
        ydk::YLeaf prioritizesubmodecmds; //type: boolean
        ydk::YLeaf cextendedcmdsearch; //type: boolean
        ydk::YLeaf csuppresscmdsearch; //type: boolean
        ydk::YLeaf entersubmodeonleaf; //type: boolean
        ydk::YLeaf jextendedshow; //type: boolean
        ydk::YLeaf jshowunset; //type: boolean
        ydk::YLeaf jshowunsettext; //type: string
        ydk::YLeaf jstatusformat; //type: string
        ydk::YLeaf cmodeexitformat; //type: string
        ydk::YLeaf forcedexitformat; //type: string
        ydk::YLeaf showsubsystemmessages; //type: boolean
        ydk::YLeaf ignoresubsystemfailures; //type: boolean
        ydk::YLeaf showemptycontainers; //type: boolean
        ydk::YLeaf showtags; //type: boolean
        ydk::YLeaf showannotations; //type: boolean
        ydk::YLeaf showservicemetadata; //type: boolean
        ydk::YLeaf suppressnederrors; //type: boolean
        ydk::YLeaf jshowtablerecursive; //type: boolean
        ydk::YLeaf cprivate; //type: boolean
        ydk::YLeaf ctab; //type: boolean
        ydk::YLeaf ctabinfo; //type: boolean
        ydk::YLeaf tabextend; //type: boolean
        ydk::YLeaf chelp; //type: boolean
        ydk::YLeaf jhidehelp; //type: boolean
        ydk::YLeaf restrictedfileaccess; //type: boolean
        ydk::YLeaf hidedotfiles; //type: boolean
        ydk::YLeaf restrictedfileregexp; //type: string
        ydk::YLeaf historysave; //type: boolean
        ydk::YLeaf historyremoveduplicates; //type: boolean
        ydk::YLeaf historymaxsize; //type: int64
        ydk::YLeaf messagemaxsize; //type: int64
        ydk::YLeaf mapactions; //type: Cliactionmaptype
        ydk::YLeaf compacttable; //type: boolean
        ydk::YLeaf compactshow; //type: boolean
        ydk::YLeaf compactstatsshow; //type: boolean
        ydk::YLeaf prettifystatsname; //type: boolean
        ydk::YLeaf showcommitprogress; //type: boolean
        ydk::YLeaf commitactivityclock; //type: boolean
        ydk::YLeaf confirmuncommitedonexit; //type: Confirmuncommitedonexittype
        ydk::YLeaf reconfirmhidden; //type: boolean
        ydk::YLeaf dequotehidden; //type: boolean
        ydk::YLeaf enumkeyinfo; //type: boolean
        ydk::YLeaf columnstats; //type: boolean
        ydk::YLeaf allowabbrevcmds; //type: boolean
        ydk::YLeaf allowabbrevcmdsonload; //type: boolean
        ydk::YLeaf allowabbrevkeys; //type: boolean
        ydk::YLeaf allowabbrevparamnames; //type: boolean
        ydk::YLeaf allowabbrevenums; //type: boolean
        ydk::YLeaf allowcaseinsensitiveenums; //type: boolean
        ydk::YLeaf strictrefsonload; //type: boolean
        ydk::YLeaf stoploadonerror; //type: boolean
        ydk::YLeaf allornothingload; //type: boolean
        ydk::YLeaf autocommitload; //type: boolean
        ydk::YLeaf autocommitloadchunksize; //type: uint64
        ydk::YLeaf enableloadmerge; //type: boolean
        ydk::YLeaf loadactivityclock; //type: boolean
        ydk::YLeaf instancedescription; //type: boolean
        ydk::YLeaf adderrorprefixsuffix; //type: boolean
        ydk::YLeaf complistcompact; //type: boolean
        ydk::YLeaf completionlistline; //type: boolean
        ydk::YLeaf infoonmatch; //type: boolean
        ydk::YLeaf externalactionerrormsg; //type: string
        ydk::YLeaf enabledisplaylevel; //type: Enabledisplayleveltype
        ydk::YLeaf defaultdisplaylevel; //type: int64
        ydk::YLeaf enabledisplaygroups; //type: boolean
        ydk::YLeaf unifiedhistory; //type: boolean
        ydk::YLeaf modeinfoinaaa; //type: Modeinfoinaaatype
        ydk::YLeaf cmdaaaforautowizard; //type: boolean
        ydk::YLeaf quotestyle; //type: Quotestyletype
        ydk::YLeaf laxbarquoting; //type: boolean
        ydk::YLeaf expandaliasoncompletion; //type: boolean
        ydk::YLeaf expandaliasescape; //type: one of string, enumeration
        ydk::YLeaf docwrap; //type: boolean
        ydk::YLeaf infoontab; //type: boolean
        ydk::YLeaf infoonspace; //type: boolean
        ydk::YLeaf newlogout; //type: boolean
        ydk::YLeaf newinsert; //type: boolean
        ydk::YLeaf messageformat; //type: string
        ydk::YLeaf messagewordwrap; //type: boolean
        ydk::YLeaf messagequeuesize; //type: int64
        ydk::YLeaf promptenumlimit; //type: uint64
        ydk::YLeaf caseinsensitive; //type: boolean
        ydk::YLeaf caseinsensitivekeys; //type: boolean
        ydk::YLeaf ignoreleadingwhitespace; //type: boolean
        ydk::YLeaf indenttemplates; //type: boolean
        ydk::YLeaf wrapinfo; //type: boolean
        ydk::YLeaf wrapprompt; //type: boolean
        ydk::YLeaf sortshowelems; //type: boolean
        ydk::YLeaf showmatchbeforepossible; //type: boolean
        ydk::YLeaf possiblecompletionsformat; //type: string
        ydk::YLeaf matchcompletionsformat; //type: string
        ydk::YLeaf nomatchcompletionsformat; //type: string
        ydk::YLeaf showdescription; //type: boolean
        ydk::YLeaf explicitsetcreate; //type: boolean
        ydk::YLeaf escapebackslash; //type: boolean
        ydk::YLeaf shownederrorasinfo; //type: boolean
        class Spacecompletion; //type: Confdconfig::Cli::Spacecompletion
        class Timestamp; //type: Confdconfig::Cli::Timestamp
        class Autowizard; //type: Confdconfig::Cli::Autowizard
        class Ssh; //type: Confdconfig::Cli::Ssh
        class Suppresscommitmessages; //type: Confdconfig::Cli::Suppresscommitmessages
        class Templatefilter; //type: Confdconfig::Cli::Templatefilter

        std::shared_ptr<confd_dyncfg::Confdconfig::Cli::Autowizard> autowizard; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Cli::Spacecompletion> spacecompletion; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Cli::Ssh> ssh; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Cli::Suppresscommitmessages> suppresscommitmessages; // presence node
        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Cli::Templatefilter> > templatefilter;
        std::shared_ptr<confd_dyncfg::Confdconfig::Cli::Timestamp> timestamp; // presence node
        
}; // Confdconfig::Cli


class Confdconfig::Cli::Spacecompletion : public ydk::Entity
{
    public:
        Spacecompletion();
        ~Spacecompletion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Confdconfig::Cli::Spacecompletion


class Confdconfig::Cli::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf clock24; //type: boolean
        ydk::YLeaf format; //type: string

}; // Confdconfig::Cli::Timestamp


class Confdconfig::Cli::Autowizard : public ydk::Entity
{
    public:
        Autowizard();
        ~Autowizard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Confdconfig::Cli::Autowizard


class Confdconfig::Cli::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf banner; //type: string
        ydk::YLeaf bannerfile; //type: string
        ydk::YLeafList extraipports; //type: list of  string

}; // Confdconfig::Cli::Ssh


class Confdconfig::Cli::Suppresscommitmessages : public ydk::Entity
{
    public:
        Suppresscommitmessages();
        ~Suppresscommitmessages();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList context; //type: list of  string

}; // Confdconfig::Cli::Suppresscommitmessages


class Confdconfig::Cli::Templatefilter : public ydk::Entity
{
    public:
        Templatefilter();
        ~Templatefilter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf callback; //type: string

}; // Confdconfig::Cli::Templatefilter


class Confdconfig::Webui : public ydk::Entity
{
    public:
        Webui();
        ~Webui();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf servername; //type: string
        ydk::YLeaf matchhostname; //type: boolean
        ydk::YLeaf cacherefreshsecs; //type: uint64
        ydk::YLeaf maxrefentries; //type: uint64
        ydk::YLeaf docroot; //type: string
        ydk::YLeaf logindir; //type: string
        ydk::YLeaf customdir; //type: string
        ydk::YLeaf x_frame_options; //type: XFrameOptionstype
        ydk::YLeaf allowsymlinks; //type: boolean
        ydk::YLeaf idletimeout; //type: string
        ydk::YLeaf absolutetimeout; //type: string
        ydk::YLeaf ratelimiting; //type: uint64
        ydk::YLeaf audit; //type: boolean
        class Customheaders; //type: Confdconfig::Webui::Customheaders
        class Disableauth; //type: Confdconfig::Webui::Disableauth
        class Transport; //type: Confdconfig::Webui::Transport
        class Cgi; //type: Confdconfig::Webui::Cgi

        std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Cgi> cgi; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Customheaders> customheaders; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Disableauth> disableauth; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Transport> transport; // presence node
        
}; // Confdconfig::Webui


class Confdconfig::Webui::Customheaders : public ydk::Entity
{
    public:
        Customheaders();
        ~Customheaders();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Confdconfig::Webui::Customheaders::Header

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Customheaders::Header> > header;
        
}; // Confdconfig::Webui::Customheaders


class Confdconfig::Webui::Customheaders::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string

}; // Confdconfig::Webui::Customheaders::Header


class Confdconfig::Webui::Disableauth : public ydk::Entity
{
    public:
        Disableauth();
        ~Disableauth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList dir; //type: list of  string

}; // Confdconfig::Webui::Disableauth


class Confdconfig::Webui::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Confdconfig::Webui::Transport::Tcp
        class Ssl; //type: Confdconfig::Webui::Transport::Ssl

        std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Transport::Ssl> ssl; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Transport::Tcp> tcp; // presence node
        
}; // Confdconfig::Webui::Transport


class Confdconfig::Webui::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf disablenonauthredirect; //type: boolean
        ydk::YLeaf redirect; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeafList extraipports; //type: list of  string

}; // Confdconfig::Webui::Transport::Tcp


class Confdconfig::Webui::Transport::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf disablenonauthredirect; //type: boolean
        ydk::YLeaf redirect; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf keyfile; //type: string
        ydk::YLeaf certfile; //type: string
        ydk::YLeaf cacertfile; //type: string
        ydk::YLeaf verify; //type: uint32
        ydk::YLeaf depth; //type: uint64
        ydk::YLeaf ciphers; //type: string
        ydk::YLeaf protocols; //type: string
        ydk::YLeafList extraipports; //type: list of  string

}; // Confdconfig::Webui::Transport::Ssl


class Confdconfig::Webui::Cgi : public ydk::Entity
{
    public:
        Cgi();
        ~Cgi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf dir; //type: string
        ydk::YLeaf requestfilter; //type: string
        ydk::YLeaf maxrequestlength; //type: uint16
        class Php; //type: Confdconfig::Webui::Cgi::Php

        std::shared_ptr<confd_dyncfg::Confdconfig::Webui::Cgi::Php> php; // presence node
        
}; // Confdconfig::Webui::Cgi


class Confdconfig::Webui::Cgi::Php : public ydk::Entity
{
    public:
        Php();
        ~Php();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Confdconfig::Webui::Cgi::Php


class Confdconfig::Rest : public ydk::Entity
{
    public:
        Rest();
        ~Rest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf showhidden; //type: boolean
        class Customheaders; //type: Confdconfig::Rest::Customheaders

        std::shared_ptr<confd_dyncfg::Confdconfig::Rest::Customheaders> customheaders; // presence node
        
}; // Confdconfig::Rest


class Confdconfig::Rest::Customheaders : public ydk::Entity
{
    public:
        Customheaders();
        ~Customheaders();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Confdconfig::Rest::Customheaders::Header

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Rest::Customheaders::Header> > header;
        
}; // Confdconfig::Rest::Customheaders


class Confdconfig::Rest::Customheaders::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string

}; // Confdconfig::Rest::Customheaders::Header


class Confdconfig::Restconf : public ydk::Entity
{
    public:
        Restconf();
        ~Restconf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf rootresource; //type: string

}; // Confdconfig::Restconf


class Confdconfig::Proxyforwarding : public ydk::Entity
{
    public:
        Proxyforwarding();
        ~Proxyforwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autologin; //type: boolean
        class Proxy; //type: Confdconfig::Proxyforwarding::Proxy

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Proxyforwarding::Proxy> > proxy;
        
}; // Confdconfig::Proxyforwarding


class Confdconfig::Proxyforwarding::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target; //type: string
        ydk::YLeaf address; //type: one of union, string
        class Netconf; //type: Confdconfig::Proxyforwarding::Proxy::Netconf
        class Cli; //type: Confdconfig::Proxyforwarding::Proxy::Cli

        std::shared_ptr<confd_dyncfg::Confdconfig::Proxyforwarding::Proxy::Cli> cli; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Proxyforwarding::Proxy::Netconf> netconf; // presence node
        
}; // Confdconfig::Proxyforwarding::Proxy


class Confdconfig::Proxyforwarding::Proxy::Netconf : public ydk::Entity
{
    public:
        Netconf();
        ~Netconf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ssh; //type: Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh
        class Tcp; //type: Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp

        std::shared_ptr<confd_dyncfg::Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh> ssh;
        std::shared_ptr<confd_dyncfg::Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp> tcp;
        
}; // Confdconfig::Proxyforwarding::Proxy::Netconf


class Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16

}; // Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh


class Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16

}; // Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp


class Confdconfig::Proxyforwarding::Proxy::Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ssh; //type: Confdconfig::Proxyforwarding::Proxy::Cli::Ssh

        std::shared_ptr<confd_dyncfg::Confdconfig::Proxyforwarding::Proxy::Cli::Ssh> ssh;
        
}; // Confdconfig::Proxyforwarding::Proxy::Cli


class Confdconfig::Proxyforwarding::Proxy::Cli::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16

}; // Confdconfig::Proxyforwarding::Proxy::Cli::Ssh


class Confdconfig::Snmpagent : public ydk::Entity
{
    public:
        Snmpagent();
        ~Snmpagent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf temporarystoragetime; //type: uint32
        ydk::YLeaf sessionignoreport; //type: boolean
        ydk::YLeaf authenticationfailurenotifyname; //type: string
        ydk::YLeaf dropwheninuse; //type: boolean
        ydk::YLeafList extraipports; //type: list of  string
        ydk::YLeafList contexts; //type: list of  string
        class Mibs; //type: Confdconfig::Snmpagent::Mibs
        class Snmpversions; //type: Confdconfig::Snmpagent::Snmpversions
        class Snmpengine; //type: Confdconfig::Snmpagent::Snmpengine
        class Candidate; //type: Confdconfig::Snmpagent::Candidate
        class System; //type: Confdconfig::Snmpagent::System

        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent::Candidate> candidate; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent::Mibs> mibs; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent::Snmpengine> snmpengine; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent::Snmpversions> snmpversions; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent::System> system; // presence node
        
}; // Confdconfig::Snmpagent


class Confdconfig::Snmpagent::Mibs : public ydk::Entity
{
    public:
        Mibs();
        ~Mibs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fromloadpath; //type: boolean
        ydk::YLeafList file; //type: list of  string

}; // Confdconfig::Snmpagent::Mibs


class Confdconfig::Snmpagent::Snmpversions : public ydk::Entity
{
    public:
        Snmpversions();
        ~Snmpversions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v1; //type: boolean
        ydk::YLeaf v2c; //type: boolean
        ydk::YLeaf v3; //type: boolean

}; // Confdconfig::Snmpagent::Snmpversions


class Confdconfig::Snmpagent::Snmpengine : public ydk::Entity
{
    public:
        Snmpengine();
        ~Snmpengine();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmpengineid; //type: string
        ydk::YLeaf snmpenginemaxmessagesize; //type: uint64

}; // Confdconfig::Snmpagent::Snmpengine


class Confdconfig::Snmpagent::Candidate : public ydk::Entity
{
    public:
        Candidate();
        ~Candidate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxlockwait; //type: string
        ydk::YLeaf pendingchangesaction; //type: Pendingchangesactiontype

}; // Confdconfig::Snmpagent::Candidate


class Confdconfig::Snmpagent::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysdescr; //type: string
        ydk::YLeaf sysobjectid; //type: string
        ydk::YLeaf sysservices; //type: uint64
        class Sysortable; //type: Confdconfig::Snmpagent::System::Sysortable

        std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent::System::Sysortable> sysortable; // presence node
        
}; // Confdconfig::Snmpagent::System


class Confdconfig::Snmpagent::System::Sysortable : public ydk::Entity
{
    public:
        Sysortable();
        ~Sysortable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sysorentry; //type: Confdconfig::Snmpagent::System::Sysortable::Sysorentry

        std::vector<std::shared_ptr<confd_dyncfg::Confdconfig::Snmpagent::System::Sysortable::Sysorentry> > sysorentry;
        
}; // Confdconfig::Snmpagent::System::Sysortable


class Confdconfig::Snmpagent::System::Sysortable::Sysorentry : public ydk::Entity
{
    public:
        Sysorentry();
        ~Sysorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysorindex; //type: uint64
        ydk::YLeaf sysorid; //type: string
        ydk::YLeaf sysordescr; //type: string

}; // Confdconfig::Snmpagent::System::Sysortable::Sysorentry


class Confdconfig::Netconf : public ydk::Entity
{
    public:
        Netconf();
        ~Netconf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf extendedsessions; //type: boolean
        ydk::YLeaf senddefaults; //type: boolean
        ydk::YLeaf idletimeout; //type: string
        ydk::YLeaf writetimeout; //type: string
        ydk::YLeaf rpcerrors; //type: Rpcerrortype
        ydk::YLeaf maxbatchprocesses; //type: one of uint32, enumeration
        class Transport; //type: Confdconfig::Netconf::Transport

        std::shared_ptr<confd_dyncfg::Confdconfig::Netconf::Transport> transport; // presence node
        
}; // Confdconfig::Netconf


class Confdconfig::Netconf::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ssh; //type: Confdconfig::Netconf::Transport::Ssh
        class Tcp; //type: Confdconfig::Netconf::Transport::Tcp

        std::shared_ptr<confd_dyncfg::Confdconfig::Netconf::Transport::Ssh> ssh; // presence node
        std::shared_ptr<confd_dyncfg::Confdconfig::Netconf::Transport::Tcp> tcp; // presence node
        
}; // Confdconfig::Netconf::Transport


class Confdconfig::Netconf::Transport::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeafList extraipports; //type: list of  string

}; // Confdconfig::Netconf::Transport::Ssh


class Confdconfig::Netconf::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeafList extraipports; //type: list of  string

}; // Confdconfig::Netconf::Transport::Tcp

class Snmplogleveltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Operationalreplicationmodetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf async;
        static const ydk::Enum::YLeaf sync;

};

class Clitimezonetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utc;
        static const ydk::Enum::YLeaf local;

};

class Enabledisplayleveltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf pipe;

};

class Rollbacktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf delta;

};

class Whohistorydatetimeformattype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf long_;
        static const ydk::Enum::YLeaf short_;

};

class Defaulthandlingmodetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf trim;
        static const ydk::Enum::YLeaf report_all;

};

class Auditusernametype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf known;
        static const ydk::Enum::YLeaf never;

};

class Bsdfacilitytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf daemon;
        static const ydk::Enum::YLeaf authpriv;
        static const ydk::Enum::YLeaf local0;
        static const ydk::Enum::YLeaf local1;
        static const ydk::Enum::YLeaf local2;
        static const ydk::Enum::YLeaf local3;
        static const ydk::Enum::YLeaf local4;
        static const ydk::Enum::YLeaf local5;
        static const ydk::Enum::YLeaf local6;
        static const ydk::Enum::YLeaf local7;

};

class Runtimereconfigurationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf config_file;
        static const ydk::Enum::YLeaf namespace_;

};

class Operationalpersistenttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf confspec;
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf never;

};

class Operationalreplicationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf persistent;

};

class Cliauditlogtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf denied;
        static const ydk::Enum::YLeaf allowed;

};

class Infinitytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinity;

};

class Expirationwarningtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore;
        static const ydk::Enum::YLeaf display;
        static const ydk::Enum::YLeaf prompt;

};

class Editwrapmodetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wrap;
        static const ydk::Enum::YLeaf newline;
        static const ydk::Enum::YLeaf vt100;

};

class Snmpversiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2c;

};

class Falsetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;

};

class Quotestyletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf quote;
        static const ydk::Enum::YLeaf backslash;

};

class Climodenamestyletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf two;
        static const ydk::Enum::YLeaf full;

};

class Candidateimplementationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf confd;
        static const ydk::Enum::YLeaf external;

};

class Journalcompactiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf automatic;
        static const ydk::Enum::YLeaf manual;

};

class Clistyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf j;
        static const ydk::Enum::YLeaf c;
        static const ydk::Enum::YLeaf i;

};

class Developerlogleveltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf trace;

};

class Pipehelpmodetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf never;

};

class Rpcerrortype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf close;
        static const ydk::Enum::YLeaf inline_;

};

class Fixedidtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf confd;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf root;

};

class Cliactionmaptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf config;
        static const ydk::Enum::YLeaf oper;

};

class Tablebehaviortype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf suppress;
        static const ydk::Enum::YLeaf enforce;

};

class Crypthashalgorithmtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_256;
        static const ydk::Enum::YLeaf sha_512;

};

class Syslogversiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bsd;
        static const ydk::Enum::YLeaf Y_1;

};

class Netconftraceformattype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pretty;
        static const ydk::Enum::YLeaf raw;

};

class Dbaccesstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf read_write;
        static const ydk::Enum::YLeaf writable_through_candidate;

};

class XFrameOptionstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DENY;
        static const ydk::Enum::YLeaf SAMEORIGIN;
        static const ydk::Enum::YLeaf ALLOW_FROM;

};

class Completionmetainfotype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf alt1;
        static const ydk::Enum::YLeaf alt2;

};

class Multipatternoperationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf all;

};

class Modeinfoinaaatype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf path;

};

class Rollnumbering : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fixed;
        static const ydk::Enum::YLeaf rolling;

};

class Unboundedtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unbounded;

};

class Pubkeyauthenticationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf system;

};

class Configurationreplicationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf async;
        static const ydk::Enum::YLeaf sync;

};

class Modeinfoinaudittype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf path;

};

class Pendingchangesactiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf continue_;
        static const ydk::Enum::YLeaf fail;

};

class Candidatestoragetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disk;
        static const ydk::Enum::YLeaf ram;
        static const ydk::Enum::YLeaf auto_;

};

class Confirmuncommitedonexittype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prompt;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf commit;

};


}
}

#endif /* _CONFD_DYNCFG_ */

