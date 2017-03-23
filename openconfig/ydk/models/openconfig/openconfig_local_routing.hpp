#ifndef _OPENCONFIG_LOCAL_ROUTING_
#define _OPENCONFIG_LOCAL_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace openconfig_local_routing {

class Local_Defined_Next_HopIdentity : public virtual Identity
{
    public:
        Local_Defined_Next_HopIdentity();
        ~Local_Defined_Next_HopIdentity();





}; // Local_Defined_Next_HopIdentity

class LocalRoutes : public Entity
{
    public:
        LocalRoutes();
        ~LocalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Config; //type: LocalRoutes::Config
        class State; //type: LocalRoutes::State
        class StaticRoutes; //type: LocalRoutes::StaticRoutes
        class LocalAggregates; //type: LocalRoutes::LocalAggregates

        std::shared_ptr<openconfig_local_routing::LocalRoutes::Config> config;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::LocalAggregates> local_aggregates;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::State> state;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes> static_routes;


}; // LocalRoutes


class LocalRoutes::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // LocalRoutes::Config


class LocalRoutes::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // LocalRoutes::State


class LocalRoutes::StaticRoutes : public Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Static_; //type: LocalRoutes::StaticRoutes::Static_

        std::vector<std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_> > static_;


}; // LocalRoutes::StaticRoutes


class LocalRoutes::StaticRoutes::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: union (refers to openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::Config::prefix)
        YLeaf prefix;

        class Config; //type: LocalRoutes::StaticRoutes::Static_::Config
        class State; //type: LocalRoutes::StaticRoutes::Static_::State
        class NextHops; //type: LocalRoutes::StaticRoutes::Static_::NextHops

        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::Config> config;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops> next_hops;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::State> state;


}; // LocalRoutes::StaticRoutes::Static_


class LocalRoutes::StaticRoutes::Static_::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf set_tag; //type: one of uint32, string



}; // LocalRoutes::StaticRoutes::Static_::Config


class LocalRoutes::StaticRoutes::Static_::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf set_tag; //type: one of uint32, string



}; // LocalRoutes::StaticRoutes::Static_::State


class LocalRoutes::StaticRoutes::Static_::NextHops : public Entity
{
    public:
        NextHops();
        ~NextHops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NextHop; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop

        std::vector<std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop> > next_hop;


}; // LocalRoutes::StaticRoutes::Static_::NextHops


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::index_)
        YLeaf index_;

        class Config; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config
        class State; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State
        class InterfaceRef; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State> state;


}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: string
        YLeaf next_hop; //type: one of union, identityref
        YLeaf metric; //type: uint32
        YLeaf recurse; //type: boolean



}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: string
        YLeaf next_hop; //type: one of union, identityref
        YLeaf metric; //type: uint32
        YLeaf recurse; //type: boolean



}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef : public Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config
        class State; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State> state;


}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        YLeaf subinterface;



}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        YLeaf subinterface;



}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State


class LocalRoutes::LocalAggregates : public Entity
{
    public:
        LocalAggregates();
        ~LocalAggregates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Aggregate; //type: LocalRoutes::LocalAggregates::Aggregate

        std::vector<std::shared_ptr<openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate> > aggregate;


}; // LocalRoutes::LocalAggregates


class LocalRoutes::LocalAggregates::Aggregate : public Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: union (refers to openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate::Config::prefix)
        YLeaf prefix;

        class Config; //type: LocalRoutes::LocalAggregates::Aggregate::Config
        class State; //type: LocalRoutes::LocalAggregates::Aggregate::State

        std::shared_ptr<openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate::Config> config;
        std::shared_ptr<openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate::State> state;


}; // LocalRoutes::LocalAggregates::Aggregate


class LocalRoutes::LocalAggregates::Aggregate::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf discard; //type: boolean
        YLeaf set_tag; //type: one of uint32, string



}; // LocalRoutes::LocalAggregates::Aggregate::Config


class LocalRoutes::LocalAggregates::Aggregate::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf discard; //type: boolean
        YLeaf set_tag; //type: one of uint32, string



}; // LocalRoutes::LocalAggregates::Aggregate::State

class DropIdentity : public openconfig_local_routing::Local_Defined_Next_HopIdentity, virtual Identity
{
    public:
        DropIdentity();
        ~DropIdentity();




}; // DropIdentity

class Local_LinkIdentity : public openconfig_local_routing::Local_Defined_Next_HopIdentity, virtual Identity
{
    public:
        Local_LinkIdentity();
        ~Local_LinkIdentity();




}; // Local_LinkIdentity


}
}

#endif /* _OPENCONFIG_LOCAL_ROUTING_ */

