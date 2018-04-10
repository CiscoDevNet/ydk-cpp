
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
{

    yang_name = "network-instances"; yang_parent_name = "openconfig-network-instance"; is_top_level_class = true; has_list_ancestor = false;
}

NetworkInstances::~NetworkInstances()
{
}

bool NetworkInstances::has_data() const
{
    for (std::size_t index=0; index<network_instance.size(); index++)
    {
        if(network_instance[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::has_operation() const
{
    for (std::size_t index=0; index<network_instance.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instance")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance>();
        c->parent = this;
        network_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : network_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NetworkInstances::clone_ptr() const
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
	,config(std::make_shared<NetworkInstances::NetworkInstance::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::State>())
	,encapsulation(std::make_shared<NetworkInstances::NetworkInstance::Encapsulation>())
	,inter_instance_policies(std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies>())
	,table_connections(std::make_shared<NetworkInstances::NetworkInstance::TableConnections>())
	,interfaces(std::make_shared<NetworkInstances::NetworkInstance::Interfaces>())
	,tables(std::make_shared<NetworkInstances::NetworkInstance::Tables>())
	,connection_points(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints>())
	,mpls(std::make_shared<NetworkInstances::NetworkInstance::Mpls>())
	,segment_routing(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting>())
	,vlans(std::make_shared<NetworkInstances::NetworkInstance::Vlans>())
	,afts(std::make_shared<NetworkInstances::NetworkInstance::Afts>())
	,protocols(std::make_shared<NetworkInstances::NetworkInstance::Protocols>())
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
    path_buffer << "network-instance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb != nullptr)
    {
        children["fdb"] = fdb;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(inter_instance_policies != nullptr)
    {
        children["inter-instance-policies"] = inter_instance_policies;
    }

    if(table_connections != nullptr)
    {
        children["table-connections"] = table_connections;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(tables != nullptr)
    {
        children["tables"] = tables;
    }

    if(connection_points != nullptr)
    {
        children["connection-points"] = connection_points;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(vlans != nullptr)
    {
        children["vlans"] = vlans;
    }

    if(afts != nullptr)
    {
        children["afts"] = afts;
    }

    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Fdb::State>())
	,mac_table(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(mac_table != nullptr)
    {
        children["mac-table"] = mac_table;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(entries != nullptr)
    {
        children["entries"] = entries;
    }

    return children;
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
{

    yang_name = "entries"; yang_parent_name = "mac-table"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::~Entries()
{
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State>())
	,interface(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface>())
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
    path_buffer << "entry" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Encapsulation::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Encapsulation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Encapsulation::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Encapsulation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Encapsulation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::InterInstancePolicies::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "table-connections"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::TableConnections::~TableConnections()
{
}

bool NetworkInstances::NetworkInstance::TableConnections::has_data() const
{
    for (std::size_t index=0; index<table_connection.size(); index++)
    {
        if(table_connection[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::TableConnections::has_operation() const
{
    for (std::size_t index=0; index<table_connection.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::TableConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-connection")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::TableConnections::TableConnection>();
        c->parent = this;
        table_connection.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::TableConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : table_connection)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::TableConnections::TableConnection::State>())
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
    path_buffer << "table-connection" <<"[src-protocol='" <<src_protocol <<"']" <<"[dst-protocol='" <<dst_protocol <<"']" <<"[address-family='" <<address_family <<"']";
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::TableConnections::TableConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::TableConnections::TableConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::TableConnections::TableConnection::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::TableConnections::TableConnection::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "interfaces"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Interfaces::~Interfaces()
{
}

bool NetworkInstances::NetworkInstance::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Interfaces::Interface::State>())
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
    path_buffer << "interface" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "tables"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Tables::~Tables()
{
}

bool NetworkInstances::NetworkInstance::Tables::has_data() const
{
    for (std::size_t index=0; index<table.size(); index++)
    {
        if(table[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Tables::has_operation() const
{
    for (std::size_t index=0; index<table.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Tables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Tables::Table>();
        c->parent = this;
        table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Tables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : table)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Tables::Table::State>())
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
    path_buffer << "table" <<"[protocol='" <<protocol <<"']" <<"[address-family='" <<address_family <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Tables::Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Tables::Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Tables::Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Tables::Table::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Tables::Table::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Tables::Table::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Tables::Table::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "connection-points"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::ConnectionPoints::~ConnectionPoints()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::has_data() const
{
    for (std::size_t index=0; index<connection_point.size(); index++)
    {
        if(connection_point[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::has_operation() const
{
    for (std::size_t index=0; index<connection_point.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-point")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint>();
        c->parent = this;
        connection_point.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : connection_point)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State>())
	,endpoints(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints>())
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
    path_buffer << "connection-point" <<"[connection-point-id='" <<connection_point_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_point_id.is_set || is_set(connection_point_id.yfilter)) leaf_name_data.push_back(connection_point_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(endpoints != nullptr)
    {
        children["endpoints"] = endpoints;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "endpoints"; yang_parent_name = "connection-point"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::~Endpoints()
{
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::has_data() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
    {
        if(endpoint[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::has_operation() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "endpoint")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint>();
        c->parent = this;
        endpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : endpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State>())
	,local(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local>())
	,remote(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote>())
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
    path_buffer << "endpoint" <<"[endpoint-id='" <<endpoint_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_id.is_set || is_set(endpoint_id.yfilter)) leaf_name_data.push_back(endpoint_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Local::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::ConnectionPoints::ConnectionPoint::Endpoints::Endpoint::Remote::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{
    global->parent = this;

    yang_name = "mpls"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Mpls::~Mpls()
{
}

bool NetworkInstances::NetworkInstance::Mpls::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::Global()
    :
    reserved_label_blocks(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks>())
{
    reserved_label_blocks->parent = this;

    yang_name = "global"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Mpls::Global::~Global()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::has_data() const
{
    return (reserved_label_blocks !=  nullptr && reserved_label_blocks->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Global::has_operation() const
{
    return is_set(yfilter)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Mpls::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Mpls::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reserved_label_blocks != nullptr)
    {
        children["reserved-label-blocks"] = reserved_label_blocks;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserved-label-blocks")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlocks()
    :
    reserved_label_block(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock>())
{
    reserved_label_block->parent = this;

    yang_name = "reserved-label-blocks"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::~ReservedLabelBlocks()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::has_data() const
{
    return (reserved_label_block !=  nullptr && reserved_label_block->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::has_operation() const
{
    return is_set(yfilter)
	|| (reserved_label_block !=  nullptr && reserved_label_block->has_operation());
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserved-label-block")
    {
        if(reserved_label_block == nullptr)
        {
            reserved_label_block = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock>();
        }
        return reserved_label_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reserved_label_block != nullptr)
    {
        children["reserved-label-block"] = reserved_label_block;
    }

    return children;
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
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config>())
{
    config->parent = this;

    yang_name = "reserved-label-block"; yang_parent_name = "reserved-label-blocks"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::~ReservedLabelBlock()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_data() const
{
    return (config !=  nullptr && config->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserved-label-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::Config()
    :
    local_id{YType::str, "local-id"}
{

    yang_name = "config"; yang_parent_name = "reserved-label-block"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_data() const
{
    for (auto const & leaf : local_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_operation() const
{
    for (auto const & leaf : local_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter);
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


    auto local_id_name_datas = local_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_id_name_datas.begin(), local_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::SegmentRouting()
    :
    srgbs(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs>())
	,srlbs(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs>())
{
    srgbs->parent = this;
    srlbs->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::~SegmentRouting()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::has_data() const
{
    return (srgbs !=  nullptr && srgbs->has_data())
	|| (srlbs !=  nullptr && srlbs->has_data());
}

bool NetworkInstances::NetworkInstance::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (srgbs !=  nullptr && srgbs->has_operation())
	|| (srlbs !=  nullptr && srlbs->has_operation());
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgbs")
    {
        if(srgbs == nullptr)
        {
            srgbs = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs>();
        }
        return srgbs;
    }

    if(child_yang_name == "srlbs")
    {
        if(srlbs == nullptr)
        {
            srlbs = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs>();
        }
        return srlbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srgbs != nullptr)
    {
        children["srgbs"] = srgbs;
    }

    if(srlbs != nullptr)
    {
        children["srlbs"] = srlbs;
    }

    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgbs" || name == "srlbs")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgbs()
{

    yang_name = "srgbs"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::~Srgbs()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::has_data() const
{
    for (std::size_t index=0; index<srgb.size(); index++)
    {
        if(srgb[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::has_operation() const
{
    for (std::size_t index=0; index<srgb.size(); index++)
    {
        if(srgb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgb")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb>();
        c->parent = this;
        srgb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : srgb)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgb")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Srgb()
    :
    local_id{YType::str, "local-id"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "srgb"; yang_parent_name = "srgbs"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::~Srgb()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::has_data() const
{
    return local_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb" <<"[local-id='" <<local_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "local-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::Config()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_blocks{YType::str, "mpls-label-blocks"},
    ipv6_prefixes{YType::str, "ipv6-prefixes"}
{

    yang_name = "config"; yang_parent_name = "srgb"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::has_data() const
{
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_id.is_set
	|| dataplane_type.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::has_operation() const
{
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_blocks.yfilter)
	|| ydk::is_set(ipv6_prefixes.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());

    auto mpls_label_blocks_name_datas = mpls_label_blocks.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_label_blocks_name_datas.begin(), mpls_label_blocks_name_datas.end());
    auto ipv6_prefixes_name_datas = ipv6_prefixes.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_prefixes_name_datas.begin(), ipv6_prefixes_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.append(value);
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.append(value);
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-blocks" || name == "ipv6-prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::State()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_blocks{YType::str, "mpls-label-blocks"},
    ipv6_prefixes{YType::str, "ipv6-prefixes"},
    size{YType::uint32, "size"},
    used{YType::uint32, "used"}
{

    yang_name = "state"; yang_parent_name = "srgb"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::~State()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::has_data() const
{
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_id.is_set
	|| dataplane_type.is_set
	|| size.is_set
	|| used.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::has_operation() const
{
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_blocks.yfilter)
	|| ydk::is_set(ipv6_prefixes.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(used.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());

    auto mpls_label_blocks_name_datas = mpls_label_blocks.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_label_blocks_name_datas.begin(), mpls_label_blocks_name_datas.end());
    auto ipv6_prefixes_name_datas = ipv6_prefixes.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_prefixes_name_datas.begin(), ipv6_prefixes_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.append(value);
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.append(value);
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-blocks" || name == "ipv6-prefixes" || name == "size" || name == "used")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlbs()
{

    yang_name = "srlbs"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::~Srlbs()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::has_data() const
{
    for (std::size_t index=0; index<srlb.size(); index++)
    {
        if(srlb[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::has_operation() const
{
    for (std::size_t index=0; index<srlb.size(); index++)
    {
        if(srlb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlb")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb>();
        c->parent = this;
        srlb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : srlb)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlb")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Srlb()
    :
    local_id{YType::str, "local-id"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "srlb"; yang_parent_name = "srlbs"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::~Srlb()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::has_data() const
{
    return local_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlb" <<"[local-id='" <<local_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "local-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::Config()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_block{YType::str, "mpls-label-block"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "config"; yang_parent_name = "srlb"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::has_data() const
{
    return local_id.is_set
	|| dataplane_type.is_set
	|| mpls_label_block.is_set
	|| ipv6_prefix.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_block.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());
    if (mpls_label_block.is_set || is_set(mpls_label_block.yfilter)) leaf_name_data.push_back(mpls_label_block.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block = value;
        mpls_label_block.value_namespace = name_space;
        mpls_label_block.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-block" || name == "ipv6-prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::State()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_block{YType::str, "mpls-label-block"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "state"; yang_parent_name = "srlb"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::~State()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::has_data() const
{
    return local_id.is_set
	|| dataplane_type.is_set
	|| mpls_label_block.is_set
	|| ipv6_prefix.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_block.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());
    if (mpls_label_block.is_set || is_set(mpls_label_block.yfilter)) leaf_name_data.push_back(mpls_label_block.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block = value;
        mpls_label_block.value_namespace = name_space;
        mpls_label_block.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-block" || name == "ipv6-prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlans()
{

    yang_name = "vlans"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::~Vlans()
{
}

bool NetworkInstances::NetworkInstance::Vlans::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Vlans::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlans";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Vlans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Vlan()
    :
    vlan_id{YType::str, "vlan-id"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::State>())
	,members(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members>())
{
    config->parent = this;
    state->parent = this;
    members->parent = this;

    yang_name = "vlan"; yang_parent_name = "vlans"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::~Vlan()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::has_data() const
{
    return vlan_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::State>();
        }
        return state;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "members" || name == "vlan-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Config()
    :
    vlan_id{YType::uint16, "vlan-id"},
    name{YType::str, "name"},
    status{YType::enumeration, "status"},
    tpid{YType::identityref, "tpid"}
{

    yang_name = "config"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Config::has_data() const
{
    return vlan_id.is_set
	|| name.is_set
	|| status.is_set
	|| tpid.is_set;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(tpid.yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tpid.is_set || is_set(tpid.yfilter)) leaf_name_data.push_back(tpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpid")
    {
        tpid = value;
        tpid.value_namespace = name_space;
        tpid.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "tpid")
    {
        tpid.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "name" || name == "status" || name == "tpid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::State::State()
    :
    vlan_id{YType::uint16, "vlan-id"},
    name{YType::str, "name"},
    status{YType::enumeration, "status"},
    tpid{YType::identityref, "tpid"}
{

    yang_name = "state"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::State::has_data() const
{
    return vlan_id.is_set
	|| name.is_set
	|| status.is_set
	|| tpid.is_set;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(tpid.yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tpid.is_set || is_set(tpid.yfilter)) leaf_name_data.push_back(tpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpid")
    {
        tpid = value;
        tpid.value_namespace = name_space;
        tpid.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "tpid")
    {
        tpid.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "name" || name == "status" || name == "tpid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Members()
{

    yang_name = "members"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::~Members()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::Member()
    :
    interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef>())
{
    interface_ref->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::~Member()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::has_data() const
{
    return (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-ref")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::InterfaceRef()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State>())
{
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Afts()
{

    yang_name = "afts"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::~Afts()
{
}

bool NetworkInstances::NetworkInstance::Afts::has_data() const
{
    for (std::size_t index=0; index<aft.size(); index++)
    {
        if(aft[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::has_operation() const
{
    for (std::size_t index=0; index<aft.size(); index++)
    {
        if(aft[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aft")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft>();
        c->parent = this;
        aft.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : aft)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aft")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Aft()
    :
    address_family{YType::identityref, "address-family"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::State>())
	,entries(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries>())
{
    config->parent = this;
    state->parent = this;
    entries->parent = this;

    yang_name = "aft"; yang_parent_name = "afts"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::~Aft()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::has_data() const
{
    return address_family.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (entries !=  nullptr && entries->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Aft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (entries !=  nullptr && entries->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aft" <<"[address-family='" <<address_family <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::State>();
        }
        return state;
    }

    if(child_yang_name == "entries")
    {
        if(entries == nullptr)
        {
            entries = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries>();
        }
        return entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(entries != nullptr)
    {
        children["entries"] = entries;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "entries" || name == "address-family")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Config::Config()
    :
    address_family{YType::identityref, "address-family"}
{

    yang_name = "config"; yang_parent_name = "aft"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Config::has_data() const
{
    return address_family.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::State::State()
    :
    address_family{YType::identityref, "address-family"}
{

    yang_name = "state"; yang_parent_name = "aft"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::State::has_data() const
{
    return address_family.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entries()
{

    yang_name = "entries"; yang_parent_name = "aft"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::~Entries()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Entry()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State>())
	,match(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match>())
	,next_hops(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops>())
{
    config->parent = this;
    state->parent = this;
    match->parent = this;
    next_hops->parent = this;

    yang_name = "entry"; yang_parent_name = "entries"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::~Entry()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State>();
        }
        return state;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match>();
        }
        return match;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(next_hops != nullptr)
    {
        children["next-hops"] = next_hops;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "match" || name == "next-hops" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::Config()
    :
    index_{YType::uint64, "index"}
{

    yang_name = "config"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::has_data() const
{
    return index_.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::State()
    :
    index_{YType::uint64, "index"},
    packets_forwarded{YType::uint64, "packets-forwarded"},
    octets_forwarded{YType::uint64, "octets-forwarded"}
{

    yang_name = "state"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::has_data() const
{
    return index_.is_set
	|| packets_forwarded.is_set
	|| octets_forwarded.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(octets_forwarded.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (octets_forwarded.is_set || is_set(octets_forwarded.yfilter)) leaf_name_data.push_back(octets_forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded = value;
        octets_forwarded.value_namespace = name_space;
        octets_forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "packets-forwarded" || name == "octets-forwarded")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Match()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State>())
	,interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "match"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::~Match()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::Config()
{

    yang_name = "config"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::has_data() const
{
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::State()
    :
    ip_prefix{YType::str, "ip-prefix"},
    mac_address{YType::str, "mac-address"},
    mpls_label{YType::str, "mpls-label"},
    mpls_tc{YType::uint8, "mpls-tc"},
    ip_dscp{YType::uint8, "ip-dscp"},
    ip_protocol{YType::str, "ip-protocol"},
    l4_src_port{YType::uint16, "l4-src-port"},
    l4_dst_port{YType::uint16, "l4-dst-port"},
    origin_network_instance{YType::str, "openconfig-aft-network-instance:origin-network-instance"}
{

    yang_name = "state"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::has_data() const
{
    return ip_prefix.is_set
	|| mac_address.is_set
	|| mpls_label.is_set
	|| mpls_tc.is_set
	|| ip_dscp.is_set
	|| ip_protocol.is_set
	|| l4_src_port.is_set
	|| l4_dst_port.is_set
	|| origin_network_instance.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(mpls_tc.yfilter)
	|| ydk::is_set(ip_dscp.yfilter)
	|| ydk::is_set(ip_protocol.yfilter)
	|| ydk::is_set(l4_src_port.yfilter)
	|| ydk::is_set(l4_dst_port.yfilter)
	|| ydk::is_set(origin_network_instance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (mpls_tc.is_set || is_set(mpls_tc.yfilter)) leaf_name_data.push_back(mpls_tc.get_name_leafdata());
    if (ip_dscp.is_set || is_set(ip_dscp.yfilter)) leaf_name_data.push_back(ip_dscp.get_name_leafdata());
    if (ip_protocol.is_set || is_set(ip_protocol.yfilter)) leaf_name_data.push_back(ip_protocol.get_name_leafdata());
    if (l4_src_port.is_set || is_set(l4_src_port.yfilter)) leaf_name_data.push_back(l4_src_port.get_name_leafdata());
    if (l4_dst_port.is_set || is_set(l4_dst_port.yfilter)) leaf_name_data.push_back(l4_dst_port.get_name_leafdata());
    if (origin_network_instance.is_set || is_set(origin_network_instance.yfilter)) leaf_name_data.push_back(origin_network_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-tc")
    {
        mpls_tc = value;
        mpls_tc.value_namespace = name_space;
        mpls_tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-dscp")
    {
        ip_dscp = value;
        ip_dscp.value_namespace = name_space;
        ip_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol = value;
        ip_protocol.value_namespace = name_space;
        ip_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-src-port")
    {
        l4_src_port = value;
        l4_src_port.value_namespace = name_space;
        l4_src_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-dst-port")
    {
        l4_dst_port = value;
        l4_dst_port.value_namespace = name_space;
        l4_dst_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openconfig-aft-network-instance:origin-network-instance")
    {
        origin_network_instance = value;
        origin_network_instance.value_namespace = name_space;
        origin_network_instance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-tc")
    {
        mpls_tc.yfilter = yfilter;
    }
    if(value_path == "ip-dscp")
    {
        ip_dscp.yfilter = yfilter;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol.yfilter = yfilter;
    }
    if(value_path == "l4-src-port")
    {
        l4_src_port.yfilter = yfilter;
    }
    if(value_path == "l4-dst-port")
    {
        l4_dst_port.yfilter = yfilter;
    }
    if(value_path == "origin-network-instance")
    {
        origin_network_instance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-prefix" || name == "mac-address" || name == "mpls-label" || name == "mpls-tc" || name == "ip-dscp" || name == "ip-protocol" || name == "l4-src-port" || name == "l4-dst-port" || name == "origin-network-instance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::InterfaceRef()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State>())
{
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::Match::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHops()
{

    yang_name = "next-hops"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State>())
	,interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::Config()
    :
    index_{YType::uint64, "index"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::has_data() const
{
    return index_.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::State()
    :
    index_{YType::uint64, "index"},
    weight{YType::uint32, "weight"},
    ip_address{YType::str, "ip-address"},
    mac_address{YType::str, "mac-address"},
    popped_mpls_label_stack{YType::str, "popped-mpls-label-stack"},
    pushed_mpls_label_stack{YType::str, "pushed-mpls-label-stack"},
    decapsulate_header{YType::enumeration, "decapsulate-header"},
    encapsulate_header{YType::enumeration, "encapsulate-header"},
    origin_protocol{YType::identityref, "origin-protocol"},
    network_instance{YType::str, "openconfig-aft-network-instance:network-instance"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::has_data() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set
	|| weight.is_set
	|| ip_address.is_set
	|| mac_address.is_set
	|| decapsulate_header.is_set
	|| encapsulate_header.is_set
	|| origin_protocol.is_set
	|| network_instance.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::has_operation() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(popped_mpls_label_stack.yfilter)
	|| ydk::is_set(pushed_mpls_label_stack.yfilter)
	|| ydk::is_set(decapsulate_header.yfilter)
	|| ydk::is_set(encapsulate_header.yfilter)
	|| ydk::is_set(origin_protocol.yfilter)
	|| ydk::is_set(network_instance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (decapsulate_header.is_set || is_set(decapsulate_header.yfilter)) leaf_name_data.push_back(decapsulate_header.get_name_leafdata());
    if (encapsulate_header.is_set || is_set(encapsulate_header.yfilter)) leaf_name_data.push_back(encapsulate_header.get_name_leafdata());
    if (origin_protocol.is_set || is_set(origin_protocol.yfilter)) leaf_name_data.push_back(origin_protocol.get_name_leafdata());
    if (network_instance.is_set || is_set(network_instance.yfilter)) leaf_name_data.push_back(network_instance.get_name_leafdata());

    auto popped_mpls_label_stack_name_datas = popped_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), popped_mpls_label_stack_name_datas.begin(), popped_mpls_label_stack_name_datas.end());
    auto pushed_mpls_label_stack_name_datas = pushed_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pushed_mpls_label_stack_name_datas.begin(), pushed_mpls_label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.append(value);
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.append(value);
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header = value;
        decapsulate_header.value_namespace = name_space;
        decapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header = value;
        encapsulate_header.value_namespace = name_space;
        encapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol = value;
        origin_protocol.value_namespace = name_space;
        origin_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openconfig-aft-network-instance:network-instance")
    {
        network_instance = value;
        network_instance.value_namespace = name_space;
        network_instance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header.yfilter = yfilter;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header.yfilter = yfilter;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol.yfilter = yfilter;
    }
    if(value_path == "network-instance")
    {
        network_instance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "weight" || name == "ip-address" || name == "mac-address" || name == "popped-mpls-label-stack" || name == "pushed-mpls-label-stack" || name == "decapsulate-header" || name == "encapsulate-header" || name == "origin-protocol" || name == "network-instance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Afts::Aft::Entries::Entry::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocols()
{

    yang_name = "protocols"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::~Protocols()
{
}

bool NetworkInstances::NetworkInstance::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocol)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Protocol()
    :
    identifier{YType::identityref, "identifier"},
    name{YType::str, "name"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::State>())
	,static_routes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>())
	,local_aggregates(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates>())
	,bgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp>())
	,isis(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis>())
{
    config->parent = this;
    state->parent = this;
    static_routes->parent = this;
    local_aggregates->parent = this;
    bgp->parent = this;
    isis->parent = this;

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::~Protocol()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::has_data() const
{
    return identifier.is_set
	|| name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (local_aggregates !=  nullptr && local_aggregates->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (local_aggregates !=  nullptr && local_aggregates->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[identifier='" <<identifier <<"']" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::State>();
        }
        return state;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>();
        }
        return static_routes;
    }

    if(child_yang_name == "local-aggregates")
    {
        if(local_aggregates == nullptr)
        {
            local_aggregates = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates>();
        }
        return local_aggregates;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(static_routes != nullptr)
    {
        children["static-routes"] = static_routes;
    }

    if(local_aggregates != nullptr)
    {
        children["local-aggregates"] = local_aggregates;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "static-routes" || name == "local-aggregates" || name == "bgp" || name == "isis" || name == "identifier" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Config::Config()
    :
    identifier{YType::identityref, "identifier"},
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"},
    default_metric{YType::uint32, "default-metric"}
{

    yang_name = "config"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Config::has_data() const
{
    return identifier.is_set
	|| name.is_set
	|| enabled.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name" || name == "enabled" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::State::State()
    :
    identifier{YType::identityref, "identifier"},
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"},
    default_metric{YType::uint32, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_data() const
{
    return identifier.is_set
	|| name.is_set
	|| enabled.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name" || name == "enabled" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoutes()
{

    yang_name = "static-routes"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::~StaticRoutes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static>();
        c->parent = this;
        static_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Static()
    :
    prefix{YType::str, "prefix"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State>())
	,next_hops(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops>())
{
    config->parent = this;
    state->parent = this;
    next_hops->parent = this;

    yang_name = "static"; yang_parent_name = "static-routes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::~Static()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::has_data() const
{
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State>();
        }
        return state;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(next_hops != nullptr)
    {
        children["next-hops"] = next_hops;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "next-hops" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::Config()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "config"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::has_data() const
{
    return prefix.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::State()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "state"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::has_data() const
{
    return prefix.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHops()
{

    yang_name = "next-hops"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State>())
	,interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::Config()
    :
    index_{YType::str, "index"},
    next_hop{YType::str, "next-hop"},
    metric{YType::uint32, "metric"},
    recurse{YType::boolean, "recurse"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::has_data() const
{
    return index_.is_set
	|| next_hop.is_set
	|| metric.is_set
	|| recurse.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-hop" || name == "metric" || name == "recurse")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::State()
    :
    index_{YType::str, "index"},
    next_hop{YType::str, "next-hop"},
    metric{YType::uint32, "metric"},
    recurse{YType::boolean, "recurse"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::has_data() const
{
    return index_.is_set
	|| next_hop.is_set
	|| metric.is_set
	|| recurse.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-hop" || name == "metric" || name == "recurse")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::LocalAggregates()
{

    yang_name = "local-aggregates"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::~LocalAggregates()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::has_data() const
{
    for (std::size_t index=0; index<aggregate.size(); index++)
    {
        if(aggregate[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::has_operation() const
{
    for (std::size_t index=0; index<aggregate.size(); index++)
    {
        if(aggregate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-aggregates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate>();
        c->parent = this;
        aggregate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : aggregate)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Aggregate()
    :
    prefix{YType::str, "prefix"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "aggregate"; yang_parent_name = "local-aggregates"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::~Aggregate()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::has_data() const
{
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::Config()
    :
    prefix{YType::str, "prefix"},
    discard{YType::boolean, "discard"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "config"; yang_parent_name = "aggregate"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::has_data() const
{
    return prefix.is_set
	|| discard.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "discard" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::State()
    :
    prefix{YType::str, "prefix"},
    discard{YType::boolean, "discard"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "state"; yang_parent_name = "aggregate"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::has_data() const
{
    return prefix.is_set
	|| discard.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "discard" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Bgp()
    :
    global(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global>())
	,neighbors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors>())
	,peer_groups(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups>())
{
    global->parent = this;
    neighbors->parent = this;
    peer_groups->parent = this;

    yang_name = "bgp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::~Bgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (peer_groups !=  nullptr && peer_groups->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (peer_groups !=  nullptr && peer_groups->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global>();
        }
        return global;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "peer-groups")
    {
        if(peer_groups == nullptr)
        {
            peer_groups = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups>();
        }
        return peer_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(peer_groups != nullptr)
    {
        children["peer-groups"] = peer_groups;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "neighbors" || name == "peer-groups")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Global()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State>())
	,default_route_distance(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance>())
	,confederation(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation>())
	,graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart>())
	,use_multiple_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths>())
	,route_selection_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions>())
	,afi_safis(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis>())
	,apply_policy(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy>())
{
    config->parent = this;
    state->parent = this;
    default_route_distance->parent = this;
    confederation->parent = this;
    graceful_restart->parent = this;
    use_multiple_paths->parent = this;
    route_selection_options->parent = this;
    afi_safis->parent = this;
    apply_policy->parent = this;

    yang_name = "global"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::~Global()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (default_route_distance !=  nullptr && default_route_distance->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (route_selection_options !=  nullptr && route_selection_options->has_data())
	|| (afi_safis !=  nullptr && afi_safis->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (default_route_distance !=  nullptr && default_route_distance->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (route_selection_options !=  nullptr && route_selection_options->has_operation())
	|| (afi_safis !=  nullptr && afi_safis->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State>();
        }
        return state;
    }

    if(child_yang_name == "default-route-distance")
    {
        if(default_route_distance == nullptr)
        {
            default_route_distance = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance>();
        }
        return default_route_distance;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options == nullptr)
        {
            route_selection_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions>();
        }
        return route_selection_options;
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis>();
        }
        return afi_safis;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy>();
        }
        return apply_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(default_route_distance != nullptr)
    {
        children["default-route-distance"] = default_route_distance;
    }

    if(confederation != nullptr)
    {
        children["confederation"] = confederation;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    if(route_selection_options != nullptr)
    {
        children["route-selection-options"] = route_selection_options;
    }

    if(afi_safis != nullptr)
    {
        children["afi-safis"] = afi_safis;
    }

    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "default-route-distance" || name == "confederation" || name == "graceful-restart" || name == "use-multiple-paths" || name == "route-selection-options" || name == "afi-safis" || name == "apply-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::Config()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"}
{

    yang_name = "config"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::has_data() const
{
    return as.is_set
	|| router_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::State()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::has_data() const
{
    return as.is_set
	|| router_id.is_set
	|| total_paths.is_set
	|| total_prefixes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id" || name == "total-paths" || name == "total-prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::DefaultRouteDistance()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "default-route-distance"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::~DefaultRouteDistance()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route-distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::Config()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{

    yang_name = "config"; yang_parent_name = "default-route-distance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::has_data() const
{
    return external_route_distance.is_set
	|| internal_route_distance.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_route_distance.yfilter)
	|| ydk::is_set(internal_route_distance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.yfilter)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.yfilter)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance = value;
        external_route_distance.value_namespace = name_space;
        external_route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance = value;
        internal_route_distance.value_namespace = name_space;
        internal_route_distance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance.yfilter = yfilter;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route-distance" || name == "internal-route-distance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::State()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{

    yang_name = "state"; yang_parent_name = "default-route-distance"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::has_data() const
{
    return external_route_distance.is_set
	|| internal_route_distance.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_route_distance.yfilter)
	|| ydk::is_set(internal_route_distance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.yfilter)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.yfilter)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance = value;
        external_route_distance.value_namespace = name_space;
        external_route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance = value;
        internal_route_distance.value_namespace = name_space;
        internal_route_distance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance.yfilter = yfilter;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route-distance" || name == "internal-route-distance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Confederation()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "confederation"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::~Confederation()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{

    yang_name = "config"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::has_data() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| identifier.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::has_operation() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(member_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-as")
    {
        member_as.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "member-as")
    {
        member_as.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "identifier" || name == "member-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::State()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{

    yang_name = "state"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::has_data() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| identifier.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::has_operation() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(member_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-as")
    {
        member_as.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "member-as")
    {
        member_as.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "identifier" || name == "member-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::has_data() const
{
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::has_data() const
{
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State>())
	,ebgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp>())
	,ibgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::~UseMultiplePaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(ebgp != nullptr)
    {
        children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp" || name == "ibgp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::has_data() const
{
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::has_data() const
{
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-selection-options"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::~RouteSelectionOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::Config()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "config"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::has_data() const
{
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::State()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "state"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::has_data() const
{
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafis()
{

    yang_name = "afi-safis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::~AfiSafis()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::has_data() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi>();
        c->parent = this;
        afi_safi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : afi_safi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State>())
	,graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>())
	,route_selection_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>())
	,use_multiple_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>())
	,apply_policy(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy>())
	,ipv4_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>())
	,ipv6_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>())
	,ipv4_labeled_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast>())
	,ipv6_labeled_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast>())
	,l3vpn_ipv4_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast>())
	,l3vpn_ipv6_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast>())
	,l3vpn_ipv4_multicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast>())
	,l3vpn_ipv6_multicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast>())
	,l2vpn_vpls(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls>())
	,l2vpn_evpn(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn>())
{
    config->parent = this;
    state->parent = this;
    graceful_restart->parent = this;
    route_selection_options->parent = this;
    use_multiple_paths->parent = this;
    apply_policy->parent = this;
    ipv4_unicast->parent = this;
    ipv6_unicast->parent = this;
    ipv4_labeled_unicast->parent = this;
    ipv6_labeled_unicast->parent = this;
    l3vpn_ipv4_unicast->parent = this;
    l3vpn_ipv6_unicast->parent = this;
    l3vpn_ipv4_multicast->parent = this;
    l3vpn_ipv6_multicast->parent = this;
    l2vpn_vpls->parent = this;
    l2vpn_evpn->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::has_data() const
{
    return afi_safi_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (route_selection_options !=  nullptr && route_selection_options->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_data())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_data())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_data())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_data())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_data())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_data())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_data())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (route_selection_options !=  nullptr && route_selection_options->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_operation())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_operation())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_operation())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_operation())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_operation())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_operation())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_operation())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi" <<"[afi-safi-name='" <<afi_safi_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State>();
        }
        return state;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options == nullptr)
        {
            route_selection_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>();
        }
        return route_selection_options;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "ipv4-labeled-unicast")
    {
        if(ipv4_labeled_unicast == nullptr)
        {
            ipv4_labeled_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast>();
        }
        return ipv4_labeled_unicast;
    }

    if(child_yang_name == "ipv6-labeled-unicast")
    {
        if(ipv6_labeled_unicast == nullptr)
        {
            ipv6_labeled_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast>();
        }
        return ipv6_labeled_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast == nullptr)
        {
            l3vpn_ipv4_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
        }
        return l3vpn_ipv4_unicast;
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast == nullptr)
        {
            l3vpn_ipv6_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
        }
        return l3vpn_ipv6_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast == nullptr)
        {
            l3vpn_ipv4_multicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
        }
        return l3vpn_ipv4_multicast;
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast == nullptr)
        {
            l3vpn_ipv6_multicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
        }
        return l3vpn_ipv6_multicast;
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls == nullptr)
        {
            l2vpn_vpls = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls>();
        }
        return l2vpn_vpls;
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn == nullptr)
        {
            l2vpn_evpn = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn>();
        }
        return l2vpn_evpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(route_selection_options != nullptr)
    {
        children["route-selection-options"] = route_selection_options;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    if(ipv4_unicast != nullptr)
    {
        children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    if(ipv4_labeled_unicast != nullptr)
    {
        children["ipv4-labeled-unicast"] = ipv4_labeled_unicast;
    }

    if(ipv6_labeled_unicast != nullptr)
    {
        children["ipv6-labeled-unicast"] = ipv6_labeled_unicast;
    }

    if(l3vpn_ipv4_unicast != nullptr)
    {
        children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
    }

    if(l3vpn_ipv6_unicast != nullptr)
    {
        children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
    }

    if(l3vpn_ipv4_multicast != nullptr)
    {
        children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
    }

    if(l3vpn_ipv6_multicast != nullptr)
    {
        children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
    }

    if(l2vpn_vpls != nullptr)
    {
        children["l2vpn-vpls"] = l2vpn_vpls;
    }

    if(l2vpn_evpn != nullptr)
    {
        children["l2vpn-evpn"] = l2vpn_evpn;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "graceful-restart" || name == "route-selection-options" || name == "use-multiple-paths" || name == "apply-policy" || name == "ipv4-unicast" || name == "ipv6-unicast" || name == "ipv4-labeled-unicast" || name == "ipv6-labeled-unicast" || name == "l3vpn-ipv4-unicast" || name == "l3vpn-ipv6-unicast" || name == "l3vpn-ipv4-multicast" || name == "l3vpn-ipv6-multicast" || name == "l2vpn-vpls" || name == "l2vpn-evpn" || name == "afi-safi-name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::has_data() const
{
    return afi_safi_name.is_set
	|| enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::State()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{

    yang_name = "state"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::has_data() const
{
    return afi_safi_name.is_set
	|| enabled.is_set
	|| total_paths.is_set
	|| total_prefixes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled" || name == "total-paths" || name == "total-prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-selection-options"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::~RouteSelectionOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::Config()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "config"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_data() const
{
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::State()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "state"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_data() const
{
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>())
	,ebgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>())
	,ibgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::~UseMultiplePaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(ebgp != nullptr)
    {
        children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp" || name == "ibgp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::EntryType::STATIC {0, "STATIC"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Fdb::MacTable::Entries::Entry::State::EntryType::DYNAMIC {1, "DYNAMIC"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Status::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Status::SUSPENDED {1, "SUSPENDED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::State::Status::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::State::Status::SUSPENDED {1, "SUSPENDED"};


}
}

