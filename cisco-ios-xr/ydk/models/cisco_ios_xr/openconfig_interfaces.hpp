#ifndef _OPENCONFIG_INTERFACES_
#define _OPENCONFIG_INTERFACES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace openconfig_interfaces {

class Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Interfaces::Interface

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface> > interface;
        
}; // Interfaces


class Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::Config::name)
        ydk::YLeaf name;
        class Config; //type: Interfaces::Interface::Config
        class State; //type: Interfaces::Interface::State
        class HoldTime; //type: Interfaces::Interface::HoldTime
        class Subinterfaces; //type: Interfaces::Interface::Subinterfaces
        class Ethernet; //type: Interfaces::Interface::Ethernet
        class Aggregation; //type: Interfaces::Interface::Aggregation
        class RoutedVlan; //type: Interfaces::Interface::RoutedVlan

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation> aggregation;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet> ethernet;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::HoldTime> hold_time;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan> routed_vlan;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces> subinterfaces;
        
}; // Interfaces::Interface


class Interfaces::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: InterfaceType
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf enabled; //type: boolean

}; // Interfaces::Interface::Config


class Interfaces::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_status; //type: OperStatus
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        //type: leafref (refers to openconfig_platform::Components::Component::name)
        ydk::YLeaf hardware_port;
        ydk::YLeaf admin_status; //type: AdminStatus
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf type; //type: InterfaceType
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf last_change; //type: uint32
        class Counters; //type: Interfaces::Interface::State::Counters

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::State::Counters> counters;
                class OperStatus;
        class AdminStatus;

}; // Interfaces::Interface::State


class Interfaces::Interface::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf in_unicast_pkts; //type: uint64
        ydk::YLeaf in_broadcast_pkts; //type: uint64
        ydk::YLeaf in_multicast_pkts; //type: uint64
        ydk::YLeaf in_discards; //type: uint64
        ydk::YLeaf in_errors; //type: uint64
        ydk::YLeaf in_unknown_protos; //type: uint32
        ydk::YLeaf out_octets; //type: uint64
        ydk::YLeaf out_unicast_pkts; //type: uint64
        ydk::YLeaf out_broadcast_pkts; //type: uint64
        ydk::YLeaf out_multicast_pkts; //type: uint64
        ydk::YLeaf out_discards; //type: uint64
        ydk::YLeaf out_errors; //type: uint64
        ydk::YLeaf last_clear; //type: string

}; // Interfaces::Interface::State::Counters


class Interfaces::Interface::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::HoldTime::Config
        class State; //type: Interfaces::Interface::HoldTime::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::HoldTime::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::HoldTime::State> state;
        
}; // Interfaces::Interface::HoldTime


class Interfaces::Interface::HoldTime::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32

}; // Interfaces::Interface::HoldTime::Config


class Interfaces::Interface::HoldTime::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32

}; // Interfaces::Interface::HoldTime::State


class Interfaces::Interface::Subinterfaces : public ydk::Entity
{
    public:
        Subinterfaces();
        ~Subinterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subinterface; //type: Interfaces::Interface::Subinterfaces::Subinterface

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface> > subinterface;
        
}; // Interfaces::Interface::Subinterfaces


class Interfaces::Interface::Subinterfaces::Subinterface : public ydk::Entity
{
    public:
        Subinterface();
        ~Subinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::State
        class Vlan; //type: Interfaces::Interface::Subinterfaces::Subinterface::Vlan
        class Ipv4; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4
        class Ipv6; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4> ipv4;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6> ipv6;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Vlan> vlan;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface


class Interfaces::Interface::Subinterfaces::Subinterface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf enabled; //type: boolean

}; // Interfaces::Interface::Subinterfaces::Subinterface::Config


class Interfaces::Interface::Subinterfaces::Subinterface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf admin_status; //type: AdminStatus
        ydk::YLeaf oper_status; //type: OperStatus
        ydk::YLeaf last_change; //type: uint32
        class Counters; //type: Interfaces::Interface::Subinterfaces::Subinterface::State::Counters

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::State::Counters> counters;
                class AdminStatus;
        class OperStatus;

}; // Interfaces::Interface::Subinterfaces::Subinterface::State


class Interfaces::Interface::Subinterfaces::Subinterface::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf in_unicast_pkts; //type: uint64
        ydk::YLeaf in_broadcast_pkts; //type: uint64
        ydk::YLeaf in_multicast_pkts; //type: uint64
        ydk::YLeaf in_discards; //type: uint64
        ydk::YLeaf in_errors; //type: uint64
        ydk::YLeaf in_unknown_protos; //type: uint32
        ydk::YLeaf out_octets; //type: uint64
        ydk::YLeaf out_unicast_pkts; //type: uint64
        ydk::YLeaf out_broadcast_pkts; //type: uint64
        ydk::YLeaf out_multicast_pkts; //type: uint64
        ydk::YLeaf out_discards; //type: uint64
        ydk::YLeaf out_errors; //type: uint64
        ydk::YLeaf last_clear; //type: string

}; // Interfaces::Interface::Subinterfaces::Subinterface::State::Counters


class Interfaces::Interface::Subinterfaces::Subinterface::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Vlan


class Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: one of uint16, string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: one of uint16, string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addresses; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses
        class Neighbors; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors
        class Unnumbered; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses> addresses;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors> neighbors;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered> unnumbered;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address> > address;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State
        class Vrrp; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp> vrrp;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf prefix_length; //type: uint8

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf origin; //type: IpAddressOrigin

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrrpGroup; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup> > vrrp_group;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup : public ydk::Entity
{
    public:
        VrrpGroup();
        ~VrrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
        ydk::YLeaf virtual_router_id;
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State
        class InterfaceTracking; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf current_priority; //type: uint8
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking : public ydk::Entity
{
    public:
        InterfaceTracking();
        ~InterfaceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor> > neighbor;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf origin; //type: NeighborOrigin

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered : public ydk::Entity
{
    public:
        Unnumbered();
        ~Unnumbered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State
        class InterfaceRef; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf enabled; //type: boolean

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf enabled; //type: boolean

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addresses; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses
        class Neighbors; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors
        class Unnumbered; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses> addresses;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors> neighbors;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered> unnumbered;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address> > address;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State
        class Vrrp; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp> vrrp;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf prefix_length; //type: uint8

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf origin; //type: IpAddressOrigin
        ydk::YLeaf status; //type: Status
        class Status;

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrrpGroup; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup> > vrrp_group;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup : public ydk::Entity
{
    public:
        VrrpGroup();
        ~VrrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
        ydk::YLeaf virtual_router_id;
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State
        class InterfaceTracking; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf virtual_link_local; //type: string
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf current_priority; //type: uint8
        ydk::YLeaf virtual_link_local; //type: string
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking : public ydk::Entity
{
    public:
        InterfaceTracking();
        ~InterfaceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor> > neighbor;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf origin; //type: NeighborOrigin
        ydk::YLeaf is_router; //type: empty
        ydk::YLeaf neighbor_state; //type: NeighborState
        class NeighborState;

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered : public ydk::Entity
{
    public:
        Unnumbered();
        ~Unnumbered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config
        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State
        class InterfaceRef; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State
        class Config; //type: Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State> state;
        
}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf dup_addr_detect_transmits; //type: uint32

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config


class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf dup_addr_detect_transmits; //type: uint32

}; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State


class Interfaces::Interface::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Ethernet::Config
        class State; //type: Interfaces::Interface::Ethernet::State
        class SwitchedVlan; //type: Interfaces::Interface::Ethernet::SwitchedVlan

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::SwitchedVlan> switched_vlan;
        
}; // Interfaces::Interface::Ethernet


class Interfaces::Interface::Ethernet::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf auto_negotiate; //type: boolean
        ydk::YLeaf duplex_mode; //type: DuplexMode
        ydk::YLeaf port_speed; //type: Ethernet_Speed
        ydk::YLeaf enable_flow_control; //type: boolean
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf aggregate_id;
        class DuplexMode;

}; // Interfaces::Interface::Ethernet::Config


class Interfaces::Interface::Ethernet::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf auto_negotiate; //type: boolean
        ydk::YLeaf duplex_mode; //type: DuplexMode
        ydk::YLeaf port_speed; //type: Ethernet_Speed
        ydk::YLeaf enable_flow_control; //type: boolean
        ydk::YLeaf hw_mac_address; //type: string
        ydk::YLeaf effective_speed; //type: uint32
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf aggregate_id;
        class Counters; //type: Interfaces::Interface::Ethernet::State::Counters

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::State::Counters> counters;
                class DuplexMode;

}; // Interfaces::Interface::Ethernet::State


class Interfaces::Interface::Ethernet::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_mac_control_frames; //type: uint64
        ydk::YLeaf in_8021q_frames; //type: uint64
        ydk::YLeaf in_mac_control_frames; //type: uint64
        ydk::YLeaf in_jabber_frames; //type: uint64
        ydk::YLeaf in_mac_pause_frames; //type: uint64
        ydk::YLeaf out_mac_pause_frames; //type: uint64
        ydk::YLeaf in_crc_errors; //type: uint64
        ydk::YLeaf in_fragment_frames; //type: uint64
        ydk::YLeaf in_oversize_frames; //type: uint64
        ydk::YLeaf out_8021q_frames; //type: uint64

}; // Interfaces::Interface::Ethernet::State::Counters


class Interfaces::Interface::Ethernet::SwitchedVlan : public ydk::Entity
{
    public:
        SwitchedVlan();
        ~SwitchedVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Ethernet::SwitchedVlan::Config
        class State; //type: Interfaces::Interface::Ethernet::SwitchedVlan::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::SwitchedVlan::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::SwitchedVlan::State> state;
        
}; // Interfaces::Interface::Ethernet::SwitchedVlan


class Interfaces::Interface::Ethernet::SwitchedVlan::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_vlan; //type: one of uint16, string
        ydk::YLeaf native_vlan; //type: one of uint16, string
        ydk::YLeaf interface_mode; //type: VlanModeType
        ydk::YLeafList trunk_vlans; //type: list of  one of uint16, string, union

}; // Interfaces::Interface::Ethernet::SwitchedVlan::Config


class Interfaces::Interface::Ethernet::SwitchedVlan::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf native_vlan; //type: one of uint16, string
        ydk::YLeaf interface_mode; //type: VlanModeType
        ydk::YLeaf access_vlan; //type: one of uint16, string
        ydk::YLeafList trunk_vlans; //type: list of  one of uint16, string, union

}; // Interfaces::Interface::Ethernet::SwitchedVlan::State


class Interfaces::Interface::Aggregation : public ydk::Entity
{
    public:
        Aggregation();
        ~Aggregation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Aggregation::Config
        class State; //type: Interfaces::Interface::Aggregation::State
        class SwitchedVlan; //type: Interfaces::Interface::Aggregation::SwitchedVlan

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::SwitchedVlan> switched_vlan;
        
}; // Interfaces::Interface::Aggregation


class Interfaces::Interface::Aggregation::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lag_type; //type: AggregationType
        ydk::YLeaf min_links; //type: uint16

}; // Interfaces::Interface::Aggregation::Config


class Interfaces::Interface::Aggregation::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lag_type; //type: AggregationType
        ydk::YLeaf min_links; //type: uint16
        ydk::YLeaf lag_speed; //type: uint32
        //type: list of  leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeafList member;

}; // Interfaces::Interface::Aggregation::State


class Interfaces::Interface::Aggregation::SwitchedVlan : public ydk::Entity
{
    public:
        SwitchedVlan();
        ~SwitchedVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::Aggregation::SwitchedVlan::Config
        class State; //type: Interfaces::Interface::Aggregation::SwitchedVlan::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::SwitchedVlan::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::SwitchedVlan::State> state;
        
}; // Interfaces::Interface::Aggregation::SwitchedVlan


class Interfaces::Interface::Aggregation::SwitchedVlan::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_vlan; //type: one of uint16, string
        ydk::YLeaf native_vlan; //type: one of uint16, string
        ydk::YLeaf interface_mode; //type: VlanModeType
        ydk::YLeafList trunk_vlans; //type: list of  one of uint16, string, union

}; // Interfaces::Interface::Aggregation::SwitchedVlan::Config


class Interfaces::Interface::Aggregation::SwitchedVlan::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf native_vlan; //type: one of uint16, string
        ydk::YLeaf interface_mode; //type: VlanModeType
        ydk::YLeaf access_vlan; //type: one of uint16, string
        ydk::YLeafList trunk_vlans; //type: list of  one of uint16, string, union

}; // Interfaces::Interface::Aggregation::SwitchedVlan::State


class Interfaces::Interface::RoutedVlan : public ydk::Entity
{
    public:
        RoutedVlan();
        ~RoutedVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::RoutedVlan::Config
        class State; //type: Interfaces::Interface::RoutedVlan::State
        class Ipv4; //type: Interfaces::Interface::RoutedVlan::Ipv4
        class Ipv6; //type: Interfaces::Interface::RoutedVlan::Ipv6

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4> ipv4;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6> ipv6;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::State> state;
        
}; // Interfaces::Interface::RoutedVlan


class Interfaces::Interface::RoutedVlan::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: one of uint16, string

}; // Interfaces::Interface::RoutedVlan::Config


class Interfaces::Interface::RoutedVlan::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: one of uint16, string

}; // Interfaces::Interface::RoutedVlan::State


class Interfaces::Interface::RoutedVlan::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addresses; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses
        class Neighbors; //type: Interfaces::Interface::RoutedVlan::Ipv4::Neighbors
        class Unnumbered; //type: Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv4::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv4::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses> addresses;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbors> neighbors;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered> unnumbered;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address> > address;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State
        class Vrrp; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp> vrrp;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf prefix_length; //type: uint8

}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf origin; //type: IpAddressOrigin

}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrrpGroup; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup> > vrrp_group;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup : public ydk::Entity
{
    public:
        VrrpGroup();
        ~VrrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
        ydk::YLeaf virtual_router_id;
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State
        class InterfaceTracking; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf current_priority; //type: uint8
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking : public ydk::Entity
{
    public:
        InterfaceTracking();
        ~InterfaceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


class Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State


class Interfaces::Interface::RoutedVlan::Ipv4::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor> > neighbor;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Neighbors


class Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor


class Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config


class Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf origin; //type: NeighborOrigin

}; // Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State


class Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered : public ydk::Entity
{
    public:
        Unnumbered();
        ~Unnumbered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State
        class InterfaceRef; //type: Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered


class Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

}; // Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config


class Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

}; // Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State


class Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef


class Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State


class Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config


class Interfaces::Interface::RoutedVlan::Ipv4::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf enabled; //type: boolean

}; // Interfaces::Interface::RoutedVlan::Ipv4::Config


class Interfaces::Interface::RoutedVlan::Ipv4::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf mtu; //type: uint16

}; // Interfaces::Interface::RoutedVlan::Ipv4::State


class Interfaces::Interface::RoutedVlan::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addresses; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses
        class Neighbors; //type: Interfaces::Interface::RoutedVlan::Ipv6::Neighbors
        class Unnumbered; //type: Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv6::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv6::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses> addresses;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbors> neighbors;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered> unnumbered;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address> > address;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State
        class Vrrp; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State> state;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp> vrrp;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf prefix_length; //type: uint8

}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf origin; //type: IpAddressOrigin
        ydk::YLeaf status; //type: Status
        class Status;

}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrrpGroup; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup> > vrrp_group;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup : public ydk::Entity
{
    public:
        VrrpGroup();
        ~VrrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
        ydk::YLeaf virtual_router_id;
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State
        class InterfaceTracking; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf virtual_link_local; //type: string
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_router_id; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf preempt_delay; //type: uint16
        ydk::YLeaf accept_mode; //type: boolean
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf current_priority; //type: uint8
        ydk::YLeaf virtual_link_local; //type: string
        ydk::YLeafList virtual_address; //type: list of  string

}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking : public ydk::Entity
{
    public:
        InterfaceTracking();
        ~InterfaceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf track_interface;
        ydk::YLeaf priority_decrement; //type: uint8

}; // Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State


class Interfaces::Interface::RoutedVlan::Ipv6::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor> > neighbor;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Neighbors


class Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::ip)
        ydk::YLeaf ip;
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor


class Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config


class Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf origin; //type: NeighborOrigin
        ydk::YLeaf is_router; //type: empty
        ydk::YLeaf neighbor_state; //type: NeighborState
        class NeighborState;

}; // Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State


class Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered : public ydk::Entity
{
    public:
        Unnumbered();
        ~Unnumbered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config
        class State; //type: Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State
        class InterfaceRef; //type: Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered


class Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

}; // Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config


class Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

}; // Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State


class Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State
        class Config; //type: Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config

        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config> config;
        std::shared_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State> state;
        
}; // Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef


class Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State


class Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config


class Interfaces::Interface::RoutedVlan::Ipv6::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf dup_addr_detect_transmits; //type: uint32

}; // Interfaces::Interface::RoutedVlan::Ipv6::Config


class Interfaces::Interface::RoutedVlan::Ipv6::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dup_addr_detect_transmits; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf enabled; //type: boolean

}; // Interfaces::Interface::RoutedVlan::Ipv6::State

class Interfaces::Interface::State::OperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;
        static const ydk::Enum::YLeaf TESTING;
        static const ydk::Enum::YLeaf UNKNOWN;
        static const ydk::Enum::YLeaf DORMANT;
        static const ydk::Enum::YLeaf NOT_PRESENT;
        static const ydk::Enum::YLeaf LOWER_LAYER_DOWN;

};

class Interfaces::Interface::State::AdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;
        static const ydk::Enum::YLeaf TESTING;

};

class Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;
        static const ydk::Enum::YLeaf TESTING;

};

class Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;
        static const ydk::Enum::YLeaf TESTING;
        static const ydk::Enum::YLeaf UNKNOWN;
        static const ydk::Enum::YLeaf DORMANT;
        static const ydk::Enum::YLeaf NOT_PRESENT;
        static const ydk::Enum::YLeaf LOWER_LAYER_DOWN;

};

class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PREFERRED;
        static const ydk::Enum::YLeaf DEPRECATED;
        static const ydk::Enum::YLeaf INVALID;
        static const ydk::Enum::YLeaf INACCESSIBLE;
        static const ydk::Enum::YLeaf UNKNOWN;
        static const ydk::Enum::YLeaf TENTATIVE;
        static const ydk::Enum::YLeaf DUPLICATE;
        static const ydk::Enum::YLeaf OPTIMISTIC;

};

class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::NeighborState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INCOMPLETE;
        static const ydk::Enum::YLeaf REACHABLE;
        static const ydk::Enum::YLeaf STALE;
        static const ydk::Enum::YLeaf DELAY;
        static const ydk::Enum::YLeaf PROBE;

};

class Interfaces::Interface::Ethernet::Config::DuplexMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf FULL;
        static const ydk::Enum::YLeaf HALF;

};

class Interfaces::Interface::Ethernet::State::DuplexMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf FULL;
        static const ydk::Enum::YLeaf HALF;

};

class Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PREFERRED;
        static const ydk::Enum::YLeaf DEPRECATED;
        static const ydk::Enum::YLeaf INVALID;
        static const ydk::Enum::YLeaf INACCESSIBLE;
        static const ydk::Enum::YLeaf UNKNOWN;
        static const ydk::Enum::YLeaf TENTATIVE;
        static const ydk::Enum::YLeaf DUPLICATE;
        static const ydk::Enum::YLeaf OPTIMISTIC;

};

class Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::NeighborState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INCOMPLETE;
        static const ydk::Enum::YLeaf REACHABLE;
        static const ydk::Enum::YLeaf STALE;
        static const ydk::Enum::YLeaf DELAY;
        static const ydk::Enum::YLeaf PROBE;

};


}
}

#endif /* _OPENCONFIG_INTERFACES_ */

