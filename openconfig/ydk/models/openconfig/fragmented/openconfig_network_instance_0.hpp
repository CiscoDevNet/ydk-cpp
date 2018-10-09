#ifndef _OPENCONFIG_NETWORK_INSTANCE_0_
#define _OPENCONFIG_NETWORK_INSTANCE_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_network_instance {

class NetworkInstances : public ydk::Entity
{
    public:
        NetworkInstances();
        ~NetworkInstances();

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

        class NetworkInstance; //type: NetworkInstances::NetworkInstance

        ydk::YList network_instance;
        
}; // NetworkInstances


class NetworkInstances::NetworkInstance : public ydk::Entity
{
    public:
        NetworkInstance();
        ~NetworkInstance();

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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Config::name)
        ydk::YLeaf name;
        class Fdb; //type: NetworkInstances::NetworkInstance::Fdb
        class Config; //type: NetworkInstances::NetworkInstance::Config
        class State; //type: NetworkInstances::NetworkInstance::State
        class Encapsulation; //type: NetworkInstances::NetworkInstance::Encapsulation
        class InterInstancePolicies; //type: NetworkInstances::NetworkInstance::InterInstancePolicies
        class TableConnections; //type: NetworkInstances::NetworkInstance::TableConnections
        class Interfaces; //type: NetworkInstances::NetworkInstance::Interfaces
        class Tables; //type: NetworkInstances::NetworkInstance::Tables
        class ConnectionPoints; //type: NetworkInstances::NetworkInstance::ConnectionPoints
        class Mpls; //type: NetworkInstances::NetworkInstance::Mpls
        class SegmentRouting; //type: NetworkInstances::NetworkInstance::SegmentRouting
        class Vlans; //type: NetworkInstances::NetworkInstance::Vlans
        class Afts; //type: NetworkInstances::NetworkInstance::Afts
        class Protocols; //type: NetworkInstances::NetworkInstance::Protocols

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb> fdb;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Encapsulation> encapsulation;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::InterInstancePolicies> inter_instance_policies;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::TableConnections> table_connections;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Interfaces> interfaces;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Tables> tables;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints> connection_points;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls> mpls;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting> segment_routing;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans> vlans;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts> afts;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols> protocols;
        
}; // NetworkInstances::NetworkInstance


class NetworkInstances::NetworkInstance::Fdb : public ydk::Entity
{
    public:
        Fdb();
        ~Fdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Fdb::Config
        class State; //type: NetworkInstances::NetworkInstance::Fdb::State
        class MacTable; //type: NetworkInstances::NetworkInstance::Fdb::MacTable

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable> mac_table;
        
}; // NetworkInstances::NetworkInstance::Fdb


class NetworkInstances::NetworkInstance::Fdb::Config : public ydk::Entity
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

        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf mac_aging_time; //type: uint16
        ydk::YLeaf maximum_entries; //type: uint16

}; // NetworkInstances::NetworkInstance::Fdb::Config


class NetworkInstances::NetworkInstance::Fdb::State : public ydk::Entity
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

        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf mac_aging_time; //type: uint16
        ydk::YLeaf maximum_entries; //type: uint16

}; // NetworkInstances::NetworkInstance::Fdb::State


class NetworkInstances::NetworkInstance::Fdb::MacTable : public ydk::Entity
{
    public:
        MacTable();
        ~MacTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entries; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries> entries;
        
}; // NetworkInstances::NetworkInstance::Fdb::MacTable


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries : public ydk::Entity
{
    public:
        Entries();
        ~Entries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entry; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry

        ydk::YList entry;
        
}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::mac_address)
        ydk::YLeaf mac_address;
        class Config; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config
        class State; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State
        class Interface; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface> interface;
        
}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config : public ydk::Entity
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
        //type: uint16 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Config::vlan_id)
        ydk::YLeaf vlan;

}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State : public ydk::Entity
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
        //type: uint16 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Config::vlan_id)
        ydk::YLeaf vlan;
        ydk::YLeaf age; //type: uint64
        ydk::YLeaf entry_type; //type: EntryType
        class EntryType;

}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface : public ydk::Entity
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

        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State


class NetworkInstances::NetworkInstance::Config : public ydk::Entity
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
        ydk::YLeaf type; //type: NETWORKINSTANCETYPE
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf description; //type: string
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeafList enabled_address_families; //type: list of  ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::Config


class NetworkInstances::NetworkInstance::State : public ydk::Entity
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
        ydk::YLeaf type; //type: NETWORKINSTANCETYPE
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf description; //type: string
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeafList enabled_address_families; //type: list of  ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::State


class NetworkInstances::NetworkInstance::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Encapsulation::Config
        class State; //type: NetworkInstances::NetworkInstance::Encapsulation::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Encapsulation::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Encapsulation::State> state;
        
}; // NetworkInstances::NetworkInstance::Encapsulation


class NetworkInstances::NetworkInstance::Encapsulation::Config : public ydk::Entity
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

        ydk::YLeaf encapsulation_type; //type: ENCAPSULATION
        ydk::YLeaf label_allocation_mode; //type: LABELALLOCATIONMODE
        ydk::YLeaf control_word; //type: boolean

}; // NetworkInstances::NetworkInstance::Encapsulation::Config


class NetworkInstances::NetworkInstance::Encapsulation::State : public ydk::Entity
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

        ydk::YLeaf encapsulation_type; //type: ENCAPSULATION
        ydk::YLeaf label_allocation_mode; //type: LABELALLOCATIONMODE
        ydk::YLeaf control_word; //type: boolean

}; // NetworkInstances::NetworkInstance::Encapsulation::State


class NetworkInstances::NetworkInstance::InterInstancePolicies : public ydk::Entity
{
    public:
        InterInstancePolicies();
        ~InterInstancePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy> apply_policy;
        
}; // NetworkInstances::NetworkInstance::InterInstancePolicies


class NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config
        class State; //type: NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State> state;
        
}; // NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy


class NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config : public ydk::Entity
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

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config


class NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State : public ydk::Entity
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

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State


class NetworkInstances::NetworkInstance::TableConnections : public ydk::Entity
{
    public:
        TableConnections();
        ~TableConnections();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TableConnection; //type: NetworkInstances::NetworkInstance::TableConnections::TableConnection

        ydk::YList table_connection;
        
}; // NetworkInstances::NetworkInstance::TableConnections


class NetworkInstances::NetworkInstance::TableConnections::TableConnection : public ydk::Entity
{
    public:
        TableConnection();
        ~TableConnection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf dst_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf address_family; //type: ADDRESSFAMILY
        class Config; //type: NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config
        class State; //type: NetworkInstances::NetworkInstance::TableConnections::TableConnection::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::TableConnections::TableConnection::State> state;
        
}; // NetworkInstances::NetworkInstance::TableConnections::TableConnection


class NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config : public ydk::Entity
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

        ydk::YLeaf src_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf address_family; //type: ADDRESSFAMILY
        ydk::YLeaf dst_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;

}; // NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config


class NetworkInstances::NetworkInstance::TableConnections::TableConnection::State : public ydk::Entity
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

        ydk::YLeaf src_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf address_family; //type: ADDRESSFAMILY
        ydk::YLeaf dst_protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;

}; // NetworkInstances::NetworkInstance::TableConnections::TableConnection::State


class NetworkInstances::NetworkInstance::Interfaces : public ydk::Entity
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

        class Interface; //type: NetworkInstances::NetworkInstance::Interfaces::Interface

        ydk::YList interface;
        
}; // NetworkInstances::NetworkInstance::Interfaces


class NetworkInstances::NetworkInstance::Interfaces::Interface : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Interfaces::Interface::Config::id)
        ydk::YLeaf id;
        class Config; //type: NetworkInstances::NetworkInstance::Interfaces::Interface::Config
        class State; //type: NetworkInstances::NetworkInstance::Interfaces::Interface::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Interfaces::Interface::State> state;
        
}; // NetworkInstances::NetworkInstance::Interfaces::Interface


class NetworkInstances::NetworkInstance::Interfaces::Interface::Config : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;
        ydk::YLeafList associated_address_families; //type: list of  ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::Interfaces::Interface::Config


class NetworkInstances::NetworkInstance::Interfaces::Interface::State : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;
        ydk::YLeafList associated_address_families; //type: list of  ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::Interfaces::Interface::State


class NetworkInstances::NetworkInstance::Tables : public ydk::Entity
{
    public:
        Tables();
        ~Tables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Table; //type: NetworkInstances::NetworkInstance::Tables::Table

        ydk::YList table;
        
}; // NetworkInstances::NetworkInstance::Tables


class NetworkInstances::NetworkInstance::Tables::Table : public ydk::Entity
{
    public:
        Table();
        ~Table();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf address_family; //type: ADDRESSFAMILY
        class Config; //type: NetworkInstances::NetworkInstance::Tables::Table::Config
        class State; //type: NetworkInstances::NetworkInstance::Tables::Table::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Tables::Table::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Tables::Table::State> state;
        
}; // NetworkInstances::NetworkInstance::Tables::Table


class NetworkInstances::NetworkInstance::Tables::Table::Config : public ydk::Entity
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

        ydk::YLeaf protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf address_family; //type: ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::Tables::Table::Config


class NetworkInstances::NetworkInstance::Tables::Table::State : public ydk::Entity
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

        ydk::YLeaf protocol; //type: INSTALLPROTOCOLTYPE
        ydk::YLeaf address_family; //type: ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::Tables::Table::State


class NetworkInstances::NetworkInstance::ConnectionPoints : public ydk::Entity
{
    public:
        ConnectionPoints();
        ~ConnectionPoints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectionPoint; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint

        ydk::YList connection_point;
        
}; // NetworkInstances::NetworkInstance::ConnectionPoints


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint : public ydk::Entity
{
    public:
        ConnectionPoint();
        ~ConnectionPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::connection_point_id)
        ydk::YLeaf connection_point_id;
        class Config; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config
        class State; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State
        class Endpoints; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints> endpoints;
        
}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config : public ydk::Entity
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

        ydk::YLeaf connection_point_id; //type: string

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State : public ydk::Entity
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

        ydk::YLeaf connection_point_id; //type: string

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints : public ydk::Entity
{
    public:
        Endpoints();
        ~Endpoints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Endpoint; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint

        ydk::YList endpoint;
        
}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint : public ydk::Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::endpoint_id)
        ydk::YLeaf endpoint_id;
        class Config; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config
        class State; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State
        class Local; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local
        class Remote; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local> local;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote> remote;
        
}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config : public ydk::Entity
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

        ydk::YLeaf endpoint_id; //type: string
        ydk::YLeaf precedence; //type: uint16
        ydk::YLeaf type; //type: ENDPOINTTYPE

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State : public ydk::Entity
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

        ydk::YLeaf endpoint_id; //type: string
        ydk::YLeaf precedence; //type: uint16
        ydk::YLeaf type; //type: ENDPOINTTYPE
        ydk::YLeaf active; //type: boolean

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config
        class State; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State> state;
        
}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config
        class State; //type: NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State> state;
        
}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config : public ydk::Entity
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

        ydk::YLeaf remote_system; //type: string
        ydk::YLeaf virtual_circuit_identifier; //type: uint32

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config


class NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State : public ydk::Entity
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

        ydk::YLeaf remote_system; //type: string
        ydk::YLeaf virtual_circuit_identifier; //type: uint32

}; // NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State


class NetworkInstances::NetworkInstance::Mpls : public ydk::Entity
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

        class Global; //type: NetworkInstances::NetworkInstance::Mpls::Global
        class TeGlobalAttributes; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes
        class TeInterfaceAttributes; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes
        class SignalingProtocols; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols
        class Lsps; //type: NetworkInstances::NetworkInstance::Mpls::Lsps

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global> global;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes> te_global_attributes;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes> te_interface_attributes;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols> signaling_protocols;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Lsps> lsps;
        
}; // NetworkInstances::NetworkInstance::Mpls


class NetworkInstances::NetworkInstance::Mpls::Global : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Global::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Global::State
        class InterfaceAttributes; //type: NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes
        class ReservedLabelBlocks; //type: NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes> interface_attributes;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks> reserved_label_blocks;
        
}; // NetworkInstances::NetworkInstance::Mpls::Global


class NetworkInstances::NetworkInstance::Mpls::Global::Config : public ydk::Entity
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

        ydk::YLeaf null_label; //type: NULLLABELTYPE

}; // NetworkInstances::NetworkInstance::Mpls::Global::Config


class NetworkInstances::NetworkInstance::Mpls::Global::State : public ydk::Entity
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

        ydk::YLeaf null_label; //type: NULLLABELTYPE

}; // NetworkInstances::NetworkInstance::Mpls::Global::State


class NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes : public ydk::Entity
{
    public:
        InterfaceAttributes();
        ~InterfaceAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface

        ydk::YList interface;
        
}; // NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes


class NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface


class NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config : public ydk::Entity
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
        ydk::YLeaf mpls_enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config


class NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State : public ydk::Entity
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
        ydk::YLeaf mpls_enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State


class NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef


class NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State


class NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks : public ydk::Entity
{
    public:
        ReservedLabelBlocks();
        ~ReservedLabelBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReservedLabelBlock; //type: NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock

        ydk::YList reserved_label_block;
        
}; // NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks


class NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock : public ydk::Entity
{
    public:
        ReservedLabelBlock();
        ~ReservedLabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::local_id)
        ydk::YLeaf local_id;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock


class NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config : public ydk::Entity
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
        ydk::YLeaf lower_bound; //type: one of uint32, enumeration
        ydk::YLeaf upper_bound; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config


class NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State : public ydk::Entity
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
        ydk::YLeaf lower_bound; //type: one of uint32, enumeration
        ydk::YLeaf upper_bound; //type: one of uint32, enumeration

}; // NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes : public ydk::Entity
{
    public:
        TeGlobalAttributes();
        ~TeGlobalAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srlgs; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs
        class MplsAdminGroups; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups
        class TeLspTimers; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers
        class BandwidthMeasurement; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs> srlgs;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups> mpls_admin_groups;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers> te_lsp_timers;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement> bandwidth_measurement;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs : public ydk::Entity
{
    public:
        Srlgs();
        ~Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srlg; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg

        ydk::YList srlg;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::name)
        ydk::YLeaf name;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State
        class StaticSrlgMembers; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers> static_srlg_members;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config : public ydk::Entity
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
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf flooding_type; //type: MplsSrlgFloodingType

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State : public ydk::Entity
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
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf flooding_type; //type: MplsSrlgFloodingType

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers : public ydk::Entity
{
    public:
        StaticSrlgMembers();
        ~StaticSrlgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MembersList; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList

        ydk::YList members_list;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList : public ydk::Entity
{
    public:
        MembersList();
        ~MembersList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::from_address)
        ydk::YLeaf from_address;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config : public ydk::Entity
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

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State : public ydk::Entity
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

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups : public ydk::Entity
{
    public:
        MplsAdminGroups();
        ~MplsAdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminGroup; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup

        ydk::YList admin_group;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup : public ydk::Entity
{
    public:
        AdminGroup();
        ~AdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::admin_group_name)
        ydk::YLeaf admin_group_name;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config : public ydk::Entity
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

        ydk::YLeaf admin_group_name; //type: string
        ydk::YLeaf bit_position; //type: uint32

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State : public ydk::Entity
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

        ydk::YLeaf admin_group_name; //type: string
        ydk::YLeaf bit_position; //type: uint32

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers : public ydk::Entity
{
    public:
        TeLspTimers();
        ~TeLspTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config : public ydk::Entity
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

        ydk::YLeaf install_delay; //type: uint16
        ydk::YLeaf cleanup_delay; //type: uint16
        ydk::YLeaf reoptimize_timer; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State : public ydk::Entity
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

        ydk::YLeaf install_delay; //type: uint16
        ydk::YLeaf cleanup_delay; //type: uint16
        ydk::YLeaf reoptimize_timer; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement : public ydk::Entity
{
    public:
        BandwidthMeasurement();
        ~BandwidthMeasurement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State
        class UpdateTrigger; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger> update_trigger;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config : public ydk::Entity
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

        ydk::YLeaf measure_sr_traffic; //type: boolean
        ydk::YLeaf collection_interval; //type: uint32
        ydk::YLeaf adjustment_interval; //type: uint32
        ydk::YLeaf bandwidth_multiplier; //type: decimal64

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State : public ydk::Entity
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

        ydk::YLeaf measure_sr_traffic; //type: boolean
        ydk::YLeaf collection_interval; //type: uint32
        ydk::YLeaf adjustment_interval; //type: uint32
        ydk::YLeaf bandwidth_multiplier; //type: decimal64
        ydk::YLeaf effective_adjustment_interval; //type: uint32

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger : public ydk::Entity
{
    public:
        UpdateTrigger();
        ~UpdateTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config : public ydk::Entity
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

        ydk::YLeaf update_trigger; //type: UpdateTrigger_
        ydk::YLeaf adjusted_max_reservable_bw_pct; //type: uint8
        ydk::YLeaf sr_traffic_pct; //type: uint8
        class UpdateTrigger_;

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config


class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State : public ydk::Entity
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

        ydk::YLeaf update_trigger; //type: UpdateTrigger_
        ydk::YLeaf adjusted_max_reservable_bw_pct; //type: uint8
        ydk::YLeaf sr_traffic_pct; //type: uint8
        class UpdateTrigger_;

}; // NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes : public ydk::Entity
{
    public:
        TeInterfaceAttributes();
        ~TeInterfaceAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface

        ydk::YList interface;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef
        class IgpFloodingBandwidth; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth
        class BandwidthMeasurement; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth> igp_flooding_bandwidth;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement> bandwidth_measurement;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config : public ydk::Entity
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
        ydk::YLeaf te_metric; //type: uint32
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::name)
        ydk::YLeafList srlg_membership;
        ydk::YLeafList admin_group; //type: list of  string

}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State : public ydk::Entity
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
        ydk::YLeaf te_metric; //type: uint32
        //type: list of  leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::name)
        ydk::YLeafList srlg_membership;
        ydk::YLeafList admin_group; //type: list of  string

}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth : public ydk::Entity
{
    public:
        IgpFloodingBandwidth();
        ~IgpFloodingBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config : public ydk::Entity
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

        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf delta_percentage; //type: uint8
        ydk::YLeaf threshold_specification; //type: ThresholdSpecification
        ydk::YLeafList up_thresholds; //type: list of  uint8
        ydk::YLeafList down_thresholds; //type: list of  uint8
        ydk::YLeafList up_down_thresholds; //type: list of  uint8
        class ThresholdType;
        class ThresholdSpecification;

}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State : public ydk::Entity
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

        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf delta_percentage; //type: uint8
        ydk::YLeaf threshold_specification; //type: ThresholdSpecification
        ydk::YLeafList up_thresholds; //type: list of  uint8
        ydk::YLeafList down_thresholds; //type: list of  uint8
        ydk::YLeafList up_down_thresholds; //type: list of  uint8
        class ThresholdType;
        class ThresholdSpecification;

}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement : public ydk::Entity
{
    public:
        BandwidthMeasurement();
        ~BandwidthMeasurement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement


class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State : public ydk::Entity
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

        ydk::YLeaf last_sample_time; //type: uint64
        ydk::YLeaf last_sample_measured_rsvp_util; //type: uint64
        ydk::YLeaf last_sample_measured_sr_util; //type: uint64
        ydk::YLeaf last_calculated_time; //type: uint64
        ydk::YLeaf last_calculated_sr_utilisation; //type: uint64
        ydk::YLeaf last_flooded_time; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols : public ydk::Entity
{
    public:
        SignalingProtocols();
        ~SignalingProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpTe; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe
        class Ldp; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp
        class SegmentRouting; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe> rsvp_te;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp> ldp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting> segment_routing;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe : public ydk::Entity
{
    public:
        RsvpTe();
        ~RsvpTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sessions; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions
        class Neighbors; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors
        class Global; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global
        class InterfaceAttributes; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions> sessions;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors> neighbors;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global> global;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes> interface_attributes;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session

        ydk::YList session;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::local_index)
        ydk::YLeaf local_index;
        class RecordRouteObjects; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects> record_route_objects;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects : public ydk::Entity
{
    public:
        RecordRouteObjects();
        ~RecordRouteObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RecordRouteObject; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject

        ydk::YList record_route_object;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject : public ydk::Entity
{
    public:
        RecordRouteObject();
        ~RecordRouteObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::index_)
        ydk::YLeaf index_;
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint8
        ydk::YLeaf address; //type: string
        ydk::YLeaf reported_label; //type: one of uint32, enumeration
        ydk::YLeaf reported_flags; //type: uint8

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State : public ydk::Entity
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

        ydk::YLeaf local_index; //type: uint64
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf status; //type: Status
        ydk::YLeaf type; //type: LSPROLE
        ydk::YLeaf protection_requested; //type: PROTECTIONTYPE
        ydk::YLeaf label_in; //type: one of uint32, enumeration
        ydk::YLeaf label_out; //type: one of uint32, enumeration
        class SenderTspec; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec> sender_tspec;
                class Status;

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec : public ydk::Entity
{
    public:
        SenderTspec();
        ~SenderTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: binary
        ydk::YLeaf size; //type: binary
        ydk::YLeaf peak_data_rate; //type: one of binary, enumeration
        class PeakDataRate;

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors : public ydk::Entity
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

        class Neighbor; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor : public ydk::Entity
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

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::address)
        ydk::YLeaf address;
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State : public ydk::Entity
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
        ydk::YLeaf detected_interface; //type: string
        ydk::YLeaf neighbor_status; //type: NeighborStatus
        ydk::YLeaf refresh_reduction; //type: boolean
        class NeighborStatus;

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global : public ydk::Entity
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

        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart
        class SoftPreemption; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption
        class Hellos; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption> soft_preemption;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos> hellos;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos : public ydk::Entity
{
    public:
        Hellos();
        ~Hellos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config : public ydk::Entity
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

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State : public ydk::Entity
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

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State : public ydk::Entity
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

        class Counters; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters> counters;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters : public ydk::Entity
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

        ydk::YLeaf path_timeouts; //type: uint64
        ydk::YLeaf reservation_timeouts; //type: uint64
        ydk::YLeaf rate_limited_messages; //type: uint64
        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes : public ydk::Entity
{
    public:
        InterfaceAttributes();
        ~InterfaceAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface

        ydk::YList interface;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef
        class BandwidthReservations; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations
        class Hellos; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos
        class Authentication; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication
        class Subscription; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription
        class Protection; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations> bandwidth_reservations;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos> hellos;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication> authentication;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription> subscription;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection> protection;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State : public ydk::Entity
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
        class Counters; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters> counters;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters : public ydk::Entity
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

        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations : public ydk::Entity
{
    public:
        BandwidthReservations();
        ~BandwidthReservations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BandwidthReservation; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation

        ydk::YList bandwidth_reservation;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation : public ydk::Entity
{
    public:
        BandwidthReservation();
        ~BandwidthReservation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::priority)
        ydk::YLeaf priority;
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State : public ydk::Entity
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

        ydk::YLeaf priority; //type: one of uint8, enumeration
        ydk::YLeaf available_bandwidth; //type: uint64
        ydk::YLeaf reserved_bandwidth; //type: uint64
        ydk::YLeaf active_reservations_count; //type: uint64
        ydk::YLeaf highwater_mark; //type: uint64
        class Priority;

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos : public ydk::Entity
{
    public:
        Hellos();
        ~Hellos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config : public ydk::Entity
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

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State : public ydk::Entity
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

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf authentication_key; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf authentication_key; //type: string

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config : public ydk::Entity
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

        ydk::YLeaf subscription; //type: uint8

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State : public ydk::Entity
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

        ydk::YLeaf subscription; //type: uint8
        ydk::YLeaf calculated_absolute_subscription_bw; //type: uint64
        ydk::YLeaf adjusted_absolute_subscription_bw; //type: uint64

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config : public ydk::Entity
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

        ydk::YLeaf link_protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf bypass_optimize_interval; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State : public ydk::Entity
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

        ydk::YLeaf link_protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf bypass_optimize_interval; //type: uint16

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp : public ydk::Entity
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


}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting : public ydk::Entity
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

        class AggregateSidCounters; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters
        class Interfaces; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters> aggregate_sid_counters;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces> interfaces;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters : public ydk::Entity
{
    public:
        AggregateSidCounters();
        ~AggregateSidCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AggregateSidCounter; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter

        ydk::YList aggregate_sid_counter;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter : public ydk::Entity
{
    public:
        AggregateSidCounter();
        ~AggregateSidCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::mpls_label)
        ydk::YLeaf mpls_label;
        class State; //type: NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State> state;
        
}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter


class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State

class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::EntryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf DYNAMIC;

};

class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::UpdateTrigger_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADJUSTED_MAX_RESERVABLE_PCT;
        static const ydk::Enum::YLeaf SR_TRAFFIC_PCT;

};

class NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::UpdateTrigger_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADJUSTED_MAX_RESERVABLE_PCT;
        static const ydk::Enum::YLeaf SR_TRAFFIC_PCT;

};

class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DELTA;
        static const ydk::Enum::YLeaf THRESHOLD_CROSSED;

};

class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MIRRORED_UP_DOWN;
        static const ydk::Enum::YLeaf SEPARATE_UP_DOWN;

};

class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DELTA;
        static const ydk::Enum::YLeaf THRESHOLD_CROSSED;

};

class NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MIRRORED_UP_DOWN;
        static const ydk::Enum::YLeaf SEPARATE_UP_DOWN;

};

class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;

};

class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::PeakDataRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INFINITY;

};

class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::NeighborStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;

};

class NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::Priority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ALL;

};


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_0_ */

