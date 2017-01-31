#ifndef _IETF_NETCONF_MONITORING_
#define _IETF_NETCONF_MONITORING_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace ietf_netconf_monitoring {

class SchemaFormatIdentity : public virtual Identity
{
    public:
        SchemaFormatIdentity();
        ~SchemaFormatIdentity();





}; // SchemaFormatIdentity

class TransportIdentity : public virtual Identity
{
    public:
        TransportIdentity();
        ~TransportIdentity();





}; // TransportIdentity

class NetconfState : public Entity
{
    public:
        NetconfState();
        ~NetconfState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Capabilities : public Entity
    {
        public:
            Capabilities();
            ~Capabilities();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeafList capability; //type: list of  string



    }; // NetconfState::Capabilities


    class Datastores : public Entity
    {
        public:
            Datastores();
            ~Datastores();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Datastore : public Entity
        {
            public:
                Datastore();
                ~Datastore();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf name; //type: NetconfDatastoreTypeEnum

            class Locks : public Entity
            {
                public:
                    Locks();
                    ~Locks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class GlobalLock : public Entity
                {
                    public:
                        GlobalLock();
                        ~GlobalLock();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf locked_by_session; //type: uint32
                        YLeaf locked_time; //type: string



                }; // NetconfState::Datastores::Datastore::Locks::GlobalLock


                class PartialLock : public Entity
                {
                    public:
                        PartialLock();
                        ~PartialLock();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf lock_id; //type: uint32
                        YLeaf locked_by_session; //type: uint32
                        YLeaf locked_time; //type: string
                        YLeafList select; //type: list of  string
                        YLeafList locked_node; //type: list of  instance-identifier



                }; // NetconfState::Datastores::Datastore::Locks::PartialLock


                    std::unique_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore::Locks::GlobalLock> global_lock;
                    std::vector<std::unique_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore::Locks::PartialLock> > partial_lock;


            }; // NetconfState::Datastores::Datastore::Locks


                std::unique_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore::Locks> locks; // presence node


        }; // NetconfState::Datastores::Datastore


            std::vector<std::unique_ptr<ietf_netconf_monitoring::NetconfState::Datastores::Datastore> > datastore;


    }; // NetconfState::Datastores


    class Schemas : public Entity
    {
        public:
            Schemas();
            ~Schemas();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Schema : public Entity
        {
            public:
                Schema();
                ~Schema();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf identifier; //type: string
                YLeaf version; //type: string
                YLeaf format; //type: SchemaFormatIdentity
                YLeaf namespace_; //type: string
                YLeafList location; //type: list of  one of string, enumeration

                class LocationEnum;


        }; // NetconfState::Schemas::Schema


            std::vector<std::unique_ptr<ietf_netconf_monitoring::NetconfState::Schemas::Schema> > schema;


    }; // NetconfState::Schemas


    class Sessions : public Entity
    {
        public:
            Sessions();
            ~Sessions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Session : public Entity
        {
            public:
                Session();
                ~Session();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf session_id; //type: uint32
                YLeaf transport; //type: TransportIdentity
                YLeaf username; //type: string
                YLeaf source_host; //type: one of union, string
                YLeaf login_time; //type: string
                YLeaf in_rpcs; //type: uint32
                YLeaf in_bad_rpcs; //type: uint32
                YLeaf out_rpc_errors; //type: uint32
                YLeaf out_notifications; //type: uint32



        }; // NetconfState::Sessions::Session


            std::vector<std::unique_ptr<ietf_netconf_monitoring::NetconfState::Sessions::Session> > session;


    }; // NetconfState::Sessions


    class Statistics : public Entity
    {
        public:
            Statistics();
            ~Statistics();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf netconf_start_time; //type: string
            YLeaf in_bad_hellos; //type: uint32
            YLeaf in_sessions; //type: uint32
            YLeaf dropped_sessions; //type: uint32
            YLeaf in_rpcs; //type: uint32
            YLeaf in_bad_rpcs; //type: uint32
            YLeaf out_rpc_errors; //type: uint32
            YLeaf out_notifications; //type: uint32



    }; // NetconfState::Statistics


        std::unique_ptr<ietf_netconf_monitoring::NetconfState::Capabilities> capabilities;
        std::unique_ptr<ietf_netconf_monitoring::NetconfState::Datastores> datastores;
        std::unique_ptr<ietf_netconf_monitoring::NetconfState::Schemas> schemas;
        std::unique_ptr<ietf_netconf_monitoring::NetconfState::Sessions> sessions;
        std::unique_ptr<ietf_netconf_monitoring::NetconfState::Statistics> statistics;


}; // NetconfState

class GetSchemaRpc : public Entity
{
    public:
        GetSchemaRpc();
        ~GetSchemaRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf identifier; //type: string
        YLeaf version; //type: string
        YLeaf format; //type: SchemaFormatIdentity

    class Output : public Entity
    {
        public:
            Output();
            ~Output();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;





    }; // GetSchemaRpc::Output


        std::unique_ptr<ietf_netconf_monitoring::GetSchemaRpc::Output> output;


}; // GetSchemaRpc

class NetconfBeepIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        NetconfBeepIdentity();
        ~NetconfBeepIdentity();




}; // NetconfBeepIdentity

class NetconfSshIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        NetconfSshIdentity();
        ~NetconfSshIdentity();




}; // NetconfSshIdentity

class RncIdentity : public ietf_netconf_monitoring::SchemaFormatIdentity, virtual Identity
{
    public:
        RncIdentity();
        ~RncIdentity();




}; // RncIdentity

class YinIdentity : public ietf_netconf_monitoring::SchemaFormatIdentity, virtual Identity
{
    public:
        YinIdentity();
        ~YinIdentity();




}; // YinIdentity

class RngIdentity : public ietf_netconf_monitoring::SchemaFormatIdentity, virtual Identity
{
    public:
        RngIdentity();
        ~RngIdentity();




}; // RngIdentity

class XsdIdentity : public ietf_netconf_monitoring::SchemaFormatIdentity, virtual Identity
{
    public:
        XsdIdentity();
        ~XsdIdentity();




}; // XsdIdentity

class NetconfSoapOverBeepIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        NetconfSoapOverBeepIdentity();
        ~NetconfSoapOverBeepIdentity();




}; // NetconfSoapOverBeepIdentity

class NetconfTlsIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        NetconfTlsIdentity();
        ~NetconfTlsIdentity();




}; // NetconfTlsIdentity

class YangIdentity : public ietf_netconf_monitoring::SchemaFormatIdentity, virtual Identity
{
    public:
        YangIdentity();
        ~YangIdentity();




}; // YangIdentity

class NetconfSoapOverHttpsIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        NetconfSoapOverHttpsIdentity();
        ~NetconfSoapOverHttpsIdentity();




}; // NetconfSoapOverHttpsIdentity


class NetconfDatastoreTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf running;
        static const Enum::YLeaf candidate;
        static const Enum::YLeaf startup;

};

class NetconfState::Schemas::Schema::LocationEnum : public Enum
{
    public:
        static const Enum::YLeaf NETCONF;

};


}
}

#endif /* _IETF_NETCONF_MONITORING_ */

