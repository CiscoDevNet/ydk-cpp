
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cmproxy_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cmproxy_oper {

SdrInventoryVm::SdrInventoryVm()
    :
    nodes(std::make_shared<SdrInventoryVm::Nodes>())
{
    nodes->parent = this;

    yang_name = "sdr-inventory-vm"; yang_parent_name = "Cisco-IOS-XR-cmproxy-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SdrInventoryVm::~SdrInventoryVm()
{
}

bool SdrInventoryVm::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool SdrInventoryVm::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SdrInventoryVm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventoryVm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventoryVm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SdrInventoryVm::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventoryVm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void SdrInventoryVm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrInventoryVm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SdrInventoryVm::clone_ptr() const
{
    return std::make_shared<SdrInventoryVm>();
}

std::string SdrInventoryVm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SdrInventoryVm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SdrInventoryVm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SdrInventoryVm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SdrInventoryVm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

SdrInventoryVm::Nodes::Nodes()
    :
    node(this, {"name"})
{

    yang_name = "nodes"; yang_parent_name = "sdr-inventory-vm"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrInventoryVm::Nodes::~Nodes()
{
}

bool SdrInventoryVm::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SdrInventoryVm::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrInventoryVm::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrInventoryVm::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventoryVm::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<SdrInventoryVm::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventoryVm::Nodes::get_children() const
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

void SdrInventoryVm::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrInventoryVm::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrInventoryVm::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SdrInventoryVm::Nodes::Node::Node()
    :
    name{YType::str, "name"}
        ,
    node_entries(std::make_shared<SdrInventoryVm::Nodes::Node::NodeEntries>())
{
    node_entries->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrInventoryVm::Nodes::Node::~Node()
{
}

bool SdrInventoryVm::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (node_entries !=  nullptr && node_entries->has_data());
}

bool SdrInventoryVm::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (node_entries !=  nullptr && node_entries->has_operation());
}

std::string SdrInventoryVm::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrInventoryVm::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventoryVm::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-entries")
    {
        if(node_entries == nullptr)
        {
            node_entries = std::make_shared<SdrInventoryVm::Nodes::Node::NodeEntries>();
        }
        return node_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventoryVm::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_entries != nullptr)
    {
        children["node-entries"] = node_entries;
    }

    return children;
}

void SdrInventoryVm::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventoryVm::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool SdrInventoryVm::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-entries" || name == "name")
        return true;
    return false;
}

SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntries()
    :
    node_entry(this, {"name"})
{

    yang_name = "node-entries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrInventoryVm::Nodes::Node::NodeEntries::~NodeEntries()
{
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_entry.len(); index++)
    {
        if(node_entry[index]->has_data())
            return true;
    }
    return false;
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::has_operation() const
{
    for (std::size_t index=0; index<node_entry.len(); index++)
    {
        if(node_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrInventoryVm::Nodes::Node::NodeEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventoryVm::Nodes::Node::NodeEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::Node::NodeEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-entry")
    {
        auto c = std::make_shared<SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry>();
        c->parent = this;
        node_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventoryVm::Nodes::Node::NodeEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrInventoryVm::Nodes::Node::NodeEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrInventoryVm::Nodes::Node::NodeEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-entry")
        return true;
    return false;
}

SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::NodeEntry()
    :
    name{YType::str, "name"},
    valid{YType::uint32, "valid"},
    card_type{YType::uint32, "card-type"},
    card_type_string{YType::str, "card-type-string"},
    nodeid{YType::int32, "nodeid"},
    node_name{YType::str, "node-name"},
    partner_id{YType::int32, "partner-id"},
    partner_name{YType::str, "partner-name"},
    red_state{YType::uint32, "red-state"},
    red_state_string{YType::str, "red-state-string"},
    node_sw_state{YType::uint32, "node-sw-state"},
    node_sw_state_string{YType::str, "node-sw-state-string"},
    prev_sw_state{YType::uint32, "prev-sw-state"},
    prev_sw_state_string{YType::str, "prev-sw-state-string"},
    node_ip{YType::uint32, "node-ip"},
    node_ipv4_string{YType::str, "node-ipv4-string"}
{

    yang_name = "node-entry"; yang_parent_name = "node-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::~NodeEntry()
{
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| valid.is_set
	|| card_type.is_set
	|| card_type_string.is_set
	|| nodeid.is_set
	|| node_name.is_set
	|| partner_id.is_set
	|| partner_name.is_set
	|| red_state.is_set
	|| red_state_string.is_set
	|| node_sw_state.is_set
	|| node_sw_state_string.is_set
	|| prev_sw_state.is_set
	|| prev_sw_state_string.is_set
	|| node_ip.is_set
	|| node_ipv4_string.is_set;
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(card_type_string.yfilter)
	|| ydk::is_set(nodeid.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(partner_id.yfilter)
	|| ydk::is_set(partner_name.yfilter)
	|| ydk::is_set(red_state.yfilter)
	|| ydk::is_set(red_state_string.yfilter)
	|| ydk::is_set(node_sw_state.yfilter)
	|| ydk::is_set(node_sw_state_string.yfilter)
	|| ydk::is_set(prev_sw_state.yfilter)
	|| ydk::is_set(prev_sw_state_string.yfilter)
	|| ydk::is_set(node_ip.yfilter)
	|| ydk::is_set(node_ipv4_string.yfilter);
}

std::string SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-entry";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (card_type_string.is_set || is_set(card_type_string.yfilter)) leaf_name_data.push_back(card_type_string.get_name_leafdata());
    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (partner_id.is_set || is_set(partner_id.yfilter)) leaf_name_data.push_back(partner_id.get_name_leafdata());
    if (partner_name.is_set || is_set(partner_name.yfilter)) leaf_name_data.push_back(partner_name.get_name_leafdata());
    if (red_state.is_set || is_set(red_state.yfilter)) leaf_name_data.push_back(red_state.get_name_leafdata());
    if (red_state_string.is_set || is_set(red_state_string.yfilter)) leaf_name_data.push_back(red_state_string.get_name_leafdata());
    if (node_sw_state.is_set || is_set(node_sw_state.yfilter)) leaf_name_data.push_back(node_sw_state.get_name_leafdata());
    if (node_sw_state_string.is_set || is_set(node_sw_state_string.yfilter)) leaf_name_data.push_back(node_sw_state_string.get_name_leafdata());
    if (prev_sw_state.is_set || is_set(prev_sw_state.yfilter)) leaf_name_data.push_back(prev_sw_state.get_name_leafdata());
    if (prev_sw_state_string.is_set || is_set(prev_sw_state_string.yfilter)) leaf_name_data.push_back(prev_sw_state_string.get_name_leafdata());
    if (node_ip.is_set || is_set(node_ip.yfilter)) leaf_name_data.push_back(node_ip.get_name_leafdata());
    if (node_ipv4_string.is_set || is_set(node_ipv4_string.yfilter)) leaf_name_data.push_back(node_ipv4_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type-string")
    {
        card_type_string = value;
        card_type_string.value_namespace = name_space;
        card_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-id")
    {
        partner_id = value;
        partner_id.value_namespace = name_space;
        partner_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-name")
    {
        partner_name = value;
        partner_name.value_namespace = name_space;
        partner_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-state")
    {
        red_state = value;
        red_state.value_namespace = name_space;
        red_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-state-string")
    {
        red_state_string = value;
        red_state_string.value_namespace = name_space;
        red_state_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-sw-state")
    {
        node_sw_state = value;
        node_sw_state.value_namespace = name_space;
        node_sw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-sw-state-string")
    {
        node_sw_state_string = value;
        node_sw_state_string.value_namespace = name_space;
        node_sw_state_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prev-sw-state")
    {
        prev_sw_state = value;
        prev_sw_state.value_namespace = name_space;
        prev_sw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prev-sw-state-string")
    {
        prev_sw_state_string = value;
        prev_sw_state_string.value_namespace = name_space;
        prev_sw_state_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-ip")
    {
        node_ip = value;
        node_ip.value_namespace = name_space;
        node_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-ipv4-string")
    {
        node_ipv4_string = value;
        node_ipv4_string.value_namespace = name_space;
        node_ipv4_string.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "card-type-string")
    {
        card_type_string.yfilter = yfilter;
    }
    if(value_path == "nodeid")
    {
        nodeid.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "partner-id")
    {
        partner_id.yfilter = yfilter;
    }
    if(value_path == "partner-name")
    {
        partner_name.yfilter = yfilter;
    }
    if(value_path == "red-state")
    {
        red_state.yfilter = yfilter;
    }
    if(value_path == "red-state-string")
    {
        red_state_string.yfilter = yfilter;
    }
    if(value_path == "node-sw-state")
    {
        node_sw_state.yfilter = yfilter;
    }
    if(value_path == "node-sw-state-string")
    {
        node_sw_state_string.yfilter = yfilter;
    }
    if(value_path == "prev-sw-state")
    {
        prev_sw_state.yfilter = yfilter;
    }
    if(value_path == "prev-sw-state-string")
    {
        prev_sw_state_string.yfilter = yfilter;
    }
    if(value_path == "node-ip")
    {
        node_ip.yfilter = yfilter;
    }
    if(value_path == "node-ipv4-string")
    {
        node_ipv4_string.yfilter = yfilter;
    }
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "valid" || name == "card-type" || name == "card-type-string" || name == "nodeid" || name == "node-name" || name == "partner-id" || name == "partner-name" || name == "red-state" || name == "red-state-string" || name == "node-sw-state" || name == "node-sw-state-string" || name == "prev-sw-state" || name == "prev-sw-state-string" || name == "node-ip" || name == "node-ipv4-string")
        return true;
    return false;
}


}
}

