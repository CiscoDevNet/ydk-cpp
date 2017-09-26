
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_arp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_arp_oper {

Arp::Arp()
    :
    nodes(std::make_shared<Arp::Nodes>())
{
    nodes->parent = this;

    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Arp::~Arp()
{
}

bool Arp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Arp::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Arp::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Arp::clone_ptr() const
{
    return std::make_shared<Arp>();
}

std::string Arp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Arp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Arp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Arp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Arp::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Arp::Nodes::~Nodes()
{
}

bool Arp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arp::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Arp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Arp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Arp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Arp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    entries(std::make_shared<Arp::Nodes::Node::Entries>())
	,resolution_history_client(std::make_shared<Arp::Nodes::Node::ResolutionHistoryClient>())
	,resolution_history_dynamic(std::make_shared<Arp::Nodes::Node::ResolutionHistoryDynamic>())
	,traffic_interfaces(std::make_shared<Arp::Nodes::Node::TrafficInterfaces>())
	,traffic_node(std::make_shared<Arp::Nodes::Node::TrafficNode>())
	,traffic_vrfs(std::make_shared<Arp::Nodes::Node::TrafficVrfs>())
{
    entries->parent = this;
    resolution_history_client->parent = this;
    resolution_history_dynamic->parent = this;
    traffic_interfaces->parent = this;
    traffic_node->parent = this;
    traffic_vrfs->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Arp::Nodes::Node::~Node()
{
}

bool Arp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (entries !=  nullptr && entries->has_data())
	|| (resolution_history_client !=  nullptr && resolution_history_client->has_data())
	|| (resolution_history_dynamic !=  nullptr && resolution_history_dynamic->has_data())
	|| (traffic_interfaces !=  nullptr && traffic_interfaces->has_data())
	|| (traffic_node !=  nullptr && traffic_node->has_data())
	|| (traffic_vrfs !=  nullptr && traffic_vrfs->has_data());
}

bool Arp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (entries !=  nullptr && entries->has_operation())
	|| (resolution_history_client !=  nullptr && resolution_history_client->has_operation())
	|| (resolution_history_dynamic !=  nullptr && resolution_history_dynamic->has_operation())
	|| (traffic_interfaces !=  nullptr && traffic_interfaces->has_operation())
	|| (traffic_node !=  nullptr && traffic_node->has_operation())
	|| (traffic_vrfs !=  nullptr && traffic_vrfs->has_operation());
}

std::string Arp::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Arp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entries")
    {
        if(entries == nullptr)
        {
            entries = std::make_shared<Arp::Nodes::Node::Entries>();
        }
        return entries;
    }

    if(child_yang_name == "resolution-history-client")
    {
        if(resolution_history_client == nullptr)
        {
            resolution_history_client = std::make_shared<Arp::Nodes::Node::ResolutionHistoryClient>();
        }
        return resolution_history_client;
    }

    if(child_yang_name == "resolution-history-dynamic")
    {
        if(resolution_history_dynamic == nullptr)
        {
            resolution_history_dynamic = std::make_shared<Arp::Nodes::Node::ResolutionHistoryDynamic>();
        }
        return resolution_history_dynamic;
    }

    if(child_yang_name == "traffic-interfaces")
    {
        if(traffic_interfaces == nullptr)
        {
            traffic_interfaces = std::make_shared<Arp::Nodes::Node::TrafficInterfaces>();
        }
        return traffic_interfaces;
    }

    if(child_yang_name == "traffic-node")
    {
        if(traffic_node == nullptr)
        {
            traffic_node = std::make_shared<Arp::Nodes::Node::TrafficNode>();
        }
        return traffic_node;
    }

    if(child_yang_name == "traffic-vrfs")
    {
        if(traffic_vrfs == nullptr)
        {
            traffic_vrfs = std::make_shared<Arp::Nodes::Node::TrafficVrfs>();
        }
        return traffic_vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entries != nullptr)
    {
        children["entries"] = entries;
    }

    if(resolution_history_client != nullptr)
    {
        children["resolution-history-client"] = resolution_history_client;
    }

    if(resolution_history_dynamic != nullptr)
    {
        children["resolution-history-dynamic"] = resolution_history_dynamic;
    }

    if(traffic_interfaces != nullptr)
    {
        children["traffic-interfaces"] = traffic_interfaces;
    }

    if(traffic_node != nullptr)
    {
        children["traffic-node"] = traffic_node;
    }

    if(traffic_vrfs != nullptr)
    {
        children["traffic-vrfs"] = traffic_vrfs;
    }

    return children;
}

void Arp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Arp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries" || name == "resolution-history-client" || name == "resolution-history-dynamic" || name == "traffic-interfaces" || name == "traffic-node" || name == "traffic-vrfs" || name == "node-name")
        return true;
    return false;
}

Arp::Nodes::Node::Entries::Entries()
{

    yang_name = "entries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::Entries::~Entries()
{
}

bool Arp::Nodes::Node::Entries::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arp::Nodes::Node::Entries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::Entries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::Entries::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::Entries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Arp::Nodes::Node::Entries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arp::Nodes::Node::Entries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Arp::Nodes::Node::Entries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Arp::Nodes::Node::Entries::Entry::Entry()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    age{YType::uint64, "age"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flag{YType::enumeration, "flag"},
    hardware_address{YType::str, "hardware-address"},
    hardware_length{YType::uint8, "hardware-length"},
    media_type{YType::enumeration, "media-type"},
    state{YType::enumeration, "state"}
{

    yang_name = "entry"; yang_parent_name = "entries"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::Entries::Entry::~Entry()
{
}

bool Arp::Nodes::Node::Entries::Entry::has_data() const
{
    return address.is_set
	|| interface_name.is_set
	|| age.is_set
	|| encapsulation_type.is_set
	|| flag.is_set
	|| hardware_address.is_set
	|| hardware_length.is_set
	|| media_type.is_set
	|| state.is_set;
}

bool Arp::Nodes::Node::Entries::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| ydk::is_set(hardware_address.yfilter)
	|| ydk::is_set(hardware_length.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Arp::Nodes::Node::Entries::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[address='" <<address <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::Entries::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (hardware_length.is_set || is_set(hardware_length.yfilter)) leaf_name_data.push_back(hardware_length.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::Entries::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Arp::Nodes::Node::Entries::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-length")
    {
        hardware_length = value;
        hardware_length.value_namespace = name_space;
        hardware_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::Nodes::Node::Entries::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
    if(value_path == "hardware-length")
    {
        hardware_length.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Arp::Nodes::Node::Entries::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name" || name == "age" || name == "encapsulation-type" || name == "flag" || name == "hardware-address" || name == "hardware-length" || name == "media-type" || name == "state")
        return true;
    return false;
}

Arp::Nodes::Node::ResolutionHistoryClient::ResolutionHistoryClient()
{

    yang_name = "resolution-history-client"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::ResolutionHistoryClient::~ResolutionHistoryClient()
{
}

bool Arp::Nodes::Node::ResolutionHistoryClient::has_data() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::ResolutionHistoryClient::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arp::Nodes::Node::ResolutionHistoryClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution-history-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::ResolutionHistoryClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-entry")
    {
        for(auto const & c : arp_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry>();
        c->parent = this;
        arp_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::ResolutionHistoryClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : arp_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Arp::Nodes::Node::ResolutionHistoryClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arp::Nodes::Node::ResolutionHistoryClient::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Arp::Nodes::Node::ResolutionHistoryClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-entry")
        return true;
    return false;
}

Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::ArpEntry()
    :
    client_id{YType::int32, "client-id"},
    entry_state{YType::int32, "entry-state"},
    idb_interface_name{YType::str, "idb-interface-name"},
    ipv4_address{YType::str, "ipv4-address"},
    mac_address{YType::str, "mac-address"},
    nsec_timestamp{YType::uint64, "nsec-timestamp"},
    resolution_request_count{YType::uint32, "resolution-request-count"},
    status{YType::enumeration, "status"}
{

    yang_name = "arp-entry"; yang_parent_name = "resolution-history-client"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::~ArpEntry()
{
}

bool Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::has_data() const
{
    return client_id.is_set
	|| entry_state.is_set
	|| idb_interface_name.is_set
	|| ipv4_address.is_set
	|| mac_address.is_set
	|| nsec_timestamp.is_set
	|| resolution_request_count.is_set
	|| status.is_set;
}

bool Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(entry_state.yfilter)
	|| ydk::is_set(idb_interface_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(nsec_timestamp.yfilter)
	|| ydk::is_set(resolution_request_count.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (entry_state.is_set || is_set(entry_state.yfilter)) leaf_name_data.push_back(entry_state.get_name_leafdata());
    if (idb_interface_name.is_set || is_set(idb_interface_name.yfilter)) leaf_name_data.push_back(idb_interface_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (nsec_timestamp.is_set || is_set(nsec_timestamp.yfilter)) leaf_name_data.push_back(nsec_timestamp.get_name_leafdata());
    if (resolution_request_count.is_set || is_set(resolution_request_count.yfilter)) leaf_name_data.push_back(resolution_request_count.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-state")
    {
        entry_state = value;
        entry_state.value_namespace = name_space;
        entry_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-interface-name")
    {
        idb_interface_name = value;
        idb_interface_name.value_namespace = name_space;
        idb_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsec-timestamp")
    {
        nsec_timestamp = value;
        nsec_timestamp.value_namespace = name_space;
        nsec_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-request-count")
    {
        resolution_request_count = value;
        resolution_request_count.value_namespace = name_space;
        resolution_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "entry-state")
    {
        entry_state.yfilter = yfilter;
    }
    if(value_path == "idb-interface-name")
    {
        idb_interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "nsec-timestamp")
    {
        nsec_timestamp.yfilter = yfilter;
    }
    if(value_path == "resolution-request-count")
    {
        resolution_request_count.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "entry-state" || name == "idb-interface-name" || name == "ipv4-address" || name == "mac-address" || name == "nsec-timestamp" || name == "resolution-request-count" || name == "status")
        return true;
    return false;
}

Arp::Nodes::Node::ResolutionHistoryDynamic::ResolutionHistoryDynamic()
{

    yang_name = "resolution-history-dynamic"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::ResolutionHistoryDynamic::~ResolutionHistoryDynamic()
{
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::has_data() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arp::Nodes::Node::ResolutionHistoryDynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution-history-dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::ResolutionHistoryDynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryDynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-entry")
    {
        for(auto const & c : arp_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry>();
        c->parent = this;
        arp_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::ResolutionHistoryDynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : arp_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Arp::Nodes::Node::ResolutionHistoryDynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arp::Nodes::Node::ResolutionHistoryDynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-entry")
        return true;
    return false;
}

Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::ArpEntry()
    :
    client_id{YType::int32, "client-id"},
    entry_state{YType::int32, "entry-state"},
    idb_interface_name{YType::str, "idb-interface-name"},
    ipv4_address{YType::str, "ipv4-address"},
    mac_address{YType::str, "mac-address"},
    nsec_timestamp{YType::uint64, "nsec-timestamp"},
    resolution_request_count{YType::uint32, "resolution-request-count"},
    status{YType::enumeration, "status"}
{

    yang_name = "arp-entry"; yang_parent_name = "resolution-history-dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::~ArpEntry()
{
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::has_data() const
{
    return client_id.is_set
	|| entry_state.is_set
	|| idb_interface_name.is_set
	|| ipv4_address.is_set
	|| mac_address.is_set
	|| nsec_timestamp.is_set
	|| resolution_request_count.is_set
	|| status.is_set;
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(entry_state.yfilter)
	|| ydk::is_set(idb_interface_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(nsec_timestamp.yfilter)
	|| ydk::is_set(resolution_request_count.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (entry_state.is_set || is_set(entry_state.yfilter)) leaf_name_data.push_back(entry_state.get_name_leafdata());
    if (idb_interface_name.is_set || is_set(idb_interface_name.yfilter)) leaf_name_data.push_back(idb_interface_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (nsec_timestamp.is_set || is_set(nsec_timestamp.yfilter)) leaf_name_data.push_back(nsec_timestamp.get_name_leafdata());
    if (resolution_request_count.is_set || is_set(resolution_request_count.yfilter)) leaf_name_data.push_back(resolution_request_count.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-state")
    {
        entry_state = value;
        entry_state.value_namespace = name_space;
        entry_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-interface-name")
    {
        idb_interface_name = value;
        idb_interface_name.value_namespace = name_space;
        idb_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsec-timestamp")
    {
        nsec_timestamp = value;
        nsec_timestamp.value_namespace = name_space;
        nsec_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-request-count")
    {
        resolution_request_count = value;
        resolution_request_count.value_namespace = name_space;
        resolution_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "entry-state")
    {
        entry_state.yfilter = yfilter;
    }
    if(value_path == "idb-interface-name")
    {
        idb_interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "nsec-timestamp")
    {
        nsec_timestamp.yfilter = yfilter;
    }
    if(value_path == "resolution-request-count")
    {
        resolution_request_count.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "entry-state" || name == "idb-interface-name" || name == "ipv4-address" || name == "mac-address" || name == "nsec-timestamp" || name == "resolution-request-count" || name == "status")
        return true;
    return false;
}

Arp::Nodes::Node::TrafficInterfaces::TrafficInterfaces()
{

    yang_name = "traffic-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::TrafficInterfaces::~TrafficInterfaces()
{
}

bool Arp::Nodes::Node::TrafficInterfaces::has_data() const
{
    for (std::size_t index=0; index<traffic_interface.size(); index++)
    {
        if(traffic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::TrafficInterfaces::has_operation() const
{
    for (std::size_t index=0; index<traffic_interface.size(); index++)
    {
        if(traffic_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arp::Nodes::Node::TrafficInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::TrafficInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-interface")
    {
        for(auto const & c : traffic_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::TrafficInterfaces::TrafficInterface>();
        c->parent = this;
        traffic_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::TrafficInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : traffic_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Arp::Nodes::Node::TrafficInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arp::Nodes::Node::TrafficInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Arp::Nodes::Node::TrafficInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-interface")
        return true;
    return false;
}

Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::TrafficInterface()
    :
    interface_name{YType::str, "interface-name"},
    alias_entries{YType::uint32, "alias-entries"},
    arp_packet_interface_out_of_subnet{YType::uint32, "arp-packet-interface-out-of-subnet"},
    arp_packet_node_out_of_subnet{YType::uint32, "arp-packet-node-out-of-subnet"},
    arp_packet_unsolicited_packet{YType::uint32, "arp-packet-unsolicited-packet"},
    dhcp_entries{YType::uint32, "dhcp-entries"},
    dynamic_entries{YType::uint32, "dynamic-entries"},
    gratuitous_replies_sent{YType::uint32, "gratuitous-replies-sent"},
    idb_structures{YType::uint32, "idb-structures"},
    interface_entries{YType::uint32, "interface-entries"},
    ip_packets_dropped_interface{YType::uint32, "ip-packets-dropped-interface"},
    ip_packets_dropped_node{YType::uint32, "ip-packets-dropped-node"},
    local_proxy_replies_sent{YType::uint32, "local-proxy-replies-sent"},
    no_buffer_errors{YType::uint32, "no-buffer-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    proxy_replies_sent{YType::uint32, "proxy-replies-sent"},
    replies_received{YType::uint32, "replies-received"},
    replies_sent{YType::uint32, "replies-sent"},
    requests_received{YType::uint32, "requests-received"},
    requests_sent{YType::uint32, "requests-sent"},
    resolution_replies_received{YType::uint32, "resolution-replies-received"},
    resolution_requests_dropped{YType::uint32, "resolution-requests-dropped"},
    resolution_requests_received{YType::uint32, "resolution-requests-received"},
    standby_entries{YType::uint32, "standby-entries"},
    static_entries{YType::uint32, "static-entries"},
    subscr_replies_gratg_sent{YType::uint32, "subscr-replies-gratg-sent"},
    subscr_replies_sent{YType::uint32, "subscr-replies-sent"},
    subscr_requests_received{YType::uint32, "subscr-requests-received"},
    total_entries{YType::uint32, "total-entries"},
    vxlan_entries{YType::uint32, "vxlan-entries"}
{

    yang_name = "traffic-interface"; yang_parent_name = "traffic-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::~TrafficInterface()
{
}

bool Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::has_data() const
{
    return interface_name.is_set
	|| alias_entries.is_set
	|| arp_packet_interface_out_of_subnet.is_set
	|| arp_packet_node_out_of_subnet.is_set
	|| arp_packet_unsolicited_packet.is_set
	|| dhcp_entries.is_set
	|| dynamic_entries.is_set
	|| gratuitous_replies_sent.is_set
	|| idb_structures.is_set
	|| interface_entries.is_set
	|| ip_packets_dropped_interface.is_set
	|| ip_packets_dropped_node.is_set
	|| local_proxy_replies_sent.is_set
	|| no_buffer_errors.is_set
	|| out_of_memory_errors.is_set
	|| proxy_replies_sent.is_set
	|| replies_received.is_set
	|| replies_sent.is_set
	|| requests_received.is_set
	|| requests_sent.is_set
	|| resolution_replies_received.is_set
	|| resolution_requests_dropped.is_set
	|| resolution_requests_received.is_set
	|| standby_entries.is_set
	|| static_entries.is_set
	|| subscr_replies_gratg_sent.is_set
	|| subscr_replies_sent.is_set
	|| subscr_requests_received.is_set
	|| total_entries.is_set
	|| vxlan_entries.is_set;
}

bool Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(alias_entries.yfilter)
	|| ydk::is_set(arp_packet_interface_out_of_subnet.yfilter)
	|| ydk::is_set(arp_packet_node_out_of_subnet.yfilter)
	|| ydk::is_set(arp_packet_unsolicited_packet.yfilter)
	|| ydk::is_set(dhcp_entries.yfilter)
	|| ydk::is_set(dynamic_entries.yfilter)
	|| ydk::is_set(gratuitous_replies_sent.yfilter)
	|| ydk::is_set(idb_structures.yfilter)
	|| ydk::is_set(interface_entries.yfilter)
	|| ydk::is_set(ip_packets_dropped_interface.yfilter)
	|| ydk::is_set(ip_packets_dropped_node.yfilter)
	|| ydk::is_set(local_proxy_replies_sent.yfilter)
	|| ydk::is_set(no_buffer_errors.yfilter)
	|| ydk::is_set(out_of_memory_errors.yfilter)
	|| ydk::is_set(proxy_replies_sent.yfilter)
	|| ydk::is_set(replies_received.yfilter)
	|| ydk::is_set(replies_sent.yfilter)
	|| ydk::is_set(requests_received.yfilter)
	|| ydk::is_set(requests_sent.yfilter)
	|| ydk::is_set(resolution_replies_received.yfilter)
	|| ydk::is_set(resolution_requests_dropped.yfilter)
	|| ydk::is_set(resolution_requests_received.yfilter)
	|| ydk::is_set(standby_entries.yfilter)
	|| ydk::is_set(static_entries.yfilter)
	|| ydk::is_set(subscr_replies_gratg_sent.yfilter)
	|| ydk::is_set(subscr_replies_sent.yfilter)
	|| ydk::is_set(subscr_requests_received.yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(vxlan_entries.yfilter);
}

std::string Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (alias_entries.is_set || is_set(alias_entries.yfilter)) leaf_name_data.push_back(alias_entries.get_name_leafdata());
    if (arp_packet_interface_out_of_subnet.is_set || is_set(arp_packet_interface_out_of_subnet.yfilter)) leaf_name_data.push_back(arp_packet_interface_out_of_subnet.get_name_leafdata());
    if (arp_packet_node_out_of_subnet.is_set || is_set(arp_packet_node_out_of_subnet.yfilter)) leaf_name_data.push_back(arp_packet_node_out_of_subnet.get_name_leafdata());
    if (arp_packet_unsolicited_packet.is_set || is_set(arp_packet_unsolicited_packet.yfilter)) leaf_name_data.push_back(arp_packet_unsolicited_packet.get_name_leafdata());
    if (dhcp_entries.is_set || is_set(dhcp_entries.yfilter)) leaf_name_data.push_back(dhcp_entries.get_name_leafdata());
    if (dynamic_entries.is_set || is_set(dynamic_entries.yfilter)) leaf_name_data.push_back(dynamic_entries.get_name_leafdata());
    if (gratuitous_replies_sent.is_set || is_set(gratuitous_replies_sent.yfilter)) leaf_name_data.push_back(gratuitous_replies_sent.get_name_leafdata());
    if (idb_structures.is_set || is_set(idb_structures.yfilter)) leaf_name_data.push_back(idb_structures.get_name_leafdata());
    if (interface_entries.is_set || is_set(interface_entries.yfilter)) leaf_name_data.push_back(interface_entries.get_name_leafdata());
    if (ip_packets_dropped_interface.is_set || is_set(ip_packets_dropped_interface.yfilter)) leaf_name_data.push_back(ip_packets_dropped_interface.get_name_leafdata());
    if (ip_packets_dropped_node.is_set || is_set(ip_packets_dropped_node.yfilter)) leaf_name_data.push_back(ip_packets_dropped_node.get_name_leafdata());
    if (local_proxy_replies_sent.is_set || is_set(local_proxy_replies_sent.yfilter)) leaf_name_data.push_back(local_proxy_replies_sent.get_name_leafdata());
    if (no_buffer_errors.is_set || is_set(no_buffer_errors.yfilter)) leaf_name_data.push_back(no_buffer_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.yfilter)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (proxy_replies_sent.is_set || is_set(proxy_replies_sent.yfilter)) leaf_name_data.push_back(proxy_replies_sent.get_name_leafdata());
    if (replies_received.is_set || is_set(replies_received.yfilter)) leaf_name_data.push_back(replies_received.get_name_leafdata());
    if (replies_sent.is_set || is_set(replies_sent.yfilter)) leaf_name_data.push_back(replies_sent.get_name_leafdata());
    if (requests_received.is_set || is_set(requests_received.yfilter)) leaf_name_data.push_back(requests_received.get_name_leafdata());
    if (requests_sent.is_set || is_set(requests_sent.yfilter)) leaf_name_data.push_back(requests_sent.get_name_leafdata());
    if (resolution_replies_received.is_set || is_set(resolution_replies_received.yfilter)) leaf_name_data.push_back(resolution_replies_received.get_name_leafdata());
    if (resolution_requests_dropped.is_set || is_set(resolution_requests_dropped.yfilter)) leaf_name_data.push_back(resolution_requests_dropped.get_name_leafdata());
    if (resolution_requests_received.is_set || is_set(resolution_requests_received.yfilter)) leaf_name_data.push_back(resolution_requests_received.get_name_leafdata());
    if (standby_entries.is_set || is_set(standby_entries.yfilter)) leaf_name_data.push_back(standby_entries.get_name_leafdata());
    if (static_entries.is_set || is_set(static_entries.yfilter)) leaf_name_data.push_back(static_entries.get_name_leafdata());
    if (subscr_replies_gratg_sent.is_set || is_set(subscr_replies_gratg_sent.yfilter)) leaf_name_data.push_back(subscr_replies_gratg_sent.get_name_leafdata());
    if (subscr_replies_sent.is_set || is_set(subscr_replies_sent.yfilter)) leaf_name_data.push_back(subscr_replies_sent.get_name_leafdata());
    if (subscr_requests_received.is_set || is_set(subscr_requests_received.yfilter)) leaf_name_data.push_back(subscr_requests_received.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (vxlan_entries.is_set || is_set(vxlan_entries.yfilter)) leaf_name_data.push_back(vxlan_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias-entries")
    {
        alias_entries = value;
        alias_entries.value_namespace = name_space;
        alias_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet = value;
        arp_packet_interface_out_of_subnet.value_namespace = name_space;
        arp_packet_interface_out_of_subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet = value;
        arp_packet_node_out_of_subnet.value_namespace = name_space;
        arp_packet_node_out_of_subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-unsolicited-packet")
    {
        arp_packet_unsolicited_packet = value;
        arp_packet_unsolicited_packet.value_namespace = name_space;
        arp_packet_unsolicited_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries = value;
        dhcp_entries.value_namespace = name_space;
        dhcp_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries = value;
        dynamic_entries.value_namespace = name_space;
        dynamic_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent = value;
        gratuitous_replies_sent.value_namespace = name_space;
        gratuitous_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-structures")
    {
        idb_structures = value;
        idb_structures.value_namespace = name_space;
        idb_structures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-entries")
    {
        interface_entries = value;
        interface_entries.value_namespace = name_space;
        interface_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface = value;
        ip_packets_dropped_interface.value_namespace = name_space;
        ip_packets_dropped_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node = value;
        ip_packets_dropped_node.value_namespace = name_space;
        ip_packets_dropped_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent = value;
        local_proxy_replies_sent.value_namespace = name_space;
        local_proxy_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors = value;
        no_buffer_errors.value_namespace = name_space;
        no_buffer_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
        out_of_memory_errors.value_namespace = name_space;
        out_of_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent = value;
        proxy_replies_sent.value_namespace = name_space;
        proxy_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-received")
    {
        replies_received = value;
        replies_received.value_namespace = name_space;
        replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-sent")
    {
        replies_sent = value;
        replies_sent.value_namespace = name_space;
        replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-received")
    {
        requests_received = value;
        requests_received.value_namespace = name_space;
        requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-sent")
    {
        requests_sent = value;
        requests_sent.value_namespace = name_space;
        requests_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received = value;
        resolution_replies_received.value_namespace = name_space;
        resolution_replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped = value;
        resolution_requests_dropped.value_namespace = name_space;
        resolution_requests_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received = value;
        resolution_requests_received.value_namespace = name_space;
        resolution_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-entries")
    {
        standby_entries = value;
        standby_entries.value_namespace = name_space;
        standby_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-entries")
    {
        static_entries = value;
        static_entries.value_namespace = name_space;
        static_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent = value;
        subscr_replies_gratg_sent.value_namespace = name_space;
        subscr_replies_gratg_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent = value;
        subscr_replies_sent.value_namespace = name_space;
        subscr_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received = value;
        subscr_requests_received.value_namespace = name_space;
        subscr_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries = value;
        vxlan_entries.value_namespace = name_space;
        vxlan_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "alias-entries")
    {
        alias_entries.yfilter = yfilter;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet.yfilter = yfilter;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet.yfilter = yfilter;
    }
    if(value_path == "arp-packet-unsolicited-packet")
    {
        arp_packet_unsolicited_packet.yfilter = yfilter;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries.yfilter = yfilter;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries.yfilter = yfilter;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent.yfilter = yfilter;
    }
    if(value_path == "idb-structures")
    {
        idb_structures.yfilter = yfilter;
    }
    if(value_path == "interface-entries")
    {
        interface_entries.yfilter = yfilter;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface.yfilter = yfilter;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node.yfilter = yfilter;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent.yfilter = yfilter;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors.yfilter = yfilter;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent.yfilter = yfilter;
    }
    if(value_path == "replies-received")
    {
        replies_received.yfilter = yfilter;
    }
    if(value_path == "replies-sent")
    {
        replies_sent.yfilter = yfilter;
    }
    if(value_path == "requests-received")
    {
        requests_received.yfilter = yfilter;
    }
    if(value_path == "requests-sent")
    {
        requests_sent.yfilter = yfilter;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received.yfilter = yfilter;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped.yfilter = yfilter;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received.yfilter = yfilter;
    }
    if(value_path == "standby-entries")
    {
        standby_entries.yfilter = yfilter;
    }
    if(value_path == "static-entries")
    {
        static_entries.yfilter = yfilter;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent.yfilter = yfilter;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent.yfilter = yfilter;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries.yfilter = yfilter;
    }
}

bool Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "alias-entries" || name == "arp-packet-interface-out-of-subnet" || name == "arp-packet-node-out-of-subnet" || name == "arp-packet-unsolicited-packet" || name == "dhcp-entries" || name == "dynamic-entries" || name == "gratuitous-replies-sent" || name == "idb-structures" || name == "interface-entries" || name == "ip-packets-dropped-interface" || name == "ip-packets-dropped-node" || name == "local-proxy-replies-sent" || name == "no-buffer-errors" || name == "out-of-memory-errors" || name == "proxy-replies-sent" || name == "replies-received" || name == "replies-sent" || name == "requests-received" || name == "requests-sent" || name == "resolution-replies-received" || name == "resolution-requests-dropped" || name == "resolution-requests-received" || name == "standby-entries" || name == "static-entries" || name == "subscr-replies-gratg-sent" || name == "subscr-replies-sent" || name == "subscr-requests-received" || name == "total-entries" || name == "vxlan-entries")
        return true;
    return false;
}

Arp::Nodes::Node::TrafficNode::TrafficNode()
    :
    alias_entries{YType::uint32, "alias-entries"},
    arp_packet_interface_out_of_subnet{YType::uint32, "arp-packet-interface-out-of-subnet"},
    arp_packet_node_out_of_subnet{YType::uint32, "arp-packet-node-out-of-subnet"},
    arp_packet_unsolicited_packet{YType::uint32, "arp-packet-unsolicited-packet"},
    dhcp_entries{YType::uint32, "dhcp-entries"},
    dynamic_entries{YType::uint32, "dynamic-entries"},
    gratuitous_replies_sent{YType::uint32, "gratuitous-replies-sent"},
    idb_structures{YType::uint32, "idb-structures"},
    interface_entries{YType::uint32, "interface-entries"},
    ip_packets_dropped_interface{YType::uint32, "ip-packets-dropped-interface"},
    ip_packets_dropped_node{YType::uint32, "ip-packets-dropped-node"},
    local_proxy_replies_sent{YType::uint32, "local-proxy-replies-sent"},
    no_buffer_errors{YType::uint32, "no-buffer-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    proxy_replies_sent{YType::uint32, "proxy-replies-sent"},
    replies_received{YType::uint32, "replies-received"},
    replies_sent{YType::uint32, "replies-sent"},
    requests_received{YType::uint32, "requests-received"},
    requests_sent{YType::uint32, "requests-sent"},
    resolution_replies_received{YType::uint32, "resolution-replies-received"},
    resolution_requests_dropped{YType::uint32, "resolution-requests-dropped"},
    resolution_requests_received{YType::uint32, "resolution-requests-received"},
    standby_entries{YType::uint32, "standby-entries"},
    static_entries{YType::uint32, "static-entries"},
    subscr_replies_gratg_sent{YType::uint32, "subscr-replies-gratg-sent"},
    subscr_replies_sent{YType::uint32, "subscr-replies-sent"},
    subscr_requests_received{YType::uint32, "subscr-requests-received"},
    total_entries{YType::uint32, "total-entries"},
    vxlan_entries{YType::uint32, "vxlan-entries"}
{

    yang_name = "traffic-node"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::TrafficNode::~TrafficNode()
{
}

bool Arp::Nodes::Node::TrafficNode::has_data() const
{
    return alias_entries.is_set
	|| arp_packet_interface_out_of_subnet.is_set
	|| arp_packet_node_out_of_subnet.is_set
	|| arp_packet_unsolicited_packet.is_set
	|| dhcp_entries.is_set
	|| dynamic_entries.is_set
	|| gratuitous_replies_sent.is_set
	|| idb_structures.is_set
	|| interface_entries.is_set
	|| ip_packets_dropped_interface.is_set
	|| ip_packets_dropped_node.is_set
	|| local_proxy_replies_sent.is_set
	|| no_buffer_errors.is_set
	|| out_of_memory_errors.is_set
	|| proxy_replies_sent.is_set
	|| replies_received.is_set
	|| replies_sent.is_set
	|| requests_received.is_set
	|| requests_sent.is_set
	|| resolution_replies_received.is_set
	|| resolution_requests_dropped.is_set
	|| resolution_requests_received.is_set
	|| standby_entries.is_set
	|| static_entries.is_set
	|| subscr_replies_gratg_sent.is_set
	|| subscr_replies_sent.is_set
	|| subscr_requests_received.is_set
	|| total_entries.is_set
	|| vxlan_entries.is_set;
}

bool Arp::Nodes::Node::TrafficNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alias_entries.yfilter)
	|| ydk::is_set(arp_packet_interface_out_of_subnet.yfilter)
	|| ydk::is_set(arp_packet_node_out_of_subnet.yfilter)
	|| ydk::is_set(arp_packet_unsolicited_packet.yfilter)
	|| ydk::is_set(dhcp_entries.yfilter)
	|| ydk::is_set(dynamic_entries.yfilter)
	|| ydk::is_set(gratuitous_replies_sent.yfilter)
	|| ydk::is_set(idb_structures.yfilter)
	|| ydk::is_set(interface_entries.yfilter)
	|| ydk::is_set(ip_packets_dropped_interface.yfilter)
	|| ydk::is_set(ip_packets_dropped_node.yfilter)
	|| ydk::is_set(local_proxy_replies_sent.yfilter)
	|| ydk::is_set(no_buffer_errors.yfilter)
	|| ydk::is_set(out_of_memory_errors.yfilter)
	|| ydk::is_set(proxy_replies_sent.yfilter)
	|| ydk::is_set(replies_received.yfilter)
	|| ydk::is_set(replies_sent.yfilter)
	|| ydk::is_set(requests_received.yfilter)
	|| ydk::is_set(requests_sent.yfilter)
	|| ydk::is_set(resolution_replies_received.yfilter)
	|| ydk::is_set(resolution_requests_dropped.yfilter)
	|| ydk::is_set(resolution_requests_received.yfilter)
	|| ydk::is_set(standby_entries.yfilter)
	|| ydk::is_set(static_entries.yfilter)
	|| ydk::is_set(subscr_replies_gratg_sent.yfilter)
	|| ydk::is_set(subscr_replies_sent.yfilter)
	|| ydk::is_set(subscr_requests_received.yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(vxlan_entries.yfilter);
}

std::string Arp::Nodes::Node::TrafficNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::TrafficNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias_entries.is_set || is_set(alias_entries.yfilter)) leaf_name_data.push_back(alias_entries.get_name_leafdata());
    if (arp_packet_interface_out_of_subnet.is_set || is_set(arp_packet_interface_out_of_subnet.yfilter)) leaf_name_data.push_back(arp_packet_interface_out_of_subnet.get_name_leafdata());
    if (arp_packet_node_out_of_subnet.is_set || is_set(arp_packet_node_out_of_subnet.yfilter)) leaf_name_data.push_back(arp_packet_node_out_of_subnet.get_name_leafdata());
    if (arp_packet_unsolicited_packet.is_set || is_set(arp_packet_unsolicited_packet.yfilter)) leaf_name_data.push_back(arp_packet_unsolicited_packet.get_name_leafdata());
    if (dhcp_entries.is_set || is_set(dhcp_entries.yfilter)) leaf_name_data.push_back(dhcp_entries.get_name_leafdata());
    if (dynamic_entries.is_set || is_set(dynamic_entries.yfilter)) leaf_name_data.push_back(dynamic_entries.get_name_leafdata());
    if (gratuitous_replies_sent.is_set || is_set(gratuitous_replies_sent.yfilter)) leaf_name_data.push_back(gratuitous_replies_sent.get_name_leafdata());
    if (idb_structures.is_set || is_set(idb_structures.yfilter)) leaf_name_data.push_back(idb_structures.get_name_leafdata());
    if (interface_entries.is_set || is_set(interface_entries.yfilter)) leaf_name_data.push_back(interface_entries.get_name_leafdata());
    if (ip_packets_dropped_interface.is_set || is_set(ip_packets_dropped_interface.yfilter)) leaf_name_data.push_back(ip_packets_dropped_interface.get_name_leafdata());
    if (ip_packets_dropped_node.is_set || is_set(ip_packets_dropped_node.yfilter)) leaf_name_data.push_back(ip_packets_dropped_node.get_name_leafdata());
    if (local_proxy_replies_sent.is_set || is_set(local_proxy_replies_sent.yfilter)) leaf_name_data.push_back(local_proxy_replies_sent.get_name_leafdata());
    if (no_buffer_errors.is_set || is_set(no_buffer_errors.yfilter)) leaf_name_data.push_back(no_buffer_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.yfilter)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (proxy_replies_sent.is_set || is_set(proxy_replies_sent.yfilter)) leaf_name_data.push_back(proxy_replies_sent.get_name_leafdata());
    if (replies_received.is_set || is_set(replies_received.yfilter)) leaf_name_data.push_back(replies_received.get_name_leafdata());
    if (replies_sent.is_set || is_set(replies_sent.yfilter)) leaf_name_data.push_back(replies_sent.get_name_leafdata());
    if (requests_received.is_set || is_set(requests_received.yfilter)) leaf_name_data.push_back(requests_received.get_name_leafdata());
    if (requests_sent.is_set || is_set(requests_sent.yfilter)) leaf_name_data.push_back(requests_sent.get_name_leafdata());
    if (resolution_replies_received.is_set || is_set(resolution_replies_received.yfilter)) leaf_name_data.push_back(resolution_replies_received.get_name_leafdata());
    if (resolution_requests_dropped.is_set || is_set(resolution_requests_dropped.yfilter)) leaf_name_data.push_back(resolution_requests_dropped.get_name_leafdata());
    if (resolution_requests_received.is_set || is_set(resolution_requests_received.yfilter)) leaf_name_data.push_back(resolution_requests_received.get_name_leafdata());
    if (standby_entries.is_set || is_set(standby_entries.yfilter)) leaf_name_data.push_back(standby_entries.get_name_leafdata());
    if (static_entries.is_set || is_set(static_entries.yfilter)) leaf_name_data.push_back(static_entries.get_name_leafdata());
    if (subscr_replies_gratg_sent.is_set || is_set(subscr_replies_gratg_sent.yfilter)) leaf_name_data.push_back(subscr_replies_gratg_sent.get_name_leafdata());
    if (subscr_replies_sent.is_set || is_set(subscr_replies_sent.yfilter)) leaf_name_data.push_back(subscr_replies_sent.get_name_leafdata());
    if (subscr_requests_received.is_set || is_set(subscr_requests_received.yfilter)) leaf_name_data.push_back(subscr_requests_received.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (vxlan_entries.is_set || is_set(vxlan_entries.yfilter)) leaf_name_data.push_back(vxlan_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::TrafficNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Arp::Nodes::Node::TrafficNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alias-entries")
    {
        alias_entries = value;
        alias_entries.value_namespace = name_space;
        alias_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet = value;
        arp_packet_interface_out_of_subnet.value_namespace = name_space;
        arp_packet_interface_out_of_subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet = value;
        arp_packet_node_out_of_subnet.value_namespace = name_space;
        arp_packet_node_out_of_subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-unsolicited-packet")
    {
        arp_packet_unsolicited_packet = value;
        arp_packet_unsolicited_packet.value_namespace = name_space;
        arp_packet_unsolicited_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries = value;
        dhcp_entries.value_namespace = name_space;
        dhcp_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries = value;
        dynamic_entries.value_namespace = name_space;
        dynamic_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent = value;
        gratuitous_replies_sent.value_namespace = name_space;
        gratuitous_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-structures")
    {
        idb_structures = value;
        idb_structures.value_namespace = name_space;
        idb_structures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-entries")
    {
        interface_entries = value;
        interface_entries.value_namespace = name_space;
        interface_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface = value;
        ip_packets_dropped_interface.value_namespace = name_space;
        ip_packets_dropped_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node = value;
        ip_packets_dropped_node.value_namespace = name_space;
        ip_packets_dropped_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent = value;
        local_proxy_replies_sent.value_namespace = name_space;
        local_proxy_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors = value;
        no_buffer_errors.value_namespace = name_space;
        no_buffer_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
        out_of_memory_errors.value_namespace = name_space;
        out_of_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent = value;
        proxy_replies_sent.value_namespace = name_space;
        proxy_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-received")
    {
        replies_received = value;
        replies_received.value_namespace = name_space;
        replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-sent")
    {
        replies_sent = value;
        replies_sent.value_namespace = name_space;
        replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-received")
    {
        requests_received = value;
        requests_received.value_namespace = name_space;
        requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-sent")
    {
        requests_sent = value;
        requests_sent.value_namespace = name_space;
        requests_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received = value;
        resolution_replies_received.value_namespace = name_space;
        resolution_replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped = value;
        resolution_requests_dropped.value_namespace = name_space;
        resolution_requests_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received = value;
        resolution_requests_received.value_namespace = name_space;
        resolution_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-entries")
    {
        standby_entries = value;
        standby_entries.value_namespace = name_space;
        standby_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-entries")
    {
        static_entries = value;
        static_entries.value_namespace = name_space;
        static_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent = value;
        subscr_replies_gratg_sent.value_namespace = name_space;
        subscr_replies_gratg_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent = value;
        subscr_replies_sent.value_namespace = name_space;
        subscr_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received = value;
        subscr_requests_received.value_namespace = name_space;
        subscr_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries = value;
        vxlan_entries.value_namespace = name_space;
        vxlan_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::Nodes::Node::TrafficNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alias-entries")
    {
        alias_entries.yfilter = yfilter;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet.yfilter = yfilter;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet.yfilter = yfilter;
    }
    if(value_path == "arp-packet-unsolicited-packet")
    {
        arp_packet_unsolicited_packet.yfilter = yfilter;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries.yfilter = yfilter;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries.yfilter = yfilter;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent.yfilter = yfilter;
    }
    if(value_path == "idb-structures")
    {
        idb_structures.yfilter = yfilter;
    }
    if(value_path == "interface-entries")
    {
        interface_entries.yfilter = yfilter;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface.yfilter = yfilter;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node.yfilter = yfilter;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent.yfilter = yfilter;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors.yfilter = yfilter;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent.yfilter = yfilter;
    }
    if(value_path == "replies-received")
    {
        replies_received.yfilter = yfilter;
    }
    if(value_path == "replies-sent")
    {
        replies_sent.yfilter = yfilter;
    }
    if(value_path == "requests-received")
    {
        requests_received.yfilter = yfilter;
    }
    if(value_path == "requests-sent")
    {
        requests_sent.yfilter = yfilter;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received.yfilter = yfilter;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped.yfilter = yfilter;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received.yfilter = yfilter;
    }
    if(value_path == "standby-entries")
    {
        standby_entries.yfilter = yfilter;
    }
    if(value_path == "static-entries")
    {
        static_entries.yfilter = yfilter;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent.yfilter = yfilter;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent.yfilter = yfilter;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries.yfilter = yfilter;
    }
}

bool Arp::Nodes::Node::TrafficNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alias-entries" || name == "arp-packet-interface-out-of-subnet" || name == "arp-packet-node-out-of-subnet" || name == "arp-packet-unsolicited-packet" || name == "dhcp-entries" || name == "dynamic-entries" || name == "gratuitous-replies-sent" || name == "idb-structures" || name == "interface-entries" || name == "ip-packets-dropped-interface" || name == "ip-packets-dropped-node" || name == "local-proxy-replies-sent" || name == "no-buffer-errors" || name == "out-of-memory-errors" || name == "proxy-replies-sent" || name == "replies-received" || name == "replies-sent" || name == "requests-received" || name == "requests-sent" || name == "resolution-replies-received" || name == "resolution-requests-dropped" || name == "resolution-requests-received" || name == "standby-entries" || name == "static-entries" || name == "subscr-replies-gratg-sent" || name == "subscr-replies-sent" || name == "subscr-requests-received" || name == "total-entries" || name == "vxlan-entries")
        return true;
    return false;
}

Arp::Nodes::Node::TrafficVrfs::TrafficVrfs()
{

    yang_name = "traffic-vrfs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::TrafficVrfs::~TrafficVrfs()
{
}

bool Arp::Nodes::Node::TrafficVrfs::has_data() const
{
    for (std::size_t index=0; index<traffic_vrf.size(); index++)
    {
        if(traffic_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::TrafficVrfs::has_operation() const
{
    for (std::size_t index=0; index<traffic_vrf.size(); index++)
    {
        if(traffic_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arp::Nodes::Node::TrafficVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::TrafficVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-vrf")
    {
        for(auto const & c : traffic_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::TrafficVrfs::TrafficVrf>();
        c->parent = this;
        traffic_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::TrafficVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : traffic_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Arp::Nodes::Node::TrafficVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arp::Nodes::Node::TrafficVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Arp::Nodes::Node::TrafficVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-vrf")
        return true;
    return false;
}

Arp::Nodes::Node::TrafficVrfs::TrafficVrf::TrafficVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    alias_entries{YType::uint32, "alias-entries"},
    arp_packet_interface_out_of_subnet{YType::uint32, "arp-packet-interface-out-of-subnet"},
    arp_packet_node_out_of_subnet{YType::uint32, "arp-packet-node-out-of-subnet"},
    arp_packet_unsolicited_packet{YType::uint32, "arp-packet-unsolicited-packet"},
    dhcp_entries{YType::uint32, "dhcp-entries"},
    dynamic_entries{YType::uint32, "dynamic-entries"},
    gratuitous_replies_sent{YType::uint32, "gratuitous-replies-sent"},
    idb_structures{YType::uint32, "idb-structures"},
    interface_entries{YType::uint32, "interface-entries"},
    ip_packets_dropped_interface{YType::uint32, "ip-packets-dropped-interface"},
    ip_packets_dropped_node{YType::uint32, "ip-packets-dropped-node"},
    local_proxy_replies_sent{YType::uint32, "local-proxy-replies-sent"},
    no_buffer_errors{YType::uint32, "no-buffer-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    proxy_replies_sent{YType::uint32, "proxy-replies-sent"},
    replies_received{YType::uint32, "replies-received"},
    replies_sent{YType::uint32, "replies-sent"},
    requests_received{YType::uint32, "requests-received"},
    requests_sent{YType::uint32, "requests-sent"},
    resolution_replies_received{YType::uint32, "resolution-replies-received"},
    resolution_requests_dropped{YType::uint32, "resolution-requests-dropped"},
    resolution_requests_received{YType::uint32, "resolution-requests-received"},
    standby_entries{YType::uint32, "standby-entries"},
    static_entries{YType::uint32, "static-entries"},
    subscr_replies_gratg_sent{YType::uint32, "subscr-replies-gratg-sent"},
    subscr_replies_sent{YType::uint32, "subscr-replies-sent"},
    subscr_requests_received{YType::uint32, "subscr-requests-received"},
    total_entries{YType::uint32, "total-entries"},
    vxlan_entries{YType::uint32, "vxlan-entries"}
{

    yang_name = "traffic-vrf"; yang_parent_name = "traffic-vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Arp::Nodes::Node::TrafficVrfs::TrafficVrf::~TrafficVrf()
{
}

bool Arp::Nodes::Node::TrafficVrfs::TrafficVrf::has_data() const
{
    return vrf_name.is_set
	|| alias_entries.is_set
	|| arp_packet_interface_out_of_subnet.is_set
	|| arp_packet_node_out_of_subnet.is_set
	|| arp_packet_unsolicited_packet.is_set
	|| dhcp_entries.is_set
	|| dynamic_entries.is_set
	|| gratuitous_replies_sent.is_set
	|| idb_structures.is_set
	|| interface_entries.is_set
	|| ip_packets_dropped_interface.is_set
	|| ip_packets_dropped_node.is_set
	|| local_proxy_replies_sent.is_set
	|| no_buffer_errors.is_set
	|| out_of_memory_errors.is_set
	|| proxy_replies_sent.is_set
	|| replies_received.is_set
	|| replies_sent.is_set
	|| requests_received.is_set
	|| requests_sent.is_set
	|| resolution_replies_received.is_set
	|| resolution_requests_dropped.is_set
	|| resolution_requests_received.is_set
	|| standby_entries.is_set
	|| static_entries.is_set
	|| subscr_replies_gratg_sent.is_set
	|| subscr_replies_sent.is_set
	|| subscr_requests_received.is_set
	|| total_entries.is_set
	|| vxlan_entries.is_set;
}

bool Arp::Nodes::Node::TrafficVrfs::TrafficVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(alias_entries.yfilter)
	|| ydk::is_set(arp_packet_interface_out_of_subnet.yfilter)
	|| ydk::is_set(arp_packet_node_out_of_subnet.yfilter)
	|| ydk::is_set(arp_packet_unsolicited_packet.yfilter)
	|| ydk::is_set(dhcp_entries.yfilter)
	|| ydk::is_set(dynamic_entries.yfilter)
	|| ydk::is_set(gratuitous_replies_sent.yfilter)
	|| ydk::is_set(idb_structures.yfilter)
	|| ydk::is_set(interface_entries.yfilter)
	|| ydk::is_set(ip_packets_dropped_interface.yfilter)
	|| ydk::is_set(ip_packets_dropped_node.yfilter)
	|| ydk::is_set(local_proxy_replies_sent.yfilter)
	|| ydk::is_set(no_buffer_errors.yfilter)
	|| ydk::is_set(out_of_memory_errors.yfilter)
	|| ydk::is_set(proxy_replies_sent.yfilter)
	|| ydk::is_set(replies_received.yfilter)
	|| ydk::is_set(replies_sent.yfilter)
	|| ydk::is_set(requests_received.yfilter)
	|| ydk::is_set(requests_sent.yfilter)
	|| ydk::is_set(resolution_replies_received.yfilter)
	|| ydk::is_set(resolution_requests_dropped.yfilter)
	|| ydk::is_set(resolution_requests_received.yfilter)
	|| ydk::is_set(standby_entries.yfilter)
	|| ydk::is_set(static_entries.yfilter)
	|| ydk::is_set(subscr_replies_gratg_sent.yfilter)
	|| ydk::is_set(subscr_replies_sent.yfilter)
	|| ydk::is_set(subscr_requests_received.yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(vxlan_entries.yfilter);
}

std::string Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (alias_entries.is_set || is_set(alias_entries.yfilter)) leaf_name_data.push_back(alias_entries.get_name_leafdata());
    if (arp_packet_interface_out_of_subnet.is_set || is_set(arp_packet_interface_out_of_subnet.yfilter)) leaf_name_data.push_back(arp_packet_interface_out_of_subnet.get_name_leafdata());
    if (arp_packet_node_out_of_subnet.is_set || is_set(arp_packet_node_out_of_subnet.yfilter)) leaf_name_data.push_back(arp_packet_node_out_of_subnet.get_name_leafdata());
    if (arp_packet_unsolicited_packet.is_set || is_set(arp_packet_unsolicited_packet.yfilter)) leaf_name_data.push_back(arp_packet_unsolicited_packet.get_name_leafdata());
    if (dhcp_entries.is_set || is_set(dhcp_entries.yfilter)) leaf_name_data.push_back(dhcp_entries.get_name_leafdata());
    if (dynamic_entries.is_set || is_set(dynamic_entries.yfilter)) leaf_name_data.push_back(dynamic_entries.get_name_leafdata());
    if (gratuitous_replies_sent.is_set || is_set(gratuitous_replies_sent.yfilter)) leaf_name_data.push_back(gratuitous_replies_sent.get_name_leafdata());
    if (idb_structures.is_set || is_set(idb_structures.yfilter)) leaf_name_data.push_back(idb_structures.get_name_leafdata());
    if (interface_entries.is_set || is_set(interface_entries.yfilter)) leaf_name_data.push_back(interface_entries.get_name_leafdata());
    if (ip_packets_dropped_interface.is_set || is_set(ip_packets_dropped_interface.yfilter)) leaf_name_data.push_back(ip_packets_dropped_interface.get_name_leafdata());
    if (ip_packets_dropped_node.is_set || is_set(ip_packets_dropped_node.yfilter)) leaf_name_data.push_back(ip_packets_dropped_node.get_name_leafdata());
    if (local_proxy_replies_sent.is_set || is_set(local_proxy_replies_sent.yfilter)) leaf_name_data.push_back(local_proxy_replies_sent.get_name_leafdata());
    if (no_buffer_errors.is_set || is_set(no_buffer_errors.yfilter)) leaf_name_data.push_back(no_buffer_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.yfilter)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (proxy_replies_sent.is_set || is_set(proxy_replies_sent.yfilter)) leaf_name_data.push_back(proxy_replies_sent.get_name_leafdata());
    if (replies_received.is_set || is_set(replies_received.yfilter)) leaf_name_data.push_back(replies_received.get_name_leafdata());
    if (replies_sent.is_set || is_set(replies_sent.yfilter)) leaf_name_data.push_back(replies_sent.get_name_leafdata());
    if (requests_received.is_set || is_set(requests_received.yfilter)) leaf_name_data.push_back(requests_received.get_name_leafdata());
    if (requests_sent.is_set || is_set(requests_sent.yfilter)) leaf_name_data.push_back(requests_sent.get_name_leafdata());
    if (resolution_replies_received.is_set || is_set(resolution_replies_received.yfilter)) leaf_name_data.push_back(resolution_replies_received.get_name_leafdata());
    if (resolution_requests_dropped.is_set || is_set(resolution_requests_dropped.yfilter)) leaf_name_data.push_back(resolution_requests_dropped.get_name_leafdata());
    if (resolution_requests_received.is_set || is_set(resolution_requests_received.yfilter)) leaf_name_data.push_back(resolution_requests_received.get_name_leafdata());
    if (standby_entries.is_set || is_set(standby_entries.yfilter)) leaf_name_data.push_back(standby_entries.get_name_leafdata());
    if (static_entries.is_set || is_set(static_entries.yfilter)) leaf_name_data.push_back(static_entries.get_name_leafdata());
    if (subscr_replies_gratg_sent.is_set || is_set(subscr_replies_gratg_sent.yfilter)) leaf_name_data.push_back(subscr_replies_gratg_sent.get_name_leafdata());
    if (subscr_replies_sent.is_set || is_set(subscr_replies_sent.yfilter)) leaf_name_data.push_back(subscr_replies_sent.get_name_leafdata());
    if (subscr_requests_received.is_set || is_set(subscr_requests_received.yfilter)) leaf_name_data.push_back(subscr_requests_received.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (vxlan_entries.is_set || is_set(vxlan_entries.yfilter)) leaf_name_data.push_back(vxlan_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Arp::Nodes::Node::TrafficVrfs::TrafficVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias-entries")
    {
        alias_entries = value;
        alias_entries.value_namespace = name_space;
        alias_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet = value;
        arp_packet_interface_out_of_subnet.value_namespace = name_space;
        arp_packet_interface_out_of_subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet = value;
        arp_packet_node_out_of_subnet.value_namespace = name_space;
        arp_packet_node_out_of_subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-packet-unsolicited-packet")
    {
        arp_packet_unsolicited_packet = value;
        arp_packet_unsolicited_packet.value_namespace = name_space;
        arp_packet_unsolicited_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries = value;
        dhcp_entries.value_namespace = name_space;
        dhcp_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries = value;
        dynamic_entries.value_namespace = name_space;
        dynamic_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent = value;
        gratuitous_replies_sent.value_namespace = name_space;
        gratuitous_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-structures")
    {
        idb_structures = value;
        idb_structures.value_namespace = name_space;
        idb_structures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-entries")
    {
        interface_entries = value;
        interface_entries.value_namespace = name_space;
        interface_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface = value;
        ip_packets_dropped_interface.value_namespace = name_space;
        ip_packets_dropped_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node = value;
        ip_packets_dropped_node.value_namespace = name_space;
        ip_packets_dropped_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent = value;
        local_proxy_replies_sent.value_namespace = name_space;
        local_proxy_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors = value;
        no_buffer_errors.value_namespace = name_space;
        no_buffer_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
        out_of_memory_errors.value_namespace = name_space;
        out_of_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent = value;
        proxy_replies_sent.value_namespace = name_space;
        proxy_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-received")
    {
        replies_received = value;
        replies_received.value_namespace = name_space;
        replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-sent")
    {
        replies_sent = value;
        replies_sent.value_namespace = name_space;
        replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-received")
    {
        requests_received = value;
        requests_received.value_namespace = name_space;
        requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-sent")
    {
        requests_sent = value;
        requests_sent.value_namespace = name_space;
        requests_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received = value;
        resolution_replies_received.value_namespace = name_space;
        resolution_replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped = value;
        resolution_requests_dropped.value_namespace = name_space;
        resolution_requests_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received = value;
        resolution_requests_received.value_namespace = name_space;
        resolution_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-entries")
    {
        standby_entries = value;
        standby_entries.value_namespace = name_space;
        standby_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-entries")
    {
        static_entries = value;
        static_entries.value_namespace = name_space;
        static_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent = value;
        subscr_replies_gratg_sent.value_namespace = name_space;
        subscr_replies_gratg_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent = value;
        subscr_replies_sent.value_namespace = name_space;
        subscr_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received = value;
        subscr_requests_received.value_namespace = name_space;
        subscr_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries = value;
        vxlan_entries.value_namespace = name_space;
        vxlan_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::Nodes::Node::TrafficVrfs::TrafficVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "alias-entries")
    {
        alias_entries.yfilter = yfilter;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet.yfilter = yfilter;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet.yfilter = yfilter;
    }
    if(value_path == "arp-packet-unsolicited-packet")
    {
        arp_packet_unsolicited_packet.yfilter = yfilter;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries.yfilter = yfilter;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries.yfilter = yfilter;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent.yfilter = yfilter;
    }
    if(value_path == "idb-structures")
    {
        idb_structures.yfilter = yfilter;
    }
    if(value_path == "interface-entries")
    {
        interface_entries.yfilter = yfilter;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface.yfilter = yfilter;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node.yfilter = yfilter;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent.yfilter = yfilter;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors.yfilter = yfilter;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent.yfilter = yfilter;
    }
    if(value_path == "replies-received")
    {
        replies_received.yfilter = yfilter;
    }
    if(value_path == "replies-sent")
    {
        replies_sent.yfilter = yfilter;
    }
    if(value_path == "requests-received")
    {
        requests_received.yfilter = yfilter;
    }
    if(value_path == "requests-sent")
    {
        requests_sent.yfilter = yfilter;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received.yfilter = yfilter;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped.yfilter = yfilter;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received.yfilter = yfilter;
    }
    if(value_path == "standby-entries")
    {
        standby_entries.yfilter = yfilter;
    }
    if(value_path == "static-entries")
    {
        static_entries.yfilter = yfilter;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent.yfilter = yfilter;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent.yfilter = yfilter;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries.yfilter = yfilter;
    }
}

bool Arp::Nodes::Node::TrafficVrfs::TrafficVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "alias-entries" || name == "arp-packet-interface-out-of-subnet" || name == "arp-packet-node-out-of-subnet" || name == "arp-packet-unsolicited-packet" || name == "dhcp-entries" || name == "dynamic-entries" || name == "gratuitous-replies-sent" || name == "idb-structures" || name == "interface-entries" || name == "ip-packets-dropped-interface" || name == "ip-packets-dropped-node" || name == "local-proxy-replies-sent" || name == "no-buffer-errors" || name == "out-of-memory-errors" || name == "proxy-replies-sent" || name == "replies-received" || name == "replies-sent" || name == "requests-received" || name == "requests-sent" || name == "resolution-replies-received" || name == "resolution-requests-dropped" || name == "resolution-requests-received" || name == "standby-entries" || name == "static-entries" || name == "subscr-replies-gratg-sent" || name == "subscr-replies-sent" || name == "subscr-requests-received" || name == "total-entries" || name == "vxlan-entries")
        return true;
    return false;
}

ArpGmp::ArpGmp()
    :
    vrf_infos(std::make_shared<ArpGmp::VrfInfos>())
	,vrfs(std::make_shared<ArpGmp::Vrfs>())
{
    vrf_infos->parent = this;
    vrfs->parent = this;

    yang_name = "arp-gmp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

ArpGmp::~ArpGmp()
{
}

bool ArpGmp::has_data() const
{
    return (vrf_infos !=  nullptr && vrf_infos->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool ArpGmp::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_infos !=  nullptr && vrf_infos->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string ArpGmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-infos")
    {
        if(vrf_infos == nullptr)
        {
            vrf_infos = std::make_shared<ArpGmp::VrfInfos>();
        }
        return vrf_infos;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<ArpGmp::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf_infos != nullptr)
    {
        children["vrf-infos"] = vrf_infos;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void ArpGmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpGmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ArpGmp::clone_ptr() const
{
    return std::make_shared<ArpGmp>();
}

std::string ArpGmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ArpGmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ArpGmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ArpGmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ArpGmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-infos" || name == "vrfs")
        return true;
    return false;
}

ArpGmp::VrfInfos::VrfInfos()
{

    yang_name = "vrf-infos"; yang_parent_name = "arp-gmp"; is_top_level_class = false; has_list_ancestor = false;
}

ArpGmp::VrfInfos::~VrfInfos()
{
}

bool ArpGmp::VrfInfos::has_data() const
{
    for (std::size_t index=0; index<vrf_info.size(); index++)
    {
        if(vrf_info[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::VrfInfos::has_operation() const
{
    for (std::size_t index=0; index<vrf_info.size(); index++)
    {
        if(vrf_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpGmp::VrfInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpGmp::VrfInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::VrfInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::VrfInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-info")
    {
        for(auto const & c : vrf_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ArpGmp::VrfInfos::VrfInfo>();
        c->parent = this;
        vrf_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::VrfInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ArpGmp::VrfInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpGmp::VrfInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpGmp::VrfInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-info")
        return true;
    return false;
}

ArpGmp::VrfInfos::VrfInfo::VrfInfo()
    :
    vrf_name{YType::str, "vrf-name"},
    rsi_handle{YType::uint32, "rsi-handle"},
    rsi_handle_high{YType::uint32, "rsi-handle-high"},
    table_id{YType::uint32, "table-id"},
    vrf_id_number{YType::uint32, "vrf-id-number"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{

    yang_name = "vrf-info"; yang_parent_name = "vrf-infos"; is_top_level_class = false; has_list_ancestor = false;
}

ArpGmp::VrfInfos::VrfInfo::~VrfInfo()
{
}

bool ArpGmp::VrfInfos::VrfInfo::has_data() const
{
    return vrf_name.is_set
	|| rsi_handle.is_set
	|| rsi_handle_high.is_set
	|| table_id.is_set
	|| vrf_id_number.is_set
	|| vrf_name_xr.is_set;
}

bool ArpGmp::VrfInfos::VrfInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(rsi_handle.yfilter)
	|| ydk::is_set(rsi_handle_high.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_id_number.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter);
}

std::string ArpGmp::VrfInfos::VrfInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/vrf-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpGmp::VrfInfos::VrfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-info" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::VrfInfos::VrfInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (rsi_handle.is_set || is_set(rsi_handle.yfilter)) leaf_name_data.push_back(rsi_handle.get_name_leafdata());
    if (rsi_handle_high.is_set || is_set(rsi_handle_high.yfilter)) leaf_name_data.push_back(rsi_handle_high.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_id_number.is_set || is_set(vrf_id_number.yfilter)) leaf_name_data.push_back(vrf_id_number.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::VrfInfos::VrfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::VrfInfos::VrfInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ArpGmp::VrfInfos::VrfInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-handle")
    {
        rsi_handle = value;
        rsi_handle.value_namespace = name_space;
        rsi_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-handle-high")
    {
        rsi_handle_high = value;
        rsi_handle_high.value_namespace = name_space;
        rsi_handle_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id-number")
    {
        vrf_id_number = value;
        vrf_id_number.value_namespace = name_space;
        vrf_id_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ArpGmp::VrfInfos::VrfInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "rsi-handle")
    {
        rsi_handle.yfilter = yfilter;
    }
    if(value_path == "rsi-handle-high")
    {
        rsi_handle_high.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "vrf-id-number")
    {
        vrf_id_number.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool ArpGmp::VrfInfos::VrfInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "rsi-handle" || name == "rsi-handle-high" || name == "table-id" || name == "vrf-id-number" || name == "vrf-name-xr")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "arp-gmp"; is_top_level_class = false; has_list_ancestor = false;
}

ArpGmp::Vrfs::~Vrfs()
{
}

bool ArpGmp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpGmp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpGmp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ArpGmp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpGmp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpGmp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    configured_ip_addresses(std::make_shared<ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses>())
	,interface_configured_ips(std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps>())
	,routes(std::make_shared<ArpGmp::Vrfs::Vrf::Routes>())
{
    configured_ip_addresses->parent = this;
    interface_configured_ips->parent = this;
    routes->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

ArpGmp::Vrfs::Vrf::~Vrf()
{
}

bool ArpGmp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (configured_ip_addresses !=  nullptr && configured_ip_addresses->has_data())
	|| (interface_configured_ips !=  nullptr && interface_configured_ips->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool ArpGmp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (configured_ip_addresses !=  nullptr && configured_ip_addresses->has_operation())
	|| (interface_configured_ips !=  nullptr && interface_configured_ips->has_operation())
	|| (routes !=  nullptr && routes->has_operation());
}

std::string ArpGmp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpGmp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-ip-addresses")
    {
        if(configured_ip_addresses == nullptr)
        {
            configured_ip_addresses = std::make_shared<ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses>();
        }
        return configured_ip_addresses;
    }

    if(child_yang_name == "interface-configured-ips")
    {
        if(interface_configured_ips == nullptr)
        {
            interface_configured_ips = std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps>();
        }
        return interface_configured_ips;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<ArpGmp::Vrfs::Vrf::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_ip_addresses != nullptr)
    {
        children["configured-ip-addresses"] = configured_ip_addresses;
    }

    if(interface_configured_ips != nullptr)
    {
        children["interface-configured-ips"] = interface_configured_ips;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ArpGmp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ArpGmp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-ip-addresses" || name == "interface-configured-ips" || name == "routes" || name == "vrf-name")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddresses()
{

    yang_name = "configured-ip-addresses"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::~ConfiguredIpAddresses()
{
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::has_data() const
{
    for (std::size_t index=0; index<configured_ip_address.size(); index++)
    {
        if(configured_ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::has_operation() const
{
    for (std::size_t index=0; index<configured_ip_address.size(); index++)
    {
        if(configured_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-ip-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-ip-address")
    {
        for(auto const & c : configured_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress>();
        c->parent = this;
        configured_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : configured_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-ip-address")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::ConfiguredIpAddress()
    :
    address{YType::str, "address"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    entry_type{YType::enumeration, "entry-type"},
    hardware_address{YType::str, "hardware-address"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "configured-ip-address"; yang_parent_name = "configured-ip-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::~ConfiguredIpAddress()
{
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::has_data() const
{
    return address.is_set
	|| encapsulation_type.is_set
	|| entry_type.is_set
	|| hardware_address.is_set
	|| ip_address.is_set;
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(entry_type.yfilter)
	|| ydk::is_set(hardware_address.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-ip-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (entry_type.is_set || is_set(entry_type.yfilter)) leaf_name_data.push_back(entry_type.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-type")
    {
        entry_type = value;
        entry_type.value_namespace = name_space;
        entry_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "entry-type")
    {
        entry_type.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "encapsulation-type" || name == "entry-type" || name == "hardware-address" || name == "ip-address")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIps()
{

    yang_name = "interface-configured-ips"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::~InterfaceConfiguredIps()
{
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::has_data() const
{
    for (std::size_t index=0; index<interface_configured_ip.size(); index++)
    {
        if(interface_configured_ip[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::has_operation() const
{
    for (std::size_t index=0; index<interface_configured_ip.size(); index++)
    {
        if(interface_configured_ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configured-ips";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-configured-ip")
    {
        for(auto const & c : interface_configured_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp>();
        c->parent = this;
        interface_configured_ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_configured_ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-configured-ip")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::InterfaceConfiguredIp()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    reference_count{YType::uint32, "reference-count"}
    	,
    associated_configuration_entry(std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry>())
{
    associated_configuration_entry->parent = this;

    yang_name = "interface-configured-ip"; yang_parent_name = "interface-configured-ips"; is_top_level_class = false; has_list_ancestor = true;
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::~InterfaceConfiguredIp()
{
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::has_data() const
{
    return address.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| reference_count.is_set
	|| (associated_configuration_entry !=  nullptr && associated_configuration_entry->has_data());
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(reference_count.yfilter)
	|| (associated_configuration_entry !=  nullptr && associated_configuration_entry->has_operation());
}

std::string ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configured-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "associated-configuration-entry")
    {
        if(associated_configuration_entry == nullptr)
        {
            associated_configuration_entry = std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry>();
        }
        return associated_configuration_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(associated_configuration_entry != nullptr)
    {
        children["associated-configuration-entry"] = associated_configuration_entry;
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "associated-configuration-entry" || name == "address" || name == "interface-name" || name == "interface-name-xr" || name == "reference-count")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::AssociatedConfigurationEntry()
    :
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    entry_type{YType::enumeration, "entry-type"},
    hardware_address{YType::str, "hardware-address"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "associated-configuration-entry"; yang_parent_name = "interface-configured-ip"; is_top_level_class = false; has_list_ancestor = true;
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::~AssociatedConfigurationEntry()
{
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::has_data() const
{
    return encapsulation_type.is_set
	|| entry_type.is_set
	|| hardware_address.is_set
	|| ip_address.is_set;
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(entry_type.yfilter)
	|| ydk::is_set(hardware_address.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-configuration-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (entry_type.is_set || is_set(entry_type.yfilter)) leaf_name_data.push_back(entry_type.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-type")
    {
        entry_type = value;
        entry_type.value_namespace = name_space;
        entry_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "entry-type")
    {
        entry_type.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-type" || name == "entry-type" || name == "hardware-address" || name == "ip-address")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::Routes::Routes()
{

    yang_name = "routes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

ArpGmp::Vrfs::Vrf::Routes::~Routes()
{
}

bool ArpGmp::Vrfs::Vrf::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::Vrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpGmp::Vrfs::Vrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpGmp::Vrfs::Vrf::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpGmp::Vrfs::Vrf::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

ArpGmp::Vrfs::Vrf::Routes::Route::Route()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    ip_address{YType::str, "ip-address"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"}
{

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true;
}

ArpGmp::Vrfs::Vrf::Routes::Route::~Route()
{
}

bool ArpGmp::Vrfs::Vrf::Routes::Route::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| interface_name_xr.is_set
	|| ip_address.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set;
}

bool ArpGmp::Vrfs::Vrf::Routes::Route::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter);
}

std::string ArpGmp::Vrfs::Vrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpGmp::Vrfs::Vrf::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());

    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpGmp::Vrfs::Vrf::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ArpGmp::Vrfs::Vrf::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ArpGmp::Vrfs::Vrf::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
}

bool ArpGmp::Vrfs::Vrf::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name" || name == "interface-name-xr" || name == "ip-address" || name == "prefix-length" || name == "prefix-length-xr")
        return true;
    return false;
}

const Enum::YLeaf ArpGmpBagEntry::null {0, "null"};
const Enum::YLeaf ArpGmpBagEntry::static_ {1, "static"};
const Enum::YLeaf ArpGmpBagEntry::alias {2, "alias"};

const Enum::YLeaf IpArpBagMedia::media_arpa {0, "media-arpa"};
const Enum::YLeaf IpArpBagMedia::media_srp {1, "media-srp"};
const Enum::YLeaf IpArpBagMedia::media_unknown {2, "media-unknown"};

const Enum::YLeaf ArpGmpBagEncap::none {0, "none"};
const Enum::YLeaf ArpGmpBagEncap::arpa {1, "arpa"};
const Enum::YLeaf ArpGmpBagEncap::snap {2, "snap"};
const Enum::YLeaf ArpGmpBagEncap::ieee802_1q {3, "ieee802-1q"};
const Enum::YLeaf ArpGmpBagEncap::srp {4, "srp"};
const Enum::YLeaf ArpGmpBagEncap::srpa {5, "srpa"};
const Enum::YLeaf ArpGmpBagEncap::srpb {6, "srpb"};

const Enum::YLeaf ArpResolutionHistoryStatus::status_none {0, "status-none"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolution_request {1, "status-resolution-request"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolved_reply {2, "status-resolved-reply"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolved_grat_arp {3, "status-resolved-grat-arp"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolved_request {4, "status-resolved-request"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolved_lc_sync {5, "status-resolved-lc-sync"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolved_lc_sync_purge_delay {6, "status-resolved-lc-sync-purge-delay"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolved_client {7, "status-resolved-client"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_removed_client {8, "status-removed-client"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_already_resolved {9, "status-already-resolved"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_failed {10, "status-failed"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_dropped_interface_down {11, "status-dropped-interface-down"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_dropped_broadcast_disabled {12, "status-dropped-broadcast-disabled"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_dropped_interface_unavailable {13, "status-dropped-interface-unavailable"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_dropped_bad_subnet {14, "status-dropped-bad-subnet"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_dropped_dynamic_learning_disabled {15, "status-dropped-dynamic-learning-disabled"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_dropped_out_of_subnet_disabled {16, "status-dropped-out-of-subnet-disabled"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_removed_client_sweep {17, "status-removed-client-sweep"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_added_client {18, "status-added-client"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_added_v1 {19, "status-added-v1"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_removed_v1 {20, "status-removed-v1"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_resolved_peer_sync {21, "status-resolved-peer-sync"};
const Enum::YLeaf ArpResolutionHistoryStatus::status_dropped_unsolicited_pak {22, "status-dropped-unsolicited-pak"};

const Enum::YLeaf IpArpBagEncap::none {0, "none"};
const Enum::YLeaf IpArpBagEncap::arpa {1, "arpa"};
const Enum::YLeaf IpArpBagEncap::snap {2, "snap"};
const Enum::YLeaf IpArpBagEncap::ieee802_1q {3, "ieee802-1q"};
const Enum::YLeaf IpArpBagEncap::srp {4, "srp"};
const Enum::YLeaf IpArpBagEncap::srpa {5, "srpa"};
const Enum::YLeaf IpArpBagEncap::srpb {6, "srpb"};

const Enum::YLeaf IpArpBagState::state_none {0, "state-none"};
const Enum::YLeaf IpArpBagState::state_interface {1, "state-interface"};
const Enum::YLeaf IpArpBagState::state_standby {2, "state-standby"};
const Enum::YLeaf IpArpBagState::state_static {3, "state-static"};
const Enum::YLeaf IpArpBagState::state_alias {4, "state-alias"};
const Enum::YLeaf IpArpBagState::state_mobile {5, "state-mobile"};
const Enum::YLeaf IpArpBagState::state_incomplete {6, "state-incomplete"};
const Enum::YLeaf IpArpBagState::state_deleted {7, "state-deleted"};
const Enum::YLeaf IpArpBagState::state_dynamic {8, "state-dynamic"};
const Enum::YLeaf IpArpBagState::state_probe {9, "state-probe"};
const Enum::YLeaf IpArpBagState::state_purge_delayed {10, "state-purge-delayed"};
const Enum::YLeaf IpArpBagState::state_dhcp {11, "state-dhcp"};
const Enum::YLeaf IpArpBagState::state_vxlan {12, "state-vxlan"};
const Enum::YLeaf IpArpBagState::state_evpn_sync {13, "state-evpn-sync"};
const Enum::YLeaf IpArpBagState::state_sat {14, "state-sat"};
const Enum::YLeaf IpArpBagState::state_r_sync {15, "state-r-sync"};
const Enum::YLeaf IpArpBagState::state_max {16, "state-max"};

const Enum::YLeaf IpArpBagFlags::flag_none {0, "flag-none"};
const Enum::YLeaf IpArpBagFlags::flag_dynamic {1, "flag-dynamic"};
const Enum::YLeaf IpArpBagFlags::flag_evpn_sync {2, "flag-evpn-sync"};
const Enum::YLeaf IpArpBagFlags::flag_max {3, "flag-max"};


}
}

