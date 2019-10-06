
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

    yang_name = "ipv6-node-discovery"; yang_parent_name = "Cisco-IOS-XR-ipv6-nd-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv6NodeDiscovery::~Ipv6NodeDiscovery()
{
}

bool Ipv6NodeDiscovery::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Ipv6NodeDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::clone_ptr() const
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
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "ipv6-node-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6NodeDiscovery::Nodes::~Nodes()
{
}

bool Ipv6NodeDiscovery::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6NodeDiscovery::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    neighbor_interfaces(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces>())
    , neighbor_summary(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary>())
    , bundle_nodes(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes>())
    , bundle_interfaces(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces>())
    , interfaces(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::Interfaces>())
    , nd_virtual_routers(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters>())
    , slaac_interfaces(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces>())
{
    neighbor_interfaces->parent = this;
    neighbor_summary->parent = this;
    bundle_nodes->parent = this;
    bundle_interfaces->parent = this;
    interfaces->parent = this;
    nd_virtual_routers->parent = this;
    slaac_interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6NodeDiscovery::Nodes::Node::~Node()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (neighbor_interfaces !=  nullptr && neighbor_interfaces->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data())
	|| (bundle_nodes !=  nullptr && bundle_nodes->has_data())
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (nd_virtual_routers !=  nullptr && nd_virtual_routers->has_data())
	|| (slaac_interfaces !=  nullptr && slaac_interfaces->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (neighbor_interfaces !=  nullptr && neighbor_interfaces->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation())
	|| (bundle_nodes !=  nullptr && bundle_nodes->has_operation())
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (nd_virtual_routers !=  nullptr && nd_virtual_routers->has_operation())
	|| (slaac_interfaces !=  nullptr && slaac_interfaces->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6NodeDiscovery::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "bundle-nodes")
    {
        if(bundle_nodes == nullptr)
        {
            bundle_nodes = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes>();
        }
        return bundle_nodes;
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces>();
        }
        return bundle_interfaces;
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

    if(child_yang_name == "slaac-interfaces")
    {
        if(slaac_interfaces == nullptr)
        {
            slaac_interfaces = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces>();
        }
        return slaac_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_interfaces != nullptr)
    {
        _children["neighbor-interfaces"] = neighbor_interfaces;
    }

    if(neighbor_summary != nullptr)
    {
        _children["neighbor-summary"] = neighbor_summary;
    }

    if(bundle_nodes != nullptr)
    {
        _children["bundle-nodes"] = bundle_nodes;
    }

    if(bundle_interfaces != nullptr)
    {
        _children["bundle-interfaces"] = bundle_interfaces;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(nd_virtual_routers != nullptr)
    {
        _children["nd-virtual-routers"] = nd_virtual_routers;
    }

    if(slaac_interfaces != nullptr)
    {
        _children["slaac-interfaces"] = slaac_interfaces;
    }

    return _children;
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
    if(name == "neighbor-interfaces" || name == "neighbor-summary" || name == "bundle-nodes" || name == "bundle-interfaces" || name == "interfaces" || name == "nd-virtual-routers" || name == "slaac-interfaces" || name == "node-name")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterfaces()
    :
    neighbor_interface(this, {"interface_name"})
{

    yang_name = "neighbor-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::~NeighborInterfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_interface.len(); index++)
    {
        if(neighbor_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::has_operation() const
{
    for (std::size_t index=0; index<neighbor_interface.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-interface")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface>();
        ent_->parent = this;
        neighbor_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "neighbor-interface"; yang_parent_name = "neighbor-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::~NeighborInterface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "neighbor-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_addresses != nullptr)
    {
        _children["host-addresses"] = host_addresses;
    }

    return _children;
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
    :
    host_address(this, {"host_address"})
{

    yang_name = "host-addresses"; yang_parent_name = "neighbor-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::~HostAddresses()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_address.len(); index++)
    {
        if(host_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::has_operation() const
{
    for (std::size_t index=0; index<host_address.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-address")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress>();
        ent_->parent = this;
        host_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    reachability_state{YType::enumeration, "reachability-state"},
    link_layer_address{YType::str, "link-layer-address"},
    encapsulation{YType::enumeration, "encapsulation"},
    selected_encapsulation{YType::enumeration, "selected-encapsulation"},
    origin_encapsulation{YType::enumeration, "origin-encapsulation"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    is_router{YType::boolean, "is-router"},
    serg_flags{YType::uint32, "serg-flags"},
    vrfid{YType::uint32, "vrfid"}
        ,
    last_reached_time(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime>())
{
    last_reached_time->parent = this;

    yang_name = "host-address"; yang_parent_name = "host-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::~HostAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_data() const
{
    if (is_presence_container) return true;
    return host_address.is_set
	|| reachability_state.is_set
	|| link_layer_address.is_set
	|| encapsulation.is_set
	|| selected_encapsulation.is_set
	|| origin_encapsulation.is_set
	|| interface_name.is_set
	|| location.is_set
	|| is_router.is_set
	|| serg_flags.is_set
	|| vrfid.is_set
	|| (last_reached_time !=  nullptr && last_reached_time->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(reachability_state.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(selected_encapsulation.yfilter)
	|| ydk::is_set(origin_encapsulation.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(is_router.yfilter)
	|| ydk::is_set(serg_flags.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| (last_reached_time !=  nullptr && last_reached_time->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-address";
    ADD_KEY_TOKEN(host_address, "host-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (reachability_state.is_set || is_set(reachability_state.yfilter)) leaf_name_data.push_back(reachability_state.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (selected_encapsulation.is_set || is_set(selected_encapsulation.yfilter)) leaf_name_data.push_back(selected_encapsulation.get_name_leafdata());
    if (origin_encapsulation.is_set || is_set(origin_encapsulation.yfilter)) leaf_name_data.push_back(origin_encapsulation.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.yfilter)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (serg_flags.is_set || is_set(serg_flags.yfilter)) leaf_name_data.push_back(serg_flags.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_reached_time != nullptr)
    {
        _children["last-reached-time"] = last_reached_time;
    }

    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-state")
    {
        reachability_state = value;
        reachability_state.value_namespace = name_space;
        reachability_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-encapsulation")
    {
        selected_encapsulation = value;
        selected_encapsulation.value_namespace = name_space;
        selected_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-encapsulation")
    {
        origin_encapsulation = value;
        origin_encapsulation.value_namespace = name_space;
        origin_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router")
    {
        is_router = value;
        is_router.value_namespace = name_space;
        is_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-flags")
    {
        serg_flags = value;
        serg_flags.value_namespace = name_space;
        serg_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "reachability-state")
    {
        reachability_state.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "selected-encapsulation")
    {
        selected_encapsulation.yfilter = yfilter;
    }
    if(value_path == "origin-encapsulation")
    {
        origin_encapsulation.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "is-router")
    {
        is_router.yfilter = yfilter;
    }
    if(value_path == "serg-flags")
    {
        serg_flags.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-reached-time" || name == "host-address" || name == "reachability-state" || name == "link-layer-address" || name == "encapsulation" || name == "selected-encapsulation" || name == "origin-encapsulation" || name == "interface-name" || name == "location" || name == "is-router" || name == "serg-flags" || name == "vrfid")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::LastReachedTime()
    :
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-reached-time"; yang_parent_name = "host-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::~LastReachedTime()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    multicast(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast>())
    , static_(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static>())
    , dynamic(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic>())
{
    multicast->parent = this;
    static_->parent = this;
    dynamic->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::~NeighborSummary()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::has_data() const
{
    if (is_presence_container) return true;
    return total_neighbor_entries.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_neighbor_entries.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_neighbor_entries.is_set || is_set(total_neighbor_entries.yfilter)) leaf_name_data.push_back(total_neighbor_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
            static_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static>();
        }
        return static_;
    }

    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
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
    if(name == "multicast" || name == "static" || name == "dynamic" || name == "total-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::Multicast()
    :
    incomplete_entries{YType::uint32, "incomplete-entries"},
    reachable_entries{YType::uint32, "reachable-entries"},
    stale_entries{YType::uint32, "stale-entries"},
    delayed_entries{YType::uint32, "delayed-entries"},
    probe_entries{YType::uint32, "probe-entries"},
    deleted_entries{YType::uint32, "deleted-entries"},
    subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{

    yang_name = "multicast"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::~Multicast()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return incomplete_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| delayed_entries.is_set
	|| probe_entries.is_set
	|| deleted_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete_entries.yfilter)
	|| ydk::is_set(reachable_entries.yfilter)
	|| ydk::is_set(stale_entries.yfilter)
	|| ydk::is_set(delayed_entries.yfilter)
	|| ydk::is_set(probe_entries.yfilter)
	|| ydk::is_set(deleted_entries.yfilter)
	|| ydk::is_set(subtotal_neighbor_entries.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete_entries.is_set || is_set(incomplete_entries.yfilter)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.yfilter)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.yfilter)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (delayed_entries.is_set || is_set(delayed_entries.yfilter)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.yfilter)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.yfilter)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.yfilter)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
        incomplete_entries.value_namespace = name_space;
        incomplete_entries.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
        delayed_entries.value_namespace = name_space;
        delayed_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
        probe_entries.value_namespace = name_space;
        probe_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
        deleted_entries.value_namespace = name_space;
        deleted_entries.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "incomplete-entries")
    {
        incomplete_entries.yfilter = yfilter;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries.yfilter = yfilter;
    }
    if(value_path == "stale-entries")
    {
        stale_entries.yfilter = yfilter;
    }
    if(value_path == "delayed-entries")
    {
        delayed_entries.yfilter = yfilter;
    }
    if(value_path == "probe-entries")
    {
        probe_entries.yfilter = yfilter;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries.yfilter = yfilter;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete-entries" || name == "reachable-entries" || name == "stale-entries" || name == "delayed-entries" || name == "probe-entries" || name == "deleted-entries" || name == "subtotal-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::Static()
    :
    incomplete_entries{YType::uint32, "incomplete-entries"},
    reachable_entries{YType::uint32, "reachable-entries"},
    stale_entries{YType::uint32, "stale-entries"},
    delayed_entries{YType::uint32, "delayed-entries"},
    probe_entries{YType::uint32, "probe-entries"},
    deleted_entries{YType::uint32, "deleted-entries"},
    subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{

    yang_name = "static"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::~Static()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::has_data() const
{
    if (is_presence_container) return true;
    return incomplete_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| delayed_entries.is_set
	|| probe_entries.is_set
	|| deleted_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete_entries.yfilter)
	|| ydk::is_set(reachable_entries.yfilter)
	|| ydk::is_set(stale_entries.yfilter)
	|| ydk::is_set(delayed_entries.yfilter)
	|| ydk::is_set(probe_entries.yfilter)
	|| ydk::is_set(deleted_entries.yfilter)
	|| ydk::is_set(subtotal_neighbor_entries.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete_entries.is_set || is_set(incomplete_entries.yfilter)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.yfilter)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.yfilter)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (delayed_entries.is_set || is_set(delayed_entries.yfilter)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.yfilter)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.yfilter)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.yfilter)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
        incomplete_entries.value_namespace = name_space;
        incomplete_entries.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
        delayed_entries.value_namespace = name_space;
        delayed_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
        probe_entries.value_namespace = name_space;
        probe_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
        deleted_entries.value_namespace = name_space;
        deleted_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries = value;
        subtotal_neighbor_entries.value_namespace = name_space;
        subtotal_neighbor_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete-entries")
    {
        incomplete_entries.yfilter = yfilter;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries.yfilter = yfilter;
    }
    if(value_path == "stale-entries")
    {
        stale_entries.yfilter = yfilter;
    }
    if(value_path == "delayed-entries")
    {
        delayed_entries.yfilter = yfilter;
    }
    if(value_path == "probe-entries")
    {
        probe_entries.yfilter = yfilter;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries.yfilter = yfilter;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete-entries" || name == "reachable-entries" || name == "stale-entries" || name == "delayed-entries" || name == "probe-entries" || name == "deleted-entries" || name == "subtotal-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::Dynamic()
    :
    incomplete_entries{YType::uint32, "incomplete-entries"},
    reachable_entries{YType::uint32, "reachable-entries"},
    stale_entries{YType::uint32, "stale-entries"},
    delayed_entries{YType::uint32, "delayed-entries"},
    probe_entries{YType::uint32, "probe-entries"},
    deleted_entries{YType::uint32, "deleted-entries"},
    subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{

    yang_name = "dynamic"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::~Dynamic()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return incomplete_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| delayed_entries.is_set
	|| probe_entries.is_set
	|| deleted_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete_entries.yfilter)
	|| ydk::is_set(reachable_entries.yfilter)
	|| ydk::is_set(stale_entries.yfilter)
	|| ydk::is_set(delayed_entries.yfilter)
	|| ydk::is_set(probe_entries.yfilter)
	|| ydk::is_set(deleted_entries.yfilter)
	|| ydk::is_set(subtotal_neighbor_entries.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete_entries.is_set || is_set(incomplete_entries.yfilter)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.yfilter)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.yfilter)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (delayed_entries.is_set || is_set(delayed_entries.yfilter)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.yfilter)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.yfilter)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.yfilter)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
        incomplete_entries.value_namespace = name_space;
        incomplete_entries.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
        delayed_entries.value_namespace = name_space;
        delayed_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
        probe_entries.value_namespace = name_space;
        probe_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
        deleted_entries.value_namespace = name_space;
        deleted_entries.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "incomplete-entries")
    {
        incomplete_entries.yfilter = yfilter;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries.yfilter = yfilter;
    }
    if(value_path == "stale-entries")
    {
        stale_entries.yfilter = yfilter;
    }
    if(value_path == "delayed-entries")
    {
        delayed_entries.yfilter = yfilter;
    }
    if(value_path == "probe-entries")
    {
        probe_entries.yfilter = yfilter;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries.yfilter = yfilter;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete-entries" || name == "reachable-entries" || name == "stale-entries" || name == "delayed-entries" || name == "probe-entries" || name == "deleted-entries" || name == "subtotal-neighbor-entries")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNodes()
    :
    bundle_node(this, {"node_name"})
{

    yang_name = "bundle-nodes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::~BundleNodes()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_node.len(); index++)
    {
        if(bundle_node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::has_operation() const
{
    for (std::size_t index=0; index<bundle_node.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-node")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode>();
        ent_->parent = this;
        bundle_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sent_sequence_number{YType::uint32, "sent-sequence-number"},
    received_sequence_number{YType::uint32, "received-sequence-number"},
    state{YType::enumeration, "state"},
    state_changes{YType::uint32, "state-changes"},
    sent_packets{YType::uint32, "sent-packets"},
    received_packets{YType::uint32, "received-packets"}
        ,
    age(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age>())
{
    age->parent = this;

    yang_name = "bundle-node"; yang_parent_name = "bundle-nodes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::~BundleNode()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| group_id.is_set
	|| process_name.is_set
	|| sent_sequence_number.is_set
	|| received_sequence_number.is_set
	|| state.is_set
	|| state_changes.is_set
	|| sent_packets.is_set
	|| received_packets.is_set
	|| (age !=  nullptr && age->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(sent_sequence_number.yfilter)
	|| ydk::is_set(received_sequence_number.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(sent_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| (age !=  nullptr && age->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (sent_sequence_number.is_set || is_set(sent_sequence_number.yfilter)) leaf_name_data.push_back(sent_sequence_number.get_name_leafdata());
    if (received_sequence_number.is_set || is_set(received_sequence_number.yfilter)) leaf_name_data.push_back(received_sequence_number.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (sent_packets.is_set || is_set(sent_packets.yfilter)) leaf_name_data.push_back(sent_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(age != nullptr)
    {
        _children["age"] = age;
    }

    return _children;
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
    if(value_path == "sent-sequence-number")
    {
        sent_sequence_number = value;
        sent_sequence_number.value_namespace = name_space;
        sent_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-sequence-number")
    {
        received_sequence_number = value;
        received_sequence_number.value_namespace = name_space;
        received_sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sent-packets")
    {
        sent_packets = value;
        sent_packets.value_namespace = name_space;
        sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sent-sequence-number")
    {
        sent_sequence_number.yfilter = yfilter;
    }
    if(value_path == "received-sequence-number")
    {
        received_sequence_number.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "sent-packets")
    {
        sent_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age" || name == "node-name" || name == "group-id" || name == "process-name" || name == "sent-sequence-number" || name == "received-sequence-number" || name == "state" || name == "state-changes" || name == "sent-packets" || name == "received-packets")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::Age()
    :
    seconds{YType::uint32, "seconds"}
{

    yang_name = "age"; yang_parent_name = "bundle-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::~Age()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    bundle_interface(this, {"interface_name"})
{

    yang_name = "bundle-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_interface.len(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface>();
        ent_->parent = this;
        bundle_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    parent_interface_name{YType::str, "parent-interface-name"},
    iftype{YType::uint32, "iftype"},
    mtu{YType::uint32, "mtu"},
    etype{YType::uint32, "etype"},
    vlan_tag{YType::uint16, "vlan-tag"},
    mac_addr_size{YType::uint32, "mac-addr-size"},
    mac_addr{YType::str, "mac-addr"},
    is_interface_enabled{YType::boolean, "is-interface-enabled"},
    is_ipv6_enabled{YType::boolean, "is-ipv6-enabled"},
    is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
    member_link{YType::uint32, "member-link"}
        ,
    nd_parameters(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters>())
    , local_address(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress>())
    , global_address(this, {})
    , member_node(this, {})
{
    nd_parameters->parent = this;
    local_address->parent = this;

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_address.len(); index++)
    {
        if(global_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_node.len(); index++)
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
	|| parent_interface_name.is_set
	|| iftype.is_set
	|| mtu.is_set
	|| etype.is_set
	|| vlan_tag.is_set
	|| mac_addr_size.is_set
	|| mac_addr.is_set
	|| is_interface_enabled.is_set
	|| is_ipv6_enabled.is_set
	|| is_mpls_enabled.is_set
	|| (nd_parameters !=  nullptr && nd_parameters->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    for (std::size_t index=0; index<global_address.len(); index++)
    {
        if(global_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_node.len(); index++)
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
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(iftype.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(vlan_tag.yfilter)
	|| ydk::is_set(mac_addr_size.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(is_interface_enabled.yfilter)
	|| ydk::is_set(is_ipv6_enabled.yfilter)
	|| ydk::is_set(is_mpls_enabled.yfilter)
	|| ydk::is_set(member_link.yfilter)
	|| (nd_parameters !=  nullptr && nd_parameters->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (iftype.is_set || is_set(iftype.yfilter)) leaf_name_data.push_back(iftype.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (etype.is_set || is_set(etype.yfilter)) leaf_name_data.push_back(etype.get_name_leafdata());
    if (vlan_tag.is_set || is_set(vlan_tag.yfilter)) leaf_name_data.push_back(vlan_tag.get_name_leafdata());
    if (mac_addr_size.is_set || is_set(mac_addr_size.yfilter)) leaf_name_data.push_back(mac_addr_size.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (is_interface_enabled.is_set || is_set(is_interface_enabled.yfilter)) leaf_name_data.push_back(is_interface_enabled.get_name_leafdata());
    if (is_ipv6_enabled.is_set || is_set(is_ipv6_enabled.yfilter)) leaf_name_data.push_back(is_ipv6_enabled.get_name_leafdata());
    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.yfilter)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());

    auto member_link_name_datas = member_link.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_link_name_datas.begin(), member_link_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nd-parameters")
    {
        if(nd_parameters == nullptr)
        {
            nd_parameters = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters>();
        }
        return nd_parameters;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "global-address")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress>();
        ent_->parent = this;
        global_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "member-node")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode>();
        ent_->parent = this;
        member_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nd_parameters != nullptr)
    {
        _children["nd-parameters"] = nd_parameters;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    count_ = 0;
    for (auto ent_ : global_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : member_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iftype")
    {
        iftype = value;
        iftype.value_namespace = name_space;
        iftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etype")
    {
        etype = value;
        etype.value_namespace = name_space;
        etype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-tag")
    {
        vlan_tag = value;
        vlan_tag.value_namespace = name_space;
        vlan_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr-size")
    {
        mac_addr_size = value;
        mac_addr_size.value_namespace = name_space;
        mac_addr_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "member-link")
    {
        member_link.append(value);
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "iftype")
    {
        iftype.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "vlan-tag")
    {
        vlan_tag.yfilter = yfilter;
    }
    if(value_path == "mac-addr-size")
    {
        mac_addr_size.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
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
    if(value_path == "member-link")
    {
        member_link.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nd-parameters" || name == "local-address" || name == "global-address" || name == "member-node" || name == "interface-name" || name == "parent-interface-name" || name == "iftype" || name == "mtu" || name == "etype" || name == "vlan-tag" || name == "mac-addr-size" || name == "mac-addr" || name == "is-interface-enabled" || name == "is-ipv6-enabled" || name == "is-mpls-enabled" || name == "member-link")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::NdParameters()
    :
    is_dad_enabled{YType::boolean, "is-dad-enabled"},
    dad_attempts{YType::uint32, "dad-attempts"},
    is_icm_pv6_redirect{YType::boolean, "is-icm-pv6-redirect"},
    is_dhcp_managed{YType::boolean, "is-dhcp-managed"},
    is_route_address_managed{YType::boolean, "is-route-address-managed"},
    is_suppressed{YType::boolean, "is-suppressed"},
    send_unicast_ra{YType::boolean, "send-unicast-ra"},
    nd_retransmit_interval{YType::uint32, "nd-retransmit-interval"},
    nd_min_transmit_interval{YType::uint32, "nd-min-transmit-interval"},
    nd_max_transmit_interval{YType::uint32, "nd-max-transmit-interval"},
    nd_advertisement_lifetime{YType::uint32, "nd-advertisement-lifetime"},
    nd_reachable_time{YType::uint32, "nd-reachable-time"},
    nd_cache_limit{YType::uint32, "nd-cache-limit"},
    complete_protocol_count{YType::uint32, "complete-protocol-count"},
    complete_glean_count{YType::uint32, "complete-glean-count"},
    incomplete_protocol_count{YType::uint32, "incomplete-protocol-count"},
    incomplete_glean_count{YType::uint32, "incomplete-glean-count"},
    dropped_protocol_req_count{YType::uint32, "dropped-protocol-req-count"},
    dropped_glean_req_count{YType::uint32, "dropped-glean-req-count"}
{

    yang_name = "nd-parameters"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::~NdParameters()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_data() const
{
    if (is_presence_container) return true;
    return is_dad_enabled.is_set
	|| dad_attempts.is_set
	|| is_icm_pv6_redirect.is_set
	|| is_dhcp_managed.is_set
	|| is_route_address_managed.is_set
	|| is_suppressed.is_set
	|| send_unicast_ra.is_set
	|| nd_retransmit_interval.is_set
	|| nd_min_transmit_interval.is_set
	|| nd_max_transmit_interval.is_set
	|| nd_advertisement_lifetime.is_set
	|| nd_reachable_time.is_set
	|| nd_cache_limit.is_set
	|| complete_protocol_count.is_set
	|| complete_glean_count.is_set
	|| incomplete_protocol_count.is_set
	|| incomplete_glean_count.is_set
	|| dropped_protocol_req_count.is_set
	|| dropped_glean_req_count.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_dad_enabled.yfilter)
	|| ydk::is_set(dad_attempts.yfilter)
	|| ydk::is_set(is_icm_pv6_redirect.yfilter)
	|| ydk::is_set(is_dhcp_managed.yfilter)
	|| ydk::is_set(is_route_address_managed.yfilter)
	|| ydk::is_set(is_suppressed.yfilter)
	|| ydk::is_set(send_unicast_ra.yfilter)
	|| ydk::is_set(nd_retransmit_interval.yfilter)
	|| ydk::is_set(nd_min_transmit_interval.yfilter)
	|| ydk::is_set(nd_max_transmit_interval.yfilter)
	|| ydk::is_set(nd_advertisement_lifetime.yfilter)
	|| ydk::is_set(nd_reachable_time.yfilter)
	|| ydk::is_set(nd_cache_limit.yfilter)
	|| ydk::is_set(complete_protocol_count.yfilter)
	|| ydk::is_set(complete_glean_count.yfilter)
	|| ydk::is_set(incomplete_protocol_count.yfilter)
	|| ydk::is_set(incomplete_glean_count.yfilter)
	|| ydk::is_set(dropped_protocol_req_count.yfilter)
	|| ydk::is_set(dropped_glean_req_count.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_dad_enabled.is_set || is_set(is_dad_enabled.yfilter)) leaf_name_data.push_back(is_dad_enabled.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.yfilter)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (is_icm_pv6_redirect.is_set || is_set(is_icm_pv6_redirect.yfilter)) leaf_name_data.push_back(is_icm_pv6_redirect.get_name_leafdata());
    if (is_dhcp_managed.is_set || is_set(is_dhcp_managed.yfilter)) leaf_name_data.push_back(is_dhcp_managed.get_name_leafdata());
    if (is_route_address_managed.is_set || is_set(is_route_address_managed.yfilter)) leaf_name_data.push_back(is_route_address_managed.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.yfilter)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (send_unicast_ra.is_set || is_set(send_unicast_ra.yfilter)) leaf_name_data.push_back(send_unicast_ra.get_name_leafdata());
    if (nd_retransmit_interval.is_set || is_set(nd_retransmit_interval.yfilter)) leaf_name_data.push_back(nd_retransmit_interval.get_name_leafdata());
    if (nd_min_transmit_interval.is_set || is_set(nd_min_transmit_interval.yfilter)) leaf_name_data.push_back(nd_min_transmit_interval.get_name_leafdata());
    if (nd_max_transmit_interval.is_set || is_set(nd_max_transmit_interval.yfilter)) leaf_name_data.push_back(nd_max_transmit_interval.get_name_leafdata());
    if (nd_advertisement_lifetime.is_set || is_set(nd_advertisement_lifetime.yfilter)) leaf_name_data.push_back(nd_advertisement_lifetime.get_name_leafdata());
    if (nd_reachable_time.is_set || is_set(nd_reachable_time.yfilter)) leaf_name_data.push_back(nd_reachable_time.get_name_leafdata());
    if (nd_cache_limit.is_set || is_set(nd_cache_limit.yfilter)) leaf_name_data.push_back(nd_cache_limit.get_name_leafdata());
    if (complete_protocol_count.is_set || is_set(complete_protocol_count.yfilter)) leaf_name_data.push_back(complete_protocol_count.get_name_leafdata());
    if (complete_glean_count.is_set || is_set(complete_glean_count.yfilter)) leaf_name_data.push_back(complete_glean_count.get_name_leafdata());
    if (incomplete_protocol_count.is_set || is_set(incomplete_protocol_count.yfilter)) leaf_name_data.push_back(incomplete_protocol_count.get_name_leafdata());
    if (incomplete_glean_count.is_set || is_set(incomplete_glean_count.yfilter)) leaf_name_data.push_back(incomplete_glean_count.get_name_leafdata());
    if (dropped_protocol_req_count.is_set || is_set(dropped_protocol_req_count.yfilter)) leaf_name_data.push_back(dropped_protocol_req_count.get_name_leafdata());
    if (dropped_glean_req_count.is_set || is_set(dropped_glean_req_count.yfilter)) leaf_name_data.push_back(dropped_glean_req_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled = value;
        is_dad_enabled.value_namespace = name_space;
        is_dad_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
        dad_attempts.value_namespace = name_space;
        dad_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect = value;
        is_icm_pv6_redirect.value_namespace = name_space;
        is_icm_pv6_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed = value;
        is_dhcp_managed.value_namespace = name_space;
        is_dhcp_managed.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra = value;
        send_unicast_ra.value_namespace = name_space;
        send_unicast_ra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval = value;
        nd_retransmit_interval.value_namespace = name_space;
        nd_retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval = value;
        nd_min_transmit_interval.value_namespace = name_space;
        nd_min_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval = value;
        nd_max_transmit_interval.value_namespace = name_space;
        nd_max_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime = value;
        nd_advertisement_lifetime.value_namespace = name_space;
        nd_advertisement_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time = value;
        nd_reachable_time.value_namespace = name_space;
        nd_reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit = value;
        nd_cache_limit.value_namespace = name_space;
        nd_cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count = value;
        complete_protocol_count.value_namespace = name_space;
        complete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-glean-count")
    {
        complete_glean_count = value;
        complete_glean_count.value_namespace = name_space;
        complete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count = value;
        incomplete_protocol_count.value_namespace = name_space;
        incomplete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count = value;
        incomplete_glean_count.value_namespace = name_space;
        incomplete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count = value;
        dropped_protocol_req_count.value_namespace = name_space;
        dropped_protocol_req_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count = value;
        dropped_glean_req_count.value_namespace = name_space;
        dropped_glean_req_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled.yfilter = yfilter;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts.yfilter = yfilter;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect.yfilter = yfilter;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed.yfilter = yfilter;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed.yfilter = yfilter;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed.yfilter = yfilter;
    }
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra.yfilter = yfilter;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime.yfilter = yfilter;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time.yfilter = yfilter;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit.yfilter = yfilter;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "complete-glean-count")
    {
        complete_glean_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count.yfilter = yfilter;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count.yfilter = yfilter;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-dad-enabled" || name == "dad-attempts" || name == "is-icm-pv6-redirect" || name == "is-dhcp-managed" || name == "is-route-address-managed" || name == "is-suppressed" || name == "send-unicast-ra" || name == "nd-retransmit-interval" || name == "nd-min-transmit-interval" || name == "nd-max-transmit-interval" || name == "nd-advertisement-lifetime" || name == "nd-reachable-time" || name == "nd-cache-limit" || name == "complete-protocol-count" || name == "complete-glean-count" || name == "incomplete-protocol-count" || name == "incomplete-glean-count" || name == "dropped-protocol-req-count" || name == "dropped-glean-req-count")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::LocalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"},
    valid_lifetime{YType::uint32, "valid-lifetime"},
    pref_lifetime{YType::uint32, "pref-lifetime"},
    prefix_length{YType::uint32, "prefix-length"},
    flags{YType::uint32, "flags"}
{

    yang_name = "local-address"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::~LocalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| valid_lifetime.is_set
	|| pref_lifetime.is_set
	|| prefix_length.is_set
	|| flags.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter)
	|| ydk::is_set(pref_lifetime.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());
    if (pref_lifetime.is_set || is_set(pref_lifetime.yfilter)) leaf_name_data.push_back(pref_lifetime.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime = value;
        pref_lifetime.value_namespace = name_space;
        pref_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "valid-lifetime" || name == "pref-lifetime" || name == "prefix-length" || name == "flags")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::GlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"},
    valid_lifetime{YType::uint32, "valid-lifetime"},
    pref_lifetime{YType::uint32, "pref-lifetime"},
    prefix_length{YType::uint32, "prefix-length"},
    flags{YType::uint32, "flags"}
{

    yang_name = "global-address"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::~GlobalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| valid_lifetime.is_set
	|| pref_lifetime.is_set
	|| prefix_length.is_set
	|| flags.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter)
	|| ydk::is_set(pref_lifetime.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());
    if (pref_lifetime.is_set || is_set(pref_lifetime.yfilter)) leaf_name_data.push_back(pref_lifetime.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime = value;
        pref_lifetime.value_namespace = name_space;
        pref_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "valid-lifetime" || name == "pref-lifetime" || name == "prefix-length" || name == "flags")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::MemberNode()
    :
    node_name{YType::str, "node-name"},
    total_links{YType::uint32, "total-links"}
{

    yang_name = "member-node"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::~MemberNode()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_children() const
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
    is_dad_enabled{YType::boolean, "is-dad-enabled"},
    dad_attempts{YType::uint32, "dad-attempts"},
    is_icm_pv6_redirect{YType::boolean, "is-icm-pv6-redirect"},
    is_dhcp_managed{YType::boolean, "is-dhcp-managed"},
    is_route_address_managed{YType::boolean, "is-route-address-managed"},
    is_suppressed{YType::boolean, "is-suppressed"},
    send_unicast_ra{YType::boolean, "send-unicast-ra"},
    nd_retransmit_interval{YType::uint32, "nd-retransmit-interval"},
    nd_min_transmit_interval{YType::uint32, "nd-min-transmit-interval"},
    nd_max_transmit_interval{YType::uint32, "nd-max-transmit-interval"},
    nd_advertisement_lifetime{YType::uint32, "nd-advertisement-lifetime"},
    nd_reachable_time{YType::uint32, "nd-reachable-time"},
    nd_cache_limit{YType::uint32, "nd-cache-limit"},
    complete_protocol_count{YType::uint32, "complete-protocol-count"},
    complete_glean_count{YType::uint32, "complete-glean-count"},
    incomplete_protocol_count{YType::uint32, "incomplete-protocol-count"},
    incomplete_glean_count{YType::uint32, "incomplete-glean-count"},
    dropped_protocol_req_count{YType::uint32, "dropped-protocol-req-count"},
    dropped_glean_req_count{YType::uint32, "dropped-glean-req-count"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| is_dad_enabled.is_set
	|| dad_attempts.is_set
	|| is_icm_pv6_redirect.is_set
	|| is_dhcp_managed.is_set
	|| is_route_address_managed.is_set
	|| is_suppressed.is_set
	|| send_unicast_ra.is_set
	|| nd_retransmit_interval.is_set
	|| nd_min_transmit_interval.is_set
	|| nd_max_transmit_interval.is_set
	|| nd_advertisement_lifetime.is_set
	|| nd_reachable_time.is_set
	|| nd_cache_limit.is_set
	|| complete_protocol_count.is_set
	|| complete_glean_count.is_set
	|| incomplete_protocol_count.is_set
	|| incomplete_glean_count.is_set
	|| dropped_protocol_req_count.is_set
	|| dropped_glean_req_count.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_dad_enabled.yfilter)
	|| ydk::is_set(dad_attempts.yfilter)
	|| ydk::is_set(is_icm_pv6_redirect.yfilter)
	|| ydk::is_set(is_dhcp_managed.yfilter)
	|| ydk::is_set(is_route_address_managed.yfilter)
	|| ydk::is_set(is_suppressed.yfilter)
	|| ydk::is_set(send_unicast_ra.yfilter)
	|| ydk::is_set(nd_retransmit_interval.yfilter)
	|| ydk::is_set(nd_min_transmit_interval.yfilter)
	|| ydk::is_set(nd_max_transmit_interval.yfilter)
	|| ydk::is_set(nd_advertisement_lifetime.yfilter)
	|| ydk::is_set(nd_reachable_time.yfilter)
	|| ydk::is_set(nd_cache_limit.yfilter)
	|| ydk::is_set(complete_protocol_count.yfilter)
	|| ydk::is_set(complete_glean_count.yfilter)
	|| ydk::is_set(incomplete_protocol_count.yfilter)
	|| ydk::is_set(incomplete_glean_count.yfilter)
	|| ydk::is_set(dropped_protocol_req_count.yfilter)
	|| ydk::is_set(dropped_glean_req_count.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_dad_enabled.is_set || is_set(is_dad_enabled.yfilter)) leaf_name_data.push_back(is_dad_enabled.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.yfilter)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (is_icm_pv6_redirect.is_set || is_set(is_icm_pv6_redirect.yfilter)) leaf_name_data.push_back(is_icm_pv6_redirect.get_name_leafdata());
    if (is_dhcp_managed.is_set || is_set(is_dhcp_managed.yfilter)) leaf_name_data.push_back(is_dhcp_managed.get_name_leafdata());
    if (is_route_address_managed.is_set || is_set(is_route_address_managed.yfilter)) leaf_name_data.push_back(is_route_address_managed.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.yfilter)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (send_unicast_ra.is_set || is_set(send_unicast_ra.yfilter)) leaf_name_data.push_back(send_unicast_ra.get_name_leafdata());
    if (nd_retransmit_interval.is_set || is_set(nd_retransmit_interval.yfilter)) leaf_name_data.push_back(nd_retransmit_interval.get_name_leafdata());
    if (nd_min_transmit_interval.is_set || is_set(nd_min_transmit_interval.yfilter)) leaf_name_data.push_back(nd_min_transmit_interval.get_name_leafdata());
    if (nd_max_transmit_interval.is_set || is_set(nd_max_transmit_interval.yfilter)) leaf_name_data.push_back(nd_max_transmit_interval.get_name_leafdata());
    if (nd_advertisement_lifetime.is_set || is_set(nd_advertisement_lifetime.yfilter)) leaf_name_data.push_back(nd_advertisement_lifetime.get_name_leafdata());
    if (nd_reachable_time.is_set || is_set(nd_reachable_time.yfilter)) leaf_name_data.push_back(nd_reachable_time.get_name_leafdata());
    if (nd_cache_limit.is_set || is_set(nd_cache_limit.yfilter)) leaf_name_data.push_back(nd_cache_limit.get_name_leafdata());
    if (complete_protocol_count.is_set || is_set(complete_protocol_count.yfilter)) leaf_name_data.push_back(complete_protocol_count.get_name_leafdata());
    if (complete_glean_count.is_set || is_set(complete_glean_count.yfilter)) leaf_name_data.push_back(complete_glean_count.get_name_leafdata());
    if (incomplete_protocol_count.is_set || is_set(incomplete_protocol_count.yfilter)) leaf_name_data.push_back(incomplete_protocol_count.get_name_leafdata());
    if (incomplete_glean_count.is_set || is_set(incomplete_glean_count.yfilter)) leaf_name_data.push_back(incomplete_glean_count.get_name_leafdata());
    if (dropped_protocol_req_count.is_set || is_set(dropped_protocol_req_count.yfilter)) leaf_name_data.push_back(dropped_protocol_req_count.get_name_leafdata());
    if (dropped_glean_req_count.is_set || is_set(dropped_glean_req_count.yfilter)) leaf_name_data.push_back(dropped_glean_req_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled = value;
        is_dad_enabled.value_namespace = name_space;
        is_dad_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
        dad_attempts.value_namespace = name_space;
        dad_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect = value;
        is_icm_pv6_redirect.value_namespace = name_space;
        is_icm_pv6_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed = value;
        is_dhcp_managed.value_namespace = name_space;
        is_dhcp_managed.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra = value;
        send_unicast_ra.value_namespace = name_space;
        send_unicast_ra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval = value;
        nd_retransmit_interval.value_namespace = name_space;
        nd_retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval = value;
        nd_min_transmit_interval.value_namespace = name_space;
        nd_min_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval = value;
        nd_max_transmit_interval.value_namespace = name_space;
        nd_max_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime = value;
        nd_advertisement_lifetime.value_namespace = name_space;
        nd_advertisement_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time = value;
        nd_reachable_time.value_namespace = name_space;
        nd_reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit = value;
        nd_cache_limit.value_namespace = name_space;
        nd_cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count = value;
        complete_protocol_count.value_namespace = name_space;
        complete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-glean-count")
    {
        complete_glean_count = value;
        complete_glean_count.value_namespace = name_space;
        complete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count = value;
        incomplete_protocol_count.value_namespace = name_space;
        incomplete_protocol_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count = value;
        incomplete_glean_count.value_namespace = name_space;
        incomplete_glean_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count = value;
        dropped_protocol_req_count.value_namespace = name_space;
        dropped_protocol_req_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count = value;
        dropped_glean_req_count.value_namespace = name_space;
        dropped_glean_req_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled.yfilter = yfilter;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts.yfilter = yfilter;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect.yfilter = yfilter;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed.yfilter = yfilter;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed.yfilter = yfilter;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed.yfilter = yfilter;
    }
    if(value_path == "send-unicast-ra")
    {
        send_unicast_ra.yfilter = yfilter;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime.yfilter = yfilter;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time.yfilter = yfilter;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit.yfilter = yfilter;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "complete-glean-count")
    {
        complete_glean_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count.yfilter = yfilter;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count.yfilter = yfilter;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count.yfilter = yfilter;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-dad-enabled" || name == "dad-attempts" || name == "is-icm-pv6-redirect" || name == "is-dhcp-managed" || name == "is-route-address-managed" || name == "is-suppressed" || name == "send-unicast-ra" || name == "nd-retransmit-interval" || name == "nd-min-transmit-interval" || name == "nd-max-transmit-interval" || name == "nd-advertisement-lifetime" || name == "nd-reachable-time" || name == "nd-cache-limit" || name == "complete-protocol-count" || name == "complete-glean-count" || name == "incomplete-protocol-count" || name == "incomplete-glean-count" || name == "dropped-protocol-req-count" || name == "dropped-glean-req-count")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouters()
    :
    nd_virtual_router(this, {"interface_name"})
{

    yang_name = "nd-virtual-routers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::~NdVirtualRouters()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nd_virtual_router.len(); index++)
    {
        if(nd_virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<nd_virtual_router.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nd-virtual-router")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter>();
        ent_->parent = this;
        nd_virtual_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nd_virtual_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    link_layer_address{YType::str, "link-layer-address"},
    context{YType::uint32, "context"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    vr_gl_addr_ct{YType::uint32, "vr-gl-addr-ct"}
        ,
    local_address(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress>())
    , vr_global_address(this, {})
{
    local_address->parent = this;

    yang_name = "nd-virtual-router"; yang_parent_name = "nd-virtual-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::~NdVirtualRouter()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vr_global_address.len(); index++)
    {
        if(vr_global_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| link_layer_address.is_set
	|| context.is_set
	|| state.is_set
	|| flags.is_set
	|| vr_gl_addr_ct.is_set
	|| (local_address !=  nullptr && local_address->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_operation() const
{
    for (std::size_t index=0; index<vr_global_address.len(); index++)
    {
        if(vr_global_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(vr_gl_addr_ct.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-virtual-router";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (vr_gl_addr_ct.is_set || is_set(vr_gl_addr_ct.yfilter)) leaf_name_data.push_back(vr_gl_addr_ct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress>();
        ent_->parent = this;
        vr_global_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    count_ = 0;
    for (auto ent_ : vr_global_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "vr-gl-addr-ct")
    {
        vr_gl_addr_ct.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "vr-global-address" || name == "interface-name" || name == "link-layer-address" || name == "context" || name == "state" || name == "flags" || name == "vr-gl-addr-ct")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::LocalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"},
    valid_lifetime{YType::uint32, "valid-lifetime"},
    pref_lifetime{YType::uint32, "pref-lifetime"},
    prefix_length{YType::uint32, "prefix-length"},
    flags{YType::uint32, "flags"}
{

    yang_name = "local-address"; yang_parent_name = "nd-virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::~LocalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| valid_lifetime.is_set
	|| pref_lifetime.is_set
	|| prefix_length.is_set
	|| flags.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter)
	|| ydk::is_set(pref_lifetime.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());
    if (pref_lifetime.is_set || is_set(pref_lifetime.yfilter)) leaf_name_data.push_back(pref_lifetime.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime = value;
        pref_lifetime.value_namespace = name_space;
        pref_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "valid-lifetime" || name == "pref-lifetime" || name == "prefix-length" || name == "flags")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::VrGlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"},
    valid_lifetime{YType::uint32, "valid-lifetime"},
    pref_lifetime{YType::uint32, "pref-lifetime"},
    prefix_length{YType::uint32, "prefix-length"},
    flags{YType::uint32, "flags"}
{

    yang_name = "vr-global-address"; yang_parent_name = "nd-virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::~VrGlobalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| valid_lifetime.is_set
	|| pref_lifetime.is_set
	|| prefix_length.is_set
	|| flags.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter)
	|| ydk::is_set(pref_lifetime.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vr-global-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());
    if (pref_lifetime.is_set || is_set(pref_lifetime.yfilter)) leaf_name_data.push_back(pref_lifetime.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime = value;
        pref_lifetime.value_namespace = name_space;
        pref_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
    if(value_path == "pref-lifetime")
    {
        pref_lifetime.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "valid-lifetime" || name == "pref-lifetime" || name == "prefix-length" || name == "flags")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterfaces()
    :
    slaac_interface(this, {"interface_name"})
{

    yang_name = "slaac-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::~SlaacInterfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slaac_interface.len(); index++)
    {
        if(slaac_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::has_operation() const
{
    for (std::size_t index=0; index<slaac_interface.len(); index++)
    {
        if(slaac_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slaac-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slaac-interface")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface>();
        ent_->parent = this;
        slaac_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slaac_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slaac-interface")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::SlaacInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    router_advert_detail(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail>())
{
    router_advert_detail->parent = this;

    yang_name = "slaac-interface"; yang_parent_name = "slaac-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::~SlaacInterface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (router_advert_detail !=  nullptr && router_advert_detail->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (router_advert_detail !=  nullptr && router_advert_detail->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slaac-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-advert-detail")
    {
        if(router_advert_detail == nullptr)
        {
            router_advert_detail = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail>();
        }
        return router_advert_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(router_advert_detail != nullptr)
    {
        _children["router-advert-detail"] = router_advert_detail;
    }

    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-advert-detail" || name == "interface-name")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::RouterAdvertDetail()
    :
    idb{YType::str, "idb"}
        ,
    ra(this, {})
{

    yang_name = "router-advert-detail"; yang_parent_name = "slaac-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::~RouterAdvertDetail()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ra.len(); index++)
    {
        if(ra[index]->has_data())
            return true;
    }
    return idb.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::has_operation() const
{
    for (std::size_t index=0; index<ra.len(); index++)
    {
        if(ra[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idb.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-advert-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idb.is_set || is_set(idb.yfilter)) leaf_name_data.push_back(idb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ra")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra>();
        ent_->parent = this;
        ra.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ra.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idb")
    {
        idb = value;
        idb.value_namespace = name_space;
        idb.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idb")
    {
        idb.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ra" || name == "idb")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::Ra()
    :
    address{YType::str, "address"},
    hops{YType::uint32, "hops"},
    flags{YType::uint32, "flags"},
    life_time{YType::uint32, "life-time"},
    mtu{YType::uint32, "mtu"},
    err_msg{YType::boolean, "err-msg"},
    vrf_id{YType::uint32, "vrf-id"},
    u6_tbl_id{YType::uint32, "u6-tbl-id"},
    rib_protoid{YType::uint16, "rib-protoid"},
    default_router{YType::boolean, "default-router"},
    reachability{YType::uint32, "reachability"}
        ,
    elapsed_ra_time(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime>())
    , reachable_time(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime>())
    , retrans_time(std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime>())
    , prefix_q(this, {})
{
    elapsed_ra_time->parent = this;
    reachable_time->parent = this;
    retrans_time->parent = this;

    yang_name = "ra"; yang_parent_name = "router-advert-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::~Ra()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_q.len(); index++)
    {
        if(prefix_q[index]->has_data())
            return true;
    }
    return address.is_set
	|| hops.is_set
	|| flags.is_set
	|| life_time.is_set
	|| mtu.is_set
	|| err_msg.is_set
	|| vrf_id.is_set
	|| u6_tbl_id.is_set
	|| rib_protoid.is_set
	|| default_router.is_set
	|| reachability.is_set
	|| (elapsed_ra_time !=  nullptr && elapsed_ra_time->has_data())
	|| (reachable_time !=  nullptr && reachable_time->has_data())
	|| (retrans_time !=  nullptr && retrans_time->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::has_operation() const
{
    for (std::size_t index=0; index<prefix_q.len(); index++)
    {
        if(prefix_q[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hops.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(life_time.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(err_msg.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(u6_tbl_id.yfilter)
	|| ydk::is_set(rib_protoid.yfilter)
	|| ydk::is_set(default_router.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| (elapsed_ra_time !=  nullptr && elapsed_ra_time->has_operation())
	|| (reachable_time !=  nullptr && reachable_time->has_operation())
	|| (retrans_time !=  nullptr && retrans_time->has_operation());
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.yfilter)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (err_msg.is_set || is_set(err_msg.yfilter)) leaf_name_data.push_back(err_msg.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (u6_tbl_id.is_set || is_set(u6_tbl_id.yfilter)) leaf_name_data.push_back(u6_tbl_id.get_name_leafdata());
    if (rib_protoid.is_set || is_set(rib_protoid.yfilter)) leaf_name_data.push_back(rib_protoid.get_name_leafdata());
    if (default_router.is_set || is_set(default_router.yfilter)) leaf_name_data.push_back(default_router.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "elapsed-ra-time")
    {
        if(elapsed_ra_time == nullptr)
        {
            elapsed_ra_time = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime>();
        }
        return elapsed_ra_time;
    }

    if(child_yang_name == "reachable-time")
    {
        if(reachable_time == nullptr)
        {
            reachable_time = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime>();
        }
        return reachable_time;
    }

    if(child_yang_name == "retrans-time")
    {
        if(retrans_time == nullptr)
        {
            retrans_time = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime>();
        }
        return retrans_time;
    }

    if(child_yang_name == "prefix-q")
    {
        auto ent_ = std::make_shared<Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ>();
        ent_->parent = this;
        prefix_q.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(elapsed_ra_time != nullptr)
    {
        _children["elapsed-ra-time"] = elapsed_ra_time;
    }

    if(reachable_time != nullptr)
    {
        _children["reachable-time"] = reachable_time;
    }

    if(retrans_time != nullptr)
    {
        _children["retrans-time"] = retrans_time;
    }

    count_ = 0;
    for (auto ent_ : prefix_q.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-time")
    {
        life_time = value;
        life_time.value_namespace = name_space;
        life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-msg")
    {
        err_msg = value;
        err_msg.value_namespace = name_space;
        err_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u6-tbl-id")
    {
        u6_tbl_id = value;
        u6_tbl_id.value_namespace = name_space;
        u6_tbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-protoid")
    {
        rib_protoid = value;
        rib_protoid.value_namespace = name_space;
        rib_protoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-router")
    {
        default_router = value;
        default_router.value_namespace = name_space;
        default_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "life-time")
    {
        life_time.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "err-msg")
    {
        err_msg.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "u6-tbl-id")
    {
        u6_tbl_id.yfilter = yfilter;
    }
    if(value_path == "rib-protoid")
    {
        rib_protoid.yfilter = yfilter;
    }
    if(value_path == "default-router")
    {
        default_router.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "elapsed-ra-time" || name == "reachable-time" || name == "retrans-time" || name == "prefix-q" || name == "address" || name == "hops" || name == "flags" || name == "life-time" || name == "mtu" || name == "err-msg" || name == "vrf-id" || name == "u6-tbl-id" || name == "rib-protoid" || name == "default-router" || name == "reachability")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::ElapsedRaTime()
    :
    seconds{YType::uint32, "seconds"}
{

    yang_name = "elapsed-ra-time"; yang_parent_name = "ra"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::~ElapsedRaTime()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "elapsed-ra-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::ReachableTime()
    :
    seconds{YType::uint32, "seconds"}
{

    yang_name = "reachable-time"; yang_parent_name = "ra"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::~ReachableTime()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::RetransTime()
    :
    seconds{YType::uint32, "seconds"}
{

    yang_name = "retrans-time"; yang_parent_name = "ra"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::~RetransTime()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retrans-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds")
        return true;
    return false;
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::PrefixQ()
    :
    prefix_address{YType::str, "prefix-address"},
    eui64{YType::str, "eui64"},
    valid_life_time{YType::uint32, "valid-life-time"},
    preferred_life_time{YType::uint32, "preferred-life-time"},
    prefix_len{YType::uint32, "prefix-len"},
    flags{YType::uint32, "flags"},
    pfx_flags{YType::uint32, "pfx-flags"}
{

    yang_name = "prefix-q"; yang_parent_name = "ra"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::~PrefixQ()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::has_data() const
{
    if (is_presence_container) return true;
    return prefix_address.is_set
	|| eui64.is_set
	|| valid_life_time.is_set
	|| preferred_life_time.is_set
	|| prefix_len.is_set
	|| flags.is_set
	|| pfx_flags.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_address.yfilter)
	|| ydk::is_set(eui64.yfilter)
	|| ydk::is_set(valid_life_time.yfilter)
	|| ydk::is_set(preferred_life_time.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(pfx_flags.yfilter);
}

std::string Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-q";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_address.is_set || is_set(prefix_address.yfilter)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (eui64.is_set || is_set(eui64.yfilter)) leaf_name_data.push_back(eui64.get_name_leafdata());
    if (valid_life_time.is_set || is_set(valid_life_time.yfilter)) leaf_name_data.push_back(valid_life_time.get_name_leafdata());
    if (preferred_life_time.is_set || is_set(preferred_life_time.yfilter)) leaf_name_data.push_back(preferred_life_time.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (pfx_flags.is_set || is_set(pfx_flags.yfilter)) leaf_name_data.push_back(pfx_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-address")
    {
        prefix_address = value;
        prefix_address.value_namespace = name_space;
        prefix_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui64")
    {
        eui64 = value;
        eui64.value_namespace = name_space;
        eui64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-life-time")
    {
        valid_life_time = value;
        valid_life_time.value_namespace = name_space;
        valid_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-life-time")
    {
        preferred_life_time = value;
        preferred_life_time.value_namespace = name_space;
        preferred_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx-flags")
    {
        pfx_flags = value;
        pfx_flags.value_namespace = name_space;
        pfx_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-address")
    {
        prefix_address.yfilter = yfilter;
    }
    if(value_path == "eui64")
    {
        eui64.yfilter = yfilter;
    }
    if(value_path == "valid-life-time")
    {
        valid_life_time.yfilter = yfilter;
    }
    if(value_path == "preferred-life-time")
    {
        preferred_life_time.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "pfx-flags")
    {
        pfx_flags.yfilter = yfilter;
    }
}

bool Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-address" || name == "eui64" || name == "valid-life-time" || name == "preferred-life-time" || name == "prefix-len" || name == "flags" || name == "pfx-flags")
        return true;
    return false;
}

const Enum::YLeaf Ipv6NdShVrState::deleted {0, "deleted"};
const Enum::YLeaf Ipv6NdShVrState::standby {1, "standby"};
const Enum::YLeaf Ipv6NdShVrState::active {2, "active"};

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

const Enum::YLeaf Ipv6NdNeighborOrigin::other {0, "other"};
const Enum::YLeaf Ipv6NdNeighborOrigin::static_ {1, "static"};
const Enum::YLeaf Ipv6NdNeighborOrigin::dynamic {2, "dynamic"};

const Enum::YLeaf Ipv6NdShState::incomplete {0, "incomplete"};
const Enum::YLeaf Ipv6NdShState::reachable {1, "reachable"};
const Enum::YLeaf Ipv6NdShState::stale {2, "stale"};
const Enum::YLeaf Ipv6NdShState::glean {3, "glean"};
const Enum::YLeaf Ipv6NdShState::delay {4, "delay"};
const Enum::YLeaf Ipv6NdShState::probe {5, "probe"};
const Enum::YLeaf Ipv6NdShState::delete_ {6, "delete"};

const Enum::YLeaf Ipv6NdShVrFlags::no_flags {0, "no-flags"};
const Enum::YLeaf Ipv6NdShVrFlags::final_ra {1, "final-ra"};


}
}

