#ifndef _OPENCONFIG_NETWORK_INSTANCE_2_
#define _OPENCONFIG_NETWORK_INSTANCE_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_network_instance_0.hpp"

namespace openconfig {
namespace openconfig_network_instance {


class NetworkInstances::NetworkInstance::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: NetworkInstances::NetworkInstance::Protocols::Protocol

        ydk::YList protocol;
        
}; // NetworkInstances::NetworkInstance::Protocols


class NetworkInstances::NetworkInstance::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: INSTALLPROTOCOLTYPE
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Config::name)
        ydk::YLeaf name;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::State
        class StaticRoutes; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes
        class LocalAggregates; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates
        class Bgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp
        class Isis; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes> static_routes;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates> local_aggregates;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp> bgp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis> isis;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol


class NetworkInstances::NetworkInstance::Protocols::Protocol::Config : public ydk::Entity
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

        ydk::YLeaf identifier; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf name; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf default_metric; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::State : public ydk::Entity
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

        ydk::YLeaf identifier; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf name; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf default_metric; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes : public ydk::Entity
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

        class Static; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static

        ydk::YList static_;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State
        class NextHops; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops> next_hops;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops : public ydk::Entity
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

        class NextHop; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop

        ydk::YList next_hop;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates : public ydk::Entity
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

        class Aggregate; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate

        ydk::YList aggregate;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates


class NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate : public ydk::Entity
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

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate


class NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global
        class Neighbors; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors
        class PeerGroups; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global> global;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors> neighbors;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups> peer_groups;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State
        class DefaultRouteDistance; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance
        class Confederation; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart
        class UseMultiplePaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths
        class RouteSelectionOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions
        class AfiSafis; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis
        class DynamicNeighborPrefixes; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance> default_route_distance;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation> confederation;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis> afi_safis;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes> dynamic_neighbor_prefixes;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config : public ydk::Entity
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

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf router_id; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State : public ydk::Entity
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

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_prefixes; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance : public ydk::Entity
{
    public:
        DefaultRouteDistance();
        ~DefaultRouteDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config : public ydk::Entity
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

        ydk::YLeaf external_route_distance; //type: uint8
        ydk::YLeaf internal_route_distance; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State : public ydk::Entity
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

        ydk::YLeaf external_route_distance; //type: uint8
        ydk::YLeaf internal_route_distance; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation : public ydk::Entity
{
    public:
        Confederation();
        ~Confederation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf identifier; //type: uint32
        ydk::YLeafList member_as; //type: list of  uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf identifier; //type: uint32
        ydk::YLeafList member_as; //type: list of  uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State
        class Ebgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp
        class Ibgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp> ibgp;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config : public ydk::Entity
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

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State : public ydk::Entity
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

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config : public ydk::Entity
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

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State : public ydk::Entity
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

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions : public ydk::Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config : public ydk::Entity
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

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State : public ydk::Entity
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

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis : public ydk::Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfiSafi; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi

        ydk::YList afi_safi;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart
        class RouteSelectionOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions
        class UseMultiplePaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths
        class Ipv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast
        class Ipv6LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast
        class L3vpnIpv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast
        class L3vpnIpv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast
        class L3vpnIpv4Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast
        class L3vpnIpv6Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast
        class L2vpnVpls; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls
        class L2vpnEvpn; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast> ipv4_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast> ipv6_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn> l2vpn_evpn;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_prefixes; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions : public ydk::Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config : public ydk::Entity
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

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State : public ydk::Entity
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

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp
        class Ibgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public ydk::Entity
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

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public ydk::Entity
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

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config : public ydk::Entity
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

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State : public ydk::Entity
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

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config : public ydk::Entity
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

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State : public ydk::Entity
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

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config : public ydk::Entity
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

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State : public ydk::Entity
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

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast : public ydk::Entity
{
    public:
        Ipv4LabeledUnicast();
        ~Ipv4LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast : public ydk::Entity
{
    public:
        Ipv6LabeledUnicast();
        ~Ipv6LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast : public ydk::Entity
{
    public:
        L3vpnIpv4Unicast();
        ~L3vpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast : public ydk::Entity
{
    public:
        L3vpnIpv6Unicast();
        ~L3vpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast : public ydk::Entity
{
    public:
        L3vpnIpv4Multicast();
        ~L3vpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast : public ydk::Entity
{
    public:
        L3vpnIpv6Multicast();
        ~L3vpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls : public ydk::Entity
{
    public:
        L2vpnVpls();
        ~L2vpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn : public ydk::Entity
{
    public:
        L2vpnEvpn();
        ~L2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State : public ydk::Entity
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

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes : public ydk::Entity
{
    public:
        DynamicNeighborPrefixes();
        ~DynamicNeighborPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicNeighborPrefix; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix

        ydk::YList dynamic_neighbor_prefix;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix : public ydk::Entity
{
    public:
        DynamicNeighborPrefix();
        ~DynamicNeighborPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config : public ydk::Entity
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
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Config::peer_group_name)
        ydk::YLeaf peer_group;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State : public ydk::Entity
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
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Config::peer_group_name)
        ydk::YLeaf peer_group;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::neighbor_address)
        ydk::YLeaf neighbor_address;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State
        class Timers; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers
        class Transport; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport
        class ErrorHandling; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart
        class LoggingOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions
        class EbgpMultihop; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop
        class RouteReflector; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector
        class AsPathOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions
        class AddPaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths
        class UseMultiplePaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths
        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy
        class AfiSafis; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers> timers;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport> transport;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling> error_handling;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions> logging_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector> route_reflector;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions> as_path_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths> add_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis> afi_safis;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::peer_group_name)
        ydk::YLeaf peer_group;
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::peer_group_name)
        ydk::YLeaf peer_group;
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string
        ydk::YLeaf session_state; //type: SessionState
        ydk::YLeaf last_established; //type: uint64
        ydk::YLeaf established_transitions; //type: uint64
        ydk::YLeaf dynamically_configured; //type: boolean
        ydk::YLeafList supported_capabilities; //type: list of  BGPCAPABILITY
        class Messages; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages
        class Queues; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages> messages;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues> queues;
                class SessionState;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages : public ydk::Entity
{
    public:
        Messages();
        ~Messages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sent; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent
        class Received; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent> sent;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received> received;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update; //type: uint64
        ydk::YLeaf notification; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update; //type: uint64
        ydk::YLeaf notification; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues : public ydk::Entity
{
    public:
        Queues();
        ~Queues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: uint32
        ydk::YLeaf output; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config : public ydk::Entity
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

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State : public ydk::Entity
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

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64
        ydk::YLeaf negotiated_hold_time; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config : public ydk::Entity
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

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of string, union

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State : public ydk::Entity
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

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of string, union
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf remote_port; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling : public ydk::Entity
{
    public:
        ErrorHandling();
        ~ErrorHandling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config : public ydk::Entity
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

        ydk::YLeaf treat_as_withdraw; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State : public ydk::Entity
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

        ydk::YLeaf treat_as_withdraw; //type: boolean
        ydk::YLeaf erroneous_update_messages; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean
        ydk::YLeaf peer_restart_time; //type: uint16
        ydk::YLeaf peer_restarting; //type: boolean
        ydk::YLeaf local_restarting; //type: boolean
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions : public ydk::Entity
{
    public:
        LoggingOptions();
        ~LoggingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config : public ydk::Entity
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

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State : public ydk::Entity
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

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector : public ydk::Entity
{
    public:
        RouteReflector();
        ~RouteReflector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config : public ydk::Entity
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

        ydk::YLeaf route_reflector_cluster_id; //type: one of uint32, string
        ydk::YLeaf route_reflector_client; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State : public ydk::Entity
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

        ydk::YLeaf route_reflector_cluster_id; //type: one of uint32, string
        ydk::YLeaf route_reflector_client; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions : public ydk::Entity
{
    public:
        AsPathOptions();
        ~AsPathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config : public ydk::Entity
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

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State : public ydk::Entity
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

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths : public ydk::Entity
{
    public:
        AddPaths();
        ~AddPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config : public ydk::Entity
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

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State : public ydk::Entity
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

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State
        class Ebgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp> ebgp;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp

class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IDLE;
        static const ydk::Enum::YLeaf CONNECT;
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf OPENSENT;
        static const ydk::Enum::YLeaf OPENCONFIRM;
        static const ydk::Enum::YLeaf ESTABLISHED;

};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf HELPER_ONLY;
        static const ydk::Enum::YLeaf BILATERAL;
        static const ydk::Enum::YLeaf REMOTE_HELPER;

};


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_2_ */

