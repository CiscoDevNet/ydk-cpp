
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2_eth_infra_oper {

MacAccounting::MacAccounting()
    :
    interfaces(std::make_shared<MacAccounting::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "mac-accounting"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MacAccounting::~MacAccounting()
{
}

bool MacAccounting::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool MacAccounting::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MacAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MacAccounting::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void MacAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MacAccounting::clone_ptr() const
{
    return std::make_shared<MacAccounting>();
}

std::string MacAccounting::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MacAccounting::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MacAccounting::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MacAccounting::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MacAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

MacAccounting::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "mac-accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

MacAccounting::Interfaces::~Interfaces()
{
}

bool MacAccounting::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MacAccounting::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacAccounting::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string MacAccounting::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacAccounting::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacAccounting::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<MacAccounting::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacAccounting::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacAccounting::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacAccounting::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacAccounting::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MacAccounting::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    state(std::make_shared<MacAccounting::Interfaces::Interface::State>())
    , ingress_statistic(this, {})
    , egress_statistic(this, {})
{
    state->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MacAccounting::Interfaces::Interface::~Interface()
{
}

bool MacAccounting::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ingress_statistic.len(); index++)
    {
        if(ingress_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<egress_statistic.len(); index++)
    {
        if(egress_statistic[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| (state !=  nullptr && state->has_data());
}

bool MacAccounting::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<ingress_statistic.len(); index++)
    {
        if(ingress_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<egress_statistic.len(); index++)
    {
        if(egress_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string MacAccounting::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MacAccounting::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacAccounting::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacAccounting::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<MacAccounting::Interfaces::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "ingress-statistic")
    {
        auto c = std::make_shared<MacAccounting::Interfaces::Interface::IngressStatistic>();
        c->parent = this;
        ingress_statistic.append(c);
        return c;
    }

    if(child_yang_name == "egress-statistic")
    {
        auto c = std::make_shared<MacAccounting::Interfaces::Interface::EgressStatistic>();
        c->parent = this;
        egress_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacAccounting::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    count = 0;
    for (auto c : ingress_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : egress_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacAccounting::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MacAccounting::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MacAccounting::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "ingress-statistic" || name == "egress-statistic" || name == "interface-name")
        return true;
    return false;
}

MacAccounting::Interfaces::Interface::State::State()
    :
    is_ingress_enabled{YType::boolean, "is-ingress-enabled"},
    is_egress_enabled{YType::boolean, "is-egress-enabled"},
    number_available_ingress{YType::uint32, "number-available-ingress"},
    number_available_egress{YType::uint32, "number-available-egress"},
    number_available_on_node{YType::uint32, "number-available-on-node"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MacAccounting::Interfaces::Interface::State::~State()
{
}

bool MacAccounting::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return is_ingress_enabled.is_set
	|| is_egress_enabled.is_set
	|| number_available_ingress.is_set
	|| number_available_egress.is_set
	|| number_available_on_node.is_set;
}

bool MacAccounting::Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ingress_enabled.yfilter)
	|| ydk::is_set(is_egress_enabled.yfilter)
	|| ydk::is_set(number_available_ingress.yfilter)
	|| ydk::is_set(number_available_egress.yfilter)
	|| ydk::is_set(number_available_on_node.yfilter);
}

std::string MacAccounting::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacAccounting::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ingress_enabled.is_set || is_set(is_ingress_enabled.yfilter)) leaf_name_data.push_back(is_ingress_enabled.get_name_leafdata());
    if (is_egress_enabled.is_set || is_set(is_egress_enabled.yfilter)) leaf_name_data.push_back(is_egress_enabled.get_name_leafdata());
    if (number_available_ingress.is_set || is_set(number_available_ingress.yfilter)) leaf_name_data.push_back(number_available_ingress.get_name_leafdata());
    if (number_available_egress.is_set || is_set(number_available_egress.yfilter)) leaf_name_data.push_back(number_available_egress.get_name_leafdata());
    if (number_available_on_node.is_set || is_set(number_available_on_node.yfilter)) leaf_name_data.push_back(number_available_on_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacAccounting::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacAccounting::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacAccounting::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ingress-enabled")
    {
        is_ingress_enabled = value;
        is_ingress_enabled.value_namespace = name_space;
        is_ingress_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-egress-enabled")
    {
        is_egress_enabled = value;
        is_egress_enabled.value_namespace = name_space;
        is_egress_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-available-ingress")
    {
        number_available_ingress = value;
        number_available_ingress.value_namespace = name_space;
        number_available_ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-available-egress")
    {
        number_available_egress = value;
        number_available_egress.value_namespace = name_space;
        number_available_egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-available-on-node")
    {
        number_available_on_node = value;
        number_available_on_node.value_namespace = name_space;
        number_available_on_node.value_namespace_prefix = name_space_prefix;
    }
}

void MacAccounting::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ingress-enabled")
    {
        is_ingress_enabled.yfilter = yfilter;
    }
    if(value_path == "is-egress-enabled")
    {
        is_egress_enabled.yfilter = yfilter;
    }
    if(value_path == "number-available-ingress")
    {
        number_available_ingress.yfilter = yfilter;
    }
    if(value_path == "number-available-egress")
    {
        number_available_egress.yfilter = yfilter;
    }
    if(value_path == "number-available-on-node")
    {
        number_available_on_node.yfilter = yfilter;
    }
}

bool MacAccounting::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ingress-enabled" || name == "is-egress-enabled" || name == "number-available-ingress" || name == "number-available-egress" || name == "number-available-on-node")
        return true;
    return false;
}

MacAccounting::Interfaces::Interface::IngressStatistic::IngressStatistic()
    :
    mac_address{YType::str, "mac-address"},
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "ingress-statistic"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MacAccounting::Interfaces::Interface::IngressStatistic::~IngressStatistic()
{
}

bool MacAccounting::Interfaces::Interface::IngressStatistic::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| packets.is_set
	|| bytes.is_set;
}

bool MacAccounting::Interfaces::Interface::IngressStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string MacAccounting::Interfaces::Interface::IngressStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacAccounting::Interfaces::Interface::IngressStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacAccounting::Interfaces::Interface::IngressStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacAccounting::Interfaces::Interface::IngressStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacAccounting::Interfaces::Interface::IngressStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MacAccounting::Interfaces::Interface::IngressStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool MacAccounting::Interfaces::Interface::IngressStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "packets" || name == "bytes")
        return true;
    return false;
}

MacAccounting::Interfaces::Interface::EgressStatistic::EgressStatistic()
    :
    mac_address{YType::str, "mac-address"},
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "egress-statistic"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MacAccounting::Interfaces::Interface::EgressStatistic::~EgressStatistic()
{
}

bool MacAccounting::Interfaces::Interface::EgressStatistic::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| packets.is_set
	|| bytes.is_set;
}

bool MacAccounting::Interfaces::Interface::EgressStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string MacAccounting::Interfaces::Interface::EgressStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacAccounting::Interfaces::Interface::EgressStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacAccounting::Interfaces::Interface::EgressStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacAccounting::Interfaces::Interface::EgressStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacAccounting::Interfaces::Interface::EgressStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MacAccounting::Interfaces::Interface::EgressStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool MacAccounting::Interfaces::Interface::EgressStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "packets" || name == "bytes")
        return true;
    return false;
}

Vlan::Vlan()
    :
    nodes(std::make_shared<Vlan::Nodes>())
{
    nodes->parent = this;

    yang_name = "vlan"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Vlan::~Vlan()
{
}

bool Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Vlan::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Vlan::clone_ptr() const
{
    return std::make_shared<Vlan>();
}

std::string Vlan::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vlan::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vlan::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vlan::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Vlan::Nodes::Nodes()
    :
    node(this, {"node_id"})
{

    yang_name = "nodes"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Vlan::Nodes::~Nodes()
{
}

bool Vlan::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlan::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Vlan::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<Vlan::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlan::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlan::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Vlan::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    trunks(std::make_shared<Vlan::Nodes::Node::Trunks>())
    , interfaces(std::make_shared<Vlan::Nodes::Node::Interfaces>())
    , tag_allocations(std::make_shared<Vlan::Nodes::Node::TagAllocations>())
{
    trunks->parent = this;
    interfaces->parent = this;
    tag_allocations->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Vlan::Nodes::Node::~Node()
{
}

bool Vlan::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (trunks !=  nullptr && trunks->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (tag_allocations !=  nullptr && tag_allocations->has_data());
}

bool Vlan::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (trunks !=  nullptr && trunks->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (tag_allocations !=  nullptr && tag_allocations->has_operation());
}

std::string Vlan::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:vlan/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Vlan::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trunks")
    {
        if(trunks == nullptr)
        {
            trunks = std::make_shared<Vlan::Nodes::Node::Trunks>();
        }
        return trunks;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Vlan::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "tag-allocations")
    {
        if(tag_allocations == nullptr)
        {
            tag_allocations = std::make_shared<Vlan::Nodes::Node::TagAllocations>();
        }
        return tag_allocations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(trunks != nullptr)
    {
        children["trunks"] = trunks;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(tag_allocations != nullptr)
    {
        children["tag-allocations"] = tag_allocations;
    }

    return children;
}

void Vlan::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunks" || name == "interfaces" || name == "tag-allocations" || name == "node-id")
        return true;
    return false;
}

Vlan::Nodes::Node::Trunks::Trunks()
    :
    trunk(this, {"interface"})
{

    yang_name = "trunks"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Trunks::~Trunks()
{
}

bool Vlan::Nodes::Node::Trunks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trunk.len(); index++)
    {
        if(trunk[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::Trunks::has_operation() const
{
    for (std::size_t index=0; index<trunk.len(); index++)
    {
        if(trunk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlan::Nodes::Node::Trunks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Trunks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Trunks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trunk")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::Trunks::Trunk>();
        c->parent = this;
        trunk.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Trunks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trunk.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlan::Nodes::Node::Trunks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlan::Nodes::Node::Trunks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk")
        return true;
    return false;
}

Vlan::Nodes::Node::Trunks::Trunk::Trunk()
    :
    interface{YType::str, "interface"},
    interface_xr{YType::str, "interface-xr"},
    state{YType::enumeration, "state"},
    mtu{YType::uint16, "mtu"},
    qinq_outer_ether_type{YType::enumeration, "qinq-outer-ether-type"},
    dot1ad_count{YType::uint32, "dot1ad-count"},
    untagged_interface{YType::str, "untagged-interface"},
    mac_filtering{YType::enumeration, "mac-filtering"}
        ,
    layer2_sub_interfaces(std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces>())
    , layer3_sub_interfaces(std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces>())
{
    layer2_sub_interfaces->parent = this;
    layer3_sub_interfaces->parent = this;

    yang_name = "trunk"; yang_parent_name = "trunks"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Trunks::Trunk::~Trunk()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_xr.is_set
	|| state.is_set
	|| mtu.is_set
	|| qinq_outer_ether_type.is_set
	|| dot1ad_count.is_set
	|| untagged_interface.is_set
	|| mac_filtering.is_set
	|| (layer2_sub_interfaces !=  nullptr && layer2_sub_interfaces->has_data())
	|| (layer3_sub_interfaces !=  nullptr && layer3_sub_interfaces->has_data());
}

bool Vlan::Nodes::Node::Trunks::Trunk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_xr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(qinq_outer_ether_type.yfilter)
	|| ydk::is_set(dot1ad_count.yfilter)
	|| ydk::is_set(untagged_interface.yfilter)
	|| ydk::is_set(mac_filtering.yfilter)
	|| (layer2_sub_interfaces !=  nullptr && layer2_sub_interfaces->has_operation())
	|| (layer3_sub_interfaces !=  nullptr && layer3_sub_interfaces->has_operation());
}

std::string Vlan::Nodes::Node::Trunks::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Trunks::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.yfilter)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (qinq_outer_ether_type.is_set || is_set(qinq_outer_ether_type.yfilter)) leaf_name_data.push_back(qinq_outer_ether_type.get_name_leafdata());
    if (dot1ad_count.is_set || is_set(dot1ad_count.yfilter)) leaf_name_data.push_back(dot1ad_count.get_name_leafdata());
    if (untagged_interface.is_set || is_set(untagged_interface.yfilter)) leaf_name_data.push_back(untagged_interface.get_name_leafdata());
    if (mac_filtering.is_set || is_set(mac_filtering.yfilter)) leaf_name_data.push_back(mac_filtering.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Trunks::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "layer2-sub-interfaces")
    {
        if(layer2_sub_interfaces == nullptr)
        {
            layer2_sub_interfaces = std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces>();
        }
        return layer2_sub_interfaces;
    }

    if(child_yang_name == "layer3-sub-interfaces")
    {
        if(layer3_sub_interfaces == nullptr)
        {
            layer3_sub_interfaces = std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces>();
        }
        return layer3_sub_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Trunks::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(layer2_sub_interfaces != nullptr)
    {
        children["layer2-sub-interfaces"] = layer2_sub_interfaces;
    }

    if(layer3_sub_interfaces != nullptr)
    {
        children["layer3-sub-interfaces"] = layer3_sub_interfaces;
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
        interface_xr.value_namespace = name_space;
        interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qinq-outer-ether-type")
    {
        qinq_outer_ether_type = value;
        qinq_outer_ether_type.value_namespace = name_space;
        qinq_outer_ether_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-count")
    {
        dot1ad_count = value;
        dot1ad_count.value_namespace = name_space;
        dot1ad_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untagged-interface")
    {
        untagged_interface = value;
        untagged_interface.value_namespace = name_space;
        untagged_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-filtering")
    {
        mac_filtering = value;
        mac_filtering.value_namespace = name_space;
        mac_filtering.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Trunks::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-xr")
    {
        interface_xr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "qinq-outer-ether-type")
    {
        qinq_outer_ether_type.yfilter = yfilter;
    }
    if(value_path == "dot1ad-count")
    {
        dot1ad_count.yfilter = yfilter;
    }
    if(value_path == "untagged-interface")
    {
        untagged_interface.yfilter = yfilter;
    }
    if(value_path == "mac-filtering")
    {
        mac_filtering.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Trunks::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer2-sub-interfaces" || name == "layer3-sub-interfaces" || name == "interface" || name == "interface-xr" || name == "state" || name == "mtu" || name == "qinq-outer-ether-type" || name == "dot1ad-count" || name == "untagged-interface" || name == "mac-filtering")
        return true;
    return false;
}

Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::Layer2SubInterfaces()
    :
    total_count{YType::uint32, "total-count"},
    dot1q_count{YType::uint32, "dot1q-count"},
    qin_q_count{YType::uint32, "qin-q-count"},
    qin_any_count{YType::uint32, "qin-any-count"},
    untagged_count{YType::uint32, "untagged-count"}
        ,
    state_counters(std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters>())
{
    state_counters->parent = this;

    yang_name = "layer2-sub-interfaces"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::~Layer2SubInterfaces()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| dot1q_count.is_set
	|| qin_q_count.is_set
	|| qin_any_count.is_set
	|| untagged_count.is_set
	|| (state_counters !=  nullptr && state_counters->has_data());
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(dot1q_count.yfilter)
	|| ydk::is_set(qin_q_count.yfilter)
	|| ydk::is_set(qin_any_count.yfilter)
	|| ydk::is_set(untagged_count.yfilter)
	|| (state_counters !=  nullptr && state_counters->has_operation());
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2-sub-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (dot1q_count.is_set || is_set(dot1q_count.yfilter)) leaf_name_data.push_back(dot1q_count.get_name_leafdata());
    if (qin_q_count.is_set || is_set(qin_q_count.yfilter)) leaf_name_data.push_back(qin_q_count.get_name_leafdata());
    if (qin_any_count.is_set || is_set(qin_any_count.yfilter)) leaf_name_data.push_back(qin_any_count.get_name_leafdata());
    if (untagged_count.is_set || is_set(untagged_count.yfilter)) leaf_name_data.push_back(untagged_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-counters")
    {
        if(state_counters == nullptr)
        {
            state_counters = std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters>();
        }
        return state_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state_counters != nullptr)
    {
        children["state-counters"] = state_counters;
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q-count")
    {
        dot1q_count = value;
        dot1q_count.value_namespace = name_space;
        dot1q_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qin-q-count")
    {
        qin_q_count = value;
        qin_q_count.value_namespace = name_space;
        qin_q_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qin-any-count")
    {
        qin_any_count = value;
        qin_any_count.value_namespace = name_space;
        qin_any_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untagged-count")
    {
        untagged_count = value;
        untagged_count.value_namespace = name_space;
        untagged_count.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "dot1q-count")
    {
        dot1q_count.yfilter = yfilter;
    }
    if(value_path == "qin-q-count")
    {
        qin_q_count.yfilter = yfilter;
    }
    if(value_path == "qin-any-count")
    {
        qin_any_count.yfilter = yfilter;
    }
    if(value_path == "untagged-count")
    {
        untagged_count.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-counters" || name == "total-count" || name == "dot1q-count" || name == "qin-q-count" || name == "qin-any-count" || name == "untagged-count")
        return true;
    return false;
}

Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::StateCounters()
    :
    up{YType::uint32, "up"},
    down{YType::uint32, "down"},
    admin_down{YType::uint32, "admin-down"}
{

    yang_name = "state-counters"; yang_parent_name = "layer2-sub-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::~StateCounters()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| down.is_set
	|| admin_down.is_set;
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(admin_down.yfilter);
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (admin_down.is_set || is_set(admin_down.yfilter)) leaf_name_data.push_back(admin_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down")
    {
        admin_down = value;
        admin_down.value_namespace = name_space;
        admin_down.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "admin-down")
    {
        admin_down.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "admin-down")
        return true;
    return false;
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::Layer3SubInterfaces()
    :
    total_count{YType::uint32, "total-count"},
    dot1q_count{YType::uint32, "dot1q-count"},
    qin_q_count{YType::uint32, "qin-q-count"},
    untagged_count{YType::uint32, "untagged-count"},
    native_vlan{YType::uint16, "native-vlan"}
        ,
    state_counters(std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters>())
{
    state_counters->parent = this;

    yang_name = "layer3-sub-interfaces"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::~Layer3SubInterfaces()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| dot1q_count.is_set
	|| qin_q_count.is_set
	|| untagged_count.is_set
	|| native_vlan.is_set
	|| (state_counters !=  nullptr && state_counters->has_data());
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(dot1q_count.yfilter)
	|| ydk::is_set(qin_q_count.yfilter)
	|| ydk::is_set(untagged_count.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| (state_counters !=  nullptr && state_counters->has_operation());
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer3-sub-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (dot1q_count.is_set || is_set(dot1q_count.yfilter)) leaf_name_data.push_back(dot1q_count.get_name_leafdata());
    if (qin_q_count.is_set || is_set(qin_q_count.yfilter)) leaf_name_data.push_back(qin_q_count.get_name_leafdata());
    if (untagged_count.is_set || is_set(untagged_count.yfilter)) leaf_name_data.push_back(untagged_count.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-counters")
    {
        if(state_counters == nullptr)
        {
            state_counters = std::make_shared<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters>();
        }
        return state_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state_counters != nullptr)
    {
        children["state-counters"] = state_counters;
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q-count")
    {
        dot1q_count = value;
        dot1q_count.value_namespace = name_space;
        dot1q_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qin-q-count")
    {
        qin_q_count = value;
        qin_q_count.value_namespace = name_space;
        qin_q_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untagged-count")
    {
        untagged_count = value;
        untagged_count.value_namespace = name_space;
        untagged_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "dot1q-count")
    {
        dot1q_count.yfilter = yfilter;
    }
    if(value_path == "qin-q-count")
    {
        qin_q_count.yfilter = yfilter;
    }
    if(value_path == "untagged-count")
    {
        untagged_count.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-counters" || name == "total-count" || name == "dot1q-count" || name == "qin-q-count" || name == "untagged-count" || name == "native-vlan")
        return true;
    return false;
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::StateCounters()
    :
    up{YType::uint32, "up"},
    down{YType::uint32, "down"},
    admin_down{YType::uint32, "admin-down"}
{

    yang_name = "state-counters"; yang_parent_name = "layer3-sub-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::~StateCounters()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| down.is_set
	|| admin_down.is_set;
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(admin_down.yfilter);
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (admin_down.is_set || is_set(admin_down.yfilter)) leaf_name_data.push_back(admin_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down")
    {
        admin_down = value;
        admin_down.value_namespace = name_space;
        admin_down.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "admin-down")
    {
        admin_down.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "admin-down")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Vlan::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlan::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlan::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    interface_xr{YType::str, "interface-xr"},
    parent_interface{YType::str, "parent-interface"},
    service{YType::enumeration, "service"},
    state{YType::enumeration, "state"},
    mtu{YType::uint16, "mtu"},
    switched_mtu{YType::uint16, "switched-mtu"}
        ,
    encapsulation_details(std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails>())
{
    encapsulation_details->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_xr.is_set
	|| parent_interface.is_set
	|| service.is_set
	|| state.is_set
	|| mtu.is_set
	|| switched_mtu.is_set
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_data());
}

bool Vlan::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_xr.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(switched_mtu.yfilter)
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_operation());
}

std::string Vlan::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.yfilter)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (switched_mtu.is_set || is_set(switched_mtu.yfilter)) leaf_name_data.push_back(switched_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-details")
    {
        if(encapsulation_details == nullptr)
        {
            encapsulation_details = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails>();
        }
        return encapsulation_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encapsulation_details != nullptr)
    {
        children["encapsulation-details"] = encapsulation_details;
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
        interface_xr.value_namespace = name_space;
        interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switched-mtu")
    {
        switched_mtu = value;
        switched_mtu.value_namespace = name_space;
        switched_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-xr")
    {
        interface_xr.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "switched-mtu")
    {
        switched_mtu.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-details" || name == "interface" || name == "interface-xr" || name == "parent-interface" || name == "service" || name == "state" || name == "mtu" || name == "switched-mtu")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::EncapsulationDetails()
    :
    vlan_encapsulation{YType::enumeration, "vlan-encapsulation"},
    tag{YType::uint16, "tag"},
    outer_tag{YType::uint16, "outer-tag"},
    native_tag{YType::uint16, "native-tag"},
    dot1ad_tag{YType::uint16, "dot1ad-tag"},
    dot1ad_native_tag{YType::uint16, "dot1ad-native-tag"},
    dot1ad_outer_tag{YType::uint16, "dot1ad-outer-tag"}
        ,
    stack(std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack>())
    , service_instance_details(std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails>())
    , dot1ad_dot1q_stack(std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack>())
{
    stack->parent = this;
    service_instance_details->parent = this;
    dot1ad_dot1q_stack->parent = this;

    yang_name = "encapsulation-details"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::~EncapsulationDetails()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::has_data() const
{
    if (is_presence_container) return true;
    return vlan_encapsulation.is_set
	|| tag.is_set
	|| outer_tag.is_set
	|| native_tag.is_set
	|| dot1ad_tag.is_set
	|| dot1ad_native_tag.is_set
	|| dot1ad_outer_tag.is_set
	|| (stack !=  nullptr && stack->has_data())
	|| (service_instance_details !=  nullptr && service_instance_details->has_data())
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_data());
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_encapsulation.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(native_tag.yfilter)
	|| ydk::is_set(dot1ad_tag.yfilter)
	|| ydk::is_set(dot1ad_native_tag.yfilter)
	|| ydk::is_set(dot1ad_outer_tag.yfilter)
	|| (stack !=  nullptr && stack->has_operation())
	|| (service_instance_details !=  nullptr && service_instance_details->has_operation())
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_operation());
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_encapsulation.is_set || is_set(vlan_encapsulation.yfilter)) leaf_name_data.push_back(vlan_encapsulation.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (native_tag.is_set || is_set(native_tag.yfilter)) leaf_name_data.push_back(native_tag.get_name_leafdata());
    if (dot1ad_tag.is_set || is_set(dot1ad_tag.yfilter)) leaf_name_data.push_back(dot1ad_tag.get_name_leafdata());
    if (dot1ad_native_tag.is_set || is_set(dot1ad_native_tag.yfilter)) leaf_name_data.push_back(dot1ad_native_tag.get_name_leafdata());
    if (dot1ad_outer_tag.is_set || is_set(dot1ad_outer_tag.yfilter)) leaf_name_data.push_back(dot1ad_outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack>();
        }
        return stack;
    }

    if(child_yang_name == "service-instance-details")
    {
        if(service_instance_details == nullptr)
        {
            service_instance_details = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails>();
        }
        return service_instance_details;
    }

    if(child_yang_name == "dot1ad-dot1q-stack")
    {
        if(dot1ad_dot1q_stack == nullptr)
        {
            dot1ad_dot1q_stack = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack>();
        }
        return dot1ad_dot1q_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    if(service_instance_details != nullptr)
    {
        children["service-instance-details"] = service_instance_details;
    }

    if(dot1ad_dot1q_stack != nullptr)
    {
        children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack;
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation = value;
        vlan_encapsulation.value_namespace = name_space;
        vlan_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-tag")
    {
        native_tag = value;
        native_tag.value_namespace = name_space;
        native_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag = value;
        dot1ad_tag.value_namespace = name_space;
        dot1ad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag = value;
        dot1ad_native_tag.value_namespace = name_space;
        dot1ad_native_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag = value;
        dot1ad_outer_tag.value_namespace = name_space;
        dot1ad_outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "native-tag")
    {
        native_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack" || name == "service-instance-details" || name == "dot1ad-dot1q-stack" || name == "vlan-encapsulation" || name == "tag" || name == "outer-tag" || name == "native-tag" || name == "dot1ad-tag" || name == "dot1ad-native-tag" || name == "dot1ad-outer-tag")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::Stack()
    :
    outer_tag{YType::uint16, "outer-tag"},
    second_tag{YType::uint16, "second-tag"}
{

    yang_name = "stack"; yang_parent_name = "encapsulation-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::~Stack()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag" || name == "second-tag")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::ServiceInstanceDetails()
    :
    payload_ethertype{YType::enumeration, "payload-ethertype"},
    tags_popped{YType::uint16, "tags-popped"},
    is_exact_match{YType::boolean, "is-exact-match"},
    is_native_vlan{YType::boolean, "is-native-vlan"},
    is_native_preserving{YType::boolean, "is-native-preserving"},
    source_mac_match{YType::str, "source-mac-match"},
    destination_mac_match{YType::str, "destination-mac-match"}
        ,
    local_traffic_stack(std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>())
    , tags_to_match(this, {})
    , pushe(this, {})
{
    local_traffic_stack->parent = this;

    yang_name = "service-instance-details"; yang_parent_name = "encapsulation-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::~ServiceInstanceDetails()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags_to_match.len(); index++)
    {
        if(tags_to_match[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pushe.len(); index++)
    {
        if(pushe[index]->has_data())
            return true;
    }
    return payload_ethertype.is_set
	|| tags_popped.is_set
	|| is_exact_match.is_set
	|| is_native_vlan.is_set
	|| is_native_preserving.is_set
	|| source_mac_match.is_set
	|| destination_mac_match.is_set
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_data());
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<tags_to_match.len(); index++)
    {
        if(tags_to_match[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pushe.len(); index++)
    {
        if(pushe[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(payload_ethertype.yfilter)
	|| ydk::is_set(tags_popped.yfilter)
	|| ydk::is_set(is_exact_match.yfilter)
	|| ydk::is_set(is_native_vlan.yfilter)
	|| ydk::is_set(is_native_preserving.yfilter)
	|| ydk::is_set(source_mac_match.yfilter)
	|| ydk::is_set(destination_mac_match.yfilter)
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_operation());
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_ethertype.is_set || is_set(payload_ethertype.yfilter)) leaf_name_data.push_back(payload_ethertype.get_name_leafdata());
    if (tags_popped.is_set || is_set(tags_popped.yfilter)) leaf_name_data.push_back(tags_popped.get_name_leafdata());
    if (is_exact_match.is_set || is_set(is_exact_match.yfilter)) leaf_name_data.push_back(is_exact_match.get_name_leafdata());
    if (is_native_vlan.is_set || is_set(is_native_vlan.yfilter)) leaf_name_data.push_back(is_native_vlan.get_name_leafdata());
    if (is_native_preserving.is_set || is_set(is_native_preserving.yfilter)) leaf_name_data.push_back(is_native_preserving.get_name_leafdata());
    if (source_mac_match.is_set || is_set(source_mac_match.yfilter)) leaf_name_data.push_back(source_mac_match.get_name_leafdata());
    if (destination_mac_match.is_set || is_set(destination_mac_match.yfilter)) leaf_name_data.push_back(destination_mac_match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-stack")
    {
        if(local_traffic_stack == nullptr)
        {
            local_traffic_stack = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>();
        }
        return local_traffic_stack;
    }

    if(child_yang_name == "tags-to-match")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch>();
        c->parent = this;
        tags_to_match.append(c);
        return c;
    }

    if(child_yang_name == "pushe")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe>();
        c->parent = this;
        pushe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_traffic_stack != nullptr)
    {
        children["local-traffic-stack"] = local_traffic_stack;
    }

    count = 0;
    for (auto c : tags_to_match.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : pushe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-ethertype")
    {
        payload_ethertype = value;
        payload_ethertype.value_namespace = name_space;
        payload_ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tags-popped")
    {
        tags_popped = value;
        tags_popped.value_namespace = name_space;
        tags_popped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match = value;
        is_exact_match.value_namespace = name_space;
        is_exact_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan = value;
        is_native_vlan.value_namespace = name_space;
        is_native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving = value;
        is_native_preserving.value_namespace = name_space;
        is_native_preserving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match = value;
        source_mac_match.value_namespace = name_space;
        source_mac_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac-match")
    {
        destination_mac_match = value;
        destination_mac_match.value_namespace = name_space;
        destination_mac_match.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-ethertype")
    {
        payload_ethertype.yfilter = yfilter;
    }
    if(value_path == "tags-popped")
    {
        tags_popped.yfilter = yfilter;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match.yfilter = yfilter;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan.yfilter = yfilter;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving.yfilter = yfilter;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match.yfilter = yfilter;
    }
    if(value_path == "destination-mac-match")
    {
        destination_mac_match.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-stack" || name == "tags-to-match" || name == "pushe" || name == "payload-ethertype" || name == "tags-popped" || name == "is-exact-match" || name == "is-native-vlan" || name == "is-native-preserving" || name == "source-mac-match" || name == "destination-mac-match")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficStack()
    :
    local_traffic_tag(this, {})
{

    yang_name = "local-traffic-stack"; yang_parent_name = "service-instance-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::~LocalTrafficStack()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_traffic_tag.len(); index++)
    {
        if(local_traffic_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_operation() const
{
    for (std::size_t index=0; index<local_traffic_tag.len(); index++)
    {
        if(local_traffic_tag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-tag")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag>();
        c->parent = this;
        local_traffic_tag.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : local_traffic_tag.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-tag")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::LocalTrafficTag()
    :
    ethertype{YType::enumeration, "ethertype"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "local-traffic-tag"; yang_parent_name = "local-traffic-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::~LocalTrafficTag()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_data() const
{
    if (is_presence_container) return true;
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethertype" || name == "vlan-id")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::TagsToMatch()
    :
    ethertype{YType::enumeration, "ethertype"},
    priority{YType::enumeration, "priority"}
        ,
    vlan_range(this, {})
{

    yang_name = "tags-to-match"; yang_parent_name = "service-instance-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::~TagsToMatch()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return ethertype.is_set
	|| priority.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags-to-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange>();
        c->parent = this;
        vlan_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "ethertype" || name == "priority")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::VlanRange()
    :
    vlan_id_low{YType::uint16, "vlan-id-low"},
    vlan_id_high{YType::uint16, "vlan-id-high"}
{

    yang_name = "vlan-range"; yang_parent_name = "tags-to-match"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::~VlanRange()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id_low.is_set
	|| vlan_id_high.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id_low.yfilter)
	|| ydk::is_set(vlan_id_high.yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id_low.is_set || is_set(vlan_id_low.yfilter)) leaf_name_data.push_back(vlan_id_low.get_name_leafdata());
    if (vlan_id_high.is_set || is_set(vlan_id_high.yfilter)) leaf_name_data.push_back(vlan_id_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id-low")
    {
        vlan_id_low = value;
        vlan_id_low.value_namespace = name_space;
        vlan_id_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-high")
    {
        vlan_id_high = value;
        vlan_id_high.value_namespace = name_space;
        vlan_id_high.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id-low")
    {
        vlan_id_low.yfilter = yfilter;
    }
    if(value_path == "vlan-id-high")
    {
        vlan_id_high.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id-low" || name == "vlan-id-high")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::Pushe()
    :
    ethertype{YType::enumeration, "ethertype"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "pushe"; yang_parent_name = "service-instance-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::~Pushe()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_data() const
{
    if (is_presence_container) return true;
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pushe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethertype" || name == "vlan-id")
        return true;
    return false;
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::Dot1adDot1qStack()
    :
    outer_tag{YType::uint16, "outer-tag"},
    second_tag{YType::uint16, "second-tag"}
{

    yang_name = "dot1ad-dot1q-stack"; yang_parent_name = "encapsulation-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::~Dot1adDot1qStack()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad-dot1q-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag" || name == "second-tag")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocations()
    :
    tag_allocation(this, {})
{

    yang_name = "tag-allocations"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::~TagAllocations()
{
}

bool Vlan::Nodes::Node::TagAllocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tag_allocation.len(); index++)
    {
        if(tag_allocation[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::TagAllocations::has_operation() const
{
    for (std::size_t index=0; index<tag_allocation.len(); index++)
    {
        if(tag_allocation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-allocations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag-allocation")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation>();
        c->parent = this;
        tag_allocation.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tag_allocation.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlan::Nodes::Node::TagAllocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlan::Nodes::Node::TagAllocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-allocation")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::TagAllocation()
    :
    interface{YType::str, "interface"},
    first_tag{YType::uint32, "first-tag"},
    second_tag{YType::str, "second-tag"},
    interface_xr{YType::str, "interface-xr"},
    parent_interface{YType::str, "parent-interface"},
    service{YType::enumeration, "service"},
    state{YType::enumeration, "state"},
    mtu{YType::uint16, "mtu"},
    switched_mtu{YType::uint16, "switched-mtu"}
        ,
    encapsulation_details(std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails>())
{
    encapsulation_details->parent = this;

    yang_name = "tag-allocation"; yang_parent_name = "tag-allocations"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::~TagAllocation()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| first_tag.is_set
	|| second_tag.is_set
	|| interface_xr.is_set
	|| parent_interface.is_set
	|| service.is_set
	|| state.is_set
	|| mtu.is_set
	|| switched_mtu.is_set
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_data());
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(first_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter)
	|| ydk::is_set(interface_xr.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(switched_mtu.yfilter)
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_operation());
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (first_tag.is_set || is_set(first_tag.yfilter)) leaf_name_data.push_back(first_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.yfilter)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (switched_mtu.is_set || is_set(switched_mtu.yfilter)) leaf_name_data.push_back(switched_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-details")
    {
        if(encapsulation_details == nullptr)
        {
            encapsulation_details = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails>();
        }
        return encapsulation_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encapsulation_details != nullptr)
    {
        children["encapsulation-details"] = encapsulation_details;
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-tag")
    {
        first_tag = value;
        first_tag.value_namespace = name_space;
        first_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
        interface_xr.value_namespace = name_space;
        interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switched-mtu")
    {
        switched_mtu = value;
        switched_mtu.value_namespace = name_space;
        switched_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "first-tag")
    {
        first_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
    if(value_path == "interface-xr")
    {
        interface_xr.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "switched-mtu")
    {
        switched_mtu.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-details" || name == "interface" || name == "first-tag" || name == "second-tag" || name == "interface-xr" || name == "parent-interface" || name == "service" || name == "state" || name == "mtu" || name == "switched-mtu")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::EncapsulationDetails()
    :
    vlan_encapsulation{YType::enumeration, "vlan-encapsulation"},
    tag{YType::uint16, "tag"},
    outer_tag{YType::uint16, "outer-tag"},
    native_tag{YType::uint16, "native-tag"},
    dot1ad_tag{YType::uint16, "dot1ad-tag"},
    dot1ad_native_tag{YType::uint16, "dot1ad-native-tag"},
    dot1ad_outer_tag{YType::uint16, "dot1ad-outer-tag"}
        ,
    stack(std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack>())
    , service_instance_details(std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails>())
    , dot1ad_dot1q_stack(std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack>())
{
    stack->parent = this;
    service_instance_details->parent = this;
    dot1ad_dot1q_stack->parent = this;

    yang_name = "encapsulation-details"; yang_parent_name = "tag-allocation"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::~EncapsulationDetails()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::has_data() const
{
    if (is_presence_container) return true;
    return vlan_encapsulation.is_set
	|| tag.is_set
	|| outer_tag.is_set
	|| native_tag.is_set
	|| dot1ad_tag.is_set
	|| dot1ad_native_tag.is_set
	|| dot1ad_outer_tag.is_set
	|| (stack !=  nullptr && stack->has_data())
	|| (service_instance_details !=  nullptr && service_instance_details->has_data())
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_data());
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_encapsulation.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(native_tag.yfilter)
	|| ydk::is_set(dot1ad_tag.yfilter)
	|| ydk::is_set(dot1ad_native_tag.yfilter)
	|| ydk::is_set(dot1ad_outer_tag.yfilter)
	|| (stack !=  nullptr && stack->has_operation())
	|| (service_instance_details !=  nullptr && service_instance_details->has_operation())
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_operation());
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_encapsulation.is_set || is_set(vlan_encapsulation.yfilter)) leaf_name_data.push_back(vlan_encapsulation.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (native_tag.is_set || is_set(native_tag.yfilter)) leaf_name_data.push_back(native_tag.get_name_leafdata());
    if (dot1ad_tag.is_set || is_set(dot1ad_tag.yfilter)) leaf_name_data.push_back(dot1ad_tag.get_name_leafdata());
    if (dot1ad_native_tag.is_set || is_set(dot1ad_native_tag.yfilter)) leaf_name_data.push_back(dot1ad_native_tag.get_name_leafdata());
    if (dot1ad_outer_tag.is_set || is_set(dot1ad_outer_tag.yfilter)) leaf_name_data.push_back(dot1ad_outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack>();
        }
        return stack;
    }

    if(child_yang_name == "service-instance-details")
    {
        if(service_instance_details == nullptr)
        {
            service_instance_details = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails>();
        }
        return service_instance_details;
    }

    if(child_yang_name == "dot1ad-dot1q-stack")
    {
        if(dot1ad_dot1q_stack == nullptr)
        {
            dot1ad_dot1q_stack = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack>();
        }
        return dot1ad_dot1q_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    if(service_instance_details != nullptr)
    {
        children["service-instance-details"] = service_instance_details;
    }

    if(dot1ad_dot1q_stack != nullptr)
    {
        children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack;
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation = value;
        vlan_encapsulation.value_namespace = name_space;
        vlan_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-tag")
    {
        native_tag = value;
        native_tag.value_namespace = name_space;
        native_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag = value;
        dot1ad_tag.value_namespace = name_space;
        dot1ad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag = value;
        dot1ad_native_tag.value_namespace = name_space;
        dot1ad_native_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag = value;
        dot1ad_outer_tag.value_namespace = name_space;
        dot1ad_outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "native-tag")
    {
        native_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack" || name == "service-instance-details" || name == "dot1ad-dot1q-stack" || name == "vlan-encapsulation" || name == "tag" || name == "outer-tag" || name == "native-tag" || name == "dot1ad-tag" || name == "dot1ad-native-tag" || name == "dot1ad-outer-tag")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::Stack()
    :
    outer_tag{YType::uint16, "outer-tag"},
    second_tag{YType::uint16, "second-tag"}
{

    yang_name = "stack"; yang_parent_name = "encapsulation-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::~Stack()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag" || name == "second-tag")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::ServiceInstanceDetails()
    :
    payload_ethertype{YType::enumeration, "payload-ethertype"},
    tags_popped{YType::uint16, "tags-popped"},
    is_exact_match{YType::boolean, "is-exact-match"},
    is_native_vlan{YType::boolean, "is-native-vlan"},
    is_native_preserving{YType::boolean, "is-native-preserving"},
    source_mac_match{YType::str, "source-mac-match"},
    destination_mac_match{YType::str, "destination-mac-match"}
        ,
    local_traffic_stack(std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>())
    , tags_to_match(this, {})
    , pushe(this, {})
{
    local_traffic_stack->parent = this;

    yang_name = "service-instance-details"; yang_parent_name = "encapsulation-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::~ServiceInstanceDetails()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags_to_match.len(); index++)
    {
        if(tags_to_match[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pushe.len(); index++)
    {
        if(pushe[index]->has_data())
            return true;
    }
    return payload_ethertype.is_set
	|| tags_popped.is_set
	|| is_exact_match.is_set
	|| is_native_vlan.is_set
	|| is_native_preserving.is_set
	|| source_mac_match.is_set
	|| destination_mac_match.is_set
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_data());
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<tags_to_match.len(); index++)
    {
        if(tags_to_match[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pushe.len(); index++)
    {
        if(pushe[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(payload_ethertype.yfilter)
	|| ydk::is_set(tags_popped.yfilter)
	|| ydk::is_set(is_exact_match.yfilter)
	|| ydk::is_set(is_native_vlan.yfilter)
	|| ydk::is_set(is_native_preserving.yfilter)
	|| ydk::is_set(source_mac_match.yfilter)
	|| ydk::is_set(destination_mac_match.yfilter)
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_operation());
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_ethertype.is_set || is_set(payload_ethertype.yfilter)) leaf_name_data.push_back(payload_ethertype.get_name_leafdata());
    if (tags_popped.is_set || is_set(tags_popped.yfilter)) leaf_name_data.push_back(tags_popped.get_name_leafdata());
    if (is_exact_match.is_set || is_set(is_exact_match.yfilter)) leaf_name_data.push_back(is_exact_match.get_name_leafdata());
    if (is_native_vlan.is_set || is_set(is_native_vlan.yfilter)) leaf_name_data.push_back(is_native_vlan.get_name_leafdata());
    if (is_native_preserving.is_set || is_set(is_native_preserving.yfilter)) leaf_name_data.push_back(is_native_preserving.get_name_leafdata());
    if (source_mac_match.is_set || is_set(source_mac_match.yfilter)) leaf_name_data.push_back(source_mac_match.get_name_leafdata());
    if (destination_mac_match.is_set || is_set(destination_mac_match.yfilter)) leaf_name_data.push_back(destination_mac_match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-stack")
    {
        if(local_traffic_stack == nullptr)
        {
            local_traffic_stack = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>();
        }
        return local_traffic_stack;
    }

    if(child_yang_name == "tags-to-match")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch>();
        c->parent = this;
        tags_to_match.append(c);
        return c;
    }

    if(child_yang_name == "pushe")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe>();
        c->parent = this;
        pushe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_traffic_stack != nullptr)
    {
        children["local-traffic-stack"] = local_traffic_stack;
    }

    count = 0;
    for (auto c : tags_to_match.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : pushe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-ethertype")
    {
        payload_ethertype = value;
        payload_ethertype.value_namespace = name_space;
        payload_ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tags-popped")
    {
        tags_popped = value;
        tags_popped.value_namespace = name_space;
        tags_popped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match = value;
        is_exact_match.value_namespace = name_space;
        is_exact_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan = value;
        is_native_vlan.value_namespace = name_space;
        is_native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving = value;
        is_native_preserving.value_namespace = name_space;
        is_native_preserving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match = value;
        source_mac_match.value_namespace = name_space;
        source_mac_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac-match")
    {
        destination_mac_match = value;
        destination_mac_match.value_namespace = name_space;
        destination_mac_match.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-ethertype")
    {
        payload_ethertype.yfilter = yfilter;
    }
    if(value_path == "tags-popped")
    {
        tags_popped.yfilter = yfilter;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match.yfilter = yfilter;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan.yfilter = yfilter;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving.yfilter = yfilter;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match.yfilter = yfilter;
    }
    if(value_path == "destination-mac-match")
    {
        destination_mac_match.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-stack" || name == "tags-to-match" || name == "pushe" || name == "payload-ethertype" || name == "tags-popped" || name == "is-exact-match" || name == "is-native-vlan" || name == "is-native-preserving" || name == "source-mac-match" || name == "destination-mac-match")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficStack()
    :
    local_traffic_tag(this, {})
{

    yang_name = "local-traffic-stack"; yang_parent_name = "service-instance-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::~LocalTrafficStack()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_traffic_tag.len(); index++)
    {
        if(local_traffic_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_operation() const
{
    for (std::size_t index=0; index<local_traffic_tag.len(); index++)
    {
        if(local_traffic_tag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-tag")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag>();
        c->parent = this;
        local_traffic_tag.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : local_traffic_tag.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-tag")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::LocalTrafficTag()
    :
    ethertype{YType::enumeration, "ethertype"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "local-traffic-tag"; yang_parent_name = "local-traffic-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::~LocalTrafficTag()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_data() const
{
    if (is_presence_container) return true;
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethertype" || name == "vlan-id")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::TagsToMatch()
    :
    ethertype{YType::enumeration, "ethertype"},
    priority{YType::enumeration, "priority"}
        ,
    vlan_range(this, {})
{

    yang_name = "tags-to-match"; yang_parent_name = "service-instance-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::~TagsToMatch()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return ethertype.is_set
	|| priority.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags-to-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        auto c = std::make_shared<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange>();
        c->parent = this;
        vlan_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "ethertype" || name == "priority")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::VlanRange()
    :
    vlan_id_low{YType::uint16, "vlan-id-low"},
    vlan_id_high{YType::uint16, "vlan-id-high"}
{

    yang_name = "vlan-range"; yang_parent_name = "tags-to-match"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::~VlanRange()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id_low.is_set
	|| vlan_id_high.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id_low.yfilter)
	|| ydk::is_set(vlan_id_high.yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id_low.is_set || is_set(vlan_id_low.yfilter)) leaf_name_data.push_back(vlan_id_low.get_name_leafdata());
    if (vlan_id_high.is_set || is_set(vlan_id_high.yfilter)) leaf_name_data.push_back(vlan_id_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id-low")
    {
        vlan_id_low = value;
        vlan_id_low.value_namespace = name_space;
        vlan_id_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-high")
    {
        vlan_id_high = value;
        vlan_id_high.value_namespace = name_space;
        vlan_id_high.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id-low")
    {
        vlan_id_low.yfilter = yfilter;
    }
    if(value_path == "vlan-id-high")
    {
        vlan_id_high.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id-low" || name == "vlan-id-high")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::Pushe()
    :
    ethertype{YType::enumeration, "ethertype"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "pushe"; yang_parent_name = "service-instance-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::~Pushe()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_data() const
{
    if (is_presence_container) return true;
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pushe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethertype" || name == "vlan-id")
        return true;
    return false;
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::Dot1adDot1qStack()
    :
    outer_tag{YType::uint16, "outer-tag"},
    second_tag{YType::uint16, "second-tag"}
{

    yang_name = "dot1ad-dot1q-stack"; yang_parent_name = "encapsulation-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::~Dot1adDot1qStack()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad-dot1q-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag" || name == "second-tag")
        return true;
    return false;
}

EthernetEncapsulation::EthernetEncapsulation()
    :
    nodes(std::make_shared<EthernetEncapsulation::Nodes>())
{
    nodes->parent = this;

    yang_name = "ethernet-encapsulation"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

EthernetEncapsulation::~EthernetEncapsulation()
{
}

bool EthernetEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool EthernetEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string EthernetEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<EthernetEncapsulation::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void EthernetEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EthernetEncapsulation::clone_ptr() const
{
    return std::make_shared<EthernetEncapsulation>();
}

std::string EthernetEncapsulation::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EthernetEncapsulation::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EthernetEncapsulation::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EthernetEncapsulation::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EthernetEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

EthernetEncapsulation::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "ethernet-encapsulation"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetEncapsulation::Nodes::~Nodes()
{
}

bool EthernetEncapsulation::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetEncapsulation::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetEncapsulation::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetEncapsulation::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetEncapsulation::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetEncapsulation::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<EthernetEncapsulation::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetEncapsulation::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetEncapsulation::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetEncapsulation::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetEncapsulation::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

EthernetEncapsulation::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    unicast_mac_filters(std::make_shared<EthernetEncapsulation::Nodes::Node::UnicastMacFilters>())
{
    unicast_mac_filters->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetEncapsulation::Nodes::Node::~Node()
{
}

bool EthernetEncapsulation::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (unicast_mac_filters !=  nullptr && unicast_mac_filters->has_data());
}

bool EthernetEncapsulation::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (unicast_mac_filters !=  nullptr && unicast_mac_filters->has_operation());
}

std::string EthernetEncapsulation::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetEncapsulation::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetEncapsulation::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetEncapsulation::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast-mac-filters")
    {
        if(unicast_mac_filters == nullptr)
        {
            unicast_mac_filters = std::make_shared<EthernetEncapsulation::Nodes::Node::UnicastMacFilters>();
        }
        return unicast_mac_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetEncapsulation::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unicast_mac_filters != nullptr)
    {
        children["unicast-mac-filters"] = unicast_mac_filters;
    }

    return children;
}

void EthernetEncapsulation::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetEncapsulation::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool EthernetEncapsulation::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast-mac-filters" || name == "node-name")
        return true;
    return false;
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilters()
    :
    unicast_mac_filter(this, {"interface_name"})
{

    yang_name = "unicast-mac-filters"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::~UnicastMacFilters()
{
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unicast_mac_filter.len(); index++)
    {
        if(unicast_mac_filter[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::has_operation() const
{
    for (std::size_t index=0; index<unicast_mac_filter.len(); index++)
    {
        if(unicast_mac_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-mac-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast-mac-filter")
    {
        auto c = std::make_shared<EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter>();
        c->parent = this;
        unicast_mac_filter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : unicast_mac_filter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast-mac-filter")
        return true;
    return false;
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastMacFilter()
    :
    interface_name{YType::str, "interface-name"}
        ,
    unicast_filter(this, {})
{

    yang_name = "unicast-mac-filter"; yang_parent_name = "unicast-mac-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::~UnicastMacFilter()
{
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unicast_filter.len(); index++)
    {
        if(unicast_filter[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::has_operation() const
{
    for (std::size_t index=0; index<unicast_filter.len(); index++)
    {
        if(unicast_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-mac-filter";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast-filter")
    {
        auto c = std::make_shared<EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter>();
        c->parent = this;
        unicast_filter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : unicast_filter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast-filter" || name == "interface-name")
        return true;
    return false;
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::UnicastFilter()
    :
    mac_address{YType::str, "mac-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "unicast-filter"; yang_parent_name = "unicast-mac-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::~UnicastFilter()
{
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mode.is_set;
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mode")
        return true;
    return false;
}

const Enum::YLeaf VlanEncaps::no_encapsulation {0, "no-encapsulation"};
const Enum::YLeaf VlanEncaps::dot1q {1, "dot1q"};
const Enum::YLeaf VlanEncaps::qinq {2, "qinq"};
const Enum::YLeaf VlanEncaps::qin_any {3, "qin-any"};
const Enum::YLeaf VlanEncaps::dot1q_native {4, "dot1q-native"};
const Enum::YLeaf VlanEncaps::dot1ad {5, "dot1ad"};
const Enum::YLeaf VlanEncaps::dot1ad_native {6, "dot1ad-native"};
const Enum::YLeaf VlanEncaps::service_instance {7, "service-instance"};
const Enum::YLeaf VlanEncaps::dot1ad_dot1q {8, "dot1ad-dot1q"};
const Enum::YLeaf VlanEncaps::dot1ad_any {9, "dot1ad-any"};

const Enum::YLeaf EthCapsUcastMacMode::reserved {0, "reserved"};
const Enum::YLeaf EthCapsUcastMacMode::permit {1, "permit"};

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf EfpTagPriority::priority0 {0, "priority0"};
const Enum::YLeaf EfpTagPriority::priority1 {1, "priority1"};
const Enum::YLeaf EfpTagPriority::priority2 {2, "priority2"};
const Enum::YLeaf EfpTagPriority::priority3 {3, "priority3"};
const Enum::YLeaf EfpTagPriority::priority4 {4, "priority4"};
const Enum::YLeaf EfpTagPriority::priority5 {5, "priority5"};
const Enum::YLeaf EfpTagPriority::priority6 {6, "priority6"};
const Enum::YLeaf EfpTagPriority::priority7 {7, "priority7"};
const Enum::YLeaf EfpTagPriority::priority_any {8, "priority-any"};

const Enum::YLeaf EfpTagEtype::untagged {0, "untagged"};
const Enum::YLeaf EfpTagEtype::dot1q {33024, "dot1q"};
const Enum::YLeaf EfpTagEtype::dot1ad {34984, "dot1ad"};

const Enum::YLeaf VlanService::vlan_service_l2 {1, "vlan-service-l2"};
const Enum::YLeaf VlanService::vlan_service_l3 {2, "vlan-service-l3"};

const Enum::YLeaf EfpPayloadEtype::payload_ethertype_any {0, "payload-ethertype-any"};
const Enum::YLeaf EfpPayloadEtype::payload_ethertype_ip {1, "payload-ethertype-ip"};
const Enum::YLeaf EfpPayloadEtype::payload_ethertype_pppoe {2, "payload-ethertype-pppoe"};

const Enum::YLeaf VlanQinqOuterEtype::ether_type8100 {33024, "ether-type8100"};
const Enum::YLeaf VlanQinqOuterEtype::ether_type9100 {37120, "ether-type9100"};
const Enum::YLeaf VlanQinqOuterEtype::ether_type9200 {37376, "ether-type9200"};

const Enum::YLeaf EthFiltering::no_filtering {0, "no-filtering"};
const Enum::YLeaf EthFiltering::dot1q_filtering {1, "dot1q-filtering"};
const Enum::YLeaf EthFiltering::dot1ad_filtering {2, "dot1ad-filtering"};
const Enum::YLeaf EthFiltering::two_port_mac_relay_filtering {3, "two-port-mac-relay-filtering"};


}
}

