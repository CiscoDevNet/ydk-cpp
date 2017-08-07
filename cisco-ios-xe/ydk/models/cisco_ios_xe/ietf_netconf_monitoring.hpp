#ifndef _IETF_NETCONF_MONITORING_
#define _IETF_NETCONF_MONITORING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ietf_netconf_monitoring {

class Transport : public virtual ydk::Identity
{
    public:
        Transport();
        ~Transport();


}; // Transport

class SchemaFormat : public virtual ydk::Identity
{
    public:
        SchemaFormat();
        ~SchemaFormat();


}; // SchemaFormat

class NetconfState : public ydk::Entity
{
    public:
        NetconfState();
        ~NetconfState();

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

        class Capabilities; //type: NetconfState::Capabilities
        class Datastores; //type: NetconfState::Datastores
        class Schemas; //type: NetconfState::Schemas
        class Sessions; //type: NetconfState::Sessions
        class Statistics; //type: NetconfState::Statistics
        class Files; //type: NetconfState::Files
        class Streams; //type: NetconfState::Streams

        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Capabilities> capabilities;
        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Datastores> datastores;
        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Files> files;
        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Schemas> schemas;
        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Sessions> sessions;
        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Statistics> statistics;
        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Streams> streams;
        
}; // NetconfState


class NetconfState::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList capability; //type: list of  string

}; // NetconfState::Capabilities


class NetconfState::Datastores : public ydk::Entity
{
    public:
        Datastores();
        ~Datastores();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Datastore; //type: NetconfState::Datastores::Datastore

        std::vector<std::shared_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore> > datastore;
        
}; // NetconfState::Datastores


class NetconfState::Datastores::Datastore : public ydk::Entity
{
    public:
        Datastore();
        ~Datastore();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: NetconfDatastoreType
        ydk::YLeaf transaction_id; //type: string
        class Locks; //type: NetconfState::Datastores::Datastore::Locks

        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore::Locks> locks; // presence node
        
}; // NetconfState::Datastores::Datastore


class NetconfState::Datastores::Datastore::Locks : public ydk::Entity
{
    public:
        Locks();
        ~Locks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GlobalLock; //type: NetconfState::Datastores::Datastore::Locks::GlobalLock
        class PartialLock; //type: NetconfState::Datastores::Datastore::Locks::PartialLock
        class TransactionLock; //type: NetconfState::Datastores::Datastore::Locks::TransactionLock

        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore::Locks::GlobalLock> global_lock;
        std::vector<std::shared_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore::Locks::PartialLock> > partial_lock;
        std::shared_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore::Locks::TransactionLock> transaction_lock; // presence node
        
}; // NetconfState::Datastores::Datastore::Locks


class NetconfState::Datastores::Datastore::Locks::GlobalLock : public ydk::Entity
{
    public:
        GlobalLock();
        ~GlobalLock();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locked_by_session; //type: uint32
        ydk::YLeaf locked_time; //type: string

}; // NetconfState::Datastores::Datastore::Locks::GlobalLock


class NetconfState::Datastores::Datastore::Locks::PartialLock : public ydk::Entity
{
    public:
        PartialLock();
        ~PartialLock();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lock_id; //type: uint32
        ydk::YLeaf locked_by_session; //type: uint32
        ydk::YLeaf locked_time; //type: string
        ydk::YLeafList select; //type: list of  string
        ydk::YLeafList locked_node; //type: list of  instance-identifier

}; // NetconfState::Datastores::Datastore::Locks::PartialLock


class NetconfState::Datastores::Datastore::Locks::TransactionLock : public ydk::Entity
{
    public:
        TransactionLock();
        ~TransactionLock();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locked_by_session; //type: uint32

}; // NetconfState::Datastores::Datastore::Locks::TransactionLock


class NetconfState::Schemas : public ydk::Entity
{
    public:
        Schemas();
        ~Schemas();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Schema; //type: NetconfState::Schemas::Schema

        std::vector<std::shared_ptr<ietf_netconf_monitoring::NetconfState::Schemas::Schema> > schema;
        
}; // NetconfState::Schemas


class NetconfState::Schemas::Schema : public ydk::Entity
{
    public:
        Schema();
        ~Schema();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf format; //type: SchemaFormat
        ydk::YLeaf namespace_; //type: string
        ydk::YLeafList location; //type: list of  one of string, enumeration
        class Location;

}; // NetconfState::Schemas::Schema


class NetconfState::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session; //type: NetconfState::Sessions::Session

        std::vector<std::shared_ptr<ietf_netconf_monitoring::NetconfState::Sessions::Session> > session;
        
}; // NetconfState::Sessions


class NetconfState::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf transport; //type: Transport
        ydk::YLeaf username; //type: string
        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf login_time; //type: string
        ydk::YLeaf in_rpcs; //type: uint32
        ydk::YLeaf in_bad_rpcs; //type: uint32
        ydk::YLeaf out_rpc_errors; //type: uint32
        ydk::YLeaf out_notifications; //type: uint32

}; // NetconfState::Sessions::Session


class NetconfState::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf netconf_start_time; //type: string
        ydk::YLeaf in_bad_hellos; //type: uint32
        ydk::YLeaf in_sessions; //type: uint32
        ydk::YLeaf dropped_sessions; //type: uint32
        ydk::YLeaf in_rpcs; //type: uint32
        ydk::YLeaf in_bad_rpcs; //type: uint32
        ydk::YLeaf out_rpc_errors; //type: uint32
        ydk::YLeaf out_notifications; //type: uint32

}; // NetconfState::Statistics


class NetconfState::Files : public ydk::Entity
{
    public:
        Files();
        ~Files();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class File; //type: NetconfState::Files::File

        std::vector<std::shared_ptr<ietf_netconf_monitoring::NetconfState::Files::File> > file;
        
}; // NetconfState::Files


class NetconfState::Files::File : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf creator; //type: string
        ydk::YLeaf created; //type: string
        ydk::YLeaf context; //type: one of string, enumeration
        class Context;

}; // NetconfState::Files::File


class NetconfState::Streams : public ydk::Entity
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

        class Stream; //type: NetconfState::Streams::Stream

        std::vector<std::shared_ptr<ietf_netconf_monitoring::NetconfState::Streams::Stream> > stream;
        
}; // NetconfState::Streams


class NetconfState::Streams::Stream : public ydk::Entity
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
        ydk::YLeaf replay_support; //type: boolean
        ydk::YLeaf replay_log_creation_time; //type: string
        ydk::YLeaf replay_log_aged_time; //type: string
        class Subscriber; //type: NetconfState::Streams::Stream::Subscriber

        std::vector<std::shared_ptr<ietf_netconf_monitoring::NetconfState::Streams::Stream::Subscriber> > subscriber;
        
}; // NetconfState::Streams::Stream


class NetconfState::Streams::Stream::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf stop_time; //type: string

}; // NetconfState::Streams::Stream::Subscriber

class GetSchema : public ydk::Entity
{
    public:
        GetSchema();
        ~GetSchema();

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

        class Input; //type: GetSchema::Input
        class Output; //type: GetSchema::Output

        std::shared_ptr<ietf_netconf_monitoring::GetSchema::Input> input;
        std::shared_ptr<ietf_netconf_monitoring::GetSchema::Output> output;
        
}; // GetSchema


class GetSchema::Input : public ydk::Entity
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

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf format; //type: SchemaFormat

}; // GetSchema::Input


class GetSchema::Output : public ydk::Entity
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

        ydk::YLeaf data; //type: string

}; // GetSchema::Output

class NetconfSoapOverBeep : public ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        NetconfSoapOverBeep();
        ~NetconfSoapOverBeep();


}; // NetconfSoapOverBeep

class Rng : public ietf_netconf_monitoring::SchemaFormat, virtual ydk::Identity
{
    public:
        Rng();
        ~Rng();


}; // Rng

class NetconfSoapOverHttps : public ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        NetconfSoapOverHttps();
        ~NetconfSoapOverHttps();


}; // NetconfSoapOverHttps

class Rnc : public ietf_netconf_monitoring::SchemaFormat, virtual ydk::Identity
{
    public:
        Rnc();
        ~Rnc();


}; // Rnc

class NetconfBeep : public ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        NetconfBeep();
        ~NetconfBeep();


}; // NetconfBeep

class Xsd : public ietf_netconf_monitoring::SchemaFormat, virtual ydk::Identity
{
    public:
        Xsd();
        ~Xsd();


}; // Xsd

class Yin : public ietf_netconf_monitoring::SchemaFormat, virtual ydk::Identity
{
    public:
        Yin();
        ~Yin();


}; // Yin

class Yang : public ietf_netconf_monitoring::SchemaFormat, virtual ydk::Identity
{
    public:
        Yang();
        ~Yang();


}; // Yang

class NetconfSsh : public ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        NetconfSsh();
        ~NetconfSsh();


}; // NetconfSsh

class NetconfTls : public ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        NetconfTls();
        ~NetconfTls();


}; // NetconfTls

class NetconfDatastoreType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf candidate;
        static const ydk::Enum::YLeaf startup;

};

class NetconfState::Schemas::Schema::Location : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NETCONF;

};

class NetconfState::Files::File::Context : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf netconf;
        static const ydk::Enum::YLeaf webui;

};


}
}

#endif /* _IETF_NETCONF_MONITORING_ */

