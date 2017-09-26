
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_lldp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_lldp_oper {

Lldp::Lldp()
    :
    global_lldp(std::make_shared<Lldp::GlobalLldp>())
	,nodes(std::make_shared<Lldp::Nodes>())
{
    global_lldp->parent = this;
    nodes->parent = this;

    yang_name = "lldp"; yang_parent_name = "Cisco-IOS-XR-ethernet-lldp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Lldp::~Lldp()
{
}

bool Lldp::has_data() const
{
    return (global_lldp !=  nullptr && global_lldp->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Lldp::has_operation() const
{
    return is_set(yfilter)
	|| (global_lldp !=  nullptr && global_lldp->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-oper:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-lldp")
    {
        if(global_lldp == nullptr)
        {
            global_lldp = std::make_shared<Lldp::GlobalLldp>();
        }
        return global_lldp;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Lldp::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_lldp != nullptr)
    {
        children["global-lldp"] = global_lldp;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Lldp::clone_ptr() const
{
    return std::make_shared<Lldp>();
}

std::string Lldp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Lldp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Lldp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lldp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-lldp" || name == "nodes")
        return true;
    return false;
}

Lldp::GlobalLldp::GlobalLldp()
    :
    lldp_info(std::make_shared<Lldp::GlobalLldp::LldpInfo>())
{
    lldp_info->parent = this;

    yang_name = "global-lldp"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::GlobalLldp::~GlobalLldp()
{
}

bool Lldp::GlobalLldp::has_data() const
{
    return (lldp_info !=  nullptr && lldp_info->has_data());
}

bool Lldp::GlobalLldp::has_operation() const
{
    return is_set(yfilter)
	|| (lldp_info !=  nullptr && lldp_info->has_operation());
}

std::string Lldp::GlobalLldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-oper:lldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::GlobalLldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::GlobalLldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::GlobalLldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-info")
    {
        if(lldp_info == nullptr)
        {
            lldp_info = std::make_shared<Lldp::GlobalLldp::LldpInfo>();
        }
        return lldp_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::GlobalLldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lldp_info != nullptr)
    {
        children["lldp-info"] = lldp_info;
    }

    return children;
}

void Lldp::GlobalLldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::GlobalLldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::GlobalLldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-info")
        return true;
    return false;
}

Lldp::GlobalLldp::LldpInfo::LldpInfo()
    :
    chassis_id{YType::str, "chassis-id"},
    chassis_id_sub_type{YType::uint8, "chassis-id-sub-type"},
    hold_time{YType::uint32, "hold-time"},
    re_init{YType::uint32, "re-init"},
    system_name{YType::str, "system-name"},
    timer{YType::uint32, "timer"}
{

    yang_name = "lldp-info"; yang_parent_name = "global-lldp"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::GlobalLldp::LldpInfo::~LldpInfo()
{
}

bool Lldp::GlobalLldp::LldpInfo::has_data() const
{
    return chassis_id.is_set
	|| chassis_id_sub_type.is_set
	|| hold_time.is_set
	|| re_init.is_set
	|| system_name.is_set
	|| timer.is_set;
}

bool Lldp::GlobalLldp::LldpInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(chassis_id_sub_type.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(re_init.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(timer.yfilter);
}

std::string Lldp::GlobalLldp::LldpInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-oper:lldp/global-lldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::GlobalLldp::LldpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::GlobalLldp::LldpInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (chassis_id_sub_type.is_set || is_set(chassis_id_sub_type.yfilter)) leaf_name_data.push_back(chassis_id_sub_type.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (re_init.is_set || is_set(re_init.yfilter)) leaf_name_data.push_back(re_init.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::GlobalLldp::LldpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::GlobalLldp::LldpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::GlobalLldp::LldpInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type = value;
        chassis_id_sub_type.value_namespace = name_space;
        chassis_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-init")
    {
        re_init = value;
        re_init.value_namespace = name_space;
        re_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::GlobalLldp::LldpInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "re-init")
    {
        re_init.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Lldp::GlobalLldp::LldpInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis-id" || name == "chassis-id-sub-type" || name == "hold-time" || name == "re-init" || name == "system-name" || name == "timer")
        return true;
    return false;
}

Lldp::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::Nodes::~Nodes()
{
}

bool Lldp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-oper:lldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Lldp::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Lldp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    interfaces(std::make_shared<Lldp::Nodes::Node::Interfaces>())
	,neighbors(std::make_shared<Lldp::Nodes::Node::Neighbors>())
	,statistics(std::make_shared<Lldp::Nodes::Node::Statistics>())
{
    interfaces->parent = this;
    neighbors->parent = this;
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::Nodes::Node::~Node()
{
}

bool Lldp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Lldp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Lldp::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-oper:lldp/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Lldp::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Lldp::Nodes::Node::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Lldp::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Lldp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "neighbors" || name == "statistics" || name == "node-name")
        return true;
    return false;
}

Lldp::Nodes::Node::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Lldp::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Lldp::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Lldp::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    if_index{YType::uint32, "if-index"},
    interface_name_xr{YType::str, "interface-name-xr"},
    port_description{YType::str, "port-description"},
    port_id{YType::str, "port-id"},
    port_id_sub_type{YType::uint8, "port-id-sub-type"},
    rx_enabled{YType::uint8, "rx-enabled"},
    rx_state{YType::str, "rx-state"},
    tx_enabled{YType::uint8, "tx-enabled"},
    tx_state{YType::str, "tx-state"}
    	,
    local_network_addresses(std::make_shared<Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses>())
{
    local_network_addresses->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Lldp::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| if_index.is_set
	|| interface_name_xr.is_set
	|| port_description.is_set
	|| port_id.is_set
	|| port_id_sub_type.is_set
	|| rx_enabled.is_set
	|| rx_state.is_set
	|| tx_enabled.is_set
	|| tx_state.is_set
	|| (local_network_addresses !=  nullptr && local_network_addresses->has_data());
}

bool Lldp::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(port_description.yfilter)
	|| ydk::is_set(port_id.yfilter)
	|| ydk::is_set(port_id_sub_type.yfilter)
	|| ydk::is_set(rx_enabled.yfilter)
	|| ydk::is_set(rx_state.yfilter)
	|| ydk::is_set(tx_enabled.yfilter)
	|| ydk::is_set(tx_state.yfilter)
	|| (local_network_addresses !=  nullptr && local_network_addresses->has_operation());
}

std::string Lldp::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (port_description.is_set || is_set(port_description.yfilter)) leaf_name_data.push_back(port_description.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.yfilter)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (port_id_sub_type.is_set || is_set(port_id_sub_type.yfilter)) leaf_name_data.push_back(port_id_sub_type.get_name_leafdata());
    if (rx_enabled.is_set || is_set(rx_enabled.yfilter)) leaf_name_data.push_back(rx_enabled.get_name_leafdata());
    if (rx_state.is_set || is_set(rx_state.yfilter)) leaf_name_data.push_back(rx_state.get_name_leafdata());
    if (tx_enabled.is_set || is_set(tx_enabled.yfilter)) leaf_name_data.push_back(tx_enabled.get_name_leafdata());
    if (tx_state.is_set || is_set(tx_state.yfilter)) leaf_name_data.push_back(tx_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-network-addresses")
    {
        if(local_network_addresses == nullptr)
        {
            local_network_addresses = std::make_shared<Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses>();
        }
        return local_network_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_network_addresses != nullptr)
    {
        children["local-network-addresses"] = local_network_addresses;
    }

    return children;
}

void Lldp::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-description")
    {
        port_description = value;
        port_description.value_namespace = name_space;
        port_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id")
    {
        port_id = value;
        port_id.value_namespace = name_space;
        port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type = value;
        port_id_sub_type.value_namespace = name_space;
        port_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-enabled")
    {
        rx_enabled = value;
        rx_enabled.value_namespace = name_space;
        rx_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-state")
    {
        rx_state = value;
        rx_state.value_namespace = name_space;
        rx_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-enabled")
    {
        tx_enabled = value;
        tx_enabled.value_namespace = name_space;
        tx_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-state")
    {
        tx_state = value;
        tx_state.value_namespace = name_space;
        tx_state.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "port-description")
    {
        port_description.yfilter = yfilter;
    }
    if(value_path == "port-id")
    {
        port_id.yfilter = yfilter;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "rx-enabled")
    {
        rx_enabled.yfilter = yfilter;
    }
    if(value_path == "rx-state")
    {
        rx_state.yfilter = yfilter;
    }
    if(value_path == "tx-enabled")
    {
        tx_enabled.yfilter = yfilter;
    }
    if(value_path == "tx-state")
    {
        tx_state.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-network-addresses" || name == "interface-name" || name == "if-index" || name == "interface-name-xr" || name == "port-description" || name == "port-id" || name == "port-id-sub-type" || name == "rx-enabled" || name == "rx-state" || name == "tx-enabled" || name == "tx-state")
        return true;
    return false;
}

Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LocalNetworkAddresses()
{

    yang_name = "local-network-addresses"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::~LocalNetworkAddresses()
{
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-addr-entry")
    {
        for(auto const & c : lldp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry>();
        c->parent = this;
        lldp_addr_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_addr_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-addr-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::LldpAddrEntry()
    :
    if_num{YType::uint32, "if-num"},
    ma_subtype{YType::uint8, "ma-subtype"}
    	,
    address(std::make_shared<Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "lldp-addr-entry"; yang_parent_name = "local-network-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::~LldpAddrEntry()
{
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::has_data() const
{
    return if_num.is_set
	|| ma_subtype.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_num.yfilter)
	|| ydk::is_set(ma_subtype.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_num.is_set || is_set(if_num.yfilter)) leaf_name_data.push_back(if_num.get_name_leafdata());
    if (ma_subtype.is_set || is_set(ma_subtype.yfilter)) leaf_name_data.push_back(ma_subtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-num")
    {
        if_num = value;
        if_num.value_namespace = name_space;
        if_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype = value;
        ma_subtype.value_namespace = name_space;
        ma_subtype.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-num")
    {
        if_num.yfilter = yfilter;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "if-num" || name == "ma-subtype")
        return true;
    return false;
}

Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "lldp-addr-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::~Address()
{
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Neighbors()
    :
    details(std::make_shared<Lldp::Nodes::Node::Neighbors::Details>())
	,devices(std::make_shared<Lldp::Nodes::Node::Neighbors::Devices>())
	,summaries(std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries>())
{
    details->parent = this;
    devices->parent = this;
    summaries->parent = this;

    yang_name = "neighbors"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::~Neighbors()
{
}

bool Lldp::Nodes::Node::Neighbors::has_data() const
{
    return (details !=  nullptr && details->has_data())
	|| (devices !=  nullptr && devices->has_data())
	|| (summaries !=  nullptr && summaries->has_data());
}

bool Lldp::Nodes::Node::Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation())
	|| (devices !=  nullptr && devices->has_operation())
	|| (summaries !=  nullptr && summaries->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Lldp::Nodes::Node::Neighbors::Details>();
        }
        return details;
    }

    if(child_yang_name == "devices")
    {
        if(devices == nullptr)
        {
            devices = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices>();
        }
        return devices;
    }

    if(child_yang_name == "summaries")
    {
        if(summaries == nullptr)
        {
            summaries = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries>();
        }
        return summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(details != nullptr)
    {
        children["details"] = details;
    }

    if(devices != nullptr)
    {
        children["devices"] = devices;
    }

    if(summaries != nullptr)
    {
        children["summaries"] = summaries;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "devices" || name == "summaries")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Details()
{

    yang_name = "details"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::~Details()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        for(auto const & c : detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail>();
        c->parent = this;
        detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::Detail()
    :
    device_id{YType::str, "device-id"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "detail"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::~Detail()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::has_data() const
{
    for (std::size_t index=0; index<lldp_neighbor.size(); index++)
    {
        if(lldp_neighbor[index]->has_data())
            return true;
    }
    return device_id.is_set
	|| interface_name.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<lldp_neighbor.size(); index++)
    {
        if(lldp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-neighbor")
    {
        for(auto const & c : lldp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor>();
        c->parent = this;
        lldp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-neighbor" || name == "device-id" || name == "interface-name")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::LldpNeighbor()
    :
    chassis_id{YType::str, "chassis-id"},
    device_id{YType::str, "device-id"},
    enabled_capabilities{YType::str, "enabled-capabilities"},
    header_version{YType::uint8, "header-version"},
    hold_time{YType::uint16, "hold-time"},
    platform{YType::str, "platform"},
    port_id_detail{YType::str, "port-id-detail"},
    receiving_interface_name{YType::str, "receiving-interface-name"},
    receiving_parent_interface_name{YType::str, "receiving-parent-interface-name"}
    	,
    detail(std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_>())
	,mib(std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib>())
{
    detail->parent = this;
    mib->parent = this;

    yang_name = "lldp-neighbor"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::~LldpNeighbor()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::has_data() const
{
    return chassis_id.is_set
	|| device_id.is_set
	|| enabled_capabilities.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| platform.is_set
	|| port_id_detail.is_set
	|| receiving_interface_name.is_set
	|| receiving_parent_interface_name.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (mib !=  nullptr && mib->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(enabled_capabilities.yfilter)
	|| ydk::is_set(header_version.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(platform.yfilter)
	|| ydk::is_set(port_id_detail.yfilter)
	|| ydk::is_set(receiving_interface_name.yfilter)
	|| ydk::is_set(receiving_parent_interface_name.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (mib !=  nullptr && mib->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.yfilter)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.yfilter)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (platform.is_set || is_set(platform.yfilter)) leaf_name_data.push_back(platform.get_name_leafdata());
    if (port_id_detail.is_set || is_set(port_id_detail.yfilter)) leaf_name_data.push_back(port_id_detail.get_name_leafdata());
    if (receiving_interface_name.is_set || is_set(receiving_interface_name.yfilter)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());
    if (receiving_parent_interface_name.is_set || is_set(receiving_parent_interface_name.yfilter)) leaf_name_data.push_back(receiving_parent_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_>();
        }
        return detail;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
        enabled_capabilities.value_namespace = name_space;
        enabled_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-version")
    {
        header_version = value;
        header_version.value_namespace = name_space;
        header_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform")
    {
        platform = value;
        platform.value_namespace = name_space;
        platform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail = value;
        port_id_detail.value_namespace = name_space;
        port_id_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
        receiving_interface_name.value_namespace = name_space;
        receiving_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-parent-interface-name")
    {
        receiving_parent_interface_name = value;
        receiving_parent_interface_name.value_namespace = name_space;
        receiving_parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities.yfilter = yfilter;
    }
    if(value_path == "header-version")
    {
        header_version.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "platform")
    {
        platform.yfilter = yfilter;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail.yfilter = yfilter;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name.yfilter = yfilter;
    }
    if(value_path == "receiving-parent-interface-name")
    {
        receiving_parent_interface_name.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "mib" || name == "chassis-id" || name == "device-id" || name == "enabled-capabilities" || name == "header-version" || name == "hold-time" || name == "platform" || name == "port-id-detail" || name == "receiving-interface-name" || name == "receiving-parent-interface-name")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::Detail_()
    :
    auto_negotiation{YType::str, "auto-negotiation"},
    enabled_capabilities{YType::str, "enabled-capabilities"},
    media_attachment_unit_type{YType::uint32, "media-attachment-unit-type"},
    peer_mac_address{YType::str, "peer-mac-address"},
    physical_media_capabilities{YType::str, "physical-media-capabilities"},
    port_description{YType::str, "port-description"},
    port_vlan_id{YType::uint32, "port-vlan-id"},
    system_capabilities{YType::str, "system-capabilities"},
    system_description{YType::str, "system-description"},
    system_name{YType::str, "system-name"},
    time_remaining{YType::uint32, "time-remaining"}
    	,
    network_addresses(std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses>())
{
    network_addresses->parent = this;

    yang_name = "detail"; yang_parent_name = "lldp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::~Detail_()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::has_data() const
{
    return auto_negotiation.is_set
	|| enabled_capabilities.is_set
	|| media_attachment_unit_type.is_set
	|| peer_mac_address.is_set
	|| physical_media_capabilities.is_set
	|| port_description.is_set
	|| port_vlan_id.is_set
	|| system_capabilities.is_set
	|| system_description.is_set
	|| system_name.is_set
	|| time_remaining.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_negotiation.yfilter)
	|| ydk::is_set(enabled_capabilities.yfilter)
	|| ydk::is_set(media_attachment_unit_type.yfilter)
	|| ydk::is_set(peer_mac_address.yfilter)
	|| ydk::is_set(physical_media_capabilities.yfilter)
	|| ydk::is_set(port_description.yfilter)
	|| ydk::is_set(port_vlan_id.yfilter)
	|| ydk::is_set(system_capabilities.yfilter)
	|| ydk::is_set(system_description.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| (network_addresses !=  nullptr && network_addresses->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_negotiation.is_set || is_set(auto_negotiation.yfilter)) leaf_name_data.push_back(auto_negotiation.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.yfilter)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (media_attachment_unit_type.is_set || is_set(media_attachment_unit_type.yfilter)) leaf_name_data.push_back(media_attachment_unit_type.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.yfilter)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (physical_media_capabilities.is_set || is_set(physical_media_capabilities.yfilter)) leaf_name_data.push_back(physical_media_capabilities.get_name_leafdata());
    if (port_description.is_set || is_set(port_description.yfilter)) leaf_name_data.push_back(port_description.get_name_leafdata());
    if (port_vlan_id.is_set || is_set(port_vlan_id.yfilter)) leaf_name_data.push_back(port_vlan_id.get_name_leafdata());
    if (system_capabilities.is_set || is_set(system_capabilities.yfilter)) leaf_name_data.push_back(system_capabilities.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.yfilter)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-addresses")
    {
        if(network_addresses == nullptr)
        {
            network_addresses = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses>();
        }
        return network_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_addresses != nullptr)
    {
        children["network-addresses"] = network_addresses;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation = value;
        auto_negotiation.value_namespace = name_space;
        auto_negotiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
        enabled_capabilities.value_namespace = name_space;
        enabled_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-attachment-unit-type")
    {
        media_attachment_unit_type = value;
        media_attachment_unit_type.value_namespace = name_space;
        media_attachment_unit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
        peer_mac_address.value_namespace = name_space;
        peer_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-media-capabilities")
    {
        physical_media_capabilities = value;
        physical_media_capabilities.value_namespace = name_space;
        physical_media_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-description")
    {
        port_description = value;
        port_description.value_namespace = name_space;
        port_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-vlan-id")
    {
        port_vlan_id = value;
        port_vlan_id.value_namespace = name_space;
        port_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities = value;
        system_capabilities.value_namespace = name_space;
        system_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-description")
    {
        system_description = value;
        system_description.value_namespace = name_space;
        system_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation.yfilter = yfilter;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities.yfilter = yfilter;
    }
    if(value_path == "media-attachment-unit-type")
    {
        media_attachment_unit_type.yfilter = yfilter;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address.yfilter = yfilter;
    }
    if(value_path == "physical-media-capabilities")
    {
        physical_media_capabilities.yfilter = yfilter;
    }
    if(value_path == "port-description")
    {
        port_description.yfilter = yfilter;
    }
    if(value_path == "port-vlan-id")
    {
        port_vlan_id.yfilter = yfilter;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities.yfilter = yfilter;
    }
    if(value_path == "system-description")
    {
        system_description.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addresses" || name == "auto-negotiation" || name == "enabled-capabilities" || name == "media-attachment-unit-type" || name == "peer-mac-address" || name == "physical-media-capabilities" || name == "port-description" || name == "port-vlan-id" || name == "system-capabilities" || name == "system-description" || name == "system-name" || name == "time-remaining")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::NetworkAddresses()
{

    yang_name = "network-addresses"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::~NetworkAddresses()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-addr-entry")
    {
        for(auto const & c : lldp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry>();
        c->parent = this;
        lldp_addr_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_addr_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-addr-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::LldpAddrEntry()
    :
    if_num{YType::uint32, "if-num"},
    ma_subtype{YType::uint8, "ma-subtype"}
    	,
    address(std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "lldp-addr-entry"; yang_parent_name = "network-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::~LldpAddrEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::has_data() const
{
    return if_num.is_set
	|| ma_subtype.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_num.yfilter)
	|| ydk::is_set(ma_subtype.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_num.is_set || is_set(if_num.yfilter)) leaf_name_data.push_back(if_num.get_name_leafdata());
    if (ma_subtype.is_set || is_set(ma_subtype.yfilter)) leaf_name_data.push_back(ma_subtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-num")
    {
        if_num = value;
        if_num.value_namespace = name_space;
        if_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype = value;
        ma_subtype.value_namespace = name_space;
        ma_subtype.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-num")
    {
        if_num.yfilter = yfilter;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "if-num" || name == "ma-subtype")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "lldp-addr-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::~Address()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::Mib()
    :
    chassis_id_len{YType::uint16, "chassis-id-len"},
    chassis_id_sub_type{YType::uint8, "chassis-id-sub-type"},
    combined_capabilities{YType::uint32, "combined-capabilities"},
    port_id_len{YType::uint16, "port-id-len"},
    port_id_sub_type{YType::uint8, "port-id-sub-type"},
    rem_index{YType::uint32, "rem-index"},
    rem_local_port_num{YType::uint32, "rem-local-port-num"},
    rem_time_mark{YType::uint32, "rem-time-mark"}
    	,
    org_def_tlv_list(std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList>())
	,unknown_tlv_list(std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList>())
{
    org_def_tlv_list->parent = this;
    unknown_tlv_list->parent = this;

    yang_name = "mib"; yang_parent_name = "lldp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::~Mib()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::has_data() const
{
    return chassis_id_len.is_set
	|| chassis_id_sub_type.is_set
	|| combined_capabilities.is_set
	|| port_id_len.is_set
	|| port_id_sub_type.is_set
	|| rem_index.is_set
	|| rem_local_port_num.is_set
	|| rem_time_mark.is_set
	|| (org_def_tlv_list !=  nullptr && org_def_tlv_list->has_data())
	|| (unknown_tlv_list !=  nullptr && unknown_tlv_list->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id_len.yfilter)
	|| ydk::is_set(chassis_id_sub_type.yfilter)
	|| ydk::is_set(combined_capabilities.yfilter)
	|| ydk::is_set(port_id_len.yfilter)
	|| ydk::is_set(port_id_sub_type.yfilter)
	|| ydk::is_set(rem_index.yfilter)
	|| ydk::is_set(rem_local_port_num.yfilter)
	|| ydk::is_set(rem_time_mark.yfilter)
	|| (org_def_tlv_list !=  nullptr && org_def_tlv_list->has_operation())
	|| (unknown_tlv_list !=  nullptr && unknown_tlv_list->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id_len.is_set || is_set(chassis_id_len.yfilter)) leaf_name_data.push_back(chassis_id_len.get_name_leafdata());
    if (chassis_id_sub_type.is_set || is_set(chassis_id_sub_type.yfilter)) leaf_name_data.push_back(chassis_id_sub_type.get_name_leafdata());
    if (combined_capabilities.is_set || is_set(combined_capabilities.yfilter)) leaf_name_data.push_back(combined_capabilities.get_name_leafdata());
    if (port_id_len.is_set || is_set(port_id_len.yfilter)) leaf_name_data.push_back(port_id_len.get_name_leafdata());
    if (port_id_sub_type.is_set || is_set(port_id_sub_type.yfilter)) leaf_name_data.push_back(port_id_sub_type.get_name_leafdata());
    if (rem_index.is_set || is_set(rem_index.yfilter)) leaf_name_data.push_back(rem_index.get_name_leafdata());
    if (rem_local_port_num.is_set || is_set(rem_local_port_num.yfilter)) leaf_name_data.push_back(rem_local_port_num.get_name_leafdata());
    if (rem_time_mark.is_set || is_set(rem_time_mark.yfilter)) leaf_name_data.push_back(rem_time_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "org-def-tlv-list")
    {
        if(org_def_tlv_list == nullptr)
        {
            org_def_tlv_list = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList>();
        }
        return org_def_tlv_list;
    }

    if(child_yang_name == "unknown-tlv-list")
    {
        if(unknown_tlv_list == nullptr)
        {
            unknown_tlv_list = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList>();
        }
        return unknown_tlv_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(org_def_tlv_list != nullptr)
    {
        children["org-def-tlv-list"] = org_def_tlv_list;
    }

    if(unknown_tlv_list != nullptr)
    {
        children["unknown-tlv-list"] = unknown_tlv_list;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id-len")
    {
        chassis_id_len = value;
        chassis_id_len.value_namespace = name_space;
        chassis_id_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type = value;
        chassis_id_sub_type.value_namespace = name_space;
        chassis_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "combined-capabilities")
    {
        combined_capabilities = value;
        combined_capabilities.value_namespace = name_space;
        combined_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-len")
    {
        port_id_len = value;
        port_id_len.value_namespace = name_space;
        port_id_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type = value;
        port_id_sub_type.value_namespace = name_space;
        port_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-index")
    {
        rem_index = value;
        rem_index.value_namespace = name_space;
        rem_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-local-port-num")
    {
        rem_local_port_num = value;
        rem_local_port_num.value_namespace = name_space;
        rem_local_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-time-mark")
    {
        rem_time_mark = value;
        rem_time_mark.value_namespace = name_space;
        rem_time_mark.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id-len")
    {
        chassis_id_len.yfilter = yfilter;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "combined-capabilities")
    {
        combined_capabilities.yfilter = yfilter;
    }
    if(value_path == "port-id-len")
    {
        port_id_len.yfilter = yfilter;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "rem-index")
    {
        rem_index.yfilter = yfilter;
    }
    if(value_path == "rem-local-port-num")
    {
        rem_local_port_num.yfilter = yfilter;
    }
    if(value_path == "rem-time-mark")
    {
        rem_time_mark.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "org-def-tlv-list" || name == "unknown-tlv-list" || name == "chassis-id-len" || name == "chassis-id-sub-type" || name == "combined-capabilities" || name == "port-id-len" || name == "port-id-sub-type" || name == "rem-index" || name == "rem-local-port-num" || name == "rem-time-mark")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::OrgDefTlvList()
{

    yang_name = "org-def-tlv-list"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::~OrgDefTlvList()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::has_data() const
{
    for (std::size_t index=0; index<lldp_org_def_tlv_entry.size(); index++)
    {
        if(lldp_org_def_tlv_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::has_operation() const
{
    for (std::size_t index=0; index<lldp_org_def_tlv_entry.size(); index++)
    {
        if(lldp_org_def_tlv_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "org-def-tlv-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-org-def-tlv-entry")
    {
        for(auto const & c : lldp_org_def_tlv_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry>();
        c->parent = this;
        lldp_org_def_tlv_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_org_def_tlv_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-org-def-tlv-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::LldpOrgDefTlvEntry()
    :
    oui{YType::uint32, "oui"},
    tlv_info_indes{YType::uint32, "tlv-info-indes"},
    tlv_subtype{YType::uint8, "tlv-subtype"},
    tlv_value{YType::str, "tlv-value"}
{

    yang_name = "lldp-org-def-tlv-entry"; yang_parent_name = "org-def-tlv-list"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::~LldpOrgDefTlvEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_data() const
{
    return oui.is_set
	|| tlv_info_indes.is_set
	|| tlv_subtype.is_set
	|| tlv_value.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(tlv_info_indes.yfilter)
	|| ydk::is_set(tlv_subtype.yfilter)
	|| ydk::is_set(tlv_value.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-org-def-tlv-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (tlv_info_indes.is_set || is_set(tlv_info_indes.yfilter)) leaf_name_data.push_back(tlv_info_indes.get_name_leafdata());
    if (tlv_subtype.is_set || is_set(tlv_subtype.yfilter)) leaf_name_data.push_back(tlv_subtype.get_name_leafdata());
    if (tlv_value.is_set || is_set(tlv_value.yfilter)) leaf_name_data.push_back(tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-info-indes")
    {
        tlv_info_indes = value;
        tlv_info_indes.value_namespace = name_space;
        tlv_info_indes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-subtype")
    {
        tlv_subtype = value;
        tlv_subtype.value_namespace = name_space;
        tlv_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-value")
    {
        tlv_value = value;
        tlv_value.value_namespace = name_space;
        tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "tlv-info-indes")
    {
        tlv_info_indes.yfilter = yfilter;
    }
    if(value_path == "tlv-subtype")
    {
        tlv_subtype.yfilter = yfilter;
    }
    if(value_path == "tlv-value")
    {
        tlv_value.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oui" || name == "tlv-info-indes" || name == "tlv-subtype" || name == "tlv-value")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::UnknownTlvList()
{

    yang_name = "unknown-tlv-list"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::~UnknownTlvList()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::has_data() const
{
    for (std::size_t index=0; index<lldp_unknown_tlv_entry.size(); index++)
    {
        if(lldp_unknown_tlv_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::has_operation() const
{
    for (std::size_t index=0; index<lldp_unknown_tlv_entry.size(); index++)
    {
        if(lldp_unknown_tlv_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-unknown-tlv-entry")
    {
        for(auto const & c : lldp_unknown_tlv_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry>();
        c->parent = this;
        lldp_unknown_tlv_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_unknown_tlv_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-unknown-tlv-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::LldpUnknownTlvEntry()
    :
    tlv_type{YType::uint8, "tlv-type"},
    tlv_value{YType::str, "tlv-value"}
{

    yang_name = "lldp-unknown-tlv-entry"; yang_parent_name = "unknown-tlv-list"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::~LldpUnknownTlvEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_data() const
{
    return tlv_type.is_set
	|| tlv_value.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_value.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-unknown-tlv-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_value.is_set || is_set(tlv_value.yfilter)) leaf_name_data.push_back(tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-value")
    {
        tlv_value = value;
        tlv_value.value_namespace = name_space;
        tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-value")
    {
        tlv_value.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-type" || name == "tlv-value")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Devices()
{

    yang_name = "devices"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::~Devices()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::has_data() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Devices::has_operation() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        for(auto const & c : device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device>();
        c->parent = this;
        device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Devices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::Device()
    :
    device_id{YType::str, "device-id"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "device"; yang_parent_name = "devices"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::~Device()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::has_data() const
{
    for (std::size_t index=0; index<lldp_neighbor.size(); index++)
    {
        if(lldp_neighbor[index]->has_data())
            return true;
    }
    return device_id.is_set
	|| interface_name.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::has_operation() const
{
    for (std::size_t index=0; index<lldp_neighbor.size(); index++)
    {
        if(lldp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-neighbor")
    {
        for(auto const & c : lldp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor>();
        c->parent = this;
        lldp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-neighbor" || name == "device-id" || name == "interface-name")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::LldpNeighbor()
    :
    chassis_id{YType::str, "chassis-id"},
    device_id{YType::str, "device-id"},
    enabled_capabilities{YType::str, "enabled-capabilities"},
    header_version{YType::uint8, "header-version"},
    hold_time{YType::uint16, "hold-time"},
    platform{YType::str, "platform"},
    port_id_detail{YType::str, "port-id-detail"},
    receiving_interface_name{YType::str, "receiving-interface-name"},
    receiving_parent_interface_name{YType::str, "receiving-parent-interface-name"}
    	,
    detail(std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail>())
	,mib(std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib>())
{
    detail->parent = this;
    mib->parent = this;

    yang_name = "lldp-neighbor"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::~LldpNeighbor()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::has_data() const
{
    return chassis_id.is_set
	|| device_id.is_set
	|| enabled_capabilities.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| platform.is_set
	|| port_id_detail.is_set
	|| receiving_interface_name.is_set
	|| receiving_parent_interface_name.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (mib !=  nullptr && mib->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(enabled_capabilities.yfilter)
	|| ydk::is_set(header_version.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(platform.yfilter)
	|| ydk::is_set(port_id_detail.yfilter)
	|| ydk::is_set(receiving_interface_name.yfilter)
	|| ydk::is_set(receiving_parent_interface_name.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (mib !=  nullptr && mib->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.yfilter)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.yfilter)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (platform.is_set || is_set(platform.yfilter)) leaf_name_data.push_back(platform.get_name_leafdata());
    if (port_id_detail.is_set || is_set(port_id_detail.yfilter)) leaf_name_data.push_back(port_id_detail.get_name_leafdata());
    if (receiving_interface_name.is_set || is_set(receiving_interface_name.yfilter)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());
    if (receiving_parent_interface_name.is_set || is_set(receiving_parent_interface_name.yfilter)) leaf_name_data.push_back(receiving_parent_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
        enabled_capabilities.value_namespace = name_space;
        enabled_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-version")
    {
        header_version = value;
        header_version.value_namespace = name_space;
        header_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform")
    {
        platform = value;
        platform.value_namespace = name_space;
        platform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail = value;
        port_id_detail.value_namespace = name_space;
        port_id_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
        receiving_interface_name.value_namespace = name_space;
        receiving_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-parent-interface-name")
    {
        receiving_parent_interface_name = value;
        receiving_parent_interface_name.value_namespace = name_space;
        receiving_parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities.yfilter = yfilter;
    }
    if(value_path == "header-version")
    {
        header_version.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "platform")
    {
        platform.yfilter = yfilter;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail.yfilter = yfilter;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name.yfilter = yfilter;
    }
    if(value_path == "receiving-parent-interface-name")
    {
        receiving_parent_interface_name.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "mib" || name == "chassis-id" || name == "device-id" || name == "enabled-capabilities" || name == "header-version" || name == "hold-time" || name == "platform" || name == "port-id-detail" || name == "receiving-interface-name" || name == "receiving-parent-interface-name")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::Detail()
    :
    auto_negotiation{YType::str, "auto-negotiation"},
    enabled_capabilities{YType::str, "enabled-capabilities"},
    media_attachment_unit_type{YType::uint32, "media-attachment-unit-type"},
    peer_mac_address{YType::str, "peer-mac-address"},
    physical_media_capabilities{YType::str, "physical-media-capabilities"},
    port_description{YType::str, "port-description"},
    port_vlan_id{YType::uint32, "port-vlan-id"},
    system_capabilities{YType::str, "system-capabilities"},
    system_description{YType::str, "system-description"},
    system_name{YType::str, "system-name"},
    time_remaining{YType::uint32, "time-remaining"}
    	,
    network_addresses(std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses>())
{
    network_addresses->parent = this;

    yang_name = "detail"; yang_parent_name = "lldp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::~Detail()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::has_data() const
{
    return auto_negotiation.is_set
	|| enabled_capabilities.is_set
	|| media_attachment_unit_type.is_set
	|| peer_mac_address.is_set
	|| physical_media_capabilities.is_set
	|| port_description.is_set
	|| port_vlan_id.is_set
	|| system_capabilities.is_set
	|| system_description.is_set
	|| system_name.is_set
	|| time_remaining.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_negotiation.yfilter)
	|| ydk::is_set(enabled_capabilities.yfilter)
	|| ydk::is_set(media_attachment_unit_type.yfilter)
	|| ydk::is_set(peer_mac_address.yfilter)
	|| ydk::is_set(physical_media_capabilities.yfilter)
	|| ydk::is_set(port_description.yfilter)
	|| ydk::is_set(port_vlan_id.yfilter)
	|| ydk::is_set(system_capabilities.yfilter)
	|| ydk::is_set(system_description.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| (network_addresses !=  nullptr && network_addresses->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_negotiation.is_set || is_set(auto_negotiation.yfilter)) leaf_name_data.push_back(auto_negotiation.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.yfilter)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (media_attachment_unit_type.is_set || is_set(media_attachment_unit_type.yfilter)) leaf_name_data.push_back(media_attachment_unit_type.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.yfilter)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (physical_media_capabilities.is_set || is_set(physical_media_capabilities.yfilter)) leaf_name_data.push_back(physical_media_capabilities.get_name_leafdata());
    if (port_description.is_set || is_set(port_description.yfilter)) leaf_name_data.push_back(port_description.get_name_leafdata());
    if (port_vlan_id.is_set || is_set(port_vlan_id.yfilter)) leaf_name_data.push_back(port_vlan_id.get_name_leafdata());
    if (system_capabilities.is_set || is_set(system_capabilities.yfilter)) leaf_name_data.push_back(system_capabilities.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.yfilter)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-addresses")
    {
        if(network_addresses == nullptr)
        {
            network_addresses = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses>();
        }
        return network_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_addresses != nullptr)
    {
        children["network-addresses"] = network_addresses;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation = value;
        auto_negotiation.value_namespace = name_space;
        auto_negotiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
        enabled_capabilities.value_namespace = name_space;
        enabled_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-attachment-unit-type")
    {
        media_attachment_unit_type = value;
        media_attachment_unit_type.value_namespace = name_space;
        media_attachment_unit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
        peer_mac_address.value_namespace = name_space;
        peer_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-media-capabilities")
    {
        physical_media_capabilities = value;
        physical_media_capabilities.value_namespace = name_space;
        physical_media_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-description")
    {
        port_description = value;
        port_description.value_namespace = name_space;
        port_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-vlan-id")
    {
        port_vlan_id = value;
        port_vlan_id.value_namespace = name_space;
        port_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities = value;
        system_capabilities.value_namespace = name_space;
        system_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-description")
    {
        system_description = value;
        system_description.value_namespace = name_space;
        system_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation.yfilter = yfilter;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities.yfilter = yfilter;
    }
    if(value_path == "media-attachment-unit-type")
    {
        media_attachment_unit_type.yfilter = yfilter;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address.yfilter = yfilter;
    }
    if(value_path == "physical-media-capabilities")
    {
        physical_media_capabilities.yfilter = yfilter;
    }
    if(value_path == "port-description")
    {
        port_description.yfilter = yfilter;
    }
    if(value_path == "port-vlan-id")
    {
        port_vlan_id.yfilter = yfilter;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities.yfilter = yfilter;
    }
    if(value_path == "system-description")
    {
        system_description.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addresses" || name == "auto-negotiation" || name == "enabled-capabilities" || name == "media-attachment-unit-type" || name == "peer-mac-address" || name == "physical-media-capabilities" || name == "port-description" || name == "port-vlan-id" || name == "system-capabilities" || name == "system-description" || name == "system-name" || name == "time-remaining")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::NetworkAddresses()
{

    yang_name = "network-addresses"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::~NetworkAddresses()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-addr-entry")
    {
        for(auto const & c : lldp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry>();
        c->parent = this;
        lldp_addr_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_addr_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-addr-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::LldpAddrEntry()
    :
    if_num{YType::uint32, "if-num"},
    ma_subtype{YType::uint8, "ma-subtype"}
    	,
    address(std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "lldp-addr-entry"; yang_parent_name = "network-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::~LldpAddrEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::has_data() const
{
    return if_num.is_set
	|| ma_subtype.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_num.yfilter)
	|| ydk::is_set(ma_subtype.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_num.is_set || is_set(if_num.yfilter)) leaf_name_data.push_back(if_num.get_name_leafdata());
    if (ma_subtype.is_set || is_set(ma_subtype.yfilter)) leaf_name_data.push_back(ma_subtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-num")
    {
        if_num = value;
        if_num.value_namespace = name_space;
        if_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype = value;
        ma_subtype.value_namespace = name_space;
        ma_subtype.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-num")
    {
        if_num.yfilter = yfilter;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "if-num" || name == "ma-subtype")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "lldp-addr-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::~Address()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::Mib()
    :
    chassis_id_len{YType::uint16, "chassis-id-len"},
    chassis_id_sub_type{YType::uint8, "chassis-id-sub-type"},
    combined_capabilities{YType::uint32, "combined-capabilities"},
    port_id_len{YType::uint16, "port-id-len"},
    port_id_sub_type{YType::uint8, "port-id-sub-type"},
    rem_index{YType::uint32, "rem-index"},
    rem_local_port_num{YType::uint32, "rem-local-port-num"},
    rem_time_mark{YType::uint32, "rem-time-mark"}
    	,
    org_def_tlv_list(std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList>())
	,unknown_tlv_list(std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList>())
{
    org_def_tlv_list->parent = this;
    unknown_tlv_list->parent = this;

    yang_name = "mib"; yang_parent_name = "lldp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::~Mib()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::has_data() const
{
    return chassis_id_len.is_set
	|| chassis_id_sub_type.is_set
	|| combined_capabilities.is_set
	|| port_id_len.is_set
	|| port_id_sub_type.is_set
	|| rem_index.is_set
	|| rem_local_port_num.is_set
	|| rem_time_mark.is_set
	|| (org_def_tlv_list !=  nullptr && org_def_tlv_list->has_data())
	|| (unknown_tlv_list !=  nullptr && unknown_tlv_list->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id_len.yfilter)
	|| ydk::is_set(chassis_id_sub_type.yfilter)
	|| ydk::is_set(combined_capabilities.yfilter)
	|| ydk::is_set(port_id_len.yfilter)
	|| ydk::is_set(port_id_sub_type.yfilter)
	|| ydk::is_set(rem_index.yfilter)
	|| ydk::is_set(rem_local_port_num.yfilter)
	|| ydk::is_set(rem_time_mark.yfilter)
	|| (org_def_tlv_list !=  nullptr && org_def_tlv_list->has_operation())
	|| (unknown_tlv_list !=  nullptr && unknown_tlv_list->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id_len.is_set || is_set(chassis_id_len.yfilter)) leaf_name_data.push_back(chassis_id_len.get_name_leafdata());
    if (chassis_id_sub_type.is_set || is_set(chassis_id_sub_type.yfilter)) leaf_name_data.push_back(chassis_id_sub_type.get_name_leafdata());
    if (combined_capabilities.is_set || is_set(combined_capabilities.yfilter)) leaf_name_data.push_back(combined_capabilities.get_name_leafdata());
    if (port_id_len.is_set || is_set(port_id_len.yfilter)) leaf_name_data.push_back(port_id_len.get_name_leafdata());
    if (port_id_sub_type.is_set || is_set(port_id_sub_type.yfilter)) leaf_name_data.push_back(port_id_sub_type.get_name_leafdata());
    if (rem_index.is_set || is_set(rem_index.yfilter)) leaf_name_data.push_back(rem_index.get_name_leafdata());
    if (rem_local_port_num.is_set || is_set(rem_local_port_num.yfilter)) leaf_name_data.push_back(rem_local_port_num.get_name_leafdata());
    if (rem_time_mark.is_set || is_set(rem_time_mark.yfilter)) leaf_name_data.push_back(rem_time_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "org-def-tlv-list")
    {
        if(org_def_tlv_list == nullptr)
        {
            org_def_tlv_list = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList>();
        }
        return org_def_tlv_list;
    }

    if(child_yang_name == "unknown-tlv-list")
    {
        if(unknown_tlv_list == nullptr)
        {
            unknown_tlv_list = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList>();
        }
        return unknown_tlv_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(org_def_tlv_list != nullptr)
    {
        children["org-def-tlv-list"] = org_def_tlv_list;
    }

    if(unknown_tlv_list != nullptr)
    {
        children["unknown-tlv-list"] = unknown_tlv_list;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id-len")
    {
        chassis_id_len = value;
        chassis_id_len.value_namespace = name_space;
        chassis_id_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type = value;
        chassis_id_sub_type.value_namespace = name_space;
        chassis_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "combined-capabilities")
    {
        combined_capabilities = value;
        combined_capabilities.value_namespace = name_space;
        combined_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-len")
    {
        port_id_len = value;
        port_id_len.value_namespace = name_space;
        port_id_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type = value;
        port_id_sub_type.value_namespace = name_space;
        port_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-index")
    {
        rem_index = value;
        rem_index.value_namespace = name_space;
        rem_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-local-port-num")
    {
        rem_local_port_num = value;
        rem_local_port_num.value_namespace = name_space;
        rem_local_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-time-mark")
    {
        rem_time_mark = value;
        rem_time_mark.value_namespace = name_space;
        rem_time_mark.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id-len")
    {
        chassis_id_len.yfilter = yfilter;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "combined-capabilities")
    {
        combined_capabilities.yfilter = yfilter;
    }
    if(value_path == "port-id-len")
    {
        port_id_len.yfilter = yfilter;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "rem-index")
    {
        rem_index.yfilter = yfilter;
    }
    if(value_path == "rem-local-port-num")
    {
        rem_local_port_num.yfilter = yfilter;
    }
    if(value_path == "rem-time-mark")
    {
        rem_time_mark.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "org-def-tlv-list" || name == "unknown-tlv-list" || name == "chassis-id-len" || name == "chassis-id-sub-type" || name == "combined-capabilities" || name == "port-id-len" || name == "port-id-sub-type" || name == "rem-index" || name == "rem-local-port-num" || name == "rem-time-mark")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::OrgDefTlvList()
{

    yang_name = "org-def-tlv-list"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::~OrgDefTlvList()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::has_data() const
{
    for (std::size_t index=0; index<lldp_org_def_tlv_entry.size(); index++)
    {
        if(lldp_org_def_tlv_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::has_operation() const
{
    for (std::size_t index=0; index<lldp_org_def_tlv_entry.size(); index++)
    {
        if(lldp_org_def_tlv_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "org-def-tlv-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-org-def-tlv-entry")
    {
        for(auto const & c : lldp_org_def_tlv_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry>();
        c->parent = this;
        lldp_org_def_tlv_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_org_def_tlv_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-org-def-tlv-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::LldpOrgDefTlvEntry()
    :
    oui{YType::uint32, "oui"},
    tlv_info_indes{YType::uint32, "tlv-info-indes"},
    tlv_subtype{YType::uint8, "tlv-subtype"},
    tlv_value{YType::str, "tlv-value"}
{

    yang_name = "lldp-org-def-tlv-entry"; yang_parent_name = "org-def-tlv-list"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::~LldpOrgDefTlvEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_data() const
{
    return oui.is_set
	|| tlv_info_indes.is_set
	|| tlv_subtype.is_set
	|| tlv_value.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(tlv_info_indes.yfilter)
	|| ydk::is_set(tlv_subtype.yfilter)
	|| ydk::is_set(tlv_value.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-org-def-tlv-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (tlv_info_indes.is_set || is_set(tlv_info_indes.yfilter)) leaf_name_data.push_back(tlv_info_indes.get_name_leafdata());
    if (tlv_subtype.is_set || is_set(tlv_subtype.yfilter)) leaf_name_data.push_back(tlv_subtype.get_name_leafdata());
    if (tlv_value.is_set || is_set(tlv_value.yfilter)) leaf_name_data.push_back(tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-info-indes")
    {
        tlv_info_indes = value;
        tlv_info_indes.value_namespace = name_space;
        tlv_info_indes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-subtype")
    {
        tlv_subtype = value;
        tlv_subtype.value_namespace = name_space;
        tlv_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-value")
    {
        tlv_value = value;
        tlv_value.value_namespace = name_space;
        tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "tlv-info-indes")
    {
        tlv_info_indes.yfilter = yfilter;
    }
    if(value_path == "tlv-subtype")
    {
        tlv_subtype.yfilter = yfilter;
    }
    if(value_path == "tlv-value")
    {
        tlv_value.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oui" || name == "tlv-info-indes" || name == "tlv-subtype" || name == "tlv-value")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::UnknownTlvList()
{

    yang_name = "unknown-tlv-list"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::~UnknownTlvList()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::has_data() const
{
    for (std::size_t index=0; index<lldp_unknown_tlv_entry.size(); index++)
    {
        if(lldp_unknown_tlv_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::has_operation() const
{
    for (std::size_t index=0; index<lldp_unknown_tlv_entry.size(); index++)
    {
        if(lldp_unknown_tlv_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-unknown-tlv-entry")
    {
        for(auto const & c : lldp_unknown_tlv_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry>();
        c->parent = this;
        lldp_unknown_tlv_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_unknown_tlv_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-unknown-tlv-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::LldpUnknownTlvEntry()
    :
    tlv_type{YType::uint8, "tlv-type"},
    tlv_value{YType::str, "tlv-value"}
{

    yang_name = "lldp-unknown-tlv-entry"; yang_parent_name = "unknown-tlv-list"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::~LldpUnknownTlvEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_data() const
{
    return tlv_type.is_set
	|| tlv_value.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_value.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-unknown-tlv-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_value.is_set || is_set(tlv_value.yfilter)) leaf_name_data.push_back(tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-value")
    {
        tlv_value = value;
        tlv_value.value_namespace = name_space;
        tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-value")
    {
        tlv_value.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-type" || name == "tlv-value")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summaries()
{

    yang_name = "summaries"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::~Summaries()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::has_data() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::has_operation() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        for(auto const & c : summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary>();
        c->parent = this;
        summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Summaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::Summary()
    :
    device_id{YType::str, "device-id"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "summary"; yang_parent_name = "summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::~Summary()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::has_data() const
{
    for (std::size_t index=0; index<lldp_neighbor.size(); index++)
    {
        if(lldp_neighbor[index]->has_data())
            return true;
    }
    return device_id.is_set
	|| interface_name.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::has_operation() const
{
    for (std::size_t index=0; index<lldp_neighbor.size(); index++)
    {
        if(lldp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-neighbor")
    {
        for(auto const & c : lldp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor>();
        c->parent = this;
        lldp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-neighbor" || name == "device-id" || name == "interface-name")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::LldpNeighbor()
    :
    chassis_id{YType::str, "chassis-id"},
    device_id{YType::str, "device-id"},
    enabled_capabilities{YType::str, "enabled-capabilities"},
    header_version{YType::uint8, "header-version"},
    hold_time{YType::uint16, "hold-time"},
    platform{YType::str, "platform"},
    port_id_detail{YType::str, "port-id-detail"},
    receiving_interface_name{YType::str, "receiving-interface-name"},
    receiving_parent_interface_name{YType::str, "receiving-parent-interface-name"}
    	,
    detail(std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail>())
	,mib(std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib>())
{
    detail->parent = this;
    mib->parent = this;

    yang_name = "lldp-neighbor"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::~LldpNeighbor()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::has_data() const
{
    return chassis_id.is_set
	|| device_id.is_set
	|| enabled_capabilities.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| platform.is_set
	|| port_id_detail.is_set
	|| receiving_interface_name.is_set
	|| receiving_parent_interface_name.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (mib !=  nullptr && mib->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(enabled_capabilities.yfilter)
	|| ydk::is_set(header_version.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(platform.yfilter)
	|| ydk::is_set(port_id_detail.yfilter)
	|| ydk::is_set(receiving_interface_name.yfilter)
	|| ydk::is_set(receiving_parent_interface_name.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (mib !=  nullptr && mib->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.yfilter)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.yfilter)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (platform.is_set || is_set(platform.yfilter)) leaf_name_data.push_back(platform.get_name_leafdata());
    if (port_id_detail.is_set || is_set(port_id_detail.yfilter)) leaf_name_data.push_back(port_id_detail.get_name_leafdata());
    if (receiving_interface_name.is_set || is_set(receiving_interface_name.yfilter)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());
    if (receiving_parent_interface_name.is_set || is_set(receiving_parent_interface_name.yfilter)) leaf_name_data.push_back(receiving_parent_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
        enabled_capabilities.value_namespace = name_space;
        enabled_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-version")
    {
        header_version = value;
        header_version.value_namespace = name_space;
        header_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform")
    {
        platform = value;
        platform.value_namespace = name_space;
        platform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail = value;
        port_id_detail.value_namespace = name_space;
        port_id_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
        receiving_interface_name.value_namespace = name_space;
        receiving_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-parent-interface-name")
    {
        receiving_parent_interface_name = value;
        receiving_parent_interface_name.value_namespace = name_space;
        receiving_parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities.yfilter = yfilter;
    }
    if(value_path == "header-version")
    {
        header_version.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "platform")
    {
        platform.yfilter = yfilter;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail.yfilter = yfilter;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name.yfilter = yfilter;
    }
    if(value_path == "receiving-parent-interface-name")
    {
        receiving_parent_interface_name.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "mib" || name == "chassis-id" || name == "device-id" || name == "enabled-capabilities" || name == "header-version" || name == "hold-time" || name == "platform" || name == "port-id-detail" || name == "receiving-interface-name" || name == "receiving-parent-interface-name")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::Detail()
    :
    auto_negotiation{YType::str, "auto-negotiation"},
    enabled_capabilities{YType::str, "enabled-capabilities"},
    media_attachment_unit_type{YType::uint32, "media-attachment-unit-type"},
    peer_mac_address{YType::str, "peer-mac-address"},
    physical_media_capabilities{YType::str, "physical-media-capabilities"},
    port_description{YType::str, "port-description"},
    port_vlan_id{YType::uint32, "port-vlan-id"},
    system_capabilities{YType::str, "system-capabilities"},
    system_description{YType::str, "system-description"},
    system_name{YType::str, "system-name"},
    time_remaining{YType::uint32, "time-remaining"}
    	,
    network_addresses(std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses>())
{
    network_addresses->parent = this;

    yang_name = "detail"; yang_parent_name = "lldp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::~Detail()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::has_data() const
{
    return auto_negotiation.is_set
	|| enabled_capabilities.is_set
	|| media_attachment_unit_type.is_set
	|| peer_mac_address.is_set
	|| physical_media_capabilities.is_set
	|| port_description.is_set
	|| port_vlan_id.is_set
	|| system_capabilities.is_set
	|| system_description.is_set
	|| system_name.is_set
	|| time_remaining.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_negotiation.yfilter)
	|| ydk::is_set(enabled_capabilities.yfilter)
	|| ydk::is_set(media_attachment_unit_type.yfilter)
	|| ydk::is_set(peer_mac_address.yfilter)
	|| ydk::is_set(physical_media_capabilities.yfilter)
	|| ydk::is_set(port_description.yfilter)
	|| ydk::is_set(port_vlan_id.yfilter)
	|| ydk::is_set(system_capabilities.yfilter)
	|| ydk::is_set(system_description.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| (network_addresses !=  nullptr && network_addresses->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_negotiation.is_set || is_set(auto_negotiation.yfilter)) leaf_name_data.push_back(auto_negotiation.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.yfilter)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (media_attachment_unit_type.is_set || is_set(media_attachment_unit_type.yfilter)) leaf_name_data.push_back(media_attachment_unit_type.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.yfilter)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (physical_media_capabilities.is_set || is_set(physical_media_capabilities.yfilter)) leaf_name_data.push_back(physical_media_capabilities.get_name_leafdata());
    if (port_description.is_set || is_set(port_description.yfilter)) leaf_name_data.push_back(port_description.get_name_leafdata());
    if (port_vlan_id.is_set || is_set(port_vlan_id.yfilter)) leaf_name_data.push_back(port_vlan_id.get_name_leafdata());
    if (system_capabilities.is_set || is_set(system_capabilities.yfilter)) leaf_name_data.push_back(system_capabilities.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.yfilter)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-addresses")
    {
        if(network_addresses == nullptr)
        {
            network_addresses = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses>();
        }
        return network_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_addresses != nullptr)
    {
        children["network-addresses"] = network_addresses;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation = value;
        auto_negotiation.value_namespace = name_space;
        auto_negotiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
        enabled_capabilities.value_namespace = name_space;
        enabled_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-attachment-unit-type")
    {
        media_attachment_unit_type = value;
        media_attachment_unit_type.value_namespace = name_space;
        media_attachment_unit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
        peer_mac_address.value_namespace = name_space;
        peer_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-media-capabilities")
    {
        physical_media_capabilities = value;
        physical_media_capabilities.value_namespace = name_space;
        physical_media_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-description")
    {
        port_description = value;
        port_description.value_namespace = name_space;
        port_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-vlan-id")
    {
        port_vlan_id = value;
        port_vlan_id.value_namespace = name_space;
        port_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities = value;
        system_capabilities.value_namespace = name_space;
        system_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-description")
    {
        system_description = value;
        system_description.value_namespace = name_space;
        system_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation.yfilter = yfilter;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities.yfilter = yfilter;
    }
    if(value_path == "media-attachment-unit-type")
    {
        media_attachment_unit_type.yfilter = yfilter;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address.yfilter = yfilter;
    }
    if(value_path == "physical-media-capabilities")
    {
        physical_media_capabilities.yfilter = yfilter;
    }
    if(value_path == "port-description")
    {
        port_description.yfilter = yfilter;
    }
    if(value_path == "port-vlan-id")
    {
        port_vlan_id.yfilter = yfilter;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities.yfilter = yfilter;
    }
    if(value_path == "system-description")
    {
        system_description.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addresses" || name == "auto-negotiation" || name == "enabled-capabilities" || name == "media-attachment-unit-type" || name == "peer-mac-address" || name == "physical-media-capabilities" || name == "port-description" || name == "port-vlan-id" || name == "system-capabilities" || name == "system-description" || name == "system-name" || name == "time-remaining")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::NetworkAddresses()
{

    yang_name = "network-addresses"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::~NetworkAddresses()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<lldp_addr_entry.size(); index++)
    {
        if(lldp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-addr-entry")
    {
        for(auto const & c : lldp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry>();
        c->parent = this;
        lldp_addr_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_addr_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-addr-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::LldpAddrEntry()
    :
    if_num{YType::uint32, "if-num"},
    ma_subtype{YType::uint8, "ma-subtype"}
    	,
    address(std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "lldp-addr-entry"; yang_parent_name = "network-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::~LldpAddrEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::has_data() const
{
    return if_num.is_set
	|| ma_subtype.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_num.yfilter)
	|| ydk::is_set(ma_subtype.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_num.is_set || is_set(if_num.yfilter)) leaf_name_data.push_back(if_num.get_name_leafdata());
    if (ma_subtype.is_set || is_set(ma_subtype.yfilter)) leaf_name_data.push_back(ma_subtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-num")
    {
        if_num = value;
        if_num.value_namespace = name_space;
        if_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype = value;
        ma_subtype.value_namespace = name_space;
        ma_subtype.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-num")
    {
        if_num.yfilter = yfilter;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "if-num" || name == "ma-subtype")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "lldp-addr-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::~Address()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::Mib()
    :
    chassis_id_len{YType::uint16, "chassis-id-len"},
    chassis_id_sub_type{YType::uint8, "chassis-id-sub-type"},
    combined_capabilities{YType::uint32, "combined-capabilities"},
    port_id_len{YType::uint16, "port-id-len"},
    port_id_sub_type{YType::uint8, "port-id-sub-type"},
    rem_index{YType::uint32, "rem-index"},
    rem_local_port_num{YType::uint32, "rem-local-port-num"},
    rem_time_mark{YType::uint32, "rem-time-mark"}
    	,
    org_def_tlv_list(std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList>())
	,unknown_tlv_list(std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList>())
{
    org_def_tlv_list->parent = this;
    unknown_tlv_list->parent = this;

    yang_name = "mib"; yang_parent_name = "lldp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::~Mib()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::has_data() const
{
    return chassis_id_len.is_set
	|| chassis_id_sub_type.is_set
	|| combined_capabilities.is_set
	|| port_id_len.is_set
	|| port_id_sub_type.is_set
	|| rem_index.is_set
	|| rem_local_port_num.is_set
	|| rem_time_mark.is_set
	|| (org_def_tlv_list !=  nullptr && org_def_tlv_list->has_data())
	|| (unknown_tlv_list !=  nullptr && unknown_tlv_list->has_data());
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id_len.yfilter)
	|| ydk::is_set(chassis_id_sub_type.yfilter)
	|| ydk::is_set(combined_capabilities.yfilter)
	|| ydk::is_set(port_id_len.yfilter)
	|| ydk::is_set(port_id_sub_type.yfilter)
	|| ydk::is_set(rem_index.yfilter)
	|| ydk::is_set(rem_local_port_num.yfilter)
	|| ydk::is_set(rem_time_mark.yfilter)
	|| (org_def_tlv_list !=  nullptr && org_def_tlv_list->has_operation())
	|| (unknown_tlv_list !=  nullptr && unknown_tlv_list->has_operation());
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id_len.is_set || is_set(chassis_id_len.yfilter)) leaf_name_data.push_back(chassis_id_len.get_name_leafdata());
    if (chassis_id_sub_type.is_set || is_set(chassis_id_sub_type.yfilter)) leaf_name_data.push_back(chassis_id_sub_type.get_name_leafdata());
    if (combined_capabilities.is_set || is_set(combined_capabilities.yfilter)) leaf_name_data.push_back(combined_capabilities.get_name_leafdata());
    if (port_id_len.is_set || is_set(port_id_len.yfilter)) leaf_name_data.push_back(port_id_len.get_name_leafdata());
    if (port_id_sub_type.is_set || is_set(port_id_sub_type.yfilter)) leaf_name_data.push_back(port_id_sub_type.get_name_leafdata());
    if (rem_index.is_set || is_set(rem_index.yfilter)) leaf_name_data.push_back(rem_index.get_name_leafdata());
    if (rem_local_port_num.is_set || is_set(rem_local_port_num.yfilter)) leaf_name_data.push_back(rem_local_port_num.get_name_leafdata());
    if (rem_time_mark.is_set || is_set(rem_time_mark.yfilter)) leaf_name_data.push_back(rem_time_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "org-def-tlv-list")
    {
        if(org_def_tlv_list == nullptr)
        {
            org_def_tlv_list = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList>();
        }
        return org_def_tlv_list;
    }

    if(child_yang_name == "unknown-tlv-list")
    {
        if(unknown_tlv_list == nullptr)
        {
            unknown_tlv_list = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList>();
        }
        return unknown_tlv_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(org_def_tlv_list != nullptr)
    {
        children["org-def-tlv-list"] = org_def_tlv_list;
    }

    if(unknown_tlv_list != nullptr)
    {
        children["unknown-tlv-list"] = unknown_tlv_list;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id-len")
    {
        chassis_id_len = value;
        chassis_id_len.value_namespace = name_space;
        chassis_id_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type = value;
        chassis_id_sub_type.value_namespace = name_space;
        chassis_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "combined-capabilities")
    {
        combined_capabilities = value;
        combined_capabilities.value_namespace = name_space;
        combined_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-len")
    {
        port_id_len = value;
        port_id_len.value_namespace = name_space;
        port_id_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type = value;
        port_id_sub_type.value_namespace = name_space;
        port_id_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-index")
    {
        rem_index = value;
        rem_index.value_namespace = name_space;
        rem_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-local-port-num")
    {
        rem_local_port_num = value;
        rem_local_port_num.value_namespace = name_space;
        rem_local_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-time-mark")
    {
        rem_time_mark = value;
        rem_time_mark.value_namespace = name_space;
        rem_time_mark.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id-len")
    {
        chassis_id_len.yfilter = yfilter;
    }
    if(value_path == "chassis-id-sub-type")
    {
        chassis_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "combined-capabilities")
    {
        combined_capabilities.yfilter = yfilter;
    }
    if(value_path == "port-id-len")
    {
        port_id_len.yfilter = yfilter;
    }
    if(value_path == "port-id-sub-type")
    {
        port_id_sub_type.yfilter = yfilter;
    }
    if(value_path == "rem-index")
    {
        rem_index.yfilter = yfilter;
    }
    if(value_path == "rem-local-port-num")
    {
        rem_local_port_num.yfilter = yfilter;
    }
    if(value_path == "rem-time-mark")
    {
        rem_time_mark.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "org-def-tlv-list" || name == "unknown-tlv-list" || name == "chassis-id-len" || name == "chassis-id-sub-type" || name == "combined-capabilities" || name == "port-id-len" || name == "port-id-sub-type" || name == "rem-index" || name == "rem-local-port-num" || name == "rem-time-mark")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::OrgDefTlvList()
{

    yang_name = "org-def-tlv-list"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::~OrgDefTlvList()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::has_data() const
{
    for (std::size_t index=0; index<lldp_org_def_tlv_entry.size(); index++)
    {
        if(lldp_org_def_tlv_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::has_operation() const
{
    for (std::size_t index=0; index<lldp_org_def_tlv_entry.size(); index++)
    {
        if(lldp_org_def_tlv_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "org-def-tlv-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-org-def-tlv-entry")
    {
        for(auto const & c : lldp_org_def_tlv_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry>();
        c->parent = this;
        lldp_org_def_tlv_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_org_def_tlv_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-org-def-tlv-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::LldpOrgDefTlvEntry()
    :
    oui{YType::uint32, "oui"},
    tlv_info_indes{YType::uint32, "tlv-info-indes"},
    tlv_subtype{YType::uint8, "tlv-subtype"},
    tlv_value{YType::str, "tlv-value"}
{

    yang_name = "lldp-org-def-tlv-entry"; yang_parent_name = "org-def-tlv-list"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::~LldpOrgDefTlvEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_data() const
{
    return oui.is_set
	|| tlv_info_indes.is_set
	|| tlv_subtype.is_set
	|| tlv_value.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(tlv_info_indes.yfilter)
	|| ydk::is_set(tlv_subtype.yfilter)
	|| ydk::is_set(tlv_value.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-org-def-tlv-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (tlv_info_indes.is_set || is_set(tlv_info_indes.yfilter)) leaf_name_data.push_back(tlv_info_indes.get_name_leafdata());
    if (tlv_subtype.is_set || is_set(tlv_subtype.yfilter)) leaf_name_data.push_back(tlv_subtype.get_name_leafdata());
    if (tlv_value.is_set || is_set(tlv_value.yfilter)) leaf_name_data.push_back(tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-info-indes")
    {
        tlv_info_indes = value;
        tlv_info_indes.value_namespace = name_space;
        tlv_info_indes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-subtype")
    {
        tlv_subtype = value;
        tlv_subtype.value_namespace = name_space;
        tlv_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-value")
    {
        tlv_value = value;
        tlv_value.value_namespace = name_space;
        tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "tlv-info-indes")
    {
        tlv_info_indes.yfilter = yfilter;
    }
    if(value_path == "tlv-subtype")
    {
        tlv_subtype.yfilter = yfilter;
    }
    if(value_path == "tlv-value")
    {
        tlv_value.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oui" || name == "tlv-info-indes" || name == "tlv-subtype" || name == "tlv-value")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::UnknownTlvList()
{

    yang_name = "unknown-tlv-list"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::~UnknownTlvList()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::has_data() const
{
    for (std::size_t index=0; index<lldp_unknown_tlv_entry.size(); index++)
    {
        if(lldp_unknown_tlv_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::has_operation() const
{
    for (std::size_t index=0; index<lldp_unknown_tlv_entry.size(); index++)
    {
        if(lldp_unknown_tlv_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-unknown-tlv-entry")
    {
        for(auto const & c : lldp_unknown_tlv_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry>();
        c->parent = this;
        lldp_unknown_tlv_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_unknown_tlv_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-unknown-tlv-entry")
        return true;
    return false;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::LldpUnknownTlvEntry()
    :
    tlv_type{YType::uint8, "tlv-type"},
    tlv_value{YType::str, "tlv-value"}
{

    yang_name = "lldp-unknown-tlv-entry"; yang_parent_name = "unknown-tlv-list"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::~LldpUnknownTlvEntry()
{
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_data() const
{
    return tlv_type.is_set
	|| tlv_value.is_set;
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_value.yfilter);
}

std::string Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-unknown-tlv-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_value.is_set || is_set(tlv_value.yfilter)) leaf_name_data.push_back(tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-value")
    {
        tlv_value = value;
        tlv_value.value_namespace = name_space;
        tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-value")
    {
        tlv_value.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-type" || name == "tlv-value")
        return true;
    return false;
}

Lldp::Nodes::Node::Statistics::Statistics()
    :
    aged_out_entries{YType::uint32, "aged-out-entries"},
    bad_packets{YType::uint32, "bad-packets"},
    discarded_packets{YType::uint32, "discarded-packets"},
    discarded_tl_vs{YType::uint32, "discarded-tl-vs"},
    encapsulation_errors{YType::uint32, "encapsulation-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    queue_overflow_errors{YType::uint32, "queue-overflow-errors"},
    received_packets{YType::uint32, "received-packets"},
    table_overflow_errors{YType::uint32, "table-overflow-errors"},
    transmitted_packets{YType::uint32, "transmitted-packets"},
    unrecognized_tl_vs{YType::uint32, "unrecognized-tl-vs"}
{

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Nodes::Node::Statistics::~Statistics()
{
}

bool Lldp::Nodes::Node::Statistics::has_data() const
{
    return aged_out_entries.is_set
	|| bad_packets.is_set
	|| discarded_packets.is_set
	|| discarded_tl_vs.is_set
	|| encapsulation_errors.is_set
	|| out_of_memory_errors.is_set
	|| queue_overflow_errors.is_set
	|| received_packets.is_set
	|| table_overflow_errors.is_set
	|| transmitted_packets.is_set
	|| unrecognized_tl_vs.is_set;
}

bool Lldp::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aged_out_entries.yfilter)
	|| ydk::is_set(bad_packets.yfilter)
	|| ydk::is_set(discarded_packets.yfilter)
	|| ydk::is_set(discarded_tl_vs.yfilter)
	|| ydk::is_set(encapsulation_errors.yfilter)
	|| ydk::is_set(out_of_memory_errors.yfilter)
	|| ydk::is_set(queue_overflow_errors.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(table_overflow_errors.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter)
	|| ydk::is_set(unrecognized_tl_vs.yfilter);
}

std::string Lldp::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aged_out_entries.is_set || is_set(aged_out_entries.yfilter)) leaf_name_data.push_back(aged_out_entries.get_name_leafdata());
    if (bad_packets.is_set || is_set(bad_packets.yfilter)) leaf_name_data.push_back(bad_packets.get_name_leafdata());
    if (discarded_packets.is_set || is_set(discarded_packets.yfilter)) leaf_name_data.push_back(discarded_packets.get_name_leafdata());
    if (discarded_tl_vs.is_set || is_set(discarded_tl_vs.yfilter)) leaf_name_data.push_back(discarded_tl_vs.get_name_leafdata());
    if (encapsulation_errors.is_set || is_set(encapsulation_errors.yfilter)) leaf_name_data.push_back(encapsulation_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.yfilter)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (queue_overflow_errors.is_set || is_set(queue_overflow_errors.yfilter)) leaf_name_data.push_back(queue_overflow_errors.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (table_overflow_errors.is_set || is_set(table_overflow_errors.yfilter)) leaf_name_data.push_back(table_overflow_errors.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());
    if (unrecognized_tl_vs.is_set || is_set(unrecognized_tl_vs.yfilter)) leaf_name_data.push_back(unrecognized_tl_vs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lldp::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aged-out-entries")
    {
        aged_out_entries = value;
        aged_out_entries.value_namespace = name_space;
        aged_out_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-packets")
    {
        bad_packets = value;
        bad_packets.value_namespace = name_space;
        bad_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets = value;
        discarded_packets.value_namespace = name_space;
        discarded_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-tl-vs")
    {
        discarded_tl_vs = value;
        discarded_tl_vs.value_namespace = name_space;
        discarded_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-errors")
    {
        encapsulation_errors = value;
        encapsulation_errors.value_namespace = name_space;
        encapsulation_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
        out_of_memory_errors.value_namespace = name_space;
        out_of_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-overflow-errors")
    {
        queue_overflow_errors = value;
        queue_overflow_errors.value_namespace = name_space;
        queue_overflow_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-overflow-errors")
    {
        table_overflow_errors = value;
        table_overflow_errors.value_namespace = name_space;
        table_overflow_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-tl-vs")
    {
        unrecognized_tl_vs = value;
        unrecognized_tl_vs.value_namespace = name_space;
        unrecognized_tl_vs.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aged-out-entries")
    {
        aged_out_entries.yfilter = yfilter;
    }
    if(value_path == "bad-packets")
    {
        bad_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-tl-vs")
    {
        discarded_tl_vs.yfilter = yfilter;
    }
    if(value_path == "encapsulation-errors")
    {
        encapsulation_errors.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors.yfilter = yfilter;
    }
    if(value_path == "queue-overflow-errors")
    {
        queue_overflow_errors.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "table-overflow-errors")
    {
        table_overflow_errors.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
    if(value_path == "unrecognized-tl-vs")
    {
        unrecognized_tl_vs.yfilter = yfilter;
    }
}

bool Lldp::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aged-out-entries" || name == "bad-packets" || name == "discarded-packets" || name == "discarded-tl-vs" || name == "encapsulation-errors" || name == "out-of-memory-errors" || name == "queue-overflow-errors" || name == "received-packets" || name == "table-overflow-errors" || name == "transmitted-packets" || name == "unrecognized-tl-vs")
        return true;
    return false;
}

const Enum::YLeaf LldpL3AddrProtocol::ipv4 {0, "ipv4"};
const Enum::YLeaf LldpL3AddrProtocol::ipv6 {1, "ipv6"};


}
}

