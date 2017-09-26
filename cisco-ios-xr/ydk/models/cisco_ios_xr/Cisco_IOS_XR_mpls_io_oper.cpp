
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_io_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_io_oper {

MplsEa::MplsEa()
    :
    nodes(std::make_shared<MplsEa::Nodes>())
{
    nodes->parent = this;

    yang_name = "mpls-ea"; yang_parent_name = "Cisco-IOS-XR-mpls-io-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsEa::~MplsEa()
{
}

bool MplsEa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MplsEa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MplsEa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-oper:mpls-ea";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsEa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsEa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<MplsEa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsEa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void MplsEa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsEa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsEa::clone_ptr() const
{
    return std::make_shared<MplsEa>();
}

std::string MplsEa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsEa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsEa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsEa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsEa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsEa::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "mpls-ea"; is_top_level_class = false; has_list_ancestor = false;
}

MplsEa::Nodes::~Nodes()
{
}

bool MplsEa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsEa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsEa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-oper:mpls-ea/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsEa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsEa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsEa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsEa::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsEa::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsEa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsEa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsEa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

MplsEa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    interfaces(std::make_shared<MplsEa::Nodes::Node::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsEa::Nodes::Node::~Node()
{
}

bool MplsEa::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsEa::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsEa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-oper:mpls-ea/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsEa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsEa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsEa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsEa::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsEa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void MplsEa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsEa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool MplsEa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "node-name")
        return true;
    return false;
}

MplsEa::Nodes::Node::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsEa::Nodes::Node::Interfaces::~Interfaces()
{
}

bool MplsEa::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsEa::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsEa::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsEa::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsEa::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsEa::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsEa::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsEa::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsEa::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsEa::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsEa::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    bkp_label_stack_depth{YType::uint8, "bkp-label-stack-depth"},
    mtu{YType::uint32, "mtu"},
    pri_label_stack_depth{YType::uint8, "pri-label-stack-depth"},
    srte_label_stack_depth{YType::uint8, "srte-label-stack-depth"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

MplsEa::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool MplsEa::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bkp_label_stack_depth.is_set
	|| mtu.is_set
	|| pri_label_stack_depth.is_set
	|| srte_label_stack_depth.is_set;
}

bool MplsEa::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bkp_label_stack_depth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pri_label_stack_depth.yfilter)
	|| ydk::is_set(srte_label_stack_depth.yfilter);
}

std::string MplsEa::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsEa::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bkp_label_stack_depth.is_set || is_set(bkp_label_stack_depth.yfilter)) leaf_name_data.push_back(bkp_label_stack_depth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pri_label_stack_depth.is_set || is_set(pri_label_stack_depth.yfilter)) leaf_name_data.push_back(pri_label_stack_depth.get_name_leafdata());
    if (srte_label_stack_depth.is_set || is_set(srte_label_stack_depth.yfilter)) leaf_name_data.push_back(srte_label_stack_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsEa::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsEa::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsEa::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkp-label-stack-depth")
    {
        bkp_label_stack_depth = value;
        bkp_label_stack_depth.value_namespace = name_space;
        bkp_label_stack_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pri-label-stack-depth")
    {
        pri_label_stack_depth = value;
        pri_label_stack_depth.value_namespace = name_space;
        pri_label_stack_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-label-stack-depth")
    {
        srte_label_stack_depth = value;
        srte_label_stack_depth.value_namespace = name_space;
        srte_label_stack_depth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsEa::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bkp-label-stack-depth")
    {
        bkp_label_stack_depth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pri-label-stack-depth")
    {
        pri_label_stack_depth.yfilter = yfilter;
    }
    if(value_path == "srte-label-stack-depth")
    {
        srte_label_stack_depth.yfilter = yfilter;
    }
}

bool MplsEa::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bkp-label-stack-depth" || name == "mtu" || name == "pri-label-stack-depth" || name == "srte-label-stack-depth")
        return true;
    return false;
}

MplsMa::MplsMa()
    :
    nodes(std::make_shared<MplsMa::Nodes>())
{
    nodes->parent = this;

    yang_name = "mpls-ma"; yang_parent_name = "Cisco-IOS-XR-mpls-io-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsMa::~MplsMa()
{
}

bool MplsMa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MplsMa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MplsMa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-oper:mpls-ma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsMa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsMa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<MplsMa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsMa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void MplsMa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsMa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsMa::clone_ptr() const
{
    return std::make_shared<MplsMa>();
}

std::string MplsMa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsMa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsMa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsMa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsMa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsMa::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "mpls-ma"; is_top_level_class = false; has_list_ancestor = false;
}

MplsMa::Nodes::~Nodes()
{
}

bool MplsMa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsMa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsMa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-oper:mpls-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsMa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsMa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsMa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsMa::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsMa::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsMa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsMa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsMa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

MplsMa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    interfaces(std::make_shared<MplsMa::Nodes::Node::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsMa::Nodes::Node::~Node()
{
}

bool MplsMa::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsMa::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsMa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-oper:mpls-ma/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsMa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsMa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsMa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsMa::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsMa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void MplsMa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsMa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool MplsMa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "node-name")
        return true;
    return false;
}

MplsMa::Nodes::Node::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsMa::Nodes::Node::Interfaces::~Interfaces()
{
}

bool MplsMa::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsMa::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsMa::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsMa::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsMa::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsMa::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsMa::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsMa::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsMa::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsMa::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsMa::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    bkp_label_stack_depth{YType::uint8, "bkp-label-stack-depth"},
    mtu{YType::uint32, "mtu"},
    pri_label_stack_depth{YType::uint8, "pri-label-stack-depth"},
    srte_label_stack_depth{YType::uint8, "srte-label-stack-depth"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

MplsMa::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool MplsMa::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bkp_label_stack_depth.is_set
	|| mtu.is_set
	|| pri_label_stack_depth.is_set
	|| srte_label_stack_depth.is_set;
}

bool MplsMa::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bkp_label_stack_depth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pri_label_stack_depth.yfilter)
	|| ydk::is_set(srte_label_stack_depth.yfilter);
}

std::string MplsMa::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsMa::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bkp_label_stack_depth.is_set || is_set(bkp_label_stack_depth.yfilter)) leaf_name_data.push_back(bkp_label_stack_depth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pri_label_stack_depth.is_set || is_set(pri_label_stack_depth.yfilter)) leaf_name_data.push_back(pri_label_stack_depth.get_name_leafdata());
    if (srte_label_stack_depth.is_set || is_set(srte_label_stack_depth.yfilter)) leaf_name_data.push_back(srte_label_stack_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsMa::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsMa::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsMa::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkp-label-stack-depth")
    {
        bkp_label_stack_depth = value;
        bkp_label_stack_depth.value_namespace = name_space;
        bkp_label_stack_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pri-label-stack-depth")
    {
        pri_label_stack_depth = value;
        pri_label_stack_depth.value_namespace = name_space;
        pri_label_stack_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-label-stack-depth")
    {
        srte_label_stack_depth = value;
        srte_label_stack_depth.value_namespace = name_space;
        srte_label_stack_depth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsMa::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bkp-label-stack-depth")
    {
        bkp_label_stack_depth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pri-label-stack-depth")
    {
        pri_label_stack_depth.yfilter = yfilter;
    }
    if(value_path == "srte-label-stack-depth")
    {
        srte_label_stack_depth.yfilter = yfilter;
    }
}

bool MplsMa::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bkp-label-stack-depth" || name == "mtu" || name == "pri-label-stack-depth" || name == "srte-label-stack-depth")
        return true;
    return false;
}


}
}

