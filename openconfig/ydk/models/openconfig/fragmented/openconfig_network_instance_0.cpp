
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_0.hpp"
#include "openconfig_network_instance_1.hpp"
#include "openconfig_network_instance_2.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

NetworkInstances::NetworkInstances()
    :
    network_instance(this, {"name"})
{

    yang_name = "network-instances"; yang_parent_name = "openconfig-network-instance"; is_top_level_class = true; has_list_ancestor = false; 
}

NetworkInstances::~NetworkInstances()
{
}

bool NetworkInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::has_operation() const
{
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-network-instance:network-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instance")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance>();
        ent_->parent = this;
        network_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> NetworkInstances::clone_ptr() const
{
    return std::make_shared<NetworkInstances>();
}

std::string NetworkInstances::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string NetworkInstances::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function NetworkInstances::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NetworkInstances::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool NetworkInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::NetworkInstance()
    :
    name{YType::str, "name"}
        ,
    fdb(std::make_shared<NetworkInstances::NetworkInstance::Fdb>())
    , config(std::make_shared<NetworkInstances::NetworkInstance::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::State>())
    , encapsulation(std::make_shared<NetworkInstances::NetworkInstance::Encapsulation>())
    , inter_instance_policies(std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies>())
    , table_connections(std::make_shared<NetworkInstances::NetworkInstance::TableConnections>())
    , interfaces(std::make_shared<NetworkInstances::NetworkInstance::Interfaces>())
    , tables(std::make_shared<NetworkInstances::NetworkInstance::Tables>())
    , connection_points(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints>())
    , mpls(std::make_shared<NetworkInstances::NetworkInstance::Mpls>())
    , segment_routing(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting>())
    , vlans(std::make_shared<NetworkInstances::NetworkInstance::Vlans>())
    , afts(std::make_shared<NetworkInstances::NetworkInstance::Afts>())
    , protocols(std::make_shared<NetworkInstances::NetworkInstance::Protocols>())
{
    fdb->parent = this;
    config->parent = this;
    state->parent = this;
    encapsulation->parent = this;
    inter_instance_policies->parent = this;
    table_connections->parent = this;
    interfaces->parent = this;
    tables->parent = this;
    connection_points->parent = this;
    mpls->parent = this;
    segment_routing->parent = this;
    vlans->parent = this;
    afts->parent = this;
    protocols->parent = this;

    yang_name = "network-instance"; yang_parent_name = "network-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

NetworkInstances::NetworkInstance::~NetworkInstance()
{
}

bool NetworkInstances::NetworkInstance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (fdb !=  nullptr && fdb->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (inter_instance_policies !=  nullptr && inter_instance_policies->has_data())
	|| (table_connections !=  nullptr && table_connections->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (tables !=  nullptr && tables->has_data())
	|| (connection_points !=  nullptr && connection_points->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (vlans !=  nullptr && vlans->has_data())
	|| (afts !=  nullptr && afts->has_data())
	|| (protocols !=  nullptr && protocols->has_data());
}

bool NetworkInstances::NetworkInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (fdb !=  nullptr && fdb->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (inter_instance_policies !=  nullptr && inter_instance_policies->has_operation())
	|| (table_connections !=  nullptr && table_connections->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (tables !=  nullptr && tables->has_operation())
	|| (connection_points !=  nullptr && connection_points->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (vlans !=  nullptr && vlans->has_operation())
	|| (afts !=  nullptr && afts->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string NetworkInstances::NetworkInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-network-instance:network-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string NetworkInstances::NetworkInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb")
    {
        if(fdb == nullptr)
        {
            fdb = std::make_shared<NetworkInstances::NetworkInstance::Fdb>();
        }
        return fdb;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::State>();
        }
        return state;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<NetworkInstances::NetworkInstance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "inter-instance-policies")
    {
        if(inter_instance_policies == nullptr)
        {
            inter_instance_policies = std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies>();
        }
        return inter_instance_policies;
    }

    if(child_yang_name == "table-connections")
    {
        if(table_connections == nullptr)
        {
            table_connections = std::make_shared<NetworkInstances::NetworkInstance::TableConnections>();
        }
        return table_connections;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<NetworkInstances::NetworkInstance::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "tables")
    {
        if(tables == nullptr)
        {
            tables = std::make_shared<NetworkInstances::NetworkInstance::Tables>();
        }
        return tables;
    }

    if(child_yang_name == "connection-points")
    {
        if(connection_points == nullptr)
        {
            connection_points = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints>();
        }
        return connection_points;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<NetworkInstances::NetworkInstance::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "vlans")
    {
        if(vlans == nullptr)
        {
            vlans = std::make_shared<NetworkInstances::NetworkInstance::Vlans>();
        }
        return vlans;
    }

    if(child_yang_name == "afts")
    {
        if(afts == nullptr)
        {
            afts = std::make_shared<NetworkInstances::NetworkInstance::Afts>();
        }
        return afts;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<NetworkInstances::NetworkInstance::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fdb != nullptr)
    {
        _children["fdb"] = fdb;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(inter_instance_policies != nullptr)
    {
        _children["inter-instance-policies"] = inter_instance_policies;
    }

    if(table_connections != nullptr)
    {
        _children["table-connections"] = table_connections;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(tables != nullptr)
    {
        _children["tables"] = tables;
    }

    if(connection_points != nullptr)
    {
        _children["connection-points"] = connection_points;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(vlans != nullptr)
    {
        _children["vlans"] = vlans;
    }

    if(afts != nullptr)
    {
        _children["afts"] = afts;
    }

    if(protocols != nullptr)
    {
        _children["protocols"] = protocols;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb" || name == "config" || name == "state" || name == "encapsulation" || name == "inter-instance-policies" || name == "table-connections" || name == "interfaces" || name == "tables" || name == "connection-points" || name == "mpls" || name == "segment-routing" || name == "vlans" || name == "afts" || name == "protocols" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::Fdb()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Fdb::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Fdb::State>())
    , mac_table(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable>())
{
    config->parent = this;
    state->parent = this;
    mac_table->parent = this;

    yang_name = "fdb"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::~Fdb()
{
}

bool NetworkInstances::NetworkInstance::Fdb::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (mac_table !=  nullptr && mac_table->has_data());
}

bool NetworkInstances::NetworkInstance::Fdb::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (mac_table !=  nullptr && mac_table->has_operation());
}

std::string NetworkInstances::NetworkInstance::Fdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Fdb::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Fdb::State>();
        }
        return state;
    }

    if(child_yang_name == "mac-table")
    {
        if(mac_table == nullptr)
        {
            mac_table = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable>();
        }
        return mac_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(mac_table != nullptr)
    {
        _children["mac-table"] = mac_table;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Fdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Fdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "mac-table")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::Config::Config()
    :
    mac_learning{YType::boolean, "mac-learning"},
    mac_aging_time{YType::uint16, "mac-aging-time"},
    maximum_entries{YType::uint16, "maximum-entries"}
{

    yang_name = "config"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Fdb::Config::has_data() const
{
    if (is_presence_container) return true;
    return mac_learning.is_set
	|| mac_aging_time.is_set
	|| maximum_entries.is_set;
}

bool NetworkInstances::NetworkInstance::Fdb::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(maximum_entries.yfilter);
}

std::string NetworkInstances::NetworkInstance::Fdb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (maximum_entries.is_set || is_set(maximum_entries.yfilter)) leaf_name_data.push_back(maximum_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-entries")
    {
        maximum_entries = value;
        maximum_entries.value_namespace = name_space;
        maximum_entries.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Fdb::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "maximum-entries")
    {
        maximum_entries.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Fdb::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-learning" || name == "mac-aging-time" || name == "maximum-entries")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::State::State()
    :
    mac_learning{YType::boolean, "mac-learning"},
    mac_aging_time{YType::uint16, "mac-aging-time"},
    maximum_entries{YType::uint16, "maximum-entries"}
{

    yang_name = "state"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Fdb::State::has_data() const
{
    if (is_presence_container) return true;
    return mac_learning.is_set
	|| mac_aging_time.is_set
	|| maximum_entries.is_set;
}

bool NetworkInstances::NetworkInstance::Fdb::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(maximum_entries.yfilter);
}

std::string NetworkInstances::NetworkInstance::Fdb::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (maximum_entries.is_set || is_set(maximum_entries.yfilter)) leaf_name_data.push_back(maximum_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-entries")
    {
        maximum_entries = value;
        maximum_entries.value_namespace = name_space;
        maximum_entries.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Fdb::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "maximum-entries")
    {
        maximum_entries.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Fdb::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-learning" || name == "mac-aging-time" || name == "maximum-entries")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::MacTable()
    :
    entries(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries>())
{
    entries->parent = this;

    yang_name = "mac-table"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::~MacTable()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::has_data() const
{
    if (is_presence_container) return true;
    return (entries !=  nullptr && entries->has_data());
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::has_operation() const
{
    return is_set(yfilter)
	|| (entries !=  nullptr && entries->has_operation());
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entries")
    {
        if(entries == nullptr)
        {
            entries = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries>();
        }
        return entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entries != nullptr)
    {
        _children["entries"] = entries;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entries()
    :
    entry(this, {"mac_address"})
{

    yang_name = "entries"; yang_parent_name = "mac-table"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::~Entries()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry>();
        ent_->parent = this;
        entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Entry()
    :
    mac_address{YType::str, "mac-address"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State>())
    , interface(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface>())
{
    config->parent = this;
    state->parent = this;
    interface->parent = this;

    yang_name = "entry"; yang_parent_name = "entries"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::~Entry()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State>();
        }
        return state;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface" || name == "mac-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::Config()
    :
    mac_address{YType::str, "mac-address"},
    vlan{YType::str, "vlan"}
{

    yang_name = "config"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| vlan.is_set;
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "vlan")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::State()
    :
    mac_address{YType::str, "mac-address"},
    vlan{YType::str, "vlan"},
    age{YType::uint64, "age"},
    entry_type{YType::enumeration, "entry-type"}
{

    yang_name = "state"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| vlan.is_set
	|| age.is_set
	|| entry_type.is_set;
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(entry_type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (entry_type.is_set || is_set(entry_type.yfilter)) leaf_name_data.push_back(entry_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-type")
    {
        entry_type = value;
        entry_type.value_namespace = name_space;
        entry_type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "entry-type")
    {
        entry_type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "vlan" || name == "age" || name == "entry-type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::Interface()
    :
    interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef>())
{
    interface_ref->parent = this;

    yang_name = "interface"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::~Interface()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::has_data() const
{
    if (is_presence_container) return true;
    return (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-ref")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Config::Config()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    enabled{YType::boolean, "enabled"},
    description{YType::str, "description"},
    router_id{YType::str, "router-id"},
    route_distinguisher{YType::str, "route-distinguisher"},
    enabled_address_families{YType::identityref, "enabled-address-families"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "config"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : enabled_address_families.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| type.is_set
	|| enabled.is_set
	|| description.is_set
	|| router_id.is_set
	|| route_distinguisher.is_set
	|| mtu.is_set;
}

bool NetworkInstances::NetworkInstance::Config::has_operation() const
{
    for (auto const & leaf : enabled_address_families.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(enabled_address_families.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string NetworkInstances::NetworkInstance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    auto enabled_address_families_name_datas = enabled_address_families.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), enabled_address_families_name_datas.begin(), enabled_address_families_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-address-families")
    {
        Identity identity{name_space, name_space_prefix, value};
        enabled_address_families.append(identity);
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "enabled-address-families")
    {
        enabled_address_families.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "enabled" || name == "description" || name == "router-id" || name == "route-distinguisher" || name == "enabled-address-families" || name == "mtu")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::State::State()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    enabled{YType::boolean, "enabled"},
    description{YType::str, "description"},
    router_id{YType::str, "router-id"},
    route_distinguisher{YType::str, "route-distinguisher"},
    enabled_address_families{YType::identityref, "enabled-address-families"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "state"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::State::~State()
{
}

bool NetworkInstances::NetworkInstance::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : enabled_address_families.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| type.is_set
	|| enabled.is_set
	|| description.is_set
	|| router_id.is_set
	|| route_distinguisher.is_set
	|| mtu.is_set;
}

bool NetworkInstances::NetworkInstance::State::has_operation() const
{
    for (auto const & leaf : enabled_address_families.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(enabled_address_families.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string NetworkInstances::NetworkInstance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    auto enabled_address_families_name_datas = enabled_address_families.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), enabled_address_families_name_datas.begin(), enabled_address_families_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-address-families")
    {
        Identity identity{name_space, name_space_prefix, value};
        enabled_address_families.append(identity);
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "enabled-address-families")
    {
        enabled_address_families.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "enabled" || name == "description" || name == "router-id" || name == "route-distinguisher" || name == "enabled-address-families" || name == "mtu")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Encapsulation::Encapsulation()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Encapsulation::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Encapsulation::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Encapsulation::~Encapsulation()
{
}

bool NetworkInstances::NetworkInstance::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Encapsulation::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Encapsulation::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Encapsulation::Config::Config()
    :
    encapsulation_type{YType::identityref, "encapsulation-type"},
    label_allocation_mode{YType::identityref, "label-allocation-mode"},
    control_word{YType::boolean, "control-word"}
{

    yang_name = "config"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Encapsulation::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Encapsulation::Config::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation_type.is_set
	|| label_allocation_mode.is_set
	|| control_word.is_set;
}

bool NetworkInstances::NetworkInstance::Encapsulation::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(control_word.yfilter);
}

std::string NetworkInstances::NetworkInstance::Encapsulation::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Encapsulation::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Encapsulation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Encapsulation::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Encapsulation::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Encapsulation::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Encapsulation::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-type" || name == "label-allocation-mode" || name == "control-word")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Encapsulation::State::State()
    :
    encapsulation_type{YType::identityref, "encapsulation-type"},
    label_allocation_mode{YType::identityref, "label-allocation-mode"},
    control_word{YType::boolean, "control-word"}
{

    yang_name = "state"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Encapsulation::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Encapsulation::State::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation_type.is_set
	|| label_allocation_mode.is_set
	|| control_word.is_set;
}

bool NetworkInstances::NetworkInstance::Encapsulation::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(control_word.yfilter);
}

std::string NetworkInstances::NetworkInstance::Encapsulation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Encapsulation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Encapsulation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Encapsulation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Encapsulation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Encapsulation::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Encapsulation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-type" || name == "label-allocation-mode" || name == "control-word")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::InterInstancePolicies::InterInstancePolicies()
    :
    apply_policy(std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy>())
{
    apply_policy->parent = this;

    yang_name = "inter-instance-policies"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::InterInstancePolicies::~InterInstancePolicies()
{
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::has_data() const
{
    if (is_presence_container) return true;
    return (apply_policy !=  nullptr && apply_policy->has_data());
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::has_operation() const
{
    return is_set(yfilter)
	|| (apply_policy !=  nullptr && apply_policy->has_operation());
}

std::string NetworkInstances::NetworkInstance::InterInstancePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-instance-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::InterInstancePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy>();
        }
        return apply_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(apply_policy != nullptr)
    {
        _children["apply-policy"] = apply_policy;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "apply-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "inter-instance-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::~ApplyPolicy()
{
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::~State()
{
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::TableConnections::TableConnections()
    :
    table_connection(this, {"src_protocol", "dst_protocol", "address_family"})
{

    yang_name = "table-connections"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::TableConnections::~TableConnections()
{
}

bool NetworkInstances::NetworkInstance::TableConnections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table_connection.len(); index++)
    {
        if(table_connection[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::TableConnections::has_operation() const
{
    for (std::size_t index=0; index<table_connection.len(); index++)
    {
        if(table_connection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::TableConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::TableConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::TableConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-connection")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::TableConnections::TableConnection>();
        ent_->parent = this;
        table_connection.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::TableConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : table_connection.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::TableConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::TableConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::TableConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-connection")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::TableConnections::TableConnection::TableConnection()
    :
    src_protocol{YType::identityref, "src-protocol"},
    dst_protocol{YType::identityref, "dst-protocol"},
    address_family{YType::identityref, "address-family"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::TableConnections::TableConnection::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "table-connection"; yang_parent_name = "table-connections"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::TableConnections::TableConnection::~TableConnection()
{
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::has_data() const
{
    if (is_presence_container) return true;
    return src_protocol.is_set
	|| dst_protocol.is_set
	|| address_family.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_protocol.yfilter)
	|| ydk::is_set(dst_protocol.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::TableConnections::TableConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-connection";
    ADD_KEY_TOKEN(src_protocol, "src-protocol");
    ADD_KEY_TOKEN(dst_protocol, "dst-protocol");
    ADD_KEY_TOKEN(address_family, "address-family");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::TableConnections::TableConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_protocol.is_set || is_set(src_protocol.yfilter)) leaf_name_data.push_back(src_protocol.get_name_leafdata());
    if (dst_protocol.is_set || is_set(dst_protocol.yfilter)) leaf_name_data.push_back(dst_protocol.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::TableConnections::TableConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::TableConnections::TableConnection::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::TableConnections::TableConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::TableConnections::TableConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-protocol")
    {
        src_protocol = value;
        src_protocol.value_namespace = name_space;
        src_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-protocol")
    {
        dst_protocol = value;
        dst_protocol.value_namespace = name_space;
        dst_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::TableConnections::TableConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-protocol")
    {
        src_protocol.yfilter = yfilter;
    }
    if(value_path == "dst-protocol")
    {
        dst_protocol.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "src-protocol" || name == "dst-protocol" || name == "address-family")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::Config()
    :
    src_protocol{YType::identityref, "src-protocol"},
    address_family{YType::identityref, "address-family"},
    dst_protocol{YType::identityref, "dst-protocol"},
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"}
{

    yang_name = "config"; yang_parent_name = "table-connection"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return src_protocol.is_set
	|| address_family.is_set
	|| dst_protocol.is_set
	|| default_import_policy.is_set;
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(src_protocol.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(dst_protocol.yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_protocol.is_set || is_set(src_protocol.yfilter)) leaf_name_data.push_back(src_protocol.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (dst_protocol.is_set || is_set(dst_protocol.yfilter)) leaf_name_data.push_back(dst_protocol.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-protocol")
    {
        src_protocol = value;
        src_protocol.value_namespace = name_space;
        src_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-protocol")
    {
        dst_protocol = value;
        dst_protocol.value_namespace = name_space;
        dst_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-protocol")
    {
        src_protocol.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "dst-protocol")
    {
        dst_protocol.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-protocol" || name == "address-family" || name == "dst-protocol" || name == "import-policy" || name == "default-import-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::State()
    :
    src_protocol{YType::identityref, "src-protocol"},
    address_family{YType::identityref, "address-family"},
    dst_protocol{YType::identityref, "dst-protocol"},
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"}
{

    yang_name = "state"; yang_parent_name = "table-connection"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::~State()
{
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return src_protocol.is_set
	|| address_family.is_set
	|| dst_protocol.is_set
	|| default_import_policy.is_set;
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(src_protocol.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(dst_protocol.yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_protocol.is_set || is_set(src_protocol.yfilter)) leaf_name_data.push_back(src_protocol.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (dst_protocol.is_set || is_set(dst_protocol.yfilter)) leaf_name_data.push_back(dst_protocol.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-protocol")
    {
        src_protocol = value;
        src_protocol.value_namespace = name_space;
        src_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-protocol")
    {
        dst_protocol = value;
        dst_protocol.value_namespace = name_space;
        dst_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-protocol")
    {
        src_protocol.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "dst-protocol")
    {
        dst_protocol.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-protocol" || name == "address-family" || name == "dst-protocol" || name == "import-policy" || name == "default-import-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Interfaces::Interfaces()
    :
    interface(this, {"id"})
{

    yang_name = "interfaces"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Interfaces::~Interfaces()
{
}

bool NetworkInstances::NetworkInstance::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Interfaces::Interface::Interface()
    :
    id{YType::str, "id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Interfaces::Interface::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Interfaces::Interface::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Interfaces::Interface::~Interface()
{
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Interfaces::Interface::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Interfaces::Interface::Config::Config()
    :
    id{YType::str, "id"},
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"},
    associated_address_families{YType::identityref, "associated-address-families"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Interfaces::Interface::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : associated_address_families.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::Config::has_operation() const
{
    for (auto const & leaf : associated_address_families.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter)
	|| ydk::is_set(associated_address_families.yfilter);
}

std::string NetworkInstances::NetworkInstance::Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Interfaces::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    auto associated_address_families_name_datas = associated_address_families.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), associated_address_families_name_datas.begin(), associated_address_families_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associated-address-families")
    {
        Identity identity{name_space, name_space_prefix, value};
        associated_address_families.append(identity);
    }
}

void NetworkInstances::NetworkInstance::Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
    if(value_path == "associated-address-families")
    {
        associated_address_families.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "interface" || name == "subinterface" || name == "associated-address-families")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Interfaces::Interface::State::State()
    :
    id{YType::str, "id"},
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"},
    associated_address_families{YType::identityref, "associated-address-families"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Interfaces::Interface::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : associated_address_families.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_operation() const
{
    for (auto const & leaf : associated_address_families.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter)
	|| ydk::is_set(associated_address_families.yfilter);
}

std::string NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    auto associated_address_families_name_datas = associated_address_families.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), associated_address_families_name_datas.begin(), associated_address_families_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associated-address-families")
    {
        Identity identity{name_space, name_space_prefix, value};
        associated_address_families.append(identity);
    }
}

void NetworkInstances::NetworkInstance::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
    if(value_path == "associated-address-families")
    {
        associated_address_families.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "interface" || name == "subinterface" || name == "associated-address-families")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Tables::Tables()
    :
    table(this, {"protocol", "address_family"})
{

    yang_name = "tables"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Tables::~Tables()
{
}

bool NetworkInstances::NetworkInstance::Tables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table.len(); index++)
    {
        if(table[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Tables::has_operation() const
{
    for (std::size_t index=0; index<table.len(); index++)
    {
        if(table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Tables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Tables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Tables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Tables::Table>();
        ent_->parent = this;
        table.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Tables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : table.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Tables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Tables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Tables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Tables::Table::Table()
    :
    protocol{YType::identityref, "protocol"},
    address_family{YType::identityref, "address-family"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Tables::Table::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Tables::Table::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "table"; yang_parent_name = "tables"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Tables::Table::~Table()
{
}

bool NetworkInstances::NetworkInstance::Tables::Table::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| address_family.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Tables::Table::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Tables::Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(address_family, "address-family");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Tables::Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Tables::Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Tables::Table::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Tables::Table::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Tables::Table::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Tables::Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Tables::Table::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Tables::Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "protocol" || name == "address-family")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Tables::Table::Config::Config()
    :
    protocol{YType::identityref, "protocol"},
    address_family{YType::identityref, "address-family"}
{

    yang_name = "config"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Tables::Table::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Tables::Table::Config::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| address_family.is_set;
}

bool NetworkInstances::NetworkInstance::Tables::Table::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(address_family.yfilter);
}

std::string NetworkInstances::NetworkInstance::Tables::Table::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Tables::Table::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Tables::Table::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Tables::Table::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Tables::Table::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Tables::Table::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Tables::Table::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "address-family")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Tables::Table::State::State()
    :
    protocol{YType::identityref, "protocol"},
    address_family{YType::identityref, "address-family"}
{

    yang_name = "state"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Tables::Table::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Tables::Table::State::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| address_family.is_set;
}

bool NetworkInstances::NetworkInstance::Tables::Table::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(address_family.yfilter);
}

std::string NetworkInstances::NetworkInstance::Tables::Table::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Tables::Table::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Tables::Table::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Tables::Table::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Tables::Table::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Tables::Table::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Tables::Table::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "address-family")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoints()
    :
    connection_point(this, {"connection_point_id"})
{

    yang_name = "connection-points"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::~ConnectionPoints()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<connection_point.len(); index++)
    {
        if(connection_point[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::has_operation() const
{
    for (std::size_t index=0; index<connection_point.len(); index++)
    {
        if(connection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-points";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-point")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint>();
        ent_->parent = this;
        connection_point.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : connection_point.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::ConnectionPoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-point")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::ConnectionPoint()
    :
    connection_point_id{YType::str, "connection-point-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State>())
    , endpoints(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints>())
{
    config->parent = this;
    state->parent = this;
    endpoints->parent = this;

    yang_name = "connection-point"; yang_parent_name = "connection-points"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::~ConnectionPoint()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return connection_point_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (endpoints !=  nullptr && endpoints->has_data());
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_point_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (endpoints !=  nullptr && endpoints->has_operation());
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-point";
    ADD_KEY_TOKEN(connection_point_id, "connection-point-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_point_id.is_set || is_set(connection_point_id.yfilter)) leaf_name_data.push_back(connection_point_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State>();
        }
        return state;
    }

    if(child_yang_name == "endpoints")
    {
        if(endpoints == nullptr)
        {
            endpoints = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints>();
        }
        return endpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(endpoints != nullptr)
    {
        _children["endpoints"] = endpoints;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-point-id")
    {
        connection_point_id = value;
        connection_point_id.value_namespace = name_space;
        connection_point_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-point-id")
    {
        connection_point_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "endpoints" || name == "connection-point-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::Config()
    :
    connection_point_id{YType::str, "connection-point-id"}
{

    yang_name = "config"; yang_parent_name = "connection-point"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::has_data() const
{
    if (is_presence_container) return true;
    return connection_point_id.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_point_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_point_id.is_set || is_set(connection_point_id.yfilter)) leaf_name_data.push_back(connection_point_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-point-id")
    {
        connection_point_id = value;
        connection_point_id.value_namespace = name_space;
        connection_point_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-point-id")
    {
        connection_point_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-point-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::State()
    :
    connection_point_id{YType::str, "connection-point-id"}
{

    yang_name = "state"; yang_parent_name = "connection-point"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::~State()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::has_data() const
{
    if (is_presence_container) return true;
    return connection_point_id.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_point_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_point_id.is_set || is_set(connection_point_id.yfilter)) leaf_name_data.push_back(connection_point_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-point-id")
    {
        connection_point_id = value;
        connection_point_id.value_namespace = name_space;
        connection_point_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-point-id")
    {
        connection_point_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-point-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoints()
    :
    endpoint(this, {"endpoint_id"})
{

    yang_name = "endpoints"; yang_parent_name = "connection-point"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::~Endpoints()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<endpoint.len(); index++)
    {
        if(endpoint[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::has_operation() const
{
    for (std::size_t index=0; index<endpoint.len(); index++)
    {
        if(endpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "endpoint")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint>();
        ent_->parent = this;
        endpoint.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : endpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "endpoint")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Endpoint()
    :
    endpoint_id{YType::str, "endpoint-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State>())
    , local(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local>())
    , remote(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote>())
{
    config->parent = this;
    state->parent = this;
    local->parent = this;
    remote->parent = this;

    yang_name = "endpoint"; yang_parent_name = "endpoints"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::~Endpoint()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::has_data() const
{
    if (is_presence_container) return true;
    return endpoint_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(endpoint_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    ADD_KEY_TOKEN(endpoint_id, "endpoint-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_id.is_set || is_set(endpoint_id.yfilter)) leaf_name_data.push_back(endpoint_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State>();
        }
        return state;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "endpoint-id")
    {
        endpoint_id = value;
        endpoint_id.value_namespace = name_space;
        endpoint_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "endpoint-id")
    {
        endpoint_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "local" || name == "remote" || name == "endpoint-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::Config()
    :
    endpoint_id{YType::str, "endpoint-id"},
    precedence{YType::uint16, "precedence"},
    type{YType::identityref, "type"}
{

    yang_name = "config"; yang_parent_name = "endpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::has_data() const
{
    if (is_presence_container) return true;
    return endpoint_id.is_set
	|| precedence.is_set
	|| type.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(endpoint_id.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_id.is_set || is_set(endpoint_id.yfilter)) leaf_name_data.push_back(endpoint_id.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "endpoint-id")
    {
        endpoint_id = value;
        endpoint_id.value_namespace = name_space;
        endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "endpoint-id")
    {
        endpoint_id.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "endpoint-id" || name == "precedence" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::State()
    :
    endpoint_id{YType::str, "endpoint-id"},
    precedence{YType::uint16, "precedence"},
    type{YType::identityref, "type"},
    active{YType::boolean, "active"}
{

    yang_name = "state"; yang_parent_name = "endpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::~State()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::has_data() const
{
    if (is_presence_container) return true;
    return endpoint_id.is_set
	|| precedence.is_set
	|| type.is_set
	|| active.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(endpoint_id.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_id.is_set || is_set(endpoint_id.yfilter)) leaf_name_data.push_back(endpoint_id.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "endpoint-id")
    {
        endpoint_id = value;
        endpoint_id.value_namespace = name_space;
        endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "endpoint-id")
    {
        endpoint_id.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "endpoint-id" || name == "precedence" || name == "type" || name == "active")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Local()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "local"; yang_parent_name = "endpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::~Local()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::~State()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Remote()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "remote"; yang_parent_name = "endpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::~Remote()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::Config()
    :
    remote_system{YType::str, "remote-system"},
    virtual_circuit_identifier{YType::uint32, "virtual-circuit-identifier"}
{

    yang_name = "config"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::has_data() const
{
    if (is_presence_container) return true;
    return remote_system.is_set
	|| virtual_circuit_identifier.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_system.yfilter)
	|| ydk::is_set(virtual_circuit_identifier.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_system.is_set || is_set(remote_system.yfilter)) leaf_name_data.push_back(remote_system.get_name_leafdata());
    if (virtual_circuit_identifier.is_set || is_set(virtual_circuit_identifier.yfilter)) leaf_name_data.push_back(virtual_circuit_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-system")
    {
        remote_system = value;
        remote_system.value_namespace = name_space;
        remote_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-circuit-identifier")
    {
        virtual_circuit_identifier = value;
        virtual_circuit_identifier.value_namespace = name_space;
        virtual_circuit_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-system")
    {
        remote_system.yfilter = yfilter;
    }
    if(value_path == "virtual-circuit-identifier")
    {
        virtual_circuit_identifier.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-system" || name == "virtual-circuit-identifier")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::State()
    :
    remote_system{YType::str, "remote-system"},
    virtual_circuit_identifier{YType::uint32, "virtual-circuit-identifier"}
{

    yang_name = "state"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::~State()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::has_data() const
{
    if (is_presence_container) return true;
    return remote_system.is_set
	|| virtual_circuit_identifier.is_set;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_system.yfilter)
	|| ydk::is_set(virtual_circuit_identifier.yfilter);
}

std::string NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_system.is_set || is_set(remote_system.yfilter)) leaf_name_data.push_back(remote_system.get_name_leafdata());
    if (virtual_circuit_identifier.is_set || is_set(virtual_circuit_identifier.yfilter)) leaf_name_data.push_back(virtual_circuit_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-system")
    {
        remote_system = value;
        remote_system.value_namespace = name_space;
        remote_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-circuit-identifier")
    {
        virtual_circuit_identifier = value;
        virtual_circuit_identifier.value_namespace = name_space;
        virtual_circuit_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-system")
    {
        remote_system.yfilter = yfilter;
    }
    if(value_path == "virtual-circuit-identifier")
    {
        virtual_circuit_identifier.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-system" || name == "virtual-circuit-identifier")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Mpls()
    :
    global(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global>())
    , te_global_attributes(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes>())
    , te_interface_attributes(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes>())
    , signaling_protocols(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols>())
    , lsps(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps>())
{
    global->parent = this;
    te_global_attributes->parent = this;
    te_interface_attributes->parent = this;
    signaling_protocols->parent = this;
    lsps->parent = this;

    yang_name = "mpls"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::~Mpls()
{
}

bool NetworkInstances::NetworkInstance::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (te_global_attributes !=  nullptr && te_global_attributes->has_data())
	|| (te_interface_attributes !=  nullptr && te_interface_attributes->has_data())
	|| (signaling_protocols !=  nullptr && signaling_protocols->has_data())
	|| (lsps !=  nullptr && lsps->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (te_global_attributes !=  nullptr && te_global_attributes->has_operation())
	|| (te_interface_attributes !=  nullptr && te_interface_attributes->has_operation())
	|| (signaling_protocols !=  nullptr && signaling_protocols->has_operation())
	|| (lsps !=  nullptr && lsps->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global>();
        }
        return global;
    }

    if(child_yang_name == "te-global-attributes")
    {
        if(te_global_attributes == nullptr)
        {
            te_global_attributes = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes>();
        }
        return te_global_attributes;
    }

    if(child_yang_name == "te-interface-attributes")
    {
        if(te_interface_attributes == nullptr)
        {
            te_interface_attributes = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes>();
        }
        return te_interface_attributes;
    }

    if(child_yang_name == "signaling-protocols")
    {
        if(signaling_protocols == nullptr)
        {
            signaling_protocols = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols>();
        }
        return signaling_protocols;
    }

    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps>();
        }
        return lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(te_global_attributes != nullptr)
    {
        _children["te-global-attributes"] = te_global_attributes;
    }

    if(te_interface_attributes != nullptr)
    {
        _children["te-interface-attributes"] = te_interface_attributes;
    }

    if(signaling_protocols != nullptr)
    {
        _children["signaling-protocols"] = signaling_protocols;
    }

    if(lsps != nullptr)
    {
        _children["lsps"] = lsps;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "te-global-attributes" || name == "te-interface-attributes" || name == "signaling-protocols" || name == "lsps")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::Global()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::State>())
    , interface_attributes(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes>())
    , reserved_label_blocks(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks>())
{
    config->parent = this;
    state->parent = this;
    interface_attributes->parent = this;
    reserved_label_blocks->parent = this;

    yang_name = "global"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::~Global()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_attributes !=  nullptr && interface_attributes->has_data())
	|| (reserved_label_blocks !=  nullptr && reserved_label_blocks->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Global::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_attributes !=  nullptr && interface_attributes->has_operation())
	|| (reserved_label_blocks !=  nullptr && reserved_label_blocks->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-attributes")
    {
        if(interface_attributes == nullptr)
        {
            interface_attributes = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes>();
        }
        return interface_attributes;
    }

    if(child_yang_name == "reserved-label-blocks")
    {
        if(reserved_label_blocks == nullptr)
        {
            reserved_label_blocks = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks>();
        }
        return reserved_label_blocks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_attributes != nullptr)
    {
        _children["interface-attributes"] = interface_attributes;
    }

    if(reserved_label_blocks != nullptr)
    {
        _children["reserved-label-blocks"] = reserved_label_blocks;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-attributes" || name == "reserved-label-blocks")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::Config::Config()
    :
    null_label{YType::identityref, "null-label"}
{

    yang_name = "config"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::Config::has_data() const
{
    if (is_presence_container) return true;
    return null_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_label.is_set || is_set(null_label.yfilter)) leaf_name_data.push_back(null_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null-label")
    {
        null_label = value;
        null_label.value_namespace = name_space;
        null_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null-label")
    {
        null_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::State::State()
    :
    null_label{YType::identityref, "null-label"}
{

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::State::has_data() const
{
    if (is_presence_container) return true;
    return null_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_label.is_set || is_set(null_label.yfilter)) leaf_name_data.push_back(null_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null-label")
    {
        null_label = value;
        null_label.value_namespace = name_space;
        null_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null-label")
    {
        null_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::InterfaceAttributes()
    :
    interface(this, {"interface_id"})
{

    yang_name = "interface-attributes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::~InterfaceAttributes()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Interface()
    :
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::~Interface()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "interface-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"},
    mpls_enabled{YType::boolean, "mpls-enabled"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| mpls_enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(mpls_enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (mpls_enabled.is_set || is_set(mpls_enabled.yfilter)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
        mpls_enabled.value_namespace = name_space;
        mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "mpls-enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"},
    mpls_enabled{YType::boolean, "mpls-enabled"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| mpls_enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(mpls_enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (mpls_enabled.is_set || is_set(mpls_enabled.yfilter)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
        mpls_enabled.value_namespace = name_space;
        mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "mpls-enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlocks()
    :
    reserved_label_block(this, {"local_id"})
{

    yang_name = "reserved-label-blocks"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::~ReservedLabelBlocks()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reserved_label_block.len(); index++)
    {
        if(reserved_label_block[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::has_operation() const
{
    for (std::size_t index=0; index<reserved_label_block.len(); index++)
    {
        if(reserved_label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserved-label-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserved-label-block")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock>();
        ent_->parent = this;
        reserved_label_block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reserved_label_block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserved-label-block")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::ReservedLabelBlock()
    :
    local_id{YType::str, "local-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "reserved-label-block"; yang_parent_name = "reserved-label-blocks"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::~ReservedLabelBlock()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserved-label-block";
    ADD_KEY_TOKEN(local_id, "local-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "local-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::Config()
    :
    local_id{YType::str, "local-id"},
    lower_bound{YType::str, "lower-bound"},
    upper_bound{YType::str, "upper-bound"}
{

    yang_name = "config"; yang_parent_name = "reserved-label-block"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| lower_bound.is_set
	|| upper_bound.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::State()
    :
    local_id{YType::str, "local-id"},
    lower_bound{YType::str, "lower-bound"},
    upper_bound{YType::str, "upper-bound"}
{

    yang_name = "state"; yang_parent_name = "reserved-label-block"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| lower_bound.is_set
	|| upper_bound.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeGlobalAttributes()
    :
    srlgs(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs>())
    , mpls_admin_groups(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups>())
    , te_lsp_timers(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers>())
    , bandwidth_measurement(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement>())
{
    srlgs->parent = this;
    mpls_admin_groups->parent = this;
    te_lsp_timers->parent = this;
    bandwidth_measurement->parent = this;

    yang_name = "te-global-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::~TeGlobalAttributes()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (srlgs !=  nullptr && srlgs->has_data())
	|| (mpls_admin_groups !=  nullptr && mpls_admin_groups->has_data())
	|| (te_lsp_timers !=  nullptr && te_lsp_timers->has_data())
	|| (bandwidth_measurement !=  nullptr && bandwidth_measurement->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (mpls_admin_groups !=  nullptr && mpls_admin_groups->has_operation())
	|| (te_lsp_timers !=  nullptr && te_lsp_timers->has_operation())
	|| (bandwidth_measurement !=  nullptr && bandwidth_measurement->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-global-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs>();
        }
        return srlgs;
    }

    if(child_yang_name == "mpls-admin-groups")
    {
        if(mpls_admin_groups == nullptr)
        {
            mpls_admin_groups = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups>();
        }
        return mpls_admin_groups;
    }

    if(child_yang_name == "te-lsp-timers")
    {
        if(te_lsp_timers == nullptr)
        {
            te_lsp_timers = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers>();
        }
        return te_lsp_timers;
    }

    if(child_yang_name == "openconfig-rsvp-sr-ext:bandwidth-measurement")
    {
        if(bandwidth_measurement == nullptr)
        {
            bandwidth_measurement = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement>();
        }
        return bandwidth_measurement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srlgs != nullptr)
    {
        _children["srlgs"] = srlgs;
    }

    if(mpls_admin_groups != nullptr)
    {
        _children["mpls-admin-groups"] = mpls_admin_groups;
    }

    if(te_lsp_timers != nullptr)
    {
        _children["te-lsp-timers"] = te_lsp_timers;
    }

    if(bandwidth_measurement != nullptr)
    {
        _children["openconfig-rsvp-sr-ext:bandwidth-measurement"] = bandwidth_measurement;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlgs" || name == "mpls-admin-groups" || name == "te-lsp-timers" || name == "bandwidth-measurement")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlgs()
    :
    srlg(this, {"name"})
{

    yang_name = "srlgs"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::~Srlgs()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg>();
        ent_->parent = this;
        srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Srlg()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State>())
    , static_srlg_members(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers>())
{
    config->parent = this;
    state->parent = this;
    static_srlg_members->parent = this;

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::~Srlg()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State>();
        }
        return state;
    }

    if(child_yang_name == "static-srlg-members")
    {
        if(static_srlg_members == nullptr)
        {
            static_srlg_members = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers>();
        }
        return static_srlg_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(static_srlg_members != nullptr)
    {
        _children["static-srlg-members"] = static_srlg_members;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "static-srlg-members" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::Config()
    :
    name{YType::str, "name"},
    value_{YType::uint32, "value"},
    cost{YType::uint32, "cost"},
    flooding_type{YType::enumeration, "flooding-type"}
{

    yang_name = "config"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| value_.is_set
	|| cost.is_set
	|| flooding_type.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flooding_type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.yfilter)) leaf_name_data.push_back(flooding_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-type")
    {
        flooding_type = value;
        flooding_type.value_namespace = name_space;
        flooding_type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flooding-type")
    {
        flooding_type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value" || name == "cost" || name == "flooding-type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::State()
    :
    name{YType::str, "name"},
    value_{YType::uint32, "value"},
    cost{YType::uint32, "cost"},
    flooding_type{YType::enumeration, "flooding-type"}
{

    yang_name = "state"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| value_.is_set
	|| cost.is_set
	|| flooding_type.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flooding_type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.yfilter)) leaf_name_data.push_back(flooding_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-type")
    {
        flooding_type = value;
        flooding_type.value_namespace = name_space;
        flooding_type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flooding-type")
    {
        flooding_type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value" || name == "cost" || name == "flooding-type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::StaticSrlgMembers()
    :
    members_list(this, {"from_address"})
{

    yang_name = "static-srlg-members"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::~StaticSrlgMembers()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<members_list.len(); index++)
    {
        if(members_list[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::has_operation() const
{
    for (std::size_t index=0; index<members_list.len(); index++)
    {
        if(members_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members-list")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList>();
        ent_->parent = this;
        members_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : members_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members-list")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::MembersList()
    :
    from_address{YType::str, "from-address"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "members-list"; yang_parent_name = "static-srlg-members"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::~MembersList()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::has_data() const
{
    if (is_presence_container) return true;
    return from_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members-list";
    ADD_KEY_TOKEN(from_address, "from-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "from-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::Config()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "config"; yang_parent_name = "members-list"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::has_data() const
{
    if (is_presence_container) return true;
    return from_address.is_set
	|| to_address.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::State()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "state"; yang_parent_name = "members-list"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::has_data() const
{
    if (is_presence_container) return true;
    return from_address.is_set
	|| to_address.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::MplsAdminGroups()
    :
    admin_group(this, {"admin_group_name"})
{

    yang_name = "mpls-admin-groups"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::~MplsAdminGroups()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<admin_group.len(); index++)
    {
        if(admin_group[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::has_operation() const
{
    for (std::size_t index=0; index<admin_group.len(); index++)
    {
        if(admin_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-group")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup>();
        ent_->parent = this;
        admin_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : admin_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::AdminGroup()
    :
    admin_group_name{YType::str, "admin-group-name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-group"; yang_parent_name = "mpls-admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::~AdminGroup()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_data() const
{
    if (is_presence_container) return true;
    return admin_group_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_group_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-group";
    ADD_KEY_TOKEN(admin_group_name, "admin-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.yfilter)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
        admin_group_name.value_namespace = name_space;
        admin_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "admin-group-name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::Config()
    :
    admin_group_name{YType::str, "admin-group-name"},
    bit_position{YType::uint32, "bit-position"}
{

    yang_name = "config"; yang_parent_name = "admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_data() const
{
    if (is_presence_container) return true;
    return admin_group_name.is_set
	|| bit_position.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_group_name.yfilter)
	|| ydk::is_set(bit_position.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.yfilter)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());
    if (bit_position.is_set || is_set(bit_position.yfilter)) leaf_name_data.push_back(bit_position.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
        admin_group_name.value_namespace = name_space;
        admin_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-position")
    {
        bit_position = value;
        bit_position.value_namespace = name_space;
        bit_position.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name.yfilter = yfilter;
    }
    if(value_path == "bit-position")
    {
        bit_position.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group-name" || name == "bit-position")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::State()
    :
    admin_group_name{YType::str, "admin-group-name"},
    bit_position{YType::uint32, "bit-position"}
{

    yang_name = "state"; yang_parent_name = "admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_data() const
{
    if (is_presence_container) return true;
    return admin_group_name.is_set
	|| bit_position.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_group_name.yfilter)
	|| ydk::is_set(bit_position.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.yfilter)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());
    if (bit_position.is_set || is_set(bit_position.yfilter)) leaf_name_data.push_back(bit_position.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
        admin_group_name.value_namespace = name_space;
        admin_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-position")
    {
        bit_position = value;
        bit_position.value_namespace = name_space;
        bit_position.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name.yfilter = yfilter;
    }
    if(value_path == "bit-position")
    {
        bit_position.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group-name" || name == "bit-position")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::TeLspTimers()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "te-lsp-timers"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::~TeLspTimers()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-lsp-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::Config()
    :
    install_delay{YType::uint16, "install-delay"},
    cleanup_delay{YType::uint16, "cleanup-delay"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"}
{

    yang_name = "config"; yang_parent_name = "te-lsp-timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::has_data() const
{
    if (is_presence_container) return true;
    return install_delay.is_set
	|| cleanup_delay.is_set
	|| reoptimize_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install_delay.yfilter)
	|| ydk::is_set(cleanup_delay.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install_delay.is_set || is_set(install_delay.yfilter)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (cleanup_delay.is_set || is_set(cleanup_delay.yfilter)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install-delay")
    {
        install_delay = value;
        install_delay.value_namespace = name_space;
        install_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
        cleanup_delay.value_namespace = name_space;
        cleanup_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install-delay")
    {
        install_delay.yfilter = yfilter;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-delay" || name == "cleanup-delay" || name == "reoptimize-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::State()
    :
    install_delay{YType::uint16, "install-delay"},
    cleanup_delay{YType::uint16, "cleanup-delay"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"}
{

    yang_name = "state"; yang_parent_name = "te-lsp-timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::has_data() const
{
    if (is_presence_container) return true;
    return install_delay.is_set
	|| cleanup_delay.is_set
	|| reoptimize_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install_delay.yfilter)
	|| ydk::is_set(cleanup_delay.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install_delay.is_set || is_set(install_delay.yfilter)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (cleanup_delay.is_set || is_set(cleanup_delay.yfilter)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install-delay")
    {
        install_delay = value;
        install_delay.value_namespace = name_space;
        install_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
        cleanup_delay.value_namespace = name_space;
        cleanup_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install-delay")
    {
        install_delay.yfilter = yfilter;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::TeLspTimers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-delay" || name == "cleanup-delay" || name == "reoptimize-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::BandwidthMeasurement()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State>())
    , update_trigger(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger>())
{
    config->parent = this;
    state->parent = this;
    update_trigger->parent = this;

    yang_name = "bandwidth-measurement"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::~BandwidthMeasurement()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (update_trigger !=  nullptr && update_trigger->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (update_trigger !=  nullptr && update_trigger->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-rsvp-sr-ext:bandwidth-measurement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State>();
        }
        return state;
    }

    if(child_yang_name == "update-trigger")
    {
        if(update_trigger == nullptr)
        {
            update_trigger = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger>();
        }
        return update_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(update_trigger != nullptr)
    {
        _children["update-trigger"] = update_trigger;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "update-trigger")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::Config()
    :
    measure_sr_traffic{YType::boolean, "measure-sr-traffic"},
    collection_interval{YType::uint32, "collection-interval"},
    adjustment_interval{YType::uint32, "adjustment-interval"},
    bandwidth_multiplier{YType::str, "bandwidth-multiplier"}
{

    yang_name = "config"; yang_parent_name = "bandwidth-measurement"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::has_data() const
{
    if (is_presence_container) return true;
    return measure_sr_traffic.is_set
	|| collection_interval.is_set
	|| adjustment_interval.is_set
	|| bandwidth_multiplier.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(measure_sr_traffic.yfilter)
	|| ydk::is_set(collection_interval.yfilter)
	|| ydk::is_set(adjustment_interval.yfilter)
	|| ydk::is_set(bandwidth_multiplier.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (measure_sr_traffic.is_set || is_set(measure_sr_traffic.yfilter)) leaf_name_data.push_back(measure_sr_traffic.get_name_leafdata());
    if (collection_interval.is_set || is_set(collection_interval.yfilter)) leaf_name_data.push_back(collection_interval.get_name_leafdata());
    if (adjustment_interval.is_set || is_set(adjustment_interval.yfilter)) leaf_name_data.push_back(adjustment_interval.get_name_leafdata());
    if (bandwidth_multiplier.is_set || is_set(bandwidth_multiplier.yfilter)) leaf_name_data.push_back(bandwidth_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "measure-sr-traffic")
    {
        measure_sr_traffic = value;
        measure_sr_traffic.value_namespace = name_space;
        measure_sr_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-interval")
    {
        collection_interval = value;
        collection_interval.value_namespace = name_space;
        collection_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-interval")
    {
        adjustment_interval = value;
        adjustment_interval.value_namespace = name_space;
        adjustment_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-multiplier")
    {
        bandwidth_multiplier = value;
        bandwidth_multiplier.value_namespace = name_space;
        bandwidth_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "measure-sr-traffic")
    {
        measure_sr_traffic.yfilter = yfilter;
    }
    if(value_path == "collection-interval")
    {
        collection_interval.yfilter = yfilter;
    }
    if(value_path == "adjustment-interval")
    {
        adjustment_interval.yfilter = yfilter;
    }
    if(value_path == "bandwidth-multiplier")
    {
        bandwidth_multiplier.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "measure-sr-traffic" || name == "collection-interval" || name == "adjustment-interval" || name == "bandwidth-multiplier")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::State()
    :
    measure_sr_traffic{YType::boolean, "measure-sr-traffic"},
    collection_interval{YType::uint32, "collection-interval"},
    adjustment_interval{YType::uint32, "adjustment-interval"},
    bandwidth_multiplier{YType::str, "bandwidth-multiplier"},
    effective_adjustment_interval{YType::uint32, "effective-adjustment-interval"}
{

    yang_name = "state"; yang_parent_name = "bandwidth-measurement"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::has_data() const
{
    if (is_presence_container) return true;
    return measure_sr_traffic.is_set
	|| collection_interval.is_set
	|| adjustment_interval.is_set
	|| bandwidth_multiplier.is_set
	|| effective_adjustment_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(measure_sr_traffic.yfilter)
	|| ydk::is_set(collection_interval.yfilter)
	|| ydk::is_set(adjustment_interval.yfilter)
	|| ydk::is_set(bandwidth_multiplier.yfilter)
	|| ydk::is_set(effective_adjustment_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (measure_sr_traffic.is_set || is_set(measure_sr_traffic.yfilter)) leaf_name_data.push_back(measure_sr_traffic.get_name_leafdata());
    if (collection_interval.is_set || is_set(collection_interval.yfilter)) leaf_name_data.push_back(collection_interval.get_name_leafdata());
    if (adjustment_interval.is_set || is_set(adjustment_interval.yfilter)) leaf_name_data.push_back(adjustment_interval.get_name_leafdata());
    if (bandwidth_multiplier.is_set || is_set(bandwidth_multiplier.yfilter)) leaf_name_data.push_back(bandwidth_multiplier.get_name_leafdata());
    if (effective_adjustment_interval.is_set || is_set(effective_adjustment_interval.yfilter)) leaf_name_data.push_back(effective_adjustment_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "measure-sr-traffic")
    {
        measure_sr_traffic = value;
        measure_sr_traffic.value_namespace = name_space;
        measure_sr_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-interval")
    {
        collection_interval = value;
        collection_interval.value_namespace = name_space;
        collection_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-interval")
    {
        adjustment_interval = value;
        adjustment_interval.value_namespace = name_space;
        adjustment_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-multiplier")
    {
        bandwidth_multiplier = value;
        bandwidth_multiplier.value_namespace = name_space;
        bandwidth_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-adjustment-interval")
    {
        effective_adjustment_interval = value;
        effective_adjustment_interval.value_namespace = name_space;
        effective_adjustment_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "measure-sr-traffic")
    {
        measure_sr_traffic.yfilter = yfilter;
    }
    if(value_path == "collection-interval")
    {
        collection_interval.yfilter = yfilter;
    }
    if(value_path == "adjustment-interval")
    {
        adjustment_interval.yfilter = yfilter;
    }
    if(value_path == "bandwidth-multiplier")
    {
        bandwidth_multiplier.yfilter = yfilter;
    }
    if(value_path == "effective-adjustment-interval")
    {
        effective_adjustment_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "measure-sr-traffic" || name == "collection-interval" || name == "adjustment-interval" || name == "bandwidth-multiplier" || name == "effective-adjustment-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::UpdateTrigger()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "update-trigger"; yang_parent_name = "bandwidth-measurement"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::~UpdateTrigger()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::Config()
    :
    update_trigger{YType::enumeration, "update-trigger"},
    adjusted_max_reservable_bw_pct{YType::uint8, "adjusted-max-reservable-bw-pct"},
    sr_traffic_pct{YType::uint8, "sr-traffic-pct"}
{

    yang_name = "config"; yang_parent_name = "update-trigger"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::has_data() const
{
    if (is_presence_container) return true;
    return update_trigger.is_set
	|| adjusted_max_reservable_bw_pct.is_set
	|| sr_traffic_pct.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_trigger.yfilter)
	|| ydk::is_set(adjusted_max_reservable_bw_pct.yfilter)
	|| ydk::is_set(sr_traffic_pct.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_trigger.is_set || is_set(update_trigger.yfilter)) leaf_name_data.push_back(update_trigger.get_name_leafdata());
    if (adjusted_max_reservable_bw_pct.is_set || is_set(adjusted_max_reservable_bw_pct.yfilter)) leaf_name_data.push_back(adjusted_max_reservable_bw_pct.get_name_leafdata());
    if (sr_traffic_pct.is_set || is_set(sr_traffic_pct.yfilter)) leaf_name_data.push_back(sr_traffic_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-trigger")
    {
        update_trigger = value;
        update_trigger.value_namespace = name_space;
        update_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-max-reservable-bw-pct")
    {
        adjusted_max_reservable_bw_pct = value;
        adjusted_max_reservable_bw_pct.value_namespace = name_space;
        adjusted_max_reservable_bw_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-traffic-pct")
    {
        sr_traffic_pct = value;
        sr_traffic_pct.value_namespace = name_space;
        sr_traffic_pct.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-trigger")
    {
        update_trigger.yfilter = yfilter;
    }
    if(value_path == "adjusted-max-reservable-bw-pct")
    {
        adjusted_max_reservable_bw_pct.yfilter = yfilter;
    }
    if(value_path == "sr-traffic-pct")
    {
        sr_traffic_pct.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-trigger" || name == "adjusted-max-reservable-bw-pct" || name == "sr-traffic-pct")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::State()
    :
    update_trigger{YType::enumeration, "update-trigger"},
    adjusted_max_reservable_bw_pct{YType::uint8, "adjusted-max-reservable-bw-pct"},
    sr_traffic_pct{YType::uint8, "sr-traffic-pct"}
{

    yang_name = "state"; yang_parent_name = "update-trigger"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::has_data() const
{
    if (is_presence_container) return true;
    return update_trigger.is_set
	|| adjusted_max_reservable_bw_pct.is_set
	|| sr_traffic_pct.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_trigger.yfilter)
	|| ydk::is_set(adjusted_max_reservable_bw_pct.yfilter)
	|| ydk::is_set(sr_traffic_pct.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_trigger.is_set || is_set(update_trigger.yfilter)) leaf_name_data.push_back(update_trigger.get_name_leafdata());
    if (adjusted_max_reservable_bw_pct.is_set || is_set(adjusted_max_reservable_bw_pct.yfilter)) leaf_name_data.push_back(adjusted_max_reservable_bw_pct.get_name_leafdata());
    if (sr_traffic_pct.is_set || is_set(sr_traffic_pct.yfilter)) leaf_name_data.push_back(sr_traffic_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-trigger")
    {
        update_trigger = value;
        update_trigger.value_namespace = name_space;
        update_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-max-reservable-bw-pct")
    {
        adjusted_max_reservable_bw_pct = value;
        adjusted_max_reservable_bw_pct.value_namespace = name_space;
        adjusted_max_reservable_bw_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-traffic-pct")
    {
        sr_traffic_pct = value;
        sr_traffic_pct.value_namespace = name_space;
        sr_traffic_pct.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-trigger")
    {
        update_trigger.yfilter = yfilter;
    }
    if(value_path == "adjusted-max-reservable-bw-pct")
    {
        adjusted_max_reservable_bw_pct.yfilter = yfilter;
    }
    if(value_path == "sr-traffic-pct")
    {
        sr_traffic_pct.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-trigger" || name == "adjusted-max-reservable-bw-pct" || name == "sr-traffic-pct")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::TeInterfaceAttributes()
    :
    interface(this, {"interface_id"})
{

    yang_name = "te-interface-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::~TeInterfaceAttributes()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-interface-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Interface()
    :
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef>())
    , igp_flooding_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>())
    , bandwidth_measurement(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;
    igp_flooding_bandwidth->parent = this;
    bandwidth_measurement->parent = this;

    yang_name = "interface"; yang_parent_name = "te-interface-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::~Interface()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_data())
	|| (bandwidth_measurement !=  nullptr && bandwidth_measurement->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_operation())
	|| (bandwidth_measurement !=  nullptr && bandwidth_measurement->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "igp-flooding-bandwidth")
    {
        if(igp_flooding_bandwidth == nullptr)
        {
            igp_flooding_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>();
        }
        return igp_flooding_bandwidth;
    }

    if(child_yang_name == "openconfig-rsvp-sr-ext:bandwidth-measurement")
    {
        if(bandwidth_measurement == nullptr)
        {
            bandwidth_measurement = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement>();
        }
        return bandwidth_measurement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    if(igp_flooding_bandwidth != nullptr)
    {
        _children["igp-flooding-bandwidth"] = igp_flooding_bandwidth;
    }

    if(bandwidth_measurement != nullptr)
    {
        _children["openconfig-rsvp-sr-ext:bandwidth-measurement"] = bandwidth_measurement;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "igp-flooding-bandwidth" || name == "bandwidth-measurement" || name == "interface-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"},
    te_metric{YType::uint32, "te-metric"},
    srlg_membership{YType::str, "srlg-membership"},
    admin_group{YType::str, "admin-group"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_id.is_set
	|| te_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::has_operation() const
{
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(srlg_membership.yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());
    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "te-metric" || name == "srlg-membership" || name == "admin-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"},
    te_metric{YType::uint32, "te-metric"},
    srlg_membership{YType::str, "srlg-membership"},
    admin_group{YType::str, "admin-group"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_id.is_set
	|| te_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::has_operation() const
{
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(srlg_membership.yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());
    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "te-metric" || name == "srlg-membership" || name == "admin-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::IgpFloodingBandwidth()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "igp-flooding-bandwidth"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::~IgpFloodingBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-flooding-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::Config()
    :
    threshold_type{YType::enumeration, "threshold-type"},
    delta_percentage{YType::uint8, "delta-percentage"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    up_thresholds{YType::uint8, "up-thresholds"},
    down_thresholds{YType::uint8, "down-thresholds"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"}
{

    yang_name = "config"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold_type.is_set
	|| delta_percentage.is_set
	|| threshold_specification.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_operation() const
{
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(up_thresholds.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());
    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());

    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-type" || name == "delta-percentage" || name == "threshold-specification" || name == "up-thresholds" || name == "down-thresholds" || name == "up-down-thresholds")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::State()
    :
    threshold_type{YType::enumeration, "threshold-type"},
    delta_percentage{YType::uint8, "delta-percentage"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    up_thresholds{YType::uint8, "up-thresholds"},
    down_thresholds{YType::uint8, "down-thresholds"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"}
{

    yang_name = "state"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold_type.is_set
	|| delta_percentage.is_set
	|| threshold_specification.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_operation() const
{
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(up_thresholds.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());
    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());

    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-type" || name == "delta-percentage" || name == "threshold-specification" || name == "up-thresholds" || name == "down-thresholds" || name == "up-down-thresholds")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::BandwidthMeasurement()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State>())
{
    state->parent = this;

    yang_name = "bandwidth-measurement"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::~BandwidthMeasurement()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-rsvp-sr-ext:bandwidth-measurement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::State()
    :
    last_sample_time{YType::uint64, "last-sample-time"},
    last_sample_measured_rsvp_util{YType::uint64, "last-sample-measured-rsvp-util"},
    last_sample_measured_sr_util{YType::uint64, "last-sample-measured-sr-util"},
    last_calculated_time{YType::uint64, "last-calculated-time"},
    last_calculated_sr_utilisation{YType::uint64, "last-calculated-sr-utilisation"},
    last_flooded_time{YType::uint64, "last-flooded-time"}
{

    yang_name = "state"; yang_parent_name = "bandwidth-measurement"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::has_data() const
{
    if (is_presence_container) return true;
    return last_sample_time.is_set
	|| last_sample_measured_rsvp_util.is_set
	|| last_sample_measured_sr_util.is_set
	|| last_calculated_time.is_set
	|| last_calculated_sr_utilisation.is_set
	|| last_flooded_time.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_sample_time.yfilter)
	|| ydk::is_set(last_sample_measured_rsvp_util.yfilter)
	|| ydk::is_set(last_sample_measured_sr_util.yfilter)
	|| ydk::is_set(last_calculated_time.yfilter)
	|| ydk::is_set(last_calculated_sr_utilisation.yfilter)
	|| ydk::is_set(last_flooded_time.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_sample_time.is_set || is_set(last_sample_time.yfilter)) leaf_name_data.push_back(last_sample_time.get_name_leafdata());
    if (last_sample_measured_rsvp_util.is_set || is_set(last_sample_measured_rsvp_util.yfilter)) leaf_name_data.push_back(last_sample_measured_rsvp_util.get_name_leafdata());
    if (last_sample_measured_sr_util.is_set || is_set(last_sample_measured_sr_util.yfilter)) leaf_name_data.push_back(last_sample_measured_sr_util.get_name_leafdata());
    if (last_calculated_time.is_set || is_set(last_calculated_time.yfilter)) leaf_name_data.push_back(last_calculated_time.get_name_leafdata());
    if (last_calculated_sr_utilisation.is_set || is_set(last_calculated_sr_utilisation.yfilter)) leaf_name_data.push_back(last_calculated_sr_utilisation.get_name_leafdata());
    if (last_flooded_time.is_set || is_set(last_flooded_time.yfilter)) leaf_name_data.push_back(last_flooded_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-sample-time")
    {
        last_sample_time = value;
        last_sample_time.value_namespace = name_space;
        last_sample_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-measured-rsvp-util")
    {
        last_sample_measured_rsvp_util = value;
        last_sample_measured_rsvp_util.value_namespace = name_space;
        last_sample_measured_rsvp_util.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-measured-sr-util")
    {
        last_sample_measured_sr_util = value;
        last_sample_measured_sr_util.value_namespace = name_space;
        last_sample_measured_sr_util.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-calculated-time")
    {
        last_calculated_time = value;
        last_calculated_time.value_namespace = name_space;
        last_calculated_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-calculated-sr-utilisation")
    {
        last_calculated_sr_utilisation = value;
        last_calculated_sr_utilisation.value_namespace = name_space;
        last_calculated_sr_utilisation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-time")
    {
        last_flooded_time = value;
        last_flooded_time.value_namespace = name_space;
        last_flooded_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-sample-time")
    {
        last_sample_time.yfilter = yfilter;
    }
    if(value_path == "last-sample-measured-rsvp-util")
    {
        last_sample_measured_rsvp_util.yfilter = yfilter;
    }
    if(value_path == "last-sample-measured-sr-util")
    {
        last_sample_measured_sr_util.yfilter = yfilter;
    }
    if(value_path == "last-calculated-time")
    {
        last_calculated_time.yfilter = yfilter;
    }
    if(value_path == "last-calculated-sr-utilisation")
    {
        last_calculated_sr_utilisation.yfilter = yfilter;
    }
    if(value_path == "last-flooded-time")
    {
        last_flooded_time.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::BandwidthMeasurement::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-sample-time" || name == "last-sample-measured-rsvp-util" || name == "last-sample-measured-sr-util" || name == "last-calculated-time" || name == "last-calculated-sr-utilisation" || name == "last-flooded-time")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SignalingProtocols()
    :
    rsvp_te(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe>())
    , ldp(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp>())
    , segment_routing(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting>())
{
    rsvp_te->parent = this;
    ldp->parent = this;
    segment_routing->parent = this;

    yang_name = "signaling-protocols"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::~SignalingProtocols()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_te !=  nullptr && rsvp_te->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_te !=  nullptr && rsvp_te->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te")
    {
        if(rsvp_te == nullptr)
        {
            rsvp_te = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe>();
        }
        return rsvp_te;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_te != nullptr)
    {
        _children["rsvp-te"] = rsvp_te;
    }

    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te" || name == "ldp" || name == "segment-routing")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::RsvpTe()
    :
    sessions(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions>())
    , neighbors(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors>())
    , global(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global>())
    , interface_attributes(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>())
{
    sessions->parent = this;
    neighbors->parent = this;
    global->parent = this;
    interface_attributes->parent = this;

    yang_name = "rsvp-te"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::~RsvpTe()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interface_attributes !=  nullptr && interface_attributes->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interface_attributes !=  nullptr && interface_attributes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global>();
        }
        return global;
    }

    if(child_yang_name == "interface-attributes")
    {
        if(interface_attributes == nullptr)
        {
            interface_attributes = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>();
        }
        return interface_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(interface_attributes != nullptr)
    {
        _children["interface-attributes"] = interface_attributes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "neighbors" || name == "global" || name == "interface-attributes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Sessions()
    :
    session(this, {"local_index"})
{

    yang_name = "sessions"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::~Sessions()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::Session()
    :
    local_index{YType::str, "local-index"}
        ,
    record_route_objects(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State>())
{
    record_route_objects->parent = this;
    state->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::~Session()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return local_index.is_set
	|| (record_route_objects !=  nullptr && record_route_objects->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_index.yfilter)
	|| (record_route_objects !=  nullptr && record_route_objects->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(local_index, "local-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_index.is_set || is_set(local_index.yfilter)) leaf_name_data.push_back(local_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "record-route-objects")
    {
        if(record_route_objects == nullptr)
        {
            record_route_objects = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects>();
        }
        return record_route_objects;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(record_route_objects != nullptr)
    {
        _children["record-route-objects"] = record_route_objects;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-index")
    {
        local_index = value;
        local_index.value_namespace = name_space;
        local_index.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-index")
    {
        local_index.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record-route-objects" || name == "state" || name == "local-index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObjects()
    :
    record_route_object(this, {"index_"})
{

    yang_name = "record-route-objects"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::~RecordRouteObjects()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<record_route_object.len(); index++)
    {
        if(record_route_object[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::has_operation() const
{
    for (std::size_t index=0; index<record_route_object.len(); index++)
    {
        if(record_route_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "record-route-object")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject>();
        ent_->parent = this;
        record_route_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : record_route_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record-route-object")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::RecordRouteObject()
    :
    index_{YType::str, "index"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State>())
{
    state->parent = this;

    yang_name = "record-route-object"; yang_parent_name = "record-route-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::~RecordRouteObject()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route-object";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::State()
    :
    index_{YType::uint8, "index"},
    address{YType::str, "address"},
    reported_label{YType::str, "reported-label"},
    reported_flags{YType::uint8, "reported-flags"}
{

    yang_name = "state"; yang_parent_name = "record-route-object"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| address.is_set
	|| reported_label.is_set
	|| reported_flags.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(reported_label.yfilter)
	|| ydk::is_set(reported_flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (reported_label.is_set || is_set(reported_label.yfilter)) leaf_name_data.push_back(reported_label.get_name_leafdata());
    if (reported_flags.is_set || is_set(reported_flags.yfilter)) leaf_name_data.push_back(reported_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-label")
    {
        reported_label = value;
        reported_label.value_namespace = name_space;
        reported_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-flags")
    {
        reported_flags = value;
        reported_flags.value_namespace = name_space;
        reported_flags.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "reported-label")
    {
        reported_label.yfilter = yfilter;
    }
    if(value_path == "reported-flags")
    {
        reported_flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "address" || name == "reported-label" || name == "reported-flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::State()
    :
    local_index{YType::uint64, "local-index"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    session_name{YType::str, "session-name"},
    status{YType::enumeration, "status"},
    type{YType::identityref, "type"},
    protection_requested{YType::identityref, "protection-requested"},
    label_in{YType::str, "label-in"},
    label_out{YType::str, "label-out"}
        ,
    sender_tspec(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec>())
{
    sender_tspec->parent = this;

    yang_name = "state"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::has_data() const
{
    if (is_presence_container) return true;
    return local_index.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| session_name.is_set
	|| status.is_set
	|| type.is_set
	|| protection_requested.is_set
	|| label_in.is_set
	|| label_out.is_set
	|| (sender_tspec !=  nullptr && sender_tspec->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_index.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(protection_requested.yfilter)
	|| ydk::is_set(label_in.yfilter)
	|| ydk::is_set(label_out.yfilter)
	|| (sender_tspec !=  nullptr && sender_tspec->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_index.is_set || is_set(local_index.yfilter)) leaf_name_data.push_back(local_index.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (protection_requested.is_set || is_set(protection_requested.yfilter)) leaf_name_data.push_back(protection_requested.get_name_leafdata());
    if (label_in.is_set || is_set(label_in.yfilter)) leaf_name_data.push_back(label_in.get_name_leafdata());
    if (label_out.is_set || is_set(label_out.yfilter)) leaf_name_data.push_back(label_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-tspec")
    {
        if(sender_tspec == nullptr)
        {
            sender_tspec = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec>();
        }
        return sender_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sender_tspec != nullptr)
    {
        _children["sender-tspec"] = sender_tspec;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-index")
    {
        local_index = value;
        local_index.value_namespace = name_space;
        local_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-requested")
    {
        protection_requested = value;
        protection_requested.value_namespace = name_space;
        protection_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-in")
    {
        label_in = value;
        label_in.value_namespace = name_space;
        label_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-out")
    {
        label_out = value;
        label_out.value_namespace = name_space;
        label_out.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-index")
    {
        local_index.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "protection-requested")
    {
        protection_requested.yfilter = yfilter;
    }
    if(value_path == "label-in")
    {
        label_in.yfilter = yfilter;
    }
    if(value_path == "label-out")
    {
        label_out.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-tspec" || name == "local-index" || name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lsp-id" || name == "session-name" || name == "status" || name == "type" || name == "protection-requested" || name == "label-in" || name == "label-out")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::SenderTspec()
    :
    rate{YType::str, "rate"},
    size{YType::str, "size"},
    peak_data_rate{YType::str, "peak-data-rate"}
{

    yang_name = "sender-tspec"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::~SenderTspec()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set
	|| size.is_set
	|| peak_data_rate.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(peak_data_rate.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (peak_data_rate.is_set || is_set(peak_data_rate.yfilter)) leaf_name_data.push_back(peak_data_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-data-rate")
    {
        peak_data_rate = value;
        peak_data_rate.value_namespace = name_space;
        peak_data_rate.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "peak-data-rate")
    {
        peak_data_rate.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "size" || name == "peak-data-rate")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbors()
    :
    neighbor(this, {"address"})
{

    yang_name = "neighbors"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::Neighbor()
    :
    address{YType::str, "address"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State>())
{
    state->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::~Neighbor()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::State()
    :
    address{YType::str, "address"},
    detected_interface{YType::str, "detected-interface"},
    neighbor_status{YType::enumeration, "neighbor-status"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "state"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| detected_interface.is_set
	|| neighbor_status.is_set
	|| refresh_reduction.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(detected_interface.yfilter)
	|| ydk::is_set(neighbor_status.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (detected_interface.is_set || is_set(detected_interface.yfilter)) leaf_name_data.push_back(detected_interface.get_name_leafdata());
    if (neighbor_status.is_set || is_set(neighbor_status.yfilter)) leaf_name_data.push_back(neighbor_status.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detected-interface")
    {
        detected_interface = value;
        detected_interface.value_namespace = name_space;
        detected_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-status")
    {
        neighbor_status = value;
        neighbor_status.value_namespace = name_space;
        neighbor_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "detected-interface")
    {
        detected_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-status")
    {
        neighbor_status.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "detected-interface" || name == "neighbor-status" || name == "refresh-reduction")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Global()
    :
    graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>())
    , soft_preemption(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>())
    , hellos(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State>())
{
    graceful_restart->parent = this;
    soft_preemption->parent = this;
    hellos->parent = this;
    state->parent = this;

    yang_name = "global"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::~Global()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (hellos !=  nullptr && hellos->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "hellos")
    {
        if(hellos == nullptr)
        {
            hellos = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos>();
        }
        return hellos;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(soft_preemption != nullptr)
    {
        _children["soft-preemption"] = soft_preemption;
    }

    if(hellos != nullptr)
    {
        _children["hellos"] = hellos;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "soft-preemption" || name == "hellos" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::Config()
    :
    enable{YType::boolean, "enable"},
    restart_time{YType::uint32, "restart-time"},
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| restart_time.is_set
	|| recovery_time.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "restart-time" || name == "recovery-time")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::State()
    :
    enable{YType::boolean, "enable"},
    restart_time{YType::uint32, "restart-time"},
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| restart_time.is_set
	|| recovery_time.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "restart-time" || name == "recovery-time")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::SoftPreemption()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::~SoftPreemption()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::Config()
    :
    enable{YType::boolean, "enable"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"}
{

    yang_name = "config"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| soft_preemption_timeout.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "soft-preemption-timeout")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::State()
    :
    enable{YType::boolean, "enable"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"}
{

    yang_name = "state"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| soft_preemption_timeout.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "soft-preemption-timeout")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Hellos()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "hellos"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::~Hellos()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hellos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::Config()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "config"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_data() const
{
    if (is_presence_container) return true;
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::State()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "state"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_data() const
{
    if (is_presence_container) return true;
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::State()
    :
    counters(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::Counters()
    :
    path_timeouts{YType::uint64, "path-timeouts"},
    reservation_timeouts{YType::uint64, "reservation-timeouts"},
    rate_limited_messages{YType::uint64, "rate-limited-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::~Counters()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_data() const
{
    if (is_presence_container) return true;
    return path_timeouts.is_set
	|| reservation_timeouts.is_set
	|| rate_limited_messages.is_set
	|| in_path_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_hello_messages.is_set
	|| in_srefresh_messages.is_set
	|| in_ack_messages.is_set
	|| out_path_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_hello_messages.is_set
	|| out_srefresh_messages.is_set
	|| out_ack_messages.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_timeouts.yfilter)
	|| ydk::is_set(reservation_timeouts.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_timeouts.is_set || is_set(path_timeouts.yfilter)) leaf_name_data.push_back(path_timeouts.get_name_leafdata());
    if (reservation_timeouts.is_set || is_set(reservation_timeouts.yfilter)) leaf_name_data.push_back(reservation_timeouts.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-timeouts")
    {
        path_timeouts = value;
        path_timeouts.value_namespace = name_space;
        path_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts = value;
        reservation_timeouts.value_namespace = name_space;
        reservation_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-timeouts")
    {
        path_timeouts.yfilter = yfilter;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-timeouts" || name == "reservation-timeouts" || name == "rate-limited-messages" || name == "in-path-messages" || name == "in-path-error-messages" || name == "in-path-tear-messages" || name == "in-reservation-messages" || name == "in-reservation-error-messages" || name == "in-reservation-tear-messages" || name == "in-hello-messages" || name == "in-srefresh-messages" || name == "in-ack-messages" || name == "out-path-messages" || name == "out-path-error-messages" || name == "out-path-tear-messages" || name == "out-reservation-messages" || name == "out-reservation-error-messages" || name == "out-reservation-tear-messages" || name == "out-hello-messages" || name == "out-srefresh-messages" || name == "out-ack-messages")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::InterfaceAttributes()
    :
    interface(this, {"interface_id"})
{

    yang_name = "interface-attributes"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::~InterfaceAttributes()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Interface()
    :
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef>())
    , bandwidth_reservations(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations>())
    , hellos(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>())
    , authentication(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>())
    , subscription(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>())
    , protection(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;
    bandwidth_reservations->parent = this;
    hellos->parent = this;
    authentication->parent = this;
    subscription->parent = this;
    protection->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::~Interface()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (bandwidth_reservations !=  nullptr && bandwidth_reservations->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (subscription !=  nullptr && subscription->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (bandwidth_reservations !=  nullptr && bandwidth_reservations->has_operation())
	|| (hellos !=  nullptr && hellos->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (subscription !=  nullptr && subscription->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "bandwidth-reservations")
    {
        if(bandwidth_reservations == nullptr)
        {
            bandwidth_reservations = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations>();
        }
        return bandwidth_reservations;
    }

    if(child_yang_name == "hellos")
    {
        if(hellos == nullptr)
        {
            hellos = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>();
        }
        return hellos;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "subscription")
    {
        if(subscription == nullptr)
        {
            subscription = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>();
        }
        return subscription;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    if(bandwidth_reservations != nullptr)
    {
        _children["bandwidth-reservations"] = bandwidth_reservations;
    }

    if(hellos != nullptr)
    {
        _children["hellos"] = hellos;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(subscription != nullptr)
    {
        _children["subscription"] = subscription;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "bandwidth-reservations" || name == "hellos" || name == "authentication" || name == "subscription" || name == "protection" || name == "interface-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"}
        ,
    counters(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "interface-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::Counters()
    :
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::~Counters()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_data() const
{
    if (is_presence_container) return true;
    return in_path_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_hello_messages.is_set
	|| in_srefresh_messages.is_set
	|| in_ack_messages.is_set
	|| out_path_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_hello_messages.is_set
	|| out_srefresh_messages.is_set
	|| out_ack_messages.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-path-messages" || name == "in-path-error-messages" || name == "in-path-tear-messages" || name == "in-reservation-messages" || name == "in-reservation-error-messages" || name == "in-reservation-tear-messages" || name == "in-hello-messages" || name == "in-srefresh-messages" || name == "in-ack-messages" || name == "out-path-messages" || name == "out-path-error-messages" || name == "out-path-tear-messages" || name == "out-reservation-messages" || name == "out-reservation-error-messages" || name == "out-reservation-tear-messages" || name == "out-hello-messages" || name == "out-srefresh-messages" || name == "out-ack-messages")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservations()
    :
    bandwidth_reservation(this, {"priority"})
{

    yang_name = "bandwidth-reservations"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::~BandwidthReservations()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bandwidth_reservation.len(); index++)
    {
        if(bandwidth_reservation[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_reservation.len(); index++)
    {
        if(bandwidth_reservation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-reservations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-reservation")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation>();
        ent_->parent = this;
        bandwidth_reservation.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bandwidth_reservation.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-reservation")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::BandwidthReservation()
    :
    priority{YType::str, "priority"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State>())
{
    state->parent = this;

    yang_name = "bandwidth-reservation"; yang_parent_name = "bandwidth-reservations"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::~BandwidthReservation()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-reservation";
    ADD_KEY_TOKEN(priority, "priority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "priority")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::State()
    :
    priority{YType::str, "priority"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    reserved_bandwidth{YType::uint64, "reserved-bandwidth"},
    active_reservations_count{YType::uint64, "active-reservations-count"},
    highwater_mark{YType::uint64, "highwater-mark"}
{

    yang_name = "state"; yang_parent_name = "bandwidth-reservation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| available_bandwidth.is_set
	|| reserved_bandwidth.is_set
	|| active_reservations_count.is_set
	|| highwater_mark.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(active_reservations_count.yfilter)
	|| ydk::is_set(highwater_mark.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (active_reservations_count.is_set || is_set(active_reservations_count.yfilter)) leaf_name_data.push_back(active_reservations_count.get_name_leafdata());
    if (highwater_mark.is_set || is_set(highwater_mark.yfilter)) leaf_name_data.push_back(highwater_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-reservations-count")
    {
        active_reservations_count = value;
        active_reservations_count.value_namespace = name_space;
        active_reservations_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highwater-mark")
    {
        highwater_mark = value;
        highwater_mark.value_namespace = name_space;
        highwater_mark.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "active-reservations-count")
    {
        active_reservations_count.yfilter = yfilter;
    }
    if(value_path == "highwater-mark")
    {
        highwater_mark.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "available-bandwidth" || name == "reserved-bandwidth" || name == "active-reservations-count" || name == "highwater-mark")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Hellos()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "hellos"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::~Hellos()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hellos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::Config()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "config"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_data() const
{
    if (is_presence_container) return true;
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::State()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "state"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_data() const
{
    if (is_presence_container) return true;
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Authentication()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::~Authentication()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::Config()
    :
    enable{YType::boolean, "enable"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "config"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| authentication_key.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "authentication-key")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::State()
    :
    enable{YType::boolean, "enable"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "state"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| authentication_key.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "authentication-key")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Subscription()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "subscription"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::~Subscription()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::Config()
    :
    subscription{YType::uint8, "subscription"}
{

    yang_name = "config"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_data() const
{
    if (is_presence_container) return true;
    return subscription.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription.is_set || is_set(subscription.yfilter)) leaf_name_data.push_back(subscription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription")
    {
        subscription = value;
        subscription.value_namespace = name_space;
        subscription.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription")
    {
        subscription.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::State()
    :
    subscription{YType::uint8, "subscription"},
    calculated_absolute_subscription_bw{YType::uint64, "calculated-absolute-subscription-bw"},
    adjusted_absolute_subscription_bw{YType::uint64, "openconfig-rsvp-sr-ext:adjusted-absolute-subscription-bw"}
{

    yang_name = "state"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_data() const
{
    if (is_presence_container) return true;
    return subscription.is_set
	|| calculated_absolute_subscription_bw.is_set
	|| adjusted_absolute_subscription_bw.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription.yfilter)
	|| ydk::is_set(calculated_absolute_subscription_bw.yfilter)
	|| ydk::is_set(adjusted_absolute_subscription_bw.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription.is_set || is_set(subscription.yfilter)) leaf_name_data.push_back(subscription.get_name_leafdata());
    if (calculated_absolute_subscription_bw.is_set || is_set(calculated_absolute_subscription_bw.yfilter)) leaf_name_data.push_back(calculated_absolute_subscription_bw.get_name_leafdata());
    if (adjusted_absolute_subscription_bw.is_set || is_set(adjusted_absolute_subscription_bw.yfilter)) leaf_name_data.push_back(adjusted_absolute_subscription_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription")
    {
        subscription = value;
        subscription.value_namespace = name_space;
        subscription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calculated-absolute-subscription-bw")
    {
        calculated_absolute_subscription_bw = value;
        calculated_absolute_subscription_bw.value_namespace = name_space;
        calculated_absolute_subscription_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openconfig-rsvp-sr-ext:adjusted-absolute-subscription-bw")
    {
        adjusted_absolute_subscription_bw = value;
        adjusted_absolute_subscription_bw.value_namespace = name_space;
        adjusted_absolute_subscription_bw.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription")
    {
        subscription.yfilter = yfilter;
    }
    if(value_path == "calculated-absolute-subscription-bw")
    {
        calculated_absolute_subscription_bw.yfilter = yfilter;
    }
    if(value_path == "adjusted-absolute-subscription-bw")
    {
        adjusted_absolute_subscription_bw.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription" || name == "calculated-absolute-subscription-bw" || name == "adjusted-absolute-subscription-bw")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Protection()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "protection"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::~Protection()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::Config()
    :
    link_protection_style_requested{YType::identityref, "link-protection-style-requested"},
    bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"}
{

    yang_name = "config"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_data() const
{
    if (is_presence_container) return true;
    return link_protection_style_requested.is_set
	|| bypass_optimize_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protection_style_requested.yfilter)
	|| ydk::is_set(bypass_optimize_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.yfilter)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());
    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.yfilter)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
        link_protection_style_requested.value_namespace = name_space;
        link_protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
        bypass_optimize_interval.value_namespace = name_space;
        bypass_optimize_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protection-style-requested" || name == "bypass-optimize-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::State()
    :
    link_protection_style_requested{YType::identityref, "link-protection-style-requested"},
    bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"}
{

    yang_name = "state"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_data() const
{
    if (is_presence_container) return true;
    return link_protection_style_requested.is_set
	|| bypass_optimize_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protection_style_requested.yfilter)
	|| ydk::is_set(bypass_optimize_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.yfilter)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());
    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.yfilter)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
        link_protection_style_requested.value_namespace = name_space;
        link_protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
        bypass_optimize_interval.value_namespace = name_space;
        bypass_optimize_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protection-style-requested" || name == "bypass-optimize-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::Ldp()
{

    yang_name = "ldp"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::~Ldp()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::has_operation() const
{
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::SegmentRouting()
    :
    aggregate_sid_counters(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters>())
    , interfaces(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces>())
{
    aggregate_sid_counters->parent = this;
    interfaces->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::~SegmentRouting()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (aggregate_sid_counters !=  nullptr && aggregate_sid_counters->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate_sid_counters !=  nullptr && aggregate_sid_counters->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-sid-counters")
    {
        if(aggregate_sid_counters == nullptr)
        {
            aggregate_sid_counters = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters>();
        }
        return aggregate_sid_counters;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregate_sid_counters != nullptr)
    {
        _children["aggregate-sid-counters"] = aggregate_sid_counters;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-sid-counters" || name == "interfaces")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounters()
    :
    aggregate_sid_counter(this, {"mpls_label"})
{

    yang_name = "aggregate-sid-counters"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::~AggregateSidCounters()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggregate_sid_counter.len(); index++)
    {
        if(aggregate_sid_counter[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::has_operation() const
{
    for (std::size_t index=0; index<aggregate_sid_counter.len(); index++)
    {
        if(aggregate_sid_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-sid-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-sid-counter")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter>();
        ent_->parent = this;
        aggregate_sid_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggregate_sid_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-sid-counter")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::AggregateSidCounter()
    :
    mpls_label{YType::str, "mpls-label"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State>())
{
    state->parent = this;

    yang_name = "aggregate-sid-counter"; yang_parent_name = "aggregate-sid-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::~AggregateSidCounter()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-sid-counter";
    ADD_KEY_TOKEN(mpls_label, "mpls-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "mpls-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::State()
    :
    mpls_label{YType::str, "mpls-label"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "aggregate-sid-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-label" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::EntryType::STATIC {0, "STATIC"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::EntryType::DYNAMIC {1, "DYNAMIC"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::UpdateTrigger_::ADJUSTED_MAX_RESERVABLE_PCT {0, "ADJUSTED_MAX_RESERVABLE_PCT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::Config::UpdateTrigger_::SR_TRAFFIC_PCT {1, "SR_TRAFFIC_PCT"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::UpdateTrigger_::ADJUSTED_MAX_RESERVABLE_PCT {0, "ADJUSTED_MAX_RESERVABLE_PCT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeGlobalAttributes::BandwidthMeasurement::UpdateTrigger::State::UpdateTrigger_::SR_TRAFFIC_PCT {1, "SR_TRAFFIC_PCT"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD_CROSSED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED_UP_DOWN"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE_UP_DOWN"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD_CROSSED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED_UP_DOWN"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE_UP_DOWN"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::Status::UP {0, "UP"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::Status::DOWN {1, "DOWN"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::PeakDataRate::INFINITY_ {0, "INFINITY"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::NeighborStatus::UP {0, "UP"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::NeighborStatus::DOWN {1, "DOWN"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::Priority::ALL {0, "ALL"};


}
}

