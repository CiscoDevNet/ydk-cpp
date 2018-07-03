
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pppoe_ea_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pppoe_ea_oper {

PppoeEa::PppoeEa()
    :
    nodes(std::make_shared<PppoeEa::Nodes>())
{
    nodes->parent = this;

    yang_name = "pppoe-ea"; yang_parent_name = "Cisco-IOS-XR-pppoe-ea-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PppoeEa::~PppoeEa()
{
}

bool PppoeEa::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool PppoeEa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PppoeEa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pppoe-ea-oper:pppoe-ea";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PppoeEa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PppoeEa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeEa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PppoeEa::clone_ptr() const
{
    return std::make_shared<PppoeEa>();
}

std::string PppoeEa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PppoeEa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PppoeEa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PppoeEa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PppoeEa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PppoeEa::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "pppoe-ea"; is_top_level_class = false; has_list_ancestor = false; 
}

PppoeEa::Nodes::~Nodes()
{
}

bool PppoeEa::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeEa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeEa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pppoe-ea-oper:pppoe-ea/" << get_segment_path();
    return path_buffer.str();
}

std::string PppoeEa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PppoeEa::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::get_children() const
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

void PppoeEa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeEa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeEa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PppoeEa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    parent_interface_ids(std::make_shared<PppoeEa::Nodes::Node::ParentInterfaceIds>())
    , interface_ids(std::make_shared<PppoeEa::Nodes::Node::InterfaceIds>())
{
    parent_interface_ids->parent = this;
    interface_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PppoeEa::Nodes::Node::~Node()
{
}

bool PppoeEa::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (parent_interface_ids !=  nullptr && parent_interface_ids->has_data())
	|| (interface_ids !=  nullptr && interface_ids->has_data());
}

bool PppoeEa::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (parent_interface_ids !=  nullptr && parent_interface_ids->has_operation())
	|| (interface_ids !=  nullptr && interface_ids->has_operation());
}

std::string PppoeEa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pppoe-ea-oper:pppoe-ea/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PppoeEa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parent-interface-ids")
    {
        if(parent_interface_ids == nullptr)
        {
            parent_interface_ids = std::make_shared<PppoeEa::Nodes::Node::ParentInterfaceIds>();
        }
        return parent_interface_ids;
    }

    if(child_yang_name == "interface-ids")
    {
        if(interface_ids == nullptr)
        {
            interface_ids = std::make_shared<PppoeEa::Nodes::Node::InterfaceIds>();
        }
        return interface_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(parent_interface_ids != nullptr)
    {
        children["parent-interface-ids"] = parent_interface_ids;
    }

    if(interface_ids != nullptr)
    {
        children["interface-ids"] = interface_ids;
    }

    return children;
}

void PppoeEa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeEa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PppoeEa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-interface-ids" || name == "interface-ids" || name == "node-name")
        return true;
    return false;
}

PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceIds()
    :
    parent_interface_id(this, {"parent_interface_name"})
{

    yang_name = "parent-interface-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::ParentInterfaceIds::~ParentInterfaceIds()
{
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<parent_interface_id.len(); index++)
    {
        if(parent_interface_id[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::has_operation() const
{
    for (std::size_t index=0; index<parent_interface_id.len(); index++)
    {
        if(parent_interface_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeEa::Nodes::Node::ParentInterfaceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-interface-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::ParentInterfaceIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::ParentInterfaceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parent-interface-id")
    {
        auto c = std::make_shared<PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId>();
        c->parent = this;
        parent_interface_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::ParentInterfaceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : parent_interface_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PppoeEa::Nodes::Node::ParentInterfaceIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeEa::Nodes::Node::ParentInterfaceIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-interface-id")
        return true;
    return false;
}

PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::ParentInterfaceId()
    :
    parent_interface_name{YType::str, "parent-interface-name"},
    interface{YType::str, "interface"},
    is_in_sync{YType::boolean, "is-in-sync"}
        ,
    srgv_mac(std::make_shared<PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac>())
{
    srgv_mac->parent = this;

    yang_name = "parent-interface-id"; yang_parent_name = "parent-interface-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::~ParentInterfaceId()
{
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::has_data() const
{
    if (is_presence_container) return true;
    return parent_interface_name.is_set
	|| interface.is_set
	|| is_in_sync.is_set
	|| (srgv_mac !=  nullptr && srgv_mac->has_data());
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(is_in_sync.yfilter)
	|| (srgv_mac !=  nullptr && srgv_mac->has_operation());
}

std::string PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-interface-id";
    ADD_KEY_TOKEN(parent_interface_name, "parent-interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_in_sync.is_set || is_set(is_in_sync.yfilter)) leaf_name_data.push_back(is_in_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgv-mac")
    {
        if(srgv_mac == nullptr)
        {
            srgv_mac = std::make_shared<PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac>();
        }
        return srgv_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srgv_mac != nullptr)
    {
        children["srgv-mac"] = srgv_mac;
    }

    return children;
}

void PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-sync")
    {
        is_in_sync = value;
        is_in_sync.value_namespace = name_space;
        is_in_sync.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "is-in-sync")
    {
        is_in_sync.yfilter = yfilter;
    }
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgv-mac" || name == "parent-interface-name" || name == "interface" || name == "is-in-sync")
        return true;
    return false;
}

PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::SrgvMac()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "srgv-mac"; yang_parent_name = "parent-interface-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::~SrgvMac()
{
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgv-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceIds()
    :
    interface_id(this, {"interface_name"})
{

    yang_name = "interface-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::InterfaceIds::~InterfaceIds()
{
}

bool PppoeEa::Nodes::Node::InterfaceIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_id.len(); index++)
    {
        if(interface_id[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeEa::Nodes::Node::InterfaceIds::has_operation() const
{
    for (std::size_t index=0; index<interface_id.len(); index++)
    {
        if(interface_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeEa::Nodes::Node::InterfaceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::InterfaceIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::InterfaceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-id")
    {
        auto c = std::make_shared<PppoeEa::Nodes::Node::InterfaceIds::InterfaceId>();
        c->parent = this;
        interface_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::InterfaceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PppoeEa::Nodes::Node::InterfaceIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeEa::Nodes::Node::InterfaceIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeEa::Nodes::Node::InterfaceIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id")
        return true;
    return false;
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::InterfaceId()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    session_id{YType::uint16, "session-id"},
    parent_interface{YType::str, "parent-interface"},
    is_priority_set{YType::boolean, "is-priority-set"},
    priority{YType::uint8, "priority"},
    is_in_sync{YType::boolean, "is-in-sync"},
    is_platform_created{YType::boolean, "is-platform-created"},
    vlanid{YType::uint16, "vlanid"}
        ,
    peer_mac(std::make_shared<PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac>())
    , local_mac(std::make_shared<PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac>())
    , srgv_mac(std::make_shared<PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac>())
{
    peer_mac->parent = this;
    local_mac->parent = this;
    srgv_mac->parent = this;

    yang_name = "interface-id"; yang_parent_name = "interface-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::~InterfaceId()
{
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : vlanid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| session_id.is_set
	|| parent_interface.is_set
	|| is_priority_set.is_set
	|| priority.is_set
	|| is_in_sync.is_set
	|| is_platform_created.is_set
	|| (peer_mac !=  nullptr && peer_mac->has_data())
	|| (local_mac !=  nullptr && local_mac->has_data())
	|| (srgv_mac !=  nullptr && srgv_mac->has_data());
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::has_operation() const
{
    for (auto const & leaf : vlanid.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(is_priority_set.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(is_in_sync.yfilter)
	|| ydk::is_set(is_platform_created.yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| (peer_mac !=  nullptr && peer_mac->has_operation())
	|| (local_mac !=  nullptr && local_mac->has_operation())
	|| (srgv_mac !=  nullptr && srgv_mac->has_operation());
}

std::string PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (is_priority_set.is_set || is_set(is_priority_set.yfilter)) leaf_name_data.push_back(is_priority_set.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (is_in_sync.is_set || is_set(is_in_sync.yfilter)) leaf_name_data.push_back(is_in_sync.get_name_leafdata());
    if (is_platform_created.is_set || is_set(is_platform_created.yfilter)) leaf_name_data.push_back(is_platform_created.get_name_leafdata());

    auto vlanid_name_datas = vlanid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlanid_name_datas.begin(), vlanid_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-mac")
    {
        if(peer_mac == nullptr)
        {
            peer_mac = std::make_shared<PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac>();
        }
        return peer_mac;
    }

    if(child_yang_name == "local-mac")
    {
        if(local_mac == nullptr)
        {
            local_mac = std::make_shared<PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac>();
        }
        return local_mac;
    }

    if(child_yang_name == "srgv-mac")
    {
        if(srgv_mac == nullptr)
        {
            srgv_mac = std::make_shared<PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac>();
        }
        return srgv_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer_mac != nullptr)
    {
        children["peer-mac"] = peer_mac;
    }

    if(local_mac != nullptr)
    {
        children["local-mac"] = local_mac;
    }

    if(srgv_mac != nullptr)
    {
        children["srgv-mac"] = srgv_mac;
    }

    return children;
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-set")
    {
        is_priority_set = value;
        is_priority_set.value_namespace = name_space;
        is_priority_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-sync")
    {
        is_in_sync = value;
        is_in_sync.value_namespace = name_space;
        is_in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-platform-created")
    {
        is_platform_created = value;
        is_platform_created.value_namespace = name_space;
        is_platform_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanid")
    {
        vlanid.append(value);
    }
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "is-priority-set")
    {
        is_priority_set.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "is-in-sync")
    {
        is_in_sync.yfilter = yfilter;
    }
    if(value_path == "is-platform-created")
    {
        is_platform_created.yfilter = yfilter;
    }
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-mac" || name == "local-mac" || name == "srgv-mac" || name == "interface-name" || name == "interface" || name == "session-id" || name == "parent-interface" || name == "is-priority-set" || name == "priority" || name == "is-in-sync" || name == "is-platform-created" || name == "vlanid")
        return true;
    return false;
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::PeerMac()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "peer-mac"; yang_parent_name = "interface-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::~PeerMac()
{
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::LocalMac()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "local-mac"; yang_parent_name = "interface-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::~LocalMac()
{
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::SrgvMac()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "srgv-mac"; yang_parent_name = "interface-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::~SrgvMac()
{
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgv-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}


}
}

