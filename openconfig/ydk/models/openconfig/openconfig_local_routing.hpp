#ifndef _OPENCONFIG_LOCAL_ROUTING_
#define _OPENCONFIG_LOCAL_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_local_routing {

class LOCALDEFINEDNEXTHOP : public virtual ydk::Identity
{
    public:
        LOCALDEFINEDNEXTHOP();
        ~LOCALDEFINEDNEXTHOP();


}; // LOCALDEFINEDNEXTHOP

class LocalRoutes : public ydk::Entity
{
    public:
        LocalRoutes();
        ~LocalRoutes();

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

        class Config; //type: LocalRoutes::Config
        class State; //type: LocalRoutes::State
        class StaticRoutes; //type: LocalRoutes::StaticRoutes
        class LocalAggregates; //type: LocalRoutes::LocalAggregates

        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::Config> config;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::LocalAggregates> local_aggregates;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::State> state;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes> static_routes;
        
}; // LocalRoutes


class LocalRoutes::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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


}; // LocalRoutes::Config


class LocalRoutes::LocalAggregates : public ydk::Entity
{
    public:
        LocalAggregates();
        ~LocalAggregates();

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

        class Aggregate; //type: LocalRoutes::LocalAggregates::Aggregate

        std::vector<std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate> > aggregate;
        
}; // LocalRoutes::LocalAggregates


class LocalRoutes::LocalAggregates::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

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

        //type: union (refers to openconfig::openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: LocalRoutes::LocalAggregates::Aggregate::Config
        class State; //type: LocalRoutes::LocalAggregates::Aggregate::State

        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate::Config> config;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::LocalAggregates::Aggregate::State> state;
        
}; // LocalRoutes::LocalAggregates::Aggregate


class LocalRoutes::LocalAggregates::Aggregate::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf discard; //type: boolean
        ydk::YLeaf set_tag; //type: one of uint32, string

}; // LocalRoutes::LocalAggregates::Aggregate::Config


class LocalRoutes::LocalAggregates::Aggregate::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf discard; //type: boolean
        ydk::YLeaf set_tag; //type: one of uint32, string

}; // LocalRoutes::LocalAggregates::Aggregate::State


class LocalRoutes::State : public ydk::Entity
{
    public:
        State();
        ~State();

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


}; // LocalRoutes::State


class LocalRoutes::StaticRoutes : public ydk::Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

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

        class Static_; //type: LocalRoutes::StaticRoutes::Static_

        std::vector<std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_> > static_;
        
}; // LocalRoutes::StaticRoutes


class LocalRoutes::StaticRoutes::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

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

        //type: union (refers to openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: LocalRoutes::StaticRoutes::Static_::Config
        class State; //type: LocalRoutes::StaticRoutes::Static_::State
        class NextHops; //type: LocalRoutes::StaticRoutes::Static_::NextHops

        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::Config> config;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops> next_hops;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::State> state;
        
}; // LocalRoutes::StaticRoutes::Static_


class LocalRoutes::StaticRoutes::Static_::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf set_tag; //type: one of uint32, string

}; // LocalRoutes::StaticRoutes::Static_::Config


class LocalRoutes::StaticRoutes::Static_::NextHops : public ydk::Entity
{
    public:
        NextHops();
        ~NextHops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop

        std::vector<std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop> > next_hop;
        
}; // LocalRoutes::StaticRoutes::Static_::NextHops


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config
        class State; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State
        class InterfaceRef; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State> state;
        
}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        ydk::YLeaf next_hop; //type: one of union, identityref
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf recurse; //type: boolean

}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config
        class State; //type: LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_local_routing::LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State> state;
        
}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State


class LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        ydk::YLeaf next_hop; //type: one of union, identityref
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf recurse; //type: boolean

}; // LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State


class LocalRoutes::StaticRoutes::Static_::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf set_tag; //type: one of uint32, string

}; // LocalRoutes::StaticRoutes::Static_::State

class DROP : public openconfig::openconfig_local_routing::LOCALDEFINEDNEXTHOP, virtual ydk::Identity
{
    public:
        DROP();
        ~DROP();


}; // DROP

class LOCALLINK : public openconfig::openconfig_local_routing::LOCALDEFINEDNEXTHOP, virtual ydk::Identity
{
    public:
        LOCALLINK();
        ~LOCALLINK();


}; // LOCALLINK


}
}

#endif /* _OPENCONFIG_LOCAL_ROUTING_ */

