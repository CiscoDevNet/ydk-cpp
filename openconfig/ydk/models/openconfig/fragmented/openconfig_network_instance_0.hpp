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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance> > network_instance;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry> > entry;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::TableConnections::TableConnection> > table_connection;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Interfaces::Interface> > interface;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Tables::Table> > table;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint> > connection_point;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint> > endpoint;
        
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

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global> global;
        
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

        class ReservedLabelBlocks; //type: NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks> reserved_label_blocks;
        
}; // NetworkInstances::NetworkInstance::Mpls::Global


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

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock> reserved_label_block;
        
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

        class Config; //type: NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config> config;
        
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

        ydk::YLeafList local_id; //type: list of  string

}; // NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config


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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb> > srgb;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb> > srlb;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan> > vlan;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member> > member;
        
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

        class Aft; //type: NetworkInstances::NetworkInstance::Afts::Aft

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft> > aft;
        
}; // NetworkInstances::NetworkInstance::Afts


class NetworkInstances::NetworkInstance::Afts::Aft : public ydk::Entity
{
    public:
        Aft();
        ~Aft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: ADDRESSFAMILY
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Aft::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Aft::State
        class Entries; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries> entries;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft


class NetworkInstances::NetworkInstance::Afts::Aft::Config : public ydk::Entity
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

        ydk::YLeaf address_family; //type: ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::Afts::Aft::Config


class NetworkInstances::NetworkInstance::Afts::Aft::State : public ydk::Entity
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

        ydk::YLeaf address_family; //type: ADDRESSFAMILY

}; // NetworkInstances::NetworkInstance::Afts::Aft::State


class NetworkInstances::NetworkInstance::Afts::Aft::Entries : public ydk::Entity
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

        class Entry; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry> > entry;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry : public ydk::Entity
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

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State
        class Match; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match
        class NextHops; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match> match;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops> next_hops;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State : public ydk::Entity
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
        ydk::YLeaf packets_forwarded; //type: uint64
        ydk::YLeaf octets_forwarded; //type: uint64

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config : public ydk::Entity
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


}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State : public ydk::Entity
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

        ydk::YLeaf ip_prefix; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mpls_label; //type: one of enumeration, uint32
        ydk::YLeaf mpls_tc; //type: uint8
        ydk::YLeaf ip_dscp; //type: uint8
        ydk::YLeaf ip_protocol; //type: one of uint8, identityref
        ydk::YLeaf l4_src_port; //type: uint16
        ydk::YLeaf l4_dst_port; //type: uint16
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Config::name)
        ydk::YLeaf origin_network_instance;

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef : public ydk::Entity
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

        class State; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops : public ydk::Entity
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

        class NextHop; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop> > next_hop;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop : public ydk::Entity
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

        //type: uint64 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State : public ydk::Entity
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
        ydk::YLeafList popped_mpls_label_stack; //type: list of  one of enumeration, uint32
        ydk::YLeafList pushed_mpls_label_stack; //type: list of  one of enumeration, uint32

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
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

}; // NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State


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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol> > protocol;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static> > static_;
        
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
        ydk::YLeaf set_tag; //type: one of string, uint32

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
        ydk::YLeaf set_tag; //type: one of string, uint32

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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop> > next_hop;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate> > aggregate;
        
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
        ydk::YLeaf set_tag; //type: one of string, uint32

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
        ydk::YLeaf set_tag; //type: one of string, uint32

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
        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance> default_route_distance;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation> confederation;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis> afi_safis;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy> apply_policy;
        
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

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi> > afi_safi;
        
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
        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast
        class Ipv6LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast
        class L3VpnIpv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast> ipv4_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast> ipv6_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        
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

class NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::EntryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf DYNAMIC;

};

class NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf SUSPENDED;

};

class NetworkInstances::NetworkInstance::Vlans::Vlan::State::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf SUSPENDED;

};


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_0_ */

