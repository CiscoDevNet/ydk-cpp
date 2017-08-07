
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_nd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_nd_oper {

Ipv6NodeDiscovery::Ipv6NodeDiscovery()
    :
    nodes(std::make_shared<Ipv6NodeDiscovery::Nodes>())
{
    nodes->parent = this;

    yang_name = "ipv6-node-discovery"; yang_parent_name = "Cisco-IOS-XR-ipv6-nd-oper";
}

Ipv6NodeDiscovery::~Ipv6NodeDiscovery()
{
}

bool Ipv6NodeDiscovery::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ipv6NodeDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ipv6NodeDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ipv6NodeDiscovery::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Ipv6NodeDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ipv6NodeDiscovery::clone_ptr() const
{
    return std::make_shared<Ipv6NodeDiscovery>();
}

std::string Ipv6NodeDiscovery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6NodeDiscovery::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6NodeDiscovery::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6NodeDiscovery::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6NodeDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ipv6-node-discovery";
}

Ipv6NodeDiscovery::Nodes::~Nodes()
{
}

bool Ipv6NodeDiscovery::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    bundle_interfaces(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces>())
	,bundle_nodes(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes>())
	,interfaces(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::Interfaces>())
	,nd_virtual_routers(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters>())
	,neighbor_interfaces(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces>())
	,neighbor_summary(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary>())
{
    bundle_interfaces->parent = this;

    bundle_nodes->parent = this;

    interfaces->parent = this;

    nd_virtual_routers->parent = this;

    neighbor_interfaces->parent = this;

    neighbor_summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Ipv6NodeDiscovery::Nodes::Node::~Node()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (bundle_nodes !=  nullptr && bundle_nodes->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (nd_virtual_routers !=  nullptr && nd_virtual_routers->has_data())
	|| (neighbor_interfaces !=  nullptr && neighbor_interfaces->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (bundle_nodes !=  nullptr && bundle_nodes->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (nd_virtual_routers !=  nullptr && nd_virtual_routers->has_operation())
	|| (neighbor_interfaces !=  nullptr && neighbor_interfaces->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    if(child_yang_name == "bundle-nodes")
    {
        if(bundle_nodes == nullptr)
        {
            bundle_nodes = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes>();
        }
        return bundle_nodes;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "nd-virtual-routers")
    {
        if(nd_virtual_routers == nullptr)
        {
            nd_virtual_routers = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters>();
        }
        return nd_virtual_routers;
    }

    if(child_yang_name == "neighbor-interfaces")
    {
        if(neighbor_interfaces == nullptr)
        {
            neighbor_interfaces = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces>();
        }
        return neighbor_interfaces;
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary>();
        }
        return neighbor_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    if(bundle_nodes != nullptr)
    {
        children["bundle-nodes"] = bundle_nodes;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(nd_virtual_routers != nullptr)
    {
        children["nd-virtual-routers"] = nd_virtual_routers;
    }

    if(neighbor_interfaces != nullptr)
    {
        children["neighbor-interfaces"] = neighbor_interfaces;
    }

    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interfaces" || name == "bundle-nodes" || name == "interfaces" || name == "nd-virtual-routers" || name == "neighbor-interfaces" || name == "neighbor-summary" || name == "node-name")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterfaces()
{
    yang_name = "neighbor-interfaces"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::~NeighborInterfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::has_data() const
{
    for (std::size_t index=0; index<neighbor_interface.size(); index++)
    {
        if(neighbor_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::has_operation() const
{
    for (std::size_t index=0; index<neighbor_interface.size(); index++)
    {
        if(neighbor_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-interfaces";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborInterfaces' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-interface")
    {
        for(auto const & c : neighbor_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface>();
        c->parent = this;
        neighbor_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-interface")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::NeighborInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    host_addresses(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses>())
{
    host_addresses->parent = this;

    yang_name = "neighbor-interface"; yang_parent_name = "neighbor-interfaces";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::~NeighborInterface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::has_data() const
{
    return interface_name.is_set
	|| (host_addresses !=  nullptr && host_addresses->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (host_addresses !=  nullptr && host_addresses->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborInterface' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-addresses")
    {
        if(host_addresses == nullptr)
        {
            host_addresses = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses>();
        }
        return host_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_addresses != nullptr)
    {
        children["host-addresses"] = host_addresses;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-addresses" || name == "interface-name")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddresses()
{
    yang_name = "host-addresses"; yang_parent_name = "neighbor-interface";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::~HostAddresses()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::has_data() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::has_operation() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-addresses";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostAddresses' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-address")
    {
        for(auto const & c : host_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress>();
        c->parent = this;
        host_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-address")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::HostAddress()
    :
    host_address{YType::str, "host-address"},
    encapsulation{YType::enumeration, "encapsulation"},
    interface_name{YType::str, "interface-name"},
    is_router{YType::boolean, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    location{YType::str, "location"},
    origin_encapsulation{YType::enumeration, "origin-encapsulation"},
    reachability_state{YType::enumeration, "reachability-state"},
    selected_encapsulation{YType::enumeration, "selected-encapsulation"},
    serg_flags{YType::uint32, "serg-flags"}
    	,
    last_reached_time(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime>())
{
    last_reached_time->parent = this;

    yang_name = "host-address"; yang_parent_name = "host-addresses";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::~HostAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_data() const
{
    return host_address.is_set
	|| encapsulation.is_set
	|| interface_name.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| location.is_set
	|| origin_encapsulation.is_set
	|| reachability_state.is_set
	|| selected_encapsulation.is_set
	|| serg_flags.is_set
	|| (last_reached_time !=  nullptr && last_reached_time->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_router.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(origin_encapsulation.yfilter)
	|| ydk::is_set(reachability_state.yfilter)
	|| ydk::is_set(selected_encapsulation.yfilter)
	|| ydk::is_set(serg_flags.yfilter)
	|| (last_reached_time !=  nullptr && last_reached_time->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-address" <<"[host-address='" <<host_address <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostAddress' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.yfilter)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (origin_encapsulation.is_set || is_set(origin_encapsulation.yfilter)) leaf_name_data.push_back(origin_encapsulation.get_name_leafdata());
    if (reachability_state.is_set || is_set(reachability_state.yfilter)) leaf_name_data.push_back(reachability_state.get_name_leafdata());
    if (selected_encapsulation.is_set || is_set(selected_encapsulation.yfilter)) leaf_name_data.push_back(selected_encapsulation.get_name_leafdata());
    if (serg_flags.is_set || is_set(serg_flags.yfilter)) leaf_name_data.push_back(serg_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-reached-time")
    {
        if(last_reached_time == nullptr)
        {
            last_reached_time = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime>();
        }
        return last_reached_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_reached_time != nullptr)
    {
        children["last-reached-time"] = last_reached_time;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router")
    {
        is_router = value;
        is_router.value_namespace = name_space;
        is_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-encapsulation")
    {
        origin_encapsulation = value;
        origin_encapsulation.value_namespace = name_space;
        origin_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-state")
    {
        reachability_state = value;
        reachability_state.value_namespace = name_space;
        reachability_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-encapsulation")
    {
        selected_encapsulation = value;
        selected_encapsulation.value_namespace = name_space;
        selected_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-flags")
    {
        serg_flags = value;
        serg_flags.value_namespace = name_space;
        serg_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-router")
    {
        is_router.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "origin-encapsulation")
    {
        origin_encapsulation.yfilter = yfilter;
    }
    if(value_path == "reachability-state")
    {
        reachability_state.yfilter = yfilter;
    }
    if(value_path == "selected-encapsulation")
    {
        selected_encapsulation.yfilter = yfilter;
    }
    if(value_path == "serg-flags")
    {
        serg_flags.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-reached-time" || name == "host-address" || name == "encapsulation" || name == "interface-name" || name == "is-router" || name == "link-layer-address" || name == "location" || name == "origin-encapsulation" || name == "reachability-state" || name == "selected-encapsulation" || name == "serg-flags")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::LastReachedTime()
    :
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-reached-time"; yang_parent_name = "host-address";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::~LastReachedTime()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::has_data() const
{
    return seconds.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reached-time";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReachedTime' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::NeighborSummary()
    :
    total_neighbor_entries{YType::uint32, "total-neighbor-entries"}
    	,
    dynamic(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic>())
	,multicast(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast>())
	,static_(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_>())
{
    dynamic->parent = this;

    multicast->parent = this;

    static_->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::~NeighborSummary()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::has_data() const
{
    return total_neighbor_entries.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_neighbor_entries.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummary' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_neighbor_entries.is_set || is_set(total_neighbor_entries.yfilter)) leaf_name_data.push_back(total_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-neighbor-entries")
    {
        total_neighbor_entries = value;
        total_neighbor_entries.value_namespace = name_space;
        total_neighbor_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-neighbor-entries")
    {
        total_neighbor_entries.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "multicast" || name == "static" || name == "total-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::Multicast()
    :
    delayed_entries{YType::uint32, "delayed-entries"},
    deleted_entries{YType::uint32, "deleted-entries"},
    incomplete_entries{YType::uint32, "incomplete-entries"},
    probe_entries{YType::uint32, "probe-entries"},
    reachable_entries{YType::uint32, "reachable-entries"},
    stale_entries{YType::uint32, "stale-entries"},
    subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{
    yang_name = "multicast"; yang_parent_name = "neighbor-summary";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::~Multicast()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_data() const
{
    return delayed_entries.is_set
	|| deleted_entries.is_set
	|| incomplete_entries.is_set
	|| probe_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delayed_entries.yfilter)
	|| ydk::is_set(deleted_entries.yfilter)
	|| ydk::is_set(incomplete_entries.yfilter)
	|| ydk::is_set(probe_entries.yfilter)
	|| ydk::is_set(reachable_entries.yfilter)
	|| ydk::is_set(stale_entries.yfilter)
	|| ydk::is_set(subtotal_neighbor_entries.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_entries.is_set || is_set(delayed_entries.yfilter)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.yfilter)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (incomplete_entries.is_set || is_set(incomplete_entries.yfilter)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.yfilter)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.yfilter)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.yfilter)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.yfilter)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
        delayed_entries.value_namespace = name_space;
        delayed_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
        deleted_entries.value_namespace = name_space;
        deleted_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
        incomplete_entries.value_namespace = name_space;
        incomplete_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
        probe_entries.value_namespace = name_space;
        probe_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries = value;
        reachable_entries.value_namespace = name_space;
        reachable_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-entries")
    {
        stale_entries = value;
        stale_entries.value_namespace = name_space;
        stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries = value;
        subtotal_neighbor_entries.value_namespace = name_space;
        subtotal_neighbor_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries.yfilter = yfilter;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries.yfilter = yfilter;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries.yfilter = yfilter;
    }
    if(value_path == "probe-entries")
    {
        probe_entries.yfilter = yfilter;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries.yfilter = yfilter;
    }
    if(value_path == "stale-entries")
    {
        stale_entries.yfilter = yfilter;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delayed-entries" || name == "deleted-entries" || name == "incomplete-entries" || name == "probe-entries" || name == "reachable-entries" || name == "stale-entries" || name == "subtotal-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::Static_()
    :
    delayed_entries{YType::uint32, "delayed-entries"},
    deleted_entries{YType::uint32, "deleted-entries"},
    incomplete_entries{YType::uint32, "incomplete-entries"},
    probe_entries{YType::uint32, "probe-entries"},
    reachable_entries{YType::uint32, "reachable-entries"},
    stale_entries{YType::uint32, "stale-entries"},
    subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{
    yang_name = "static"; yang_parent_name = "neighbor-summary";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::~Static_()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::has_data() const
{
    return delayed_entries.is_set
	|| deleted_entries.is_set
	|| incomplete_entries.is_set
	|| probe_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delayed_entries.yfilter)
	|| ydk::is_set(deleted_entries.yfilter)
	|| ydk::is_set(incomplete_entries.yfilter)
	|| ydk::is_set(probe_entries.yfilter)
	|| ydk::is_set(reachable_entries.yfilter)
	|| ydk::is_set(stale_entries.yfilter)
	|| ydk::is_set(subtotal_neighbor_entries.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_entries.is_set || is_set(delayed_entries.yfilter)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.yfilter)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (incomplete_entries.is_set || is_set(incomplete_entries.yfilter)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.yfilter)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.yfilter)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.yfilter)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.yfilter)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
        delayed_entries.value_namespace = name_space;
        delayed_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
        deleted_entries.value_namespace = name_space;
        deleted_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
        incomplete_entries.value_namespace = name_space;
        incomplete_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
        probe_entries.value_namespace = name_space;
        probe_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries = value;
        reachable_entries.value_namespace = name_space;
        reachable_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-entries")
    {
        stale_entries = value;
        stale_entries.value_namespace = name_space;
        stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries = value;
        subtotal_neighbor_entries.value_namespace = name_space;
        subtotal_neighbor_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries.yfilter = yfilter;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries.yfilter = yfilter;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries.yfilter = yfilter;
    }
    if(value_path == "probe-entries")
    {
        probe_entries.yfilter = yfilter;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries.yfilter = yfilter;
    }
    if(value_path == "stale-entries")
    {
        stale_entries.yfilter = yfilter;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delayed-entries" || name == "deleted-entries" || name == "incomplete-entries" || name == "probe-entries" || name == "reachable-entries" || name == "stale-entries" || name == "subtotal-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::Dynamic()
    :
    delayed_entries{YType::uint32, "delayed-entries"},
    deleted_entries{YType::uint32, "deleted-entries"},
    incomplete_entries{YType::uint32, "incomplete-entries"},
    probe_entries{YType::uint32, "probe-entries"},
    reachable_entries{YType::uint32, "reachable-entries"},
    stale_entries{YType::uint32, "stale-entries"},
    subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{
    yang_name = "dynamic"; yang_parent_name = "neighbor-summary";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::~Dynamic()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_data() const
{
    return delayed_entries.is_set
	|| deleted_entries.is_set
	|| incomplete_entries.is_set
	|| probe_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delayed_entries.yfilter)
	|| ydk::is_set(deleted_entries.yfilter)
	|| ydk::is_set(incomplete_entries.yfilter)
	|| ydk::is_set(probe_entries.yfilter)
	|| ydk::is_set(reachable_entries.yfilter)
	|| ydk::is_set(stale_entries.yfilter)
	|| ydk::is_set(subtotal_neighbor_entries.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_entries.is_set || is_set(delayed_entries.yfilter)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.yfilter)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (incomplete_entries.is_set || is_set(incomplete_entries.yfilter)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.yfilter)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.yfilter)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.yfilter)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.yfilter)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
        delayed_entries.value_namespace = name_space;
        delayed_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
        deleted_entries.value_namespace = name_space;
        deleted_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
        incomplete_entries.value_namespace = name_space;
        incomplete_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
        probe_entries.value_namespace = name_space;
        probe_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries = value;
        reachable_entries.value_namespace = name_space;
        reachable_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-entries")
    {
        stale_entries = value;
        stale_entries.value_namespace = name_space;
        stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries = value;
        subtotal_neighbor_entries.value_namespace = name_space;
        subtotal_neighbor_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries.yfilter = yfilter;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries.yfilter = yfilter;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries.yfilter = yfilter;
    }
    if(value_path == "probe-entries")
    {
        probe_entries.yfilter = yfilter;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries.yfilter = yfilter;
    }
    if(value_path == "stale-entries")
    {
        stale_entries.yfilter = yfilter;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delayed-entries" || name == "deleted-entries" || name == "incomplete-entries" || name == "probe-entries" || name == "reachable-entries" || name == "stale-entries" || name == "subtotal-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNodes()
{
    yang_name = "bundle-nodes"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::~BundleNodes()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::has_data() const
{
    for (std::size_t index=0; index<bundle_node.size(); index++)
    {
        if(bundle_node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::has_operation() const
{
    for (std::size_t index=0; index<bundle_node.size(); index++)
    {
        if(bundle_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-nodes";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleNodes' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-node")
    {
        for(auto const & c : bundle_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode>();
        c->parent = this;
        bundle_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-node")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::BundleNode()
    :
    node_name{YType::str, "node-name"},
    group_id{YType::uint32, "group-id"},
    process_name{YType::str, "process-name"},
    received_packets{YType::uint32, "received-packets"},
    received_sequence_number{YType::uint32, "received-sequence-number"},
    sent_packets{YType::uint32, "sent-packets"},
    sent_sequence_number{YType::uint32, "sent-sequence-number"},
    state{YType::enumeration, "state"},
    state_changes{YType::uint32, "state-changes"}
    	,
    age(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age>())
{
    age->parent = this;

    yang_name = "bundle-node"; yang_parent_name = "bundle-nodes";
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::~BundleNode()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_data() const
{
    return node_name.is_set
	|| group_id.is_set
	|| process_name.is_set
	|| received_packets.is_set
	|| received_sequence_number.is_set
	|| sent_packets.is_set
	|| sent_sequence_number.is_set
	|| state.is_set
	|| state_changes.is_set
	|| (age !=  nullptr && age->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(received_sequence_number.yfilter)
	|| ydk::is_set(sent_packets.yfilter)
	|| ydk::is_set(sent_sequence_number.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| (age !=  nullptr && age->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleNode' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (received_sequence_number.is_set || is_set(received_sequence_number.yfilter)) leaf_name_data.push_back(received_sequence_number.get_name_leafdata());
    if (sent_packets.is_set || is_set(sent_packets.yfilter)) leaf_name_data.push_back(sent_packets.get_name_leafdata());
    if (sent_sequence_number.is_set || is_set(sent_sequence_number.yfilter)) leaf_name_data.push_back(sent_sequence_number.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "age")
    {
        if(age == nullptr)
        {
            age = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age>();
        }
        return age;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(age != nullptr)
    {
        children["age"] = age;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-sequence-number")
    {
        received_sequence_number = value;
        received_sequence_number.value_namespace = name_space;
        received_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-packets")
    {
        sent_packets = value;
        sent_packets.value_namespace = name_space;
        sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-sequence-number")
    {
        sent_sequence_number = value;
        sent_sequence_number.value_namespace = name_space;
        sent_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "received-sequence-number")
    {
        received_sequence_number.yfilter = yfilter;
    }
    if(value_path == "sent-packets")
    {
        sent_packets.yfilter = yfilter;
    }
    if(value_path == "sent-sequence-number")
    {
        sent_sequence_number.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age" || name == "node-name" || name == "group-id" || name == "process-name" || name == "received-packets" || name == "received-sequence-number" || name == "sent-packets" || name == "sent-sequence-number" || name == "state" || name == "state-changes")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::Age()
    :
    seconds{YType::uint32, "seconds"}
{
    yang_name = "age"; yang_parent_name = "bundle-node";
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::~Age()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::has_data() const
{
    return seconds.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "age";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Age' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleInterfaces' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::BundleInterface()
    :
    interface_name{YType::str, "interface-name"},
    etype{YType::uint32, "etype"},
    iftype{YType::uint32, "iftype"},
    is_interface_enabled{YType::boolean, "is-interface-enabled"},
    is_ipv6_enabled{YType::boolean, "is-ipv6-enabled"},
    is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
    mac_addr{YType::str, "mac-addr"},
    mac_addr_size{YType::uint32, "mac-addr-size"},
    member_link{YType::uint32, "member-link"},
    mtu{YType::uint32, "mtu"},
    parent_interface_name{YType::str, "parent-interface-name"},
    vlan_tag{YType::uint16, "vlan-tag"}
    	,
    local_address(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress>())
	,nd_parameters(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters>())
{
    local_address->parent = this;

    nd_parameters->parent = this;

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_node.size(); index++)
    {
        if(member_node[index]->has_data())
            return true;
    }
    for (auto const & leaf : member_link.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| etype.is_set
	|| iftype.is_set
	|| is_interface_enabled.is_set
	|| is_ipv6_enabled.is_set
	|| is_mpls_enabled.is_set
	|| mac_addr.is_set
	|| mac_addr_size.is_set
	|| mtu.is_set
	|| parent_interface_name.is_set
	|| vlan_tag.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (nd_parameters !=  nullptr && nd_parameters->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_node.size(); index++)
    {
        if(member_node[index]->has_operation())
            return true;
    }
    for (auto const & leaf : member_link.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(iftype.yfilter)
	|| ydk::is_set(is_interface_enabled.yfilter)
	|| ydk::is_set(is_ipv6_enabled.yfilter)
	|| ydk::is_set(is_mpls_enabled.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mac_addr_size.yfilter)
	|| ydk::is_set(member_link.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(vlan_tag.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (nd_parameters !=  nullptr && nd_parameters->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleInterface' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (etype.is_set || is_set(etype.yfilter)) leaf_name_data.push_back(etype.get_name_leafdata());
    if (iftype.is_set || is_set(iftype.yfilter)) leaf_name_data.push_back(iftype.get_name_leafdata());
    if (is_interface_enabled.is_set || is_set(is_interface_enabled.yfilter)) leaf_name_data.push_back(is_interface_enabled.get_name_leafdata());
    if (is_ipv6_enabled.is_set || is_set(is_ipv6_enabled.yfilter)) leaf_name_data.push_back(is_ipv6_enabled.get_name_leafdata());
    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.yfilter)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (mac_addr_size.is_set || is_set(mac_addr_size.yfilter)) leaf_name_data.push_back(mac_addr_size.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (vlan_tag.is_set || is_set(vlan_tag.yfilter)) leaf_name_data.push_back(vlan_tag.get_name_leafdata());

    auto member_link_name_datas = member_link.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_link_name_datas.begin(), member_link_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-address")
    {
        for(auto const & c : global_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress>();
        c->parent = this;
        global_address.push_back(c);
        return c;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "member-node")
    {
        for(auto const & c : member_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode>();
        c->parent = this;
        member_node.push_back(c);
        return c;
    }

    if(child_yang_name == "nd-parameters")
    {
        if(nd_parameters == nullptr)
        {
            nd_parameters = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters>();
        }
        return nd_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    for (auto const & c : member_node)
    {
        children[c->get_segment_path()] = c;
    }

    if(nd_parameters != nullptr)
    {
        children["nd-parameters"] = nd_parameters;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etype")
    {
        etype = value;
        etype.value_namespace = name_space;
        etype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iftype")
    {
        iftype = value;
        iftype.value_namespace = name_space;
        iftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-enabled")
    {
        is_interface_enabled = value;
        is_interface_enabled.value_namespace = name_space;
        is_interface_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipv6-enabled")
    {
        is_ipv6_enabled = value;
        is_ipv6_enabled.value_namespace = name_space;
        is_ipv6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled = value;
        is_mpls_enabled.value_namespace = name_space;
        is_mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr-size")
    {
        mac_addr_size = value;
        mac_addr_size.value_namespace = name_space;
        mac_addr_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-link")
    {
        member_link.append(value);
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-tag")
    {
        vlan_tag = value;
        vlan_tag.value_namespace = name_space;
        vlan_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "iftype")
    {
        iftype.yfilter = yfilter;
    }
    if(value_path == "is-interface-enabled")
    {
        is_interface_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipv6-enabled")
    {
        is_ipv6_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mac-addr-size")
    {
        mac_addr_size.yfilter = yfilter;
    }
    if(value_path == "member-link")
    {
        member_link.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "vlan-tag")
    {
        vlan_tag.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-address" || name == "local-address" || name == "member-node" || name == "nd-parameters" || name == "interface-name" || name == "etype" || name == "iftype" || name == "is-interface-enabled" || name == "is-ipv6-enabled" || name == "is-mpls-enabled" || name == "mac-addr" || name == "mac-addr-size" || name == "member-link" || name == "mtu" || name == "parent-interface-name" || name == "vlan-tag")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::NdParameters()
    :
    complete_glean_count{YType::uint32, "complete-glean-count"},
    complete_protocol_count{YType::uint32, "complete-protocol-count"},
    dad_attempts{YType::uint32, "dad-attempts"},
    dropped_glean_req_count{YType::uint32, "dropped-glean-req-count"},
    dropped_protocol_req_count{YType::uint32, "dropped-protocol-req-count"},
    incomplete_glean_count{YType::uint32, "incomplete-glean-count"},
    incomplete_protocol_count{YType::uint32, "incomplete-protocol-count"},
    is_dad_enabled{YType::boolean, "is-dad-enabled"},
    is_dhcp_managed{YType::boolean, "is-dhcp-managed"},
    is_icm_pv6_redirect{YType::boolean, "is-icm-pv6-redirect"},
    is_route_address_managed{YType::boolean, "is-route-address-managed"},
    is_suppressed{YType::boolean, "is-suppressed"},
    nd_advertisement_lifetime{YType::uint32, "nd-advertisement-lifetime"},
    nd_cache_limit{YType::uint32, "nd-cache-limit"},
    nd_max_transmit_interval{YType::uint32, "nd-max-transmit-interval"},
    nd_min_transmit_interval{YType::uint32, "nd-min-transmit-interval"},
    nd_reachable_time{YType::uint32, "nd-reachable-time"},
    nd_retransmit_interval{YType::uint32, "nd-retransmit-interval"},
    send_unicast_ra{YType::boolean, "send-unicast-ra"}
{
    yang_name = "nd-parameters"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::~NdParameters()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_data() const
{
    return complete_glean_count.is_set
	|| complete_protocol_count.is_set
	|| dad_attempts.is_set
	|| dropped_glean_req_count.is_set
	|| dropped_protocol_req_count.is_set
	|| incomplete_glean_count.is_set
	|| incomplete_protocol_count.is_set
	|| is_dad_enabled.is_set
	|| is_dhcp_managed.is_set
	|| is_icm_pv6_redirect.is_set
	|| is_route_address_managed.is_set
	|| is_suppressed.is_set
	|| nd_advertisement_lifetime.is_set
	|| nd_cache_limit.is_set
	|| nd_max_transmit_interval.is_set
	|| nd_min_transmit_interval.is_set
	|| nd_reachable_time.is_set
	|| nd_retransmit_interval.is_set
	|| send_unicast_ra.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_glean_count.yfilter)
	|| ydk::is_set(complete_protocol_count.yfilter)
	|| ydk::is_set(dad_attempts.yfilter)
	|| ydk::is_set(dropped_glean_req_count.yfilter)
	|| ydk::is_set(dropped_protocol_req_count.yfilter)
	|| ydk::is_set(incomplete_glean_count.yfilter)
	|| ydk::is_set(incomplete_protocol_count.yfilter)
	|| ydk::is_set(is_dad_enabled.yfilter)
	|| ydk::is_set(is_dhcp_managed.yfilter)
	|| ydk::is_set(is_icm_pv6_redirect.yfilter)
	|| ydk::is_set(is_route_address_managed.yfilter)
	|| ydk::is_set(is_suppressed.yfilter)
	|| ydk::is_set(nd_advertisement_lifetime.yfilter)
	|| ydk::is_set(nd_cache_limit.yfilter)
	|| ydk::is_set(nd_max_transmit_interval.yfilter)
	|| ydk::is_set(nd_min_transmit_interval.yfilter)
	|| ydk::is_set(nd_reachable_time.yfilter)
	|| ydk::is_set(nd_retransmit_interval.yfilter)
	|| ydk::is_set(send_unicast_ra.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-parameters";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NdParameters' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_glean_count.is_set || is_set(complete_glean_count.yfilter)) leaf_name_data.push_back(complete_glean_count.get_name_leafdata());
    if (complete_protocol_count.is_set || is_set(complete_protocol_count.yfilter)) leaf_name_data.push_back(complete_protocol_count.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.yfilter)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (dropped_glean_req_count.is_set || is_set(dropped_glean_req_count.yfilter)) leaf_name_data.push_back(dropped_glean_req_count.get_name_leafdata());
    if (dropped_protocol_req_count.is_set || is_set(dropped_protocol_req_count.yfilter)) leaf_name_data.push_back(dropped_protocol_req_count.get_name_leafdata());
    if (incomplete_glean_count.is_set || is_set(incomplete_glean_count.yfilter)) leaf_name_data.push_back(incomplete_glean_count.get_name_leafdata());
    if (incomplete_protocol_count.is_set || is_set(incomplete_protocol_count.yfilter)) leaf_name_data.push_back(incomplete_protocol_count.get_name_leafdata());
    if (is_dad_enabled.is_set || is_set(is_dad_enabled.yfilter)) leaf_name_data.push_back(is_dad_enabled.get_name_leafdata());
    if (is_dhcp_managed.is_set || is_set(is_dhcp_managed.yfilter)) leaf_name_data.push_back(is_dhcp_managed.get_name_leafdata());
    if (is_icm_pv6_redirect.is_set || is_set(is_icm_pv6_redirect.yfilter)) leaf_name_data.push_back(is_icm_pv6_redirect.get_name_leafdata());
    if (is_route_address_managed.is_set || is_set(is_route_address_managed.yfilter)) leaf_name_data.push_back(is_route_address_managed.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.yfilter)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (nd_advertisement_lifetime.is_set || is_set(nd_advertisement_lifetime.yfilter)) leaf_name_data.push_back(nd_advertisement_lifetime.get_name_leafdata());
    if (nd_cache_limit.is_set || is_set(nd_cache_limit.yfilter)) leaf_name_data.push_back(nd_cache_limit.get_name_leafdata());
    if (nd_max_transmit_interval.is_set || is_set(nd_max_transmit_interval.yfilter)) leaf_name_data.push_back(nd_max_transmit_interval.get_name_leafdata());
    if (nd_min_transmit_interval.is_set || is_set(nd_min_transmit_interval.yfilter)) leaf_name_data.push_back(nd_min_transmit_interval.get_name_leafdata());
    if (nd_reachable_time.is_set || is_set(nd_reachable_time.yfilter)) leaf_name_data.push_back(nd_reachable_time.get_name_leafdata());
    if (nd_retransmit_interval.is_set || is_set(nd_retransmit_interval.yfilter)) leaf_name_data.push_back(nd_retransmit_interval.get_name_leafdata());
    if (send_unicast_ra.is_set || is_set(send_unicast_ra.yfilter)) leaf_name_data.push_back(send_unicast_ra.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-glean-count")
    {
        complete_glean_count = value;
        complete_glean_count.value_namespace = name_space;
        complete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count = value;
        complete_protocol_count.value_namespace = name_space;
        complete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
        dad_attempts.value_namespace = name_space;
        dad_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count = value;
        dropped_glean_req_count.value_namespace = name_space;
        dropped_glean_req_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count = value;
        dropped_protocol_req_count.value_namespace = name_space;
        dropped_protocol_req_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count = value;
        incomplete_glean_count.value_namespace = name_space;
        incomplete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count = value;
        incomplete_protocol_count.value_namespace = name_space;
        incomplete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled = value;
        is_dad_enabled.value_namespace = name_space;
        is_dad_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed = value;
        is_dhcp_managed.value_namespace = name_space;
        is_dhcp_managed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect = value;
        is_icm_pv6_redirect.value_namespace = name_space;
        is_icm_pv6_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed = value;
        is_route_address_managed.value_namespace = name_space;
        is_route_address_managed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
        is_suppressed.value_namespace = name_space;
        is_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime = value;
        nd_advertisement_lifetime.value_namespace = name_space;
        nd_advertisement_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit = value;
        nd_cache_limit.value_namespace = name_space;
        nd_cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval = value;
        nd_max_transmit_interval.value_namespace = name_space;
        nd_max_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval = value;
        nd_min_transmit_interval.value_namespace = name_space;
        nd_min_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time = value;
        nd_reachable_time.value_namespace = name_space;
        nd_reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval = value;
        nd_retransmit_interval.value_namespace = name_space;
        nd_retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra = value;
        send_unicast_ra.value_namespace = name_space;
        send_unicast_ra.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-glean-count")
    {
        complete_glean_count.yfilter = yfilter;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts.yfilter = yfilter;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count.yfilter = yfilter;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed.yfilter = yfilter;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect.yfilter = yfilter;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed.yfilter = yfilter;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed.yfilter = yfilter;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime.yfilter = yfilter;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit.yfilter = yfilter;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time.yfilter = yfilter;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-glean-count" || name == "complete-protocol-count" || name == "dad-attempts" || name == "dropped-glean-req-count" || name == "dropped-protocol-req-count" || name == "incomplete-glean-count" || name == "incomplete-protocol-count" || name == "is-dad-enabled" || name == "is-dhcp-managed" || name == "is-icm-pv6-redirect" || name == "is-route-address-managed" || name == "is-suppressed" || name == "nd-advertisement-lifetime" || name == "nd-cache-limit" || name == "nd-max-transmit-interval" || name == "nd-min-transmit-interval" || name == "nd-reachable-time" || name == "nd-retransmit-interval" || name == "send-unicast-ra")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::LocalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::~LocalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::GlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "global-address"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::~GlobalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-address";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalAddress' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::MemberNode()
    :
    node_name{YType::str, "node-name"},
    total_links{YType::uint32, "total-links"}
{
    yang_name = "member-node"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::~MemberNode()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::has_data() const
{
    return node_name.is_set
	|| total_links.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(total_links.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-node";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberNode' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-links")
    {
        total_links = value;
        total_links.value_namespace = name_space;
        total_links.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "total-links")
    {
        total_links.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "total-links")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    complete_glean_count{YType::uint32, "complete-glean-count"},
    complete_protocol_count{YType::uint32, "complete-protocol-count"},
    dad_attempts{YType::uint32, "dad-attempts"},
    dropped_glean_req_count{YType::uint32, "dropped-glean-req-count"},
    dropped_protocol_req_count{YType::uint32, "dropped-protocol-req-count"},
    incomplete_glean_count{YType::uint32, "incomplete-glean-count"},
    incomplete_protocol_count{YType::uint32, "incomplete-protocol-count"},
    is_dad_enabled{YType::boolean, "is-dad-enabled"},
    is_dhcp_managed{YType::boolean, "is-dhcp-managed"},
    is_icm_pv6_redirect{YType::boolean, "is-icm-pv6-redirect"},
    is_route_address_managed{YType::boolean, "is-route-address-managed"},
    is_suppressed{YType::boolean, "is-suppressed"},
    nd_advertisement_lifetime{YType::uint32, "nd-advertisement-lifetime"},
    nd_cache_limit{YType::uint32, "nd-cache-limit"},
    nd_max_transmit_interval{YType::uint32, "nd-max-transmit-interval"},
    nd_min_transmit_interval{YType::uint32, "nd-min-transmit-interval"},
    nd_reachable_time{YType::uint32, "nd-reachable-time"},
    nd_retransmit_interval{YType::uint32, "nd-retransmit-interval"},
    send_unicast_ra{YType::boolean, "send-unicast-ra"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| complete_glean_count.is_set
	|| complete_protocol_count.is_set
	|| dad_attempts.is_set
	|| dropped_glean_req_count.is_set
	|| dropped_protocol_req_count.is_set
	|| incomplete_glean_count.is_set
	|| incomplete_protocol_count.is_set
	|| is_dad_enabled.is_set
	|| is_dhcp_managed.is_set
	|| is_icm_pv6_redirect.is_set
	|| is_route_address_managed.is_set
	|| is_suppressed.is_set
	|| nd_advertisement_lifetime.is_set
	|| nd_cache_limit.is_set
	|| nd_max_transmit_interval.is_set
	|| nd_min_transmit_interval.is_set
	|| nd_reachable_time.is_set
	|| nd_retransmit_interval.is_set
	|| send_unicast_ra.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(complete_glean_count.yfilter)
	|| ydk::is_set(complete_protocol_count.yfilter)
	|| ydk::is_set(dad_attempts.yfilter)
	|| ydk::is_set(dropped_glean_req_count.yfilter)
	|| ydk::is_set(dropped_protocol_req_count.yfilter)
	|| ydk::is_set(incomplete_glean_count.yfilter)
	|| ydk::is_set(incomplete_protocol_count.yfilter)
	|| ydk::is_set(is_dad_enabled.yfilter)
	|| ydk::is_set(is_dhcp_managed.yfilter)
	|| ydk::is_set(is_icm_pv6_redirect.yfilter)
	|| ydk::is_set(is_route_address_managed.yfilter)
	|| ydk::is_set(is_suppressed.yfilter)
	|| ydk::is_set(nd_advertisement_lifetime.yfilter)
	|| ydk::is_set(nd_cache_limit.yfilter)
	|| ydk::is_set(nd_max_transmit_interval.yfilter)
	|| ydk::is_set(nd_min_transmit_interval.yfilter)
	|| ydk::is_set(nd_reachable_time.yfilter)
	|| ydk::is_set(nd_retransmit_interval.yfilter)
	|| ydk::is_set(send_unicast_ra.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (complete_glean_count.is_set || is_set(complete_glean_count.yfilter)) leaf_name_data.push_back(complete_glean_count.get_name_leafdata());
    if (complete_protocol_count.is_set || is_set(complete_protocol_count.yfilter)) leaf_name_data.push_back(complete_protocol_count.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.yfilter)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (dropped_glean_req_count.is_set || is_set(dropped_glean_req_count.yfilter)) leaf_name_data.push_back(dropped_glean_req_count.get_name_leafdata());
    if (dropped_protocol_req_count.is_set || is_set(dropped_protocol_req_count.yfilter)) leaf_name_data.push_back(dropped_protocol_req_count.get_name_leafdata());
    if (incomplete_glean_count.is_set || is_set(incomplete_glean_count.yfilter)) leaf_name_data.push_back(incomplete_glean_count.get_name_leafdata());
    if (incomplete_protocol_count.is_set || is_set(incomplete_protocol_count.yfilter)) leaf_name_data.push_back(incomplete_protocol_count.get_name_leafdata());
    if (is_dad_enabled.is_set || is_set(is_dad_enabled.yfilter)) leaf_name_data.push_back(is_dad_enabled.get_name_leafdata());
    if (is_dhcp_managed.is_set || is_set(is_dhcp_managed.yfilter)) leaf_name_data.push_back(is_dhcp_managed.get_name_leafdata());
    if (is_icm_pv6_redirect.is_set || is_set(is_icm_pv6_redirect.yfilter)) leaf_name_data.push_back(is_icm_pv6_redirect.get_name_leafdata());
    if (is_route_address_managed.is_set || is_set(is_route_address_managed.yfilter)) leaf_name_data.push_back(is_route_address_managed.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.yfilter)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (nd_advertisement_lifetime.is_set || is_set(nd_advertisement_lifetime.yfilter)) leaf_name_data.push_back(nd_advertisement_lifetime.get_name_leafdata());
    if (nd_cache_limit.is_set || is_set(nd_cache_limit.yfilter)) leaf_name_data.push_back(nd_cache_limit.get_name_leafdata());
    if (nd_max_transmit_interval.is_set || is_set(nd_max_transmit_interval.yfilter)) leaf_name_data.push_back(nd_max_transmit_interval.get_name_leafdata());
    if (nd_min_transmit_interval.is_set || is_set(nd_min_transmit_interval.yfilter)) leaf_name_data.push_back(nd_min_transmit_interval.get_name_leafdata());
    if (nd_reachable_time.is_set || is_set(nd_reachable_time.yfilter)) leaf_name_data.push_back(nd_reachable_time.get_name_leafdata());
    if (nd_retransmit_interval.is_set || is_set(nd_retransmit_interval.yfilter)) leaf_name_data.push_back(nd_retransmit_interval.get_name_leafdata());
    if (send_unicast_ra.is_set || is_set(send_unicast_ra.yfilter)) leaf_name_data.push_back(send_unicast_ra.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-glean-count")
    {
        complete_glean_count = value;
        complete_glean_count.value_namespace = name_space;
        complete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count = value;
        complete_protocol_count.value_namespace = name_space;
        complete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
        dad_attempts.value_namespace = name_space;
        dad_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count = value;
        dropped_glean_req_count.value_namespace = name_space;
        dropped_glean_req_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count = value;
        dropped_protocol_req_count.value_namespace = name_space;
        dropped_protocol_req_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count = value;
        incomplete_glean_count.value_namespace = name_space;
        incomplete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count = value;
        incomplete_protocol_count.value_namespace = name_space;
        incomplete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled = value;
        is_dad_enabled.value_namespace = name_space;
        is_dad_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed = value;
        is_dhcp_managed.value_namespace = name_space;
        is_dhcp_managed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect = value;
        is_icm_pv6_redirect.value_namespace = name_space;
        is_icm_pv6_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed = value;
        is_route_address_managed.value_namespace = name_space;
        is_route_address_managed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
        is_suppressed.value_namespace = name_space;
        is_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime = value;
        nd_advertisement_lifetime.value_namespace = name_space;
        nd_advertisement_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit = value;
        nd_cache_limit.value_namespace = name_space;
        nd_cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval = value;
        nd_max_transmit_interval.value_namespace = name_space;
        nd_max_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval = value;
        nd_min_transmit_interval.value_namespace = name_space;
        nd_min_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time = value;
        nd_reachable_time.value_namespace = name_space;
        nd_reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval = value;
        nd_retransmit_interval.value_namespace = name_space;
        nd_retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra = value;
        send_unicast_ra.value_namespace = name_space;
        send_unicast_ra.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "complete-glean-count")
    {
        complete_glean_count.yfilter = yfilter;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts.yfilter = yfilter;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count.yfilter = yfilter;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed.yfilter = yfilter;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect.yfilter = yfilter;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed.yfilter = yfilter;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed.yfilter = yfilter;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime.yfilter = yfilter;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit.yfilter = yfilter;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time.yfilter = yfilter;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "complete-glean-count" || name == "complete-protocol-count" || name == "dad-attempts" || name == "dropped-glean-req-count" || name == "dropped-protocol-req-count" || name == "incomplete-glean-count" || name == "incomplete-protocol-count" || name == "is-dad-enabled" || name == "is-dhcp-managed" || name == "is-icm-pv6-redirect" || name == "is-route-address-managed" || name == "is-suppressed" || name == "nd-advertisement-lifetime" || name == "nd-cache-limit" || name == "nd-max-transmit-interval" || name == "nd-min-transmit-interval" || name == "nd-reachable-time" || name == "nd-retransmit-interval" || name == "send-unicast-ra")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouters()
{
    yang_name = "nd-virtual-routers"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::~NdVirtualRouters()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::has_data() const
{
    for (std::size_t index=0; index<nd_virtual_router.size(); index++)
    {
        if(nd_virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<nd_virtual_router.size(); index++)
    {
        if(nd_virtual_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-virtual-routers";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NdVirtualRouters' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nd-virtual-router")
    {
        for(auto const & c : nd_virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter>();
        c->parent = this;
        nd_virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nd_virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nd-virtual-router")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::NdVirtualRouter()
    :
    interface_name{YType::str, "interface-name"},
    context{YType::uint32, "context"},
    flags{YType::enumeration, "flags"},
    link_layer_address{YType::str, "link-layer-address"},
    state{YType::enumeration, "state"},
    vr_gl_addr_ct{YType::uint32, "vr-gl-addr-ct"}
    	,
    local_address(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress>())
{
    local_address->parent = this;

    yang_name = "nd-virtual-router"; yang_parent_name = "nd-virtual-routers";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::~NdVirtualRouter()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_data() const
{
    for (std::size_t index=0; index<vr_global_address.size(); index++)
    {
        if(vr_global_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| context.is_set
	|| flags.is_set
	|| link_layer_address.is_set
	|| state.is_set
	|| vr_gl_addr_ct.is_set
	|| (local_address !=  nullptr && local_address->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_operation() const
{
    for (std::size_t index=0; index<vr_global_address.size(); index++)
    {
        if(vr_global_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(vr_gl_addr_ct.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-virtual-router" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NdVirtualRouter' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vr_gl_addr_ct.is_set || is_set(vr_gl_addr_ct.yfilter)) leaf_name_data.push_back(vr_gl_addr_ct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "vr-global-address")
    {
        for(auto const & c : vr_global_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress>();
        c->parent = this;
        vr_global_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    for (auto const & c : vr_global_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vr-gl-addr-ct")
    {
        vr_gl_addr_ct = value;
        vr_gl_addr_ct.value_namespace = name_space;
        vr_gl_addr_ct.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "vr-gl-addr-ct")
    {
        vr_gl_addr_ct.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "vr-global-address" || name == "interface-name" || name == "context" || name == "flags" || name == "link-layer-address" || name == "state" || name == "vr-gl-addr-ct")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::LocalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "nd-virtual-router";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::~LocalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::VrGlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "vr-global-address"; yang_parent_name = "nd-virtual-router";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::~VrGlobalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vr-global-address";

    return path_buffer.str();

}

const EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrGlobalAddress' in Cisco_IOS_XR_ipv6_nd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

const Enum::YLeaf Ipv6NdShVrState::deleted {0, "deleted"};
const Enum::YLeaf Ipv6NdShVrState::standby {1, "standby"};
const Enum::YLeaf Ipv6NdShVrState::active {2, "active"};

const Enum::YLeaf Ipv6NdNeighborOrigin::other {0, "other"};
const Enum::YLeaf Ipv6NdNeighborOrigin::static_ {1, "static"};
const Enum::YLeaf Ipv6NdNeighborOrigin::dynamic {2, "dynamic"};

const Enum::YLeaf Ipv6NdShVrFlags::no_flags {0, "no-flags"};
const Enum::YLeaf Ipv6NdShVrFlags::final_ra {1, "final-ra"};

const Enum::YLeaf Ipv6NdBndlState::run {0, "run"};
const Enum::YLeaf Ipv6NdBndlState::error {1, "error"};
const Enum::YLeaf Ipv6NdBndlState::wait {2, "wait"};

const Enum::YLeaf Ipv6NdMediaEncap::none {0, "none"};
const Enum::YLeaf Ipv6NdMediaEncap::arpa {1, "arpa"};
const Enum::YLeaf Ipv6NdMediaEncap::snap {2, "snap"};
const Enum::YLeaf Ipv6NdMediaEncap::ieee802_1q {3, "ieee802-1q"};
const Enum::YLeaf Ipv6NdMediaEncap::srp {4, "srp"};
const Enum::YLeaf Ipv6NdMediaEncap::srpa {5, "srpa"};
const Enum::YLeaf Ipv6NdMediaEncap::srpb {6, "srpb"};
const Enum::YLeaf Ipv6NdMediaEncap::ppp {7, "ppp"};
const Enum::YLeaf Ipv6NdMediaEncap::hdlc {8, "hdlc"};
const Enum::YLeaf Ipv6NdMediaEncap::chdlc {9, "chdlc"};
const Enum::YLeaf Ipv6NdMediaEncap::dot1q {10, "dot1q"};
const Enum::YLeaf Ipv6NdMediaEncap::fr {11, "fr"};
const Enum::YLeaf Ipv6NdMediaEncap::gre {12, "gre"};

const Enum::YLeaf Ipv6NdShState::incomplete {0, "incomplete"};
const Enum::YLeaf Ipv6NdShState::reachable {1, "reachable"};
const Enum::YLeaf Ipv6NdShState::stale {2, "stale"};
const Enum::YLeaf Ipv6NdShState::glean {3, "glean"};
const Enum::YLeaf Ipv6NdShState::delay {4, "delay"};
const Enum::YLeaf Ipv6NdShState::probe {5, "probe"};
const Enum::YLeaf Ipv6NdShState::delete_ {6, "delete"};


}
}

