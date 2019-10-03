#ifndef _OPENCONFIG_NETWORK_INSTANCE_1_
#define _OPENCONFIG_NETWORK_INSTANCE_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_network_instance_0.hpp"

namespace openconfig {
namespace openconfig_network_instance {


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface

        ydk::YList interface;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State
        class SidCounters; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters> sid_counters;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config : public ydk::Entity
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

        ydk::YLeaf interface_id; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State : public ydk::Entity
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

        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters : public ydk::Entity
{
    public:
        SidCounters();
        ~SidCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SidCounter; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter

        ydk::YList sid_counter;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter : public ydk::Entity
{
    public:
        SidCounter();
        ~SidCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::mpls_label)
        ydk::YLeaf mpls_label;
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State
        class ForwardingClasses; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses> forwarding_classes;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State : public ydk::Entity
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

        ydk::YLeaf mpls_label; //type: one of uint32, enumeration
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses : public ydk::Entity
{
    public:
        ForwardingClasses();
        ~ForwardingClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingClass; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass

        ydk::YList forwarding_class;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass : public ydk::Entity
{
    public:
        ForwardingClass();
        ~ForwardingClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::exp)
        ydk::YLeaf exp;
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State : public ydk::Entity
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

        ydk::YLeaf exp; //type: uint8
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State


class NetworkInstances::NetworkInstance::Mpls::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConstrainedPath; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath
        class UnconstrainedPath; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath
        class StaticLsps; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath> constrained_path;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath> unconstrained_path;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps> static_lsps;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath : public ydk::Entity
{
    public:
        ConstrainedPath();
        ~ConstrainedPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NamedExplicitPaths; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths
        class Tunnels; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths> named_explicit_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels> tunnels;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths : public ydk::Entity
{
    public:
        NamedExplicitPaths();
        ~NamedExplicitPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NamedExplicitPath; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath

        ydk::YList named_explicit_path;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath : public ydk::Entity
{
    public:
        NamedExplicitPath();
        ~NamedExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf name;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State
        class ExplicitRouteObjects; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects> explicit_route_objects;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf sid_selection_mode; //type: SidSelectionMode
        ydk::YLeaf sid_protection_required; //type: boolean
        class SidSelectionMode;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf sid_selection_mode; //type: SidSelectionMode
        ydk::YLeaf sid_protection_required; //type: boolean
        class SidSelectionMode;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects : public ydk::Entity
{
    public:
        ExplicitRouteObjects();
        ~ExplicitRouteObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExplicitRouteObject; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject

        ydk::YList explicit_route_object;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject : public ydk::Entity
{
    public:
        ExplicitRouteObject();
        ~ExplicitRouteObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf hop_type; //type: MplsHopType
        ydk::YLeaf index_; //type: uint8

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf hop_type; //type: MplsHopType
        ydk::YLeaf index_; //type: uint8

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tunnel; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::name)
        ydk::YLeaf name;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State
        class Bandwidth; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth
        class P2pTunnelAttributes; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth> bandwidth;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes> p2p_tunnel_attributes;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: TUNNELTYPE
        ydk::YLeaf signaling_protocol; //type: PATHSETUPPROTOCOL
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: TUNNELADMINSTATUS
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf metric_type; //type: LSPMETRICTYPE
        ydk::YLeaf metric; //type: int32
        ydk::YLeaf shortcut_eligible; //type: boolean
        ydk::YLeaf protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf soft_preemption; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: TUNNELTYPE
        ydk::YLeaf signaling_protocol; //type: PATHSETUPPROTOCOL
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: TUNNELADMINSTATUS
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf metric_type; //type: LSPMETRICTYPE
        ydk::YLeaf metric; //type: int32
        ydk::YLeaf shortcut_eligible; //type: boolean
        ydk::YLeaf protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf soft_preemption; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf oper_status; //type: LSPOPERSTATUS
        ydk::YLeaf role; //type: LSPROLE
        class Counters; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters> counters;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf path_changes; //type: uint64
        ydk::YLeaf state_changes; //type: uint64
        ydk::YLeaf online_time; //type: string
        ydk::YLeaf current_path_time; //type: string
        ydk::YLeaf next_reoptimization_time; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State
        class AutoBandwidth; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth> auto_bandwidth;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config : public ydk::Entity
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

        ydk::YLeaf specification_type; //type: TeBandwidthType
        ydk::YLeaf set_bandwidth; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State : public ydk::Entity
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

        ydk::YLeaf specification_type; //type: TeBandwidthType
        ydk::YLeaf set_bandwidth; //type: uint64
        ydk::YLeaf signaled_bandwidth; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State
        class Overflow; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow
        class Underflow; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow> overflow;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow> underflow;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config : public ydk::Entity
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
        ydk::YLeaf min_bw; //type: uint64
        ydk::YLeaf max_bw; //type: uint64
        ydk::YLeaf adjust_interval; //type: uint32
        ydk::YLeaf adjust_threshold; //type: uint8

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State : public ydk::Entity
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
        ydk::YLeaf min_bw; //type: uint64
        ydk::YLeaf max_bw; //type: uint64
        ydk::YLeaf adjust_interval; //type: uint32
        ydk::YLeaf adjust_threshold; //type: uint8

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config : public ydk::Entity
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
        ydk::YLeaf overflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State : public ydk::Entity
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
        ydk::YLeaf overflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config : public ydk::Entity
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
        ydk::YLeaf underflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State : public ydk::Entity
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
        ydk::YLeaf underflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes : public ydk::Entity
{
    public:
        P2pTunnelAttributes();
        ~P2pTunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State
        class P2pPrimaryPath; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath
        class P2pSecondaryPaths; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath> p2p_primary_path;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths> p2p_secondary_paths;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config : public ydk::Entity
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

        ydk::YLeaf destination; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State : public ydk::Entity
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

        ydk::YLeaf destination; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath : public ydk::Entity
{
    public:
        P2pPrimaryPath();
        ~P2pPrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2pPrimaryPath_; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_

        ydk::YList p2p_primary_path;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_ : public ydk::Entity
{
    public:
        P2pPrimaryPath_();
        ~P2pPrimaryPath_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::name)
        ydk::YLeaf name;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State
        class CandidateSecondaryPaths; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths
        class AdminGroups; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths> candidate_secondary_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups> admin_groups;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16
        //type: leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::local_index)
        ydk::YLeaf associated_rsvp_session;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths : public ydk::Entity
{
    public:
        CandidateSecondaryPaths();
        ~CandidateSecondaryPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateSecondaryPath; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath

        ydk::YList candidate_secondary_path;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath : public ydk::Entity
{
    public:
        CandidateSecondaryPath();
        ~CandidateSecondaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::secondary_path)
        ydk::YLeaf secondary_path;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::name)
        ydk::YLeaf secondary_path;
        ydk::YLeaf priority; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::name)
        ydk::YLeaf secondary_path;
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf active; //type: boolean

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups : public ydk::Entity
{
    public:
        AdminGroups();
        ~AdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config : public ydk::Entity
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

        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State : public ydk::Entity
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

        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths : public ydk::Entity
{
    public:
        P2pSecondaryPaths();
        ~P2pSecondaryPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2pSecondaryPath; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath

        ydk::YList p2p_secondary_path;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath : public ydk::Entity
{
    public:
        P2pSecondaryPath();
        ~P2pSecondaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::name)
        ydk::YLeaf name;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State
        class AdminGroups; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups> admin_groups;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16
        //type: leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::local_index)
        ydk::YLeaf associated_rsvp_session;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups : public ydk::Entity
{
    public:
        AdminGroups();
        ~AdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config : public ydk::Entity
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

        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State : public ydk::Entity
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

        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath : public ydk::Entity
{
    public:
        UnconstrainedPath();
        ~UnconstrainedPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathSetupProtocol; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol> path_setup_protocol;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath


class NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol : public ydk::Entity
{
    public:
        PathSetupProtocol();
        ~PathSetupProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ldp; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp> ldp;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol


class NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps : public ydk::Entity
{
    public:
        StaticLsps();
        ~StaticLsps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticLsp; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp

        ydk::YList static_lsp;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp : public ydk::Entity
{
    public:
        StaticLsp();
        ~StaticLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::name)
        ydk::YLeaf name;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State
        class Ingress; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress
        class Transit; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit
        class Egress; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress> ingress;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit> transit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress> egress;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress : public ydk::Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress : public ydk::Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config


class NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State


class NetworkInstances::NetworkInstance::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srgbs; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srgbs
        class Srlbs; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srlbs

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srgbs> srgbs;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srlbs> srlbs;
        
}; // NetworkInstances::NetworkInstance::SegmentRouting


class NetworkInstances::NetworkInstance::SegmentRouting::Srgbs : public ydk::Entity
{
    public:
        Srgbs();
        ~Srgbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srgb; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb

        ydk::YList srgb;
        
}; // NetworkInstances::NetworkInstance::SegmentRouting::Srgbs


class NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb : public ydk::Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::local_id)
        ydk::YLeaf local_id;
        class Config; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config
        class State; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State> state;
        
}; // NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb


class NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config : public ydk::Entity
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

        ydk::YLeaf local_id; //type: string
        ydk::YLeaf dataplane_type; //type: SrDataplaneType
        //type: list of  string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::local_id)
        ydk::YLeafList mpls_label_blocks;
        ydk::YLeafList ipv6_prefixes; //type: list of  string

}; // NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config


class NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State : public ydk::Entity
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

        ydk::YLeaf local_id; //type: string
        ydk::YLeaf dataplane_type; //type: SrDataplaneType
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf used; //type: uint32
        //type: list of  string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::local_id)
        ydk::YLeafList mpls_label_blocks;
        ydk::YLeafList ipv6_prefixes; //type: list of  string

}; // NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State


class NetworkInstances::NetworkInstance::SegmentRouting::Srlbs : public ydk::Entity
{
    public:
        Srlbs();
        ~Srlbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srlb; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb

        ydk::YList srlb;
        
}; // NetworkInstances::NetworkInstance::SegmentRouting::Srlbs


class NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb : public ydk::Entity
{
    public:
        Srlb();
        ~Srlb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::local_id)
        ydk::YLeaf local_id;
        class Config; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config
        class State; //type: NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State> state;
        
}; // NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb


class NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config : public ydk::Entity
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

        ydk::YLeaf local_id; //type: string
        ydk::YLeaf dataplane_type; //type: SrDataplaneType
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::local_id)
        ydk::YLeaf mpls_label_block;
        ydk::YLeaf ipv6_prefix; //type: string

}; // NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config


class NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State : public ydk::Entity
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

        ydk::YLeaf local_id; //type: string
        ydk::YLeaf dataplane_type; //type: SrDataplaneType
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::local_id)
        ydk::YLeaf mpls_label_block;
        ydk::YLeaf ipv6_prefix; //type: string

}; // NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State


class NetworkInstances::NetworkInstance::Vlans : public ydk::Entity
{
    public:
        Vlans();
        ~Vlans();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: NetworkInstances::NetworkInstance::Vlans::Vlan

        ydk::YList vlan;
        
}; // NetworkInstances::NetworkInstance::Vlans


class NetworkInstances::NetworkInstance::Vlans::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint16 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Config::vlan_id)
        ydk::YLeaf vlan_id;
        class Config; //type: NetworkInstances::NetworkInstance::Vlans::Vlan::Config
        class State; //type: NetworkInstances::NetworkInstance::Vlans::Vlan::State
        class Members; //type: NetworkInstances::NetworkInstance::Vlans::Vlan::Members

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Members> members;
        
}; // NetworkInstances::NetworkInstance::Vlans::Vlan


class NetworkInstances::NetworkInstance::Vlans::Vlan::Config : public ydk::Entity
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

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf status; //type: Status
        ydk::YLeaf tpid; //type: TPIDTYPES
        class Status;

}; // NetworkInstances::NetworkInstance::Vlans::Vlan::Config


class NetworkInstances::NetworkInstance::Vlans::Vlan::State : public ydk::Entity
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

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf status; //type: Status
        ydk::YLeaf tpid; //type: TPIDTYPES
        class Status;

}; // NetworkInstances::NetworkInstance::Vlans::Vlan::State


class NetworkInstances::NetworkInstance::Vlans::Vlan::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Member; //type: NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member

        ydk::YList member;
        
}; // NetworkInstances::NetworkInstance::Vlans::Vlan::Members


class NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member


class NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef : public ydk::Entity
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

        class State; //type: NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef


class NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State


class NetworkInstances::NetworkInstance::Afts : public ydk::Entity
{
    public:
        Afts();
        ~Afts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Unicast; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast
        class Ipv6Unicast; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast
        class PolicyForwarding; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding
        class Mpls; //type: NetworkInstances::NetworkInstance::Afts::Mpls
        class Ethernet; //type: NetworkInstances::NetworkInstance::Afts::Ethernet

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding> policy_forwarding;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls> mpls;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet> ethernet;
        
}; // NetworkInstances::NetworkInstance::Afts


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast : public ydk::Entity
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

        class Ipv4Entry; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry

        ydk::YList ipv4_entry;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry : public ydk::Entity
{
    public:
        Ipv4Entry();
        ~Ipv4Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State
        class NextHops; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops> next_hops;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State : public ydk::Entity
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
        ydk::YLeaf packets_forwarded; //type: uint64
        ydk::YLeaf octets_forwarded; //type: uint64
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Config::name)
        ydk::YLeaf origin_network_instance;

}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops : public ydk::Entity
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

        class NextHop; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop

        ydk::YList next_hop;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop : public ydk::Entity
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

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf decapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf encapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf origin_protocol; //type: INSTALLPROTOCOLTYPE
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Config::name)
        ydk::YLeaf network_instance;
        ydk::YLeafList popped_mpls_label_stack; //type: list of  one of uint32, enumeration
        ydk::YLeafList pushed_mpls_label_stack; //type: list of  one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast : public ydk::Entity
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

        class Ipv6Entry; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry

        ydk::YList ipv6_entry;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry : public ydk::Entity
{
    public:
        Ipv6Entry();
        ~Ipv6Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State
        class NextHops; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops> next_hops;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State : public ydk::Entity
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
        ydk::YLeaf packets_forwarded; //type: uint64
        ydk::YLeaf octets_forwarded; //type: uint64
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Config::name)
        ydk::YLeaf origin_network_instance;

}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops : public ydk::Entity
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

        class NextHop; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop

        ydk::YList next_hop;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop : public ydk::Entity
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

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf decapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf encapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf origin_protocol; //type: INSTALLPROTOCOLTYPE
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Config::name)
        ydk::YLeaf network_instance;
        ydk::YLeafList popped_mpls_label_stack; //type: list of  one of uint32, enumeration
        ydk::YLeafList pushed_mpls_label_stack; //type: list of  one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding : public ydk::Entity
{
    public:
        PolicyForwarding();
        ~PolicyForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyForwardingEntry; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry

        ydk::YList policy_forwarding_entry;
        
}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry : public ydk::Entity
{
    public:
        PolicyForwardingEntry();
        ~PolicyForwardingEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State
        class NextHops; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops> next_hops;
        
}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64
        ydk::YLeaf ip_prefix; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mpls_label; //type: one of uint32, enumeration
        ydk::YLeaf mpls_tc; //type: uint8
        ydk::YLeaf ip_dscp; //type: uint8
        ydk::YLeaf ip_protocol; //type: one of identityref, uint8
        ydk::YLeaf l4_src_port; //type: uint16
        ydk::YLeaf l4_dst_port; //type: uint16

}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64
        ydk::YLeaf ip_prefix; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mpls_label; //type: one of uint32, enumeration
        ydk::YLeaf mpls_tc; //type: uint8
        ydk::YLeaf ip_dscp; //type: uint8
        ydk::YLeaf ip_protocol; //type: one of identityref, uint8
        ydk::YLeaf l4_src_port; //type: uint16
        ydk::YLeaf l4_dst_port; //type: uint16
        ydk::YLeaf packets_forwarded; //type: uint64
        ydk::YLeaf octets_forwarded; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops : public ydk::Entity
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

        class NextHop; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop

        ydk::YList next_hop;
        
}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop : public ydk::Entity
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

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf decapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf encapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf origin_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeafList popped_mpls_label_stack; //type: list of  one of uint32, enumeration
        ydk::YLeafList pushed_mpls_label_stack; //type: list of  one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State


class NetworkInstances::NetworkInstance::Afts::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelEntry; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry

        ydk::YList label_entry;
        
}; // NetworkInstances::NetworkInstance::Afts::Mpls


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry : public ydk::Entity
{
    public:
        LabelEntry();
        ~LabelEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::label)
        ydk::YLeaf label;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State
        class NextHops; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops> next_hops;
        
}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config : public ydk::Entity
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

        ydk::YLeaf label; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State : public ydk::Entity
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

        ydk::YLeaf label; //type: one of uint32, enumeration
        ydk::YLeaf packets_forwarded; //type: uint64
        ydk::YLeaf octets_forwarded; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops : public ydk::Entity
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

        class NextHop; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop

        ydk::YList next_hop;
        
}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop : public ydk::Entity
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

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf decapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf encapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf origin_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeafList popped_mpls_label_stack; //type: list of  one of uint32, enumeration
        ydk::YLeafList pushed_mpls_label_stack; //type: list of  one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State


class NetworkInstances::NetworkInstance::Afts::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEntry; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry

        ydk::YList mac_entry;
        
}; // NetworkInstances::NetworkInstance::Afts::Ethernet


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry : public ydk::Entity
{
    public:
        MacEntry();
        ~MacEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::mac_address)
        ydk::YLeaf mac_address;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State
        class NextHops; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops> next_hops;
        
}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config : public ydk::Entity
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

        ydk::YLeaf mac_address; //type: string

}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State : public ydk::Entity
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

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf packets_forwarded; //type: uint64
        ydk::YLeaf octets_forwarded; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops : public ydk::Entity
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

        class NextHop; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop

        ydk::YList next_hop;
        
}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop : public ydk::Entity
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

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint64
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf decapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf encapsulate_header; //type: EncapsulationHeaderType
        ydk::YLeaf origin_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeafList popped_mpls_label_stack; //type: list of  one of uint32, enumeration
        ydk::YLeafList pushed_mpls_label_stack; //type: list of  one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State

class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::SidSelectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADJ_SID_ONLY;
        static const ydk::Enum::YLeaf MIXED_MODE;

        static int get_enum_value(const std::string & name) {
            if (name == "ADJ_SID_ONLY") return 0;
            if (name == "MIXED_MODE") return 1;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::SidSelectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADJ_SID_ONLY;
        static const ydk::Enum::YLeaf MIXED_MODE;

        static int get_enum_value(const std::string & name) {
            if (name == "ADJ_SID_ONLY") return 0;
            if (name == "MIXED_MODE") return 1;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf SUSPENDED;

        static int get_enum_value(const std::string & name) {
            if (name == "ACTIVE") return 0;
            if (name == "SUSPENDED") return 1;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Vlans::Vlan::State::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf SUSPENDED;

        static int get_enum_value(const std::string & name) {
            if (name == "ACTIVE") return 0;
            if (name == "SUSPENDED") return 1;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_1_ */

